/// @ts-check

const versionPattern = /[ \t]*version\s*=\s*"([^"]+)"/;
/**
 * @param {string} contents
 * @returns {string} the semantic version
 */
function readVersion(contents) {
  let matches = versionPattern.exec(contents);
  if (!matches || !matches.length) {
    throw new Error(`Unable to find a version string anywhere in Cargo.toml`);
  }
  let currentVersion = matches[1];
  return currentVersion;
}

/**
 * Update the file in-place
 * @param {string} contents
 * @param {string} newVersion
 * @returns {string} the updated file contents
 */
function writeVersion(contents, newVersion) {
  return contents.replace(versionPattern, `version = "${newVersion}"`);
  // only affects the first match ^
}

module.exports = {
  readVersion,
  writeVersion,
};
