#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 263
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 273
#define ALIAS_COUNT 4
#define TOKEN_COUNT 252
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 5

enum {
  aux_sym_source_token1 = 1,
  aux_sym_subject_token1 = 2,
  aux_sym_subject_token2 = 3,
  aux_sym_subject_token3 = 4,
  anon_sym_LPAREN = 5,
  aux_sym_prefix_token1 = 6,
  anon_sym_RPAREN = 7,
  anon_sym_BANG = 8,
  anon_sym_COLON = 9,
  anon_sym_BREAKINGCHANGE = 10,
  anon_sym_POUND = 11,
  aux_sym_comment_token1 = 12,
  aux_sym_comment_token2 = 13,
  aux_sym__scissor_token1 = 14,
  sym_branch = 15,
  sym_number = 16,
  aux_sym__change_token1 = 17,
  aux_sym__change_token2 = 18,
  aux_sym__filepath_token1 = 19,
  anon_sym_DASH_GT = 20,
  anon_sym_ = 21,
  anon_sym_pick = 22,
  anon_sym_edit = 23,
  anon_sym_squash = 24,
  anon_sym_merge = 25,
  anon_sym_fixup = 26,
  anon_sym_drop = 27,
  anon_sym_reword = 28,
  anon_sym_exec = 29,
  anon_sym_label = 30,
  anon_sym_reset = 31,
  anon_sym_break = 32,
  anon_sym_Date_COLON = 33,
  anon_sym_Date_COLON2 = 34,
  anon_sym_2 = 35,
  anon_sym_Ngythng_COLON = 36,
  anon_sym_Tarih_COLON = 37,
  anon_sym_Datum_COLON = 38,
  anon_sym_COLON2 = 39,
  anon_sym_Data_COLON = 40,
  anon_sym_COLON3 = 41,
  anon_sym_Tanggal_COLON = 42,
  anon_sym_Fecha_COLON = 43,
  anon_sym_COLON4 = 44,
  anon_sym_Onbranch = 45,
  anon_sym_Surlabranche = 46,
  anon_sym_COLON5 = 47,
  anon_sym_Pgrenen = 48,
  anon_sym_zerindebulunulandal_COLON = 49,
  anon_sym_Trnnhnh = 50,
  anon_sym_3 = 51,
  anon_sym_Emramo = 52,
  anon_sym_Nagazi = 53,
  anon_sym_4 = 54,
  anon_sym_Sulbranch = 55,
  anon_sym_Padacabang = 56,
  anon_sym_Enlarama = 57,
  anon_sym_5 = 58,
  anon_sym_AufBranch = 59,
  anon_sym_Enlabranca = 60,
  anon_sym_6 = 61,
  anon_sym_Yourbranchisuptodatewith_SQUOTE = 62,
  anon_sym_SQUOTE_DOT = 63,
  anon_sym_Votrebrancheestjouravec_SQUOTE = 64,
  anon_sym_SQUOTE = 65,
  anon_sym_SQUOTE2 = 66,
  anon_sym_SQUOTE3 = 67,
  anon_sym_Nhnhcabncpnhtvi = 68,
  anon_sym_DOT = 69,
  anon_sym_Dalnz_SQUOTE = 70,
  anon_sym_SQUOTEilegncel_DOT = 71,
  anon_sym_Dingrenrjourmed_DQUOTE = 72,
  anon_sym_DQUOTE_DOT = 73,
  anon_sym_7 = 74,
  anon_sym_DOT2 = 75,
  anon_sym_Teuramoestatualizadocom_SQUOTE = 76,
  anon_sym_Twojagajestnabiecoz = 77,
  anon_sym_SQUOTE4 = 78,
  anon_sym_SQUOTE_DOT2 = 79,
  anon_sym_Iltuobranchaggiornatorispettoa_SQUOTE = 80,
  anon_sym_CabangAndamutakhirdengan_SQUOTE = 81,
  anon_sym_Turamaestactualizadacon_SQUOTE = 82,
  anon_sym_SQUOTE5 = 83,
  anon_sym_IhrBranchistaufdemselbenStandwie_SQUOTE = 84,
  anon_sym_Lavostrabrancaestaldiaamb = 85,
  anon_sym_8 = 86,
  anon_sym_DOT3 = 87,
  anon_sym_Yourbranchisbehind_SQUOTE = 88,
  anon_sym_SQUOTEby = 89,
  anon_sym_commit_COMMAandcanbefast_DASHforwarded_DOT = 90,
  anon_sym_commits_COMMAandcanbefast_DASHforwarded_DOT = 91,
  anon_sym_Votrebrancheestenretardsur_SQUOTE = 92,
  anon_sym_SQUOTEde = 93,
  anon_sym_commit_COMMAetpeuttremisejourenavancerapide_DOT = 94,
  anon_sym_commits_COMMAetpeuttremisejourenavancerapide_DOT = 95,
  anon_sym_Lavostrabrancaest = 96,
  anon_sym_comissiperdarrerede = 97,
  anon_sym_COMMAipotavanar_DASHserpidament_DOT = 98,
  anon_sym_comissionsperdarrerede = 99,
  anon_sym_9 = 100,
  anon_sym_10 = 101,
  anon_sym_DOT4 = 102,
  anon_sym_11 = 103,
  anon_sym_IhrBranchist = 104,
  anon_sym_Commithinter_SQUOTE = 105,
  anon_sym_SQUOTE_COMMAundkannvorgespultwerden_DOT = 106,
  anon_sym_Commitshinter_SQUOTE = 107,
  anon_sym_SQUOTE6 = 108,
  anon_sym_SQUOTE7 = 109,
  anon_sym_COMMA_DOT = 110,
  anon_sym_COMMA_DOT2 = 111,
  anon_sym_Turamaestdetrsde_SQUOTE = 112,
  anon_sym_SQUOTEpor = 113,
  anon_sym_commit_COMMAypuedeseravanzadarpido_DOT = 114,
  anon_sym_commits_COMMAypuedeseravanzadarpido_DOT = 115,
  anon_sym_CabangAndadibelakang_SQUOTE = 116,
  anon_sym_SQUOTEoleh = 117,
  anon_sym_komit_COMMAdanbisadimaju_DASHcepatkan_DOT = 118,
  anon_sym_CabangAndadibelakan_SQUOTE = 119,
  anon_sym_Iltuobranch_COMMArispettoa_SQUOTE = 120,
  anon_sym_SQUOTE_COMMAindietrodi = 121,
  anon_sym_commitenepossoeseguireilfastforward_DOT = 122,
  anon_sym_SQUOTE8 = 123,
  anon_sym_COMMA_DOT3 = 124,
  anon_sym_Nhnhcabnngngsau = 125,
  anon_sym_12 = 126,
  anon_sym_lnchuyngiao_COMMAvcthcchuyn_DASHtip_DASHnhanh_DOT = 127,
  anon_sym_SQUOTEdalndan = 128,
  anon_sym_ilemegerideveilerisarlabilir_DOT = 129,
  anon_sym_Dingrenliggerefter_DQUOTE = 130,
  anon_sym_DQUOTEmed = 131,
  anon_sym_incheckning_COMMAochkansnabbspolas_DOT = 132,
  anon_sym_incheckningar_COMMAochkansnabbspolas_DOT = 133,
  anon_sym_13 = 134,
  anon_sym_14 = 135,
  anon_sym_DOT5 = 136,
  anon_sym_DOT6 = 137,
  anon_sym_DOT7 = 138,
  anon_sym_Teuramoestatrsde_SQUOTE = 139,
  anon_sym_memria_COMMAepodeseravanado_DOT = 140,
  anon_sym_memrias_COMMAepodeseravanado_DOT = 141,
  anon_sym_Twojagajestza = 142,
  anon_sym_o = 143,
  anon_sym_zapisimoezostaprzewinita_DOT = 144,
  anon_sym_zapisyimoezostaprzewinita_DOT = 145,
  anon_sym_zapiswimoezostaprzewinita_DOT = 146,
  anon_sym_SQUOTE9 = 147,
  anon_sym_SQUOTE10 = 148,
  anon_sym_15 = 149,
  anon_sym_SQUOTE11 = 150,
  anon_sym_16 = 151,
  anon_sym_Yourbranchisaheadof_SQUOTE = 152,
  anon_sym_commit_DOT = 153,
  anon_sym_commits_DOT = 154,
  anon_sym_Votrebrancheestenavancesur_SQUOTE = 155,
  anon_sym_SQUOTE12 = 156,
  anon_sym_17 = 157,
  anon_sym_SQUOTE13 = 158,
  anon_sym_18 = 159,
  anon_sym_Nhnhcabnngtrc = 160,
  anon_sym_lnchuyngiao_DOT = 161,
  anon_sym_ilemeileride_DOT = 162,
  anon_sym_Dingrenliggerfre_DQUOTE = 163,
  anon_sym_incheckning_DOT = 164,
  anon_sym_incheckningar_DOT = 165,
  anon_sym_19 = 166,
  anon_sym_DOT8 = 167,
  anon_sym_DOT9 = 168,
  anon_sym_DOT10 = 169,
  anon_sym_Teuramoestfrentede_SQUOTE = 170,
  anon_sym_memria_DOT = 171,
  anon_sym_memrias_DOT = 172,
  anon_sym_Twojagajestdoprzoduwzgldem = 173,
  anon_sym_zapis_DOT = 174,
  anon_sym_zapisy_DOT = 175,
  anon_sym_zapisw_DOT = 176,
  anon_sym_DOT11 = 177,
  anon_sym_Iltuobranchavantirispettoa_SQUOTE = 178,
  anon_sym_SQUOTEdi = 179,
  anon_sym_CabangAndamendahului_SQUOTE = 180,
  anon_sym_komit_DOT = 181,
  anon_sym_Turamaestadelantadaa_SQUOTE = 182,
  anon_sym_SQUOTE14 = 183,
  anon_sym_DOT12 = 184,
  anon_sym_DOT13 = 185,
  anon_sym_Commitvor_SQUOTE = 186,
  anon_sym_Commitsvor_SQUOTE = 187,
  anon_sym_comissiperdavantde = 188,
  anon_sym_comissionsperdavantde = 189,
  anon_sym_20 = 190,
  anon_sym_21 = 191,
  anon_sym_Youarecurrentlyrebasingbranch_SQUOTE = 192,
  anon_sym_SQUOTEon_SQUOTE = 193,
  anon_sym_Voustesentrainderebaserlabranche_SQUOTE = 194,
  anon_sym_SQUOTEsur_SQUOTE = 195,
  anon_sym_SQUOTE15 = 196,
  anon_sym_SQUOTE_SQUOTE = 197,
  anon_sym_SQUOTE16 = 198,
  anon_sym_SQUOTE17 = 199,
  anon_sym_SQUOTE_SQUOTE2 = 200,
  anon_sym_SQUOTE18 = 201,
  anon_sym_Bnhinnayangthchinvicrebasenhnh = 202,
  anon_sym_trn = 203,
  anon_sym_uanda_SQUOTE = 204,
  anon_sym_SQUOTEdaln_SQUOTE = 205,
  anon_sym_SQUOTEzerineyenidentemellendiriyorsunuz_DOT = 206,
  anon_sym_Duhllerpattombaseragrenen_DQUOTE = 207,
  anon_sym_DQUOTEovanp_DQUOTE = 208,
  anon_sym_22 = 209,
  anon_sym_23 = 210,
  anon_sym_Estsrebaseandoramo_SQUOTE = 211,
  anon_sym_SQUOTEsobre_SQUOTE = 212,
  anon_sym_Przestawiaszwaniega = 213,
  anon_sym_na = 214,
  anon_sym_SQUOTE19 = 215,
  anon_sym_SQUOTE_SQUOTE3 = 216,
  anon_sym_SQUOTE_DOT3 = 217,
  anon_sym_Attualmentestaieseguendoilrebasedelbranch_SQUOTE = 218,
  anon_sym_SQUOTEsu_SQUOTE = 219,
  anon_sym_Andasedangmendasarkanulangcabang_SQUOTE = 220,
  anon_sym_SQUOTEpada_SQUOTE = 221,
  anon_sym_Estsaplicandounrebasedelarama_SQUOTE = 222,
  anon_sym_rebase_SQUOTE = 223,
  anon_sym_SQUOTE_SQUOTE4 = 224,
  anon_sym_SiesindgeradebeimRebasevonBranch_SQUOTE = 225,
  anon_sym_SQUOTEauf_SQUOTE = 226,
  anon_sym_Actualmentesteufentrebasedelabranca = 227,
  anon_sym_en = 228,
  anon_sym_24 = 229,
  anon_sym_25 = 230,
  anon_sym_interactiverebaseinprogress_SEMIonto = 231,
  anon_sym_rebasageinteractifencours_SEMIsur = 232,
  anon_sym_26 = 233,
  anon_sym_rebaseinteractiuencurs_SEMIsobre = 234,
  anon_sym_interaktivesRebaseimGange_SEMIauf = 235,
  anon_sym_rebase_COMMA = 236,
  anon_sym_rebaseinteractivoenprogreso_SEMIsobre = 237,
  anon_sym_sedangmendasarkanulanginteraktif_SEMIke = 238,
  anon_sym_rebaseinterattivoincorsosu = 239,
  anon_sym_DOT14 = 240,
  anon_sym_trwainteraktywneprzestawianiena = 241,
  anon_sym_rebaseinterativoemcurso_SEMIsobre = 242,
  anon_sym_SEMI = 243,
  anon_sym_interaktivombaseringpgr_SEMIovanp = 244,
  anon_sym_ununzerineetkileimliyenidentemellendirmesrmekte_COLON = 245,
  anon_sym_rebasechtngtcangcthchin_SEMIlntrn = 246,
  anon_sym_27 = 247,
  anon_sym_28 = 248,
  sym__trailer_token = 249,
  sym__comment_title = 250,
  sym__conventional_type = 251,
  sym_source = 252,
  sym_subject = 253,
  sym_prefix = 254,
  sym__body_line = 255,
  sym_message = 256,
  sym_trailer = 257,
  sym_breaking_change = 258,
  sym_comment = 259,
  sym__scissor = 260,
  sym__change = 261,
  sym__filepath = 262,
  sym_rebase_command = 263,
  sym__date = 264,
  sym__onbranch = 265,
  sym__uptodate = 266,
  sym__behind = 267,
  sym__ahead = 268,
  sym__rebasing = 269,
  sym__interactive_rebasing = 270,
  aux_sym_source_repeat1 = 271,
  aux_sym__scissor_repeat1 = 272,
  alias_sym_date = 273,
  alias_sym_diff = 274,
  alias_sym_overflow = 275,
  alias_sym_value = 276,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_token1] = "source_token1",
  [aux_sym_subject_token1] = "subject_token1",
  [aux_sym_subject_token2] = "subject_token2",
  [aux_sym_subject_token3] = "subject_token3",
  [anon_sym_LPAREN] = "(",
  [aux_sym_prefix_token1] = "scope",
  [anon_sym_RPAREN] = ")",
  [anon_sym_BANG] = "!",
  [anon_sym_COLON] = ":",
  [anon_sym_BREAKINGCHANGE] = "token",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [aux_sym__scissor_token1] = "scissor",
  [sym_branch] = "branch",
  [sym_number] = "number",
  [aux_sym__change_token1] = "_change_token1",
  [aux_sym__change_token2] = "change",
  [aux_sym__filepath_token1] = "filepath",
  [anon_sym_DASH_GT] = "arrow",
  [anon_sym_] = "    ",
  [anon_sym_pick] = "pick",
  [anon_sym_edit] = "edit",
  [anon_sym_squash] = "squash",
  [anon_sym_merge] = "merge",
  [anon_sym_fixup] = "fixup",
  [anon_sym_drop] = "drop",
  [anon_sym_reword] = "reword",
  [anon_sym_exec] = "exec",
  [anon_sym_label] = "label",
  [anon_sym_reset] = "reset",
  [anon_sym_break] = "break",
  [anon_sym_Date_COLON] = "title",
  [anon_sym_Date_COLON2] = "title",
  [anon_sym_2] = "title",
  [anon_sym_Ngythng_COLON] = "title",
  [anon_sym_Tarih_COLON] = "title",
  [anon_sym_Datum_COLON] = "title",
  [anon_sym_COLON2] = "title",
  [anon_sym_Data_COLON] = "title",
  [anon_sym_COLON3] = "title",
  [anon_sym_Tanggal_COLON] = "title",
  [anon_sym_Fecha_COLON] = "title",
  [anon_sym_COLON4] = "title",
  [anon_sym_Onbranch] = "text",
  [anon_sym_Surlabranche] = "text",
  [anon_sym_COLON5] = "text",
  [anon_sym_Pgrenen] = "text",
  [anon_sym_zerindebulunulandal_COLON] = "text",
  [anon_sym_Trnnhnh] = "text",
  [anon_sym_3] = "text",
  [anon_sym_Emramo] = "text",
  [anon_sym_Nagazi] = "text",
  [anon_sym_4] = "text",
  [anon_sym_Sulbranch] = "text",
  [anon_sym_Padacabang] = "text",
  [anon_sym_Enlarama] = "text",
  [anon_sym_5] = "text",
  [anon_sym_AufBranch] = "text",
  [anon_sym_Enlabranca] = "text",
  [anon_sym_6] = "text",
  [anon_sym_Yourbranchisuptodatewith_SQUOTE] = "Your branch is up to date with '",
  [anon_sym_SQUOTE_DOT] = "'.",
  [anon_sym_Votrebrancheestjouravec_SQUOTE] = "Votre branche est à jour avec '",
  [anon_sym_SQUOTE] = "您的分支與上游分支 '",
  [anon_sym_SQUOTE2] = "' 一致。",
  [anon_sym_SQUOTE3] = "您的分支与上游分支 '",
  [anon_sym_Nhnhcabncpnhtvi] = "Nhánh của bạn đã cập nhật với “",
  [anon_sym_DOT] = "”.",
  [anon_sym_Dalnz_SQUOTE] = "Dalınız '",
  [anon_sym_SQUOTEilegncel_DOT] = "' ile güncel.",
  [anon_sym_Dingrenrjourmed_DQUOTE] = "Din gren är à jour med \"",
  [anon_sym_DQUOTE_DOT] = "\".",
  [anon_sym_7] = "Эта ветка соответствует «",
  [anon_sym_DOT2] = "».",
  [anon_sym_Teuramoestatualizadocom_SQUOTE] = "Teu ramo está atualizado com '",
  [anon_sym_Twojagajestnabiecoz] = "Twoja gałąź jest na bieżąco z „",
  [anon_sym_SQUOTE4] = "브랜치가 '",
  [anon_sym_SQUOTE_DOT2] = "'에 맞게 업데이트된 상태입니다.",
  [anon_sym_Iltuobranchaggiornatorispettoa_SQUOTE] = "Il tuo branch è aggiornato rispetto a '",
  [anon_sym_CabangAndamutakhirdengan_SQUOTE] = "Cabang Anda mutakhir dengan '",
  [anon_sym_Turamaestactualizadacon_SQUOTE] = "Tu rama está actualizada con '",
  [anon_sym_SQUOTE5] = "Ο κλάδος σας είναι ενήμερος με το '",
  [anon_sym_IhrBranchistaufdemselbenStandwie_SQUOTE] = "Ihr Branch ist auf demselben Stand wie '",
  [anon_sym_Lavostrabrancaestaldiaamb] = "La vostra branca està al dia amb «",
  [anon_sym_8] = "Клонът е обновен към „",
  [anon_sym_DOT3] = "“.",
  [anon_sym_Yourbranchisbehind_SQUOTE] = "Your branch is behind '",
  [anon_sym_SQUOTEby] = "' by ",
  [anon_sym_commit_COMMAandcanbefast_DASHforwarded_DOT] = " commit, and can be fast-forwarded.",
  [anon_sym_commits_COMMAandcanbefast_DASHforwarded_DOT] = " commits, and can be fast-forwarded.",
  [anon_sym_Votrebrancheestenretardsur_SQUOTE] = "Votre branche est en retard sur '",
  [anon_sym_SQUOTEde] = "' de ",
  [anon_sym_commit_COMMAetpeuttremisejourenavancerapide_DOT] = " commit, et peut être mise à jour en avance rapide.",
  [anon_sym_commits_COMMAetpeuttremisejourenavancerapide_DOT] = " commits, et peut être mise à jour en avance rapide.",
  [anon_sym_Lavostrabrancaest] = "La vostra branca està ",
  [anon_sym_comissiperdarrerede] = " comissió per darrere de «",
  [anon_sym_COMMAipotavanar_DASHserpidament_DOT] = "», i pot avançar-se ràpidament.",
  [anon_sym_comissionsperdarrerede] = " comissions per darrere de «",
  [anon_sym_9] = "Клонът ви е с ",
  [anon_sym_10] = " подаване зад „",
  [anon_sym_DOT4] = "“ и може да бъде превъртян.",
  [anon_sym_11] = " подавания зад „",
  [anon_sym_IhrBranchist] = "Ihr Branch ist ",
  [anon_sym_Commithinter_SQUOTE] = " Commit hinter '",
  [anon_sym_SQUOTE_COMMAundkannvorgespultwerden_DOT] = "', und kann vorgespult werden.",
  [anon_sym_Commitshinter_SQUOTE] = " Commits hinter '",
  [anon_sym_SQUOTE6] = "Ο κλάδος σας είναι πίσω από το '",
  [anon_sym_SQUOTE7] = "' κατά ",
  [anon_sym_COMMA_DOT] = " υποβολή, και μπορεί να κάνει ταχεία προώθηση.",
  [anon_sym_COMMA_DOT2] = " υποβολές, και μπορεί να κάνει ταχεία προώθηση.",
  [anon_sym_Turamaestdetrsde_SQUOTE] = "Tu rama está detrás de '",
  [anon_sym_SQUOTEpor] = "' por ",
  [anon_sym_commit_COMMAypuedeseravanzadarpido_DOT] = " commit, y puede ser avanzada rápido.",
  [anon_sym_commits_COMMAypuedeseravanzadarpido_DOT] = " commits, y puede ser avanzada rápido.",
  [anon_sym_CabangAndadibelakang_SQUOTE] = "Cabang Anda di belakang '",
  [anon_sym_SQUOTEoleh] = "' oleh ",
  [anon_sym_komit_COMMAdanbisadimaju_DASHcepatkan_DOT] = " komit, dan bisa di maju-cepatkan.",
  [anon_sym_CabangAndadibelakan_SQUOTE] = "Cabang Anda di belakan '",
  [anon_sym_Iltuobranch_COMMArispettoa_SQUOTE] = "Il tuo branch, rispetto a '",
  [anon_sym_SQUOTE_COMMAindietrodi] = "', è indietro di ",
  [anon_sym_commitenepossoeseguireilfastforward_DOT] = " commit e ne posso eseguire il fast forward.",
  [anon_sym_SQUOTE8] = "'보다 ",
  [anon_sym_COMMA_DOT3] = "개 커밋 뒤에 있고, 앞으로 돌릴 수 있습니다.",
  [anon_sym_Nhnhcabnngngsau] = "Nhánh của bạn đứng đằng sau “",
  [anon_sym_12] = "” ",
  [anon_sym_lnchuyngiao_COMMAvcthcchuyn_DASHtip_DASHnhanh_DOT] = " lần chuyển giao, và có thể được chuyển-tiếp-nhanh.",
  [anon_sym_SQUOTEdalndan] = "' dalından ",
  [anon_sym_ilemegerideveilerisarlabilir_DOT] = " işleme geride ve ileri sarılabilir.",
  [anon_sym_Dingrenliggerefter_DQUOTE] = "Din gren ligger efter \"",
  [anon_sym_DQUOTEmed] = "\" med ",
  [anon_sym_incheckning_COMMAochkansnabbspolas_DOT] = " incheckning, och kan snabbspolas.",
  [anon_sym_incheckningar_COMMAochkansnabbspolas_DOT] = " incheckningar, och kan snabbspolas.",
  [anon_sym_13] = "Ветка отстает от «",
  [anon_sym_14] = "» на ",
  [anon_sym_DOT5] = " коммит и может быть быстро перемотана.",
  [anon_sym_DOT6] = " коммита и может быть быстро перемотана.",
  [anon_sym_DOT7] = " коммитов и может быть быстро перемотана.",
  [anon_sym_Teuramoestatrsde_SQUOTE] = "Teu ramo está atrás de '",
  [anon_sym_memria_COMMAepodeseravanado_DOT] = " memória, e pode ser avançado.",
  [anon_sym_memrias_COMMAepodeseravanado_DOT] = " memórias, e pode ser avançado.",
  [anon_sym_Twojagajestza] = "Twoja gałąź jest za „",
  [anon_sym_o] = "” o ",
  [anon_sym_zapisimoezostaprzewinita_DOT] = " zapis i może zostać przewinięta.",
  [anon_sym_zapisyimoezostaprzewinita_DOT] = " zapisy i może zostać przewinięta.",
  [anon_sym_zapiswimoezostaprzewinita_DOT] = " zapisów i może zostać przewinięta.",
  [anon_sym_SQUOTE9] = "您的分支落后 '",
  [anon_sym_SQUOTE10] = "' 共 ",
  [anon_sym_15] = " 个提交，并且可以快进。",
  [anon_sym_SQUOTE11] = "您的分支落後 '",
  [anon_sym_16] = " 個提交，並且可以快轉。",
  [anon_sym_Yourbranchisaheadof_SQUOTE] = "Your branch is ahead of '",
  [anon_sym_commit_DOT] = " commit.",
  [anon_sym_commits_DOT] = " commits.",
  [anon_sym_Votrebrancheestenavancesur_SQUOTE] = "Votre branche est en avance sur '",
  [anon_sym_SQUOTE12] = "您的分支領先 '",
  [anon_sym_17] = " 個提交。",
  [anon_sym_SQUOTE13] = "您的分支领先 '",
  [anon_sym_18] = " 个提交。",
  [anon_sym_Nhnhcabnngtrc] = "Nhánh của bạn đứng trước “",
  [anon_sym_lnchuyngiao_DOT] = " lần chuyển giao.",
  [anon_sym_ilemeileride_DOT] = " işleme ileride.",
  [anon_sym_Dingrenliggerfre_DQUOTE] = "Din gren ligger före \"",
  [anon_sym_incheckning_DOT] = " incheckning.",
  [anon_sym_incheckningar_DOT] = " incheckningar.",
  [anon_sym_19] = "Ваша ветка опережает «",
  [anon_sym_DOT8] = " коммит.",
  [anon_sym_DOT9] = " коммита.",
  [anon_sym_DOT10] = " коммитов.",
  [anon_sym_Teuramoestfrentede_SQUOTE] = "Teu ramo está à frente de '",
  [anon_sym_memria_DOT] = " memória.",
  [anon_sym_memrias_DOT] = " memórias.",
  [anon_sym_Twojagajestdoprzoduwzgldem] = "Twoja gałąź jest do przodu względem „",
  [anon_sym_zapis_DOT] = " zapis.",
  [anon_sym_zapisy_DOT] = " zapisy.",
  [anon_sym_zapisw_DOT] = " zapisów.",
  [anon_sym_DOT11] = "개 커밋만큼 앞에 있습니다.",
  [anon_sym_Iltuobranchavantirispettoa_SQUOTE] = "Il tuo branch è avanti rispetto a '",
  [anon_sym_SQUOTEdi] = "' di ",
  [anon_sym_CabangAndamendahului_SQUOTE] = "Cabang Anda mendahului '",
  [anon_sym_komit_DOT] = " komit.",
  [anon_sym_Turamaestadelantadaa_SQUOTE] = "Tu rama está adelantada a '",
  [anon_sym_SQUOTE14] = "Ο κλάδος σας είναι μπροστά από το '",
  [anon_sym_DOT12] = " υποβολή.",
  [anon_sym_DOT13] = " υποβολές.",
  [anon_sym_Commitvor_SQUOTE] = " Commit vor '",
  [anon_sym_Commitsvor_SQUOTE] = " Commits vor '",
  [anon_sym_comissiperdavantde] = " comissió per davant de «",
  [anon_sym_comissionsperdavantde] = " comissions per davant de «",
  [anon_sym_20] = " подаване пред „",
  [anon_sym_21] = " подавания пред „",
  [anon_sym_Youarecurrentlyrebasingbranch_SQUOTE] = "You are currently rebasing branch '",
  [anon_sym_SQUOTEon_SQUOTE] = "' on '",
  [anon_sym_Voustesentrainderebaserlabranche_SQUOTE] = "Vous êtes en train de rebaser la branche '",
  [anon_sym_SQUOTEsur_SQUOTE] = "' sur '",
  [anon_sym_SQUOTE15] = "您在執行將分支 '",
  [anon_sym_SQUOTE_SQUOTE] = "' 重定基底到 '",
  [anon_sym_SQUOTE16] = "' 的動作。",
  [anon_sym_SQUOTE17] = "您在执行将分支 '",
  [anon_sym_SQUOTE_SQUOTE2] = "' 变基到 '",
  [anon_sym_SQUOTE18] = "' 的操作。",
  [anon_sym_Bnhinnayangthchinvicrebasenhnh] = "Bạn hiện nay đang thực hiện việc “rebase” nhánh “",
  [anon_sym_trn] = "” trên “",
  [anon_sym_uanda_SQUOTE] = "Şu anda '",
  [anon_sym_SQUOTEdaln_SQUOTE] = "' dalını '",
  [anon_sym_SQUOTEzerineyenidentemellendiriyorsunuz_DOT] = "' üzerine yeniden temellendiriyorsunuz.",
  [anon_sym_Duhllerpattombaseragrenen_DQUOTE] = "Du håller på att ombasera grenen \"",
  [anon_sym_DQUOTEovanp_DQUOTE] = "\" ovanpå \"",
  [anon_sym_22] = "Вы сейчас перемещаете ветку «",
  [anon_sym_23] = "» над «",
  [anon_sym_Estsrebaseandoramo_SQUOTE] = "Estás rebaseando ramo '",
  [anon_sym_SQUOTEsobre_SQUOTE] = "' sobre '",
  [anon_sym_Przestawiaszwaniega] = "Przestawiasz właśnie gałąź „",
  [anon_sym_na] = "” na „",
  [anon_sym_SQUOTE19] = "현재 '",
  [anon_sym_SQUOTE_SQUOTE3] = "' 브랜치를 '",
  [anon_sym_SQUOTE_DOT3] = "' 위로 리베이스하는 중입니다.",
  [anon_sym_Attualmentestaieseguendoilrebasedelbranch_SQUOTE] = "Attualmente stai eseguendo il rebase del branch '",
  [anon_sym_SQUOTEsu_SQUOTE] = "' su '",
  [anon_sym_Andasedangmendasarkanulangcabang_SQUOTE] = "Anda sedang mendasarkan ulang cabang '",
  [anon_sym_SQUOTEpada_SQUOTE] = "' pada '",
  [anon_sym_Estsaplicandounrebasedelarama_SQUOTE] = "Estás aplicando un rebase de la rama '",
  [anon_sym_rebase_SQUOTE] = "Αυτή τη στιγμή κάνετε rebase τον κλάδο '",
  [anon_sym_SQUOTE_SQUOTE4] = "' στο '",
  [anon_sym_SiesindgeradebeimRebasevonBranch_SQUOTE] = "Sie sind gerade beim Rebase von Branch '",
  [anon_sym_SQUOTEauf_SQUOTE] = "' auf '",
  [anon_sym_Actualmentesteufentrebasedelabranca] = "Actualment esteu fent «rebase» de la branca «",
  [anon_sym_en] = "» en «",
  [anon_sym_24] = "В момента пребазирате клона „",
  [anon_sym_25] = "“ върху „",
  [anon_sym_interactiverebaseinprogress_SEMIonto] = "interactive rebase in progress; onto ",
  [anon_sym_rebasageinteractifencours_SEMIsur] = "rebasage interactif en cours ; sur ",
  [anon_sym_26] = "извършвате интерактивно пребазиране върху ",
  [anon_sym_rebaseinteractiuencurs_SEMIsobre] = "«rebase» interactiu en curs; sobre ",
  [anon_sym_interaktivesRebaseimGange_SEMIauf] = "interaktives Rebase im Gange; auf ",
  [anon_sym_rebase_COMMA] = "εκτελείται διαδραστικό rebase, πάνω στο ",
  [anon_sym_rebaseinteractivoenprogreso_SEMIsobre] = "rebase interactivo en progreso; sobre ",
  [anon_sym_sedangmendasarkanulanginteraktif_SEMIke] = "sedang mendasarkan ulang interaktif; ke ",
  [anon_sym_rebaseinterattivoincorsosu] = "rebase interattivo in corso su ",
  [anon_sym_DOT14] = "대화형 리베이스 진행 중. 갈 위치는 ",
  [anon_sym_trwainteraktywneprzestawianiena] = "trwa interaktywne przestawianie na ",
  [anon_sym_rebaseinterativoemcurso_SEMIsobre] = "rebase interativo em curso; sobre ",
  [anon_sym_SEMI] = "интерактивное перемещение в процессе; над ",
  [anon_sym_interaktivombaseringpgr_SEMIovanp] = "interaktiv ombasering pågår; ovanpå ",
  [anon_sym_ununzerineetkileimliyenidentemellendirmesrmekte_COLON] = "şunun üzerine etkileşimli yeniden temellendirme sürmekte: ",
  [anon_sym_rebasechtngtcangcthchin_SEMIlntrn] = "rebase ở chế độ tương tác đang được thực hiện; lên trên ",
  [anon_sym_27] = "交互式变基操作正在进行中；至 ",
  [anon_sym_28] = "互動式重定基底動作正在進行中；至 ",
  [sym__trailer_token] = "token",
  [sym__comment_title] = "title",
  [sym__conventional_type] = "type",
  [sym_source] = "source",
  [sym_subject] = "subject",
  [sym_prefix] = "prefix",
  [sym__body_line] = "_body_line",
  [sym_message] = "message",
  [sym_trailer] = "trailer",
  [sym_breaking_change] = "breaking_change",
  [sym_comment] = "comment",
  [sym__scissor] = "_scissor",
  [sym__change] = "_change",
  [sym__filepath] = "_filepath",
  [sym_rebase_command] = "rebase_command",
  [sym__date] = "_date",
  [sym__onbranch] = "_onbranch",
  [sym__uptodate] = "_uptodate",
  [sym__behind] = "_behind",
  [sym__ahead] = "_ahead",
  [sym__rebasing] = "_rebasing",
  [sym__interactive_rebasing] = "_interactive_rebasing",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym__scissor_repeat1] = "_scissor_repeat1",
  [alias_sym_date] = "date",
  [alias_sym_diff] = "diff",
  [alias_sym_overflow] = "overflow",
  [alias_sym_value] = "value",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_token1] = aux_sym_source_token1,
  [aux_sym_subject_token1] = aux_sym_subject_token1,
  [aux_sym_subject_token2] = aux_sym_subject_token2,
  [aux_sym_subject_token3] = aux_sym_subject_token3,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_prefix_token1] = aux_sym_prefix_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_BREAKINGCHANGE] = sym__trailer_token,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [aux_sym__scissor_token1] = aux_sym__scissor_token1,
  [sym_branch] = sym_branch,
  [sym_number] = sym_number,
  [aux_sym__change_token1] = aux_sym__change_token1,
  [aux_sym__change_token2] = aux_sym__change_token2,
  [aux_sym__filepath_token1] = aux_sym__filepath_token1,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_] = anon_sym_,
  [anon_sym_pick] = anon_sym_pick,
  [anon_sym_edit] = anon_sym_edit,
  [anon_sym_squash] = anon_sym_squash,
  [anon_sym_merge] = anon_sym_merge,
  [anon_sym_fixup] = anon_sym_fixup,
  [anon_sym_drop] = anon_sym_drop,
  [anon_sym_reword] = anon_sym_reword,
  [anon_sym_exec] = anon_sym_exec,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_reset] = anon_sym_reset,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_Date_COLON] = sym__comment_title,
  [anon_sym_Date_COLON2] = sym__comment_title,
  [anon_sym_2] = sym__comment_title,
  [anon_sym_Ngythng_COLON] = sym__comment_title,
  [anon_sym_Tarih_COLON] = sym__comment_title,
  [anon_sym_Datum_COLON] = sym__comment_title,
  [anon_sym_COLON2] = sym__comment_title,
  [anon_sym_Data_COLON] = sym__comment_title,
  [anon_sym_COLON3] = sym__comment_title,
  [anon_sym_Tanggal_COLON] = sym__comment_title,
  [anon_sym_Fecha_COLON] = sym__comment_title,
  [anon_sym_COLON4] = sym__comment_title,
  [anon_sym_Onbranch] = anon_sym_Onbranch,
  [anon_sym_Surlabranche] = anon_sym_Onbranch,
  [anon_sym_COLON5] = anon_sym_Onbranch,
  [anon_sym_Pgrenen] = anon_sym_Onbranch,
  [anon_sym_zerindebulunulandal_COLON] = anon_sym_Onbranch,
  [anon_sym_Trnnhnh] = anon_sym_Onbranch,
  [anon_sym_3] = anon_sym_Onbranch,
  [anon_sym_Emramo] = anon_sym_Onbranch,
  [anon_sym_Nagazi] = anon_sym_Onbranch,
  [anon_sym_4] = anon_sym_Onbranch,
  [anon_sym_Sulbranch] = anon_sym_Onbranch,
  [anon_sym_Padacabang] = anon_sym_Onbranch,
  [anon_sym_Enlarama] = anon_sym_Onbranch,
  [anon_sym_5] = anon_sym_Onbranch,
  [anon_sym_AufBranch] = anon_sym_Onbranch,
  [anon_sym_Enlabranca] = anon_sym_Onbranch,
  [anon_sym_6] = anon_sym_Onbranch,
  [anon_sym_Yourbranchisuptodatewith_SQUOTE] = anon_sym_Yourbranchisuptodatewith_SQUOTE,
  [anon_sym_SQUOTE_DOT] = anon_sym_SQUOTE_DOT,
  [anon_sym_Votrebrancheestjouravec_SQUOTE] = anon_sym_Votrebrancheestjouravec_SQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE2,
  [anon_sym_SQUOTE3] = anon_sym_SQUOTE3,
  [anon_sym_Nhnhcabncpnhtvi] = anon_sym_Nhnhcabncpnhtvi,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_Dalnz_SQUOTE] = anon_sym_Dalnz_SQUOTE,
  [anon_sym_SQUOTEilegncel_DOT] = anon_sym_SQUOTEilegncel_DOT,
  [anon_sym_Dingrenrjourmed_DQUOTE] = anon_sym_Dingrenrjourmed_DQUOTE,
  [anon_sym_DQUOTE_DOT] = anon_sym_DQUOTE_DOT,
  [anon_sym_7] = anon_sym_7,
  [anon_sym_DOT2] = anon_sym_DOT2,
  [anon_sym_Teuramoestatualizadocom_SQUOTE] = anon_sym_Teuramoestatualizadocom_SQUOTE,
  [anon_sym_Twojagajestnabiecoz] = anon_sym_Twojagajestnabiecoz,
  [anon_sym_SQUOTE4] = anon_sym_SQUOTE4,
  [anon_sym_SQUOTE_DOT2] = anon_sym_SQUOTE_DOT2,
  [anon_sym_Iltuobranchaggiornatorispettoa_SQUOTE] = anon_sym_Iltuobranchaggiornatorispettoa_SQUOTE,
  [anon_sym_CabangAndamutakhirdengan_SQUOTE] = anon_sym_CabangAndamutakhirdengan_SQUOTE,
  [anon_sym_Turamaestactualizadacon_SQUOTE] = anon_sym_Turamaestactualizadacon_SQUOTE,
  [anon_sym_SQUOTE5] = anon_sym_SQUOTE5,
  [anon_sym_IhrBranchistaufdemselbenStandwie_SQUOTE] = anon_sym_IhrBranchistaufdemselbenStandwie_SQUOTE,
  [anon_sym_Lavostrabrancaestaldiaamb] = anon_sym_Lavostrabrancaestaldiaamb,
  [anon_sym_8] = anon_sym_8,
  [anon_sym_DOT3] = anon_sym_DOT3,
  [anon_sym_Yourbranchisbehind_SQUOTE] = anon_sym_Yourbranchisbehind_SQUOTE,
  [anon_sym_SQUOTEby] = anon_sym_SQUOTEby,
  [anon_sym_commit_COMMAandcanbefast_DASHforwarded_DOT] = anon_sym_commit_COMMAandcanbefast_DASHforwarded_DOT,
  [anon_sym_commits_COMMAandcanbefast_DASHforwarded_DOT] = anon_sym_commits_COMMAandcanbefast_DASHforwarded_DOT,
  [anon_sym_Votrebrancheestenretardsur_SQUOTE] = anon_sym_Votrebrancheestenretardsur_SQUOTE,
  [anon_sym_SQUOTEde] = anon_sym_SQUOTEde,
  [anon_sym_commit_COMMAetpeuttremisejourenavancerapide_DOT] = anon_sym_commit_COMMAetpeuttremisejourenavancerapide_DOT,
  [anon_sym_commits_COMMAetpeuttremisejourenavancerapide_DOT] = anon_sym_commits_COMMAetpeuttremisejourenavancerapide_DOT,
  [anon_sym_Lavostrabrancaest] = anon_sym_Lavostrabrancaest,
  [anon_sym_comissiperdarrerede] = anon_sym_comissiperdarrerede,
  [anon_sym_COMMAipotavanar_DASHserpidament_DOT] = anon_sym_COMMAipotavanar_DASHserpidament_DOT,
  [anon_sym_comissionsperdarrerede] = anon_sym_comissionsperdarrerede,
  [anon_sym_9] = anon_sym_9,
  [anon_sym_10] = anon_sym_10,
  [anon_sym_DOT4] = anon_sym_DOT4,
  [anon_sym_11] = anon_sym_11,
  [anon_sym_IhrBranchist] = anon_sym_IhrBranchist,
  [anon_sym_Commithinter_SQUOTE] = anon_sym_Commithinter_SQUOTE,
  [anon_sym_SQUOTE_COMMAundkannvorgespultwerden_DOT] = anon_sym_SQUOTE_COMMAundkannvorgespultwerden_DOT,
  [anon_sym_Commitshinter_SQUOTE] = anon_sym_Commitshinter_SQUOTE,
  [anon_sym_SQUOTE6] = anon_sym_SQUOTE6,
  [anon_sym_SQUOTE7] = anon_sym_SQUOTE7,
  [anon_sym_COMMA_DOT] = anon_sym_COMMA_DOT,
  [anon_sym_COMMA_DOT2] = anon_sym_COMMA_DOT2,
  [anon_sym_Turamaestdetrsde_SQUOTE] = anon_sym_Turamaestdetrsde_SQUOTE,
  [anon_sym_SQUOTEpor] = anon_sym_SQUOTEpor,
  [anon_sym_commit_COMMAypuedeseravanzadarpido_DOT] = anon_sym_commit_COMMAypuedeseravanzadarpido_DOT,
  [anon_sym_commits_COMMAypuedeseravanzadarpido_DOT] = anon_sym_commits_COMMAypuedeseravanzadarpido_DOT,
  [anon_sym_CabangAndadibelakang_SQUOTE] = anon_sym_CabangAndadibelakang_SQUOTE,
  [anon_sym_SQUOTEoleh] = anon_sym_SQUOTEoleh,
  [anon_sym_komit_COMMAdanbisadimaju_DASHcepatkan_DOT] = anon_sym_komit_COMMAdanbisadimaju_DASHcepatkan_DOT,
  [anon_sym_CabangAndadibelakan_SQUOTE] = anon_sym_CabangAndadibelakan_SQUOTE,
  [anon_sym_Iltuobranch_COMMArispettoa_SQUOTE] = anon_sym_Iltuobranch_COMMArispettoa_SQUOTE,
  [anon_sym_SQUOTE_COMMAindietrodi] = anon_sym_SQUOTE_COMMAindietrodi,
  [anon_sym_commitenepossoeseguireilfastforward_DOT] = anon_sym_commitenepossoeseguireilfastforward_DOT,
  [anon_sym_SQUOTE8] = anon_sym_SQUOTE8,
  [anon_sym_COMMA_DOT3] = anon_sym_COMMA_DOT3,
  [anon_sym_Nhnhcabnngngsau] = anon_sym_Nhnhcabnngngsau,
  [anon_sym_12] = anon_sym_12,
  [anon_sym_lnchuyngiao_COMMAvcthcchuyn_DASHtip_DASHnhanh_DOT] = anon_sym_lnchuyngiao_COMMAvcthcchuyn_DASHtip_DASHnhanh_DOT,
  [anon_sym_SQUOTEdalndan] = anon_sym_SQUOTEdalndan,
  [anon_sym_ilemegerideveilerisarlabilir_DOT] = anon_sym_ilemegerideveilerisarlabilir_DOT,
  [anon_sym_Dingrenliggerefter_DQUOTE] = anon_sym_Dingrenliggerefter_DQUOTE,
  [anon_sym_DQUOTEmed] = anon_sym_DQUOTEmed,
  [anon_sym_incheckning_COMMAochkansnabbspolas_DOT] = anon_sym_incheckning_COMMAochkansnabbspolas_DOT,
  [anon_sym_incheckningar_COMMAochkansnabbspolas_DOT] = anon_sym_incheckningar_COMMAochkansnabbspolas_DOT,
  [anon_sym_13] = anon_sym_13,
  [anon_sym_14] = anon_sym_14,
  [anon_sym_DOT5] = anon_sym_DOT5,
  [anon_sym_DOT6] = anon_sym_DOT6,
  [anon_sym_DOT7] = anon_sym_DOT7,
  [anon_sym_Teuramoestatrsde_SQUOTE] = anon_sym_Teuramoestatrsde_SQUOTE,
  [anon_sym_memria_COMMAepodeseravanado_DOT] = anon_sym_memria_COMMAepodeseravanado_DOT,
  [anon_sym_memrias_COMMAepodeseravanado_DOT] = anon_sym_memrias_COMMAepodeseravanado_DOT,
  [anon_sym_Twojagajestza] = anon_sym_Twojagajestza,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_zapisimoezostaprzewinita_DOT] = anon_sym_zapisimoezostaprzewinita_DOT,
  [anon_sym_zapisyimoezostaprzewinita_DOT] = anon_sym_zapisyimoezostaprzewinita_DOT,
  [anon_sym_zapiswimoezostaprzewinita_DOT] = anon_sym_zapiswimoezostaprzewinita_DOT,
  [anon_sym_SQUOTE9] = anon_sym_SQUOTE9,
  [anon_sym_SQUOTE10] = anon_sym_SQUOTE10,
  [anon_sym_15] = anon_sym_15,
  [anon_sym_SQUOTE11] = anon_sym_SQUOTE11,
  [anon_sym_16] = anon_sym_16,
  [anon_sym_Yourbranchisaheadof_SQUOTE] = anon_sym_Yourbranchisaheadof_SQUOTE,
  [anon_sym_commit_DOT] = anon_sym_commit_DOT,
  [anon_sym_commits_DOT] = anon_sym_commits_DOT,
  [anon_sym_Votrebrancheestenavancesur_SQUOTE] = anon_sym_Votrebrancheestenavancesur_SQUOTE,
  [anon_sym_SQUOTE12] = anon_sym_SQUOTE12,
  [anon_sym_17] = anon_sym_17,
  [anon_sym_SQUOTE13] = anon_sym_SQUOTE13,
  [anon_sym_18] = anon_sym_18,
  [anon_sym_Nhnhcabnngtrc] = anon_sym_Nhnhcabnngtrc,
  [anon_sym_lnchuyngiao_DOT] = anon_sym_lnchuyngiao_DOT,
  [anon_sym_ilemeileride_DOT] = anon_sym_ilemeileride_DOT,
  [anon_sym_Dingrenliggerfre_DQUOTE] = anon_sym_Dingrenliggerfre_DQUOTE,
  [anon_sym_incheckning_DOT] = anon_sym_incheckning_DOT,
  [anon_sym_incheckningar_DOT] = anon_sym_incheckningar_DOT,
  [anon_sym_19] = anon_sym_19,
  [anon_sym_DOT8] = anon_sym_DOT8,
  [anon_sym_DOT9] = anon_sym_DOT9,
  [anon_sym_DOT10] = anon_sym_DOT10,
  [anon_sym_Teuramoestfrentede_SQUOTE] = anon_sym_Teuramoestfrentede_SQUOTE,
  [anon_sym_memria_DOT] = anon_sym_memria_DOT,
  [anon_sym_memrias_DOT] = anon_sym_memrias_DOT,
  [anon_sym_Twojagajestdoprzoduwzgldem] = anon_sym_Twojagajestdoprzoduwzgldem,
  [anon_sym_zapis_DOT] = anon_sym_zapis_DOT,
  [anon_sym_zapisy_DOT] = anon_sym_zapisy_DOT,
  [anon_sym_zapisw_DOT] = anon_sym_zapisw_DOT,
  [anon_sym_DOT11] = anon_sym_DOT11,
  [anon_sym_Iltuobranchavantirispettoa_SQUOTE] = anon_sym_Iltuobranchavantirispettoa_SQUOTE,
  [anon_sym_SQUOTEdi] = anon_sym_SQUOTEdi,
  [anon_sym_CabangAndamendahului_SQUOTE] = anon_sym_CabangAndamendahului_SQUOTE,
  [anon_sym_komit_DOT] = anon_sym_komit_DOT,
  [anon_sym_Turamaestadelantadaa_SQUOTE] = anon_sym_Turamaestadelantadaa_SQUOTE,
  [anon_sym_SQUOTE14] = anon_sym_SQUOTE14,
  [anon_sym_DOT12] = anon_sym_DOT12,
  [anon_sym_DOT13] = anon_sym_DOT13,
  [anon_sym_Commitvor_SQUOTE] = anon_sym_Commitvor_SQUOTE,
  [anon_sym_Commitsvor_SQUOTE] = anon_sym_Commitsvor_SQUOTE,
  [anon_sym_comissiperdavantde] = anon_sym_comissiperdavantde,
  [anon_sym_comissionsperdavantde] = anon_sym_comissionsperdavantde,
  [anon_sym_20] = anon_sym_20,
  [anon_sym_21] = anon_sym_21,
  [anon_sym_Youarecurrentlyrebasingbranch_SQUOTE] = anon_sym_Youarecurrentlyrebasingbranch_SQUOTE,
  [anon_sym_SQUOTEon_SQUOTE] = anon_sym_SQUOTEon_SQUOTE,
  [anon_sym_Voustesentrainderebaserlabranche_SQUOTE] = anon_sym_Voustesentrainderebaserlabranche_SQUOTE,
  [anon_sym_SQUOTEsur_SQUOTE] = anon_sym_SQUOTEsur_SQUOTE,
  [anon_sym_SQUOTE15] = anon_sym_SQUOTE15,
  [anon_sym_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_SQUOTE16] = anon_sym_SQUOTE16,
  [anon_sym_SQUOTE17] = anon_sym_SQUOTE17,
  [anon_sym_SQUOTE_SQUOTE2] = anon_sym_SQUOTE_SQUOTE2,
  [anon_sym_SQUOTE18] = anon_sym_SQUOTE18,
  [anon_sym_Bnhinnayangthchinvicrebasenhnh] = anon_sym_Bnhinnayangthchinvicrebasenhnh,
  [anon_sym_trn] = anon_sym_trn,
  [anon_sym_uanda_SQUOTE] = anon_sym_uanda_SQUOTE,
  [anon_sym_SQUOTEdaln_SQUOTE] = anon_sym_SQUOTEdaln_SQUOTE,
  [anon_sym_SQUOTEzerineyenidentemellendiriyorsunuz_DOT] = anon_sym_SQUOTEzerineyenidentemellendiriyorsunuz_DOT,
  [anon_sym_Duhllerpattombaseragrenen_DQUOTE] = anon_sym_Duhllerpattombaseragrenen_DQUOTE,
  [anon_sym_DQUOTEovanp_DQUOTE] = anon_sym_DQUOTEovanp_DQUOTE,
  [anon_sym_22] = anon_sym_22,
  [anon_sym_23] = anon_sym_23,
  [anon_sym_Estsrebaseandoramo_SQUOTE] = anon_sym_Estsrebaseandoramo_SQUOTE,
  [anon_sym_SQUOTEsobre_SQUOTE] = anon_sym_SQUOTEsobre_SQUOTE,
  [anon_sym_Przestawiaszwaniega] = anon_sym_Przestawiaszwaniega,
  [anon_sym_na] = anon_sym_na,
  [anon_sym_SQUOTE19] = anon_sym_SQUOTE19,
  [anon_sym_SQUOTE_SQUOTE3] = anon_sym_SQUOTE_SQUOTE3,
  [anon_sym_SQUOTE_DOT3] = anon_sym_SQUOTE_DOT3,
  [anon_sym_Attualmentestaieseguendoilrebasedelbranch_SQUOTE] = anon_sym_Attualmentestaieseguendoilrebasedelbranch_SQUOTE,
  [anon_sym_SQUOTEsu_SQUOTE] = anon_sym_SQUOTEsu_SQUOTE,
  [anon_sym_Andasedangmendasarkanulangcabang_SQUOTE] = anon_sym_Andasedangmendasarkanulangcabang_SQUOTE,
  [anon_sym_SQUOTEpada_SQUOTE] = anon_sym_SQUOTEpada_SQUOTE,
  [anon_sym_Estsaplicandounrebasedelarama_SQUOTE] = anon_sym_Estsaplicandounrebasedelarama_SQUOTE,
  [anon_sym_rebase_SQUOTE] = anon_sym_rebase_SQUOTE,
  [anon_sym_SQUOTE_SQUOTE4] = anon_sym_SQUOTE_SQUOTE4,
  [anon_sym_SiesindgeradebeimRebasevonBranch_SQUOTE] = anon_sym_SiesindgeradebeimRebasevonBranch_SQUOTE,
  [anon_sym_SQUOTEauf_SQUOTE] = anon_sym_SQUOTEauf_SQUOTE,
  [anon_sym_Actualmentesteufentrebasedelabranca] = anon_sym_Actualmentesteufentrebasedelabranca,
  [anon_sym_en] = anon_sym_en,
  [anon_sym_24] = anon_sym_24,
  [anon_sym_25] = anon_sym_25,
  [anon_sym_interactiverebaseinprogress_SEMIonto] = anon_sym_interactiverebaseinprogress_SEMIonto,
  [anon_sym_rebasageinteractifencours_SEMIsur] = anon_sym_rebasageinteractifencours_SEMIsur,
  [anon_sym_26] = anon_sym_26,
  [anon_sym_rebaseinteractiuencurs_SEMIsobre] = anon_sym_rebaseinteractiuencurs_SEMIsobre,
  [anon_sym_interaktivesRebaseimGange_SEMIauf] = anon_sym_interaktivesRebaseimGange_SEMIauf,
  [anon_sym_rebase_COMMA] = anon_sym_rebase_COMMA,
  [anon_sym_rebaseinteractivoenprogreso_SEMIsobre] = anon_sym_rebaseinteractivoenprogreso_SEMIsobre,
  [anon_sym_sedangmendasarkanulanginteraktif_SEMIke] = anon_sym_sedangmendasarkanulanginteraktif_SEMIke,
  [anon_sym_rebaseinterattivoincorsosu] = anon_sym_rebaseinterattivoincorsosu,
  [anon_sym_DOT14] = anon_sym_DOT14,
  [anon_sym_trwainteraktywneprzestawianiena] = anon_sym_trwainteraktywneprzestawianiena,
  [anon_sym_rebaseinterativoemcurso_SEMIsobre] = anon_sym_rebaseinterativoemcurso_SEMIsobre,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_interaktivombaseringpgr_SEMIovanp] = anon_sym_interaktivombaseringpgr_SEMIovanp,
  [anon_sym_ununzerineetkileimliyenidentemellendirmesrmekte_COLON] = anon_sym_ununzerineetkileimliyenidentemellendirmesrmekte_COLON,
  [anon_sym_rebasechtngtcangcthchin_SEMIlntrn] = anon_sym_rebasechtngtcangcthchin_SEMIlntrn,
  [anon_sym_27] = anon_sym_27,
  [anon_sym_28] = anon_sym_28,
  [sym__trailer_token] = sym__trailer_token,
  [sym__comment_title] = sym__comment_title,
  [sym__conventional_type] = sym__conventional_type,
  [sym_source] = sym_source,
  [sym_subject] = sym_subject,
  [sym_prefix] = sym_prefix,
  [sym__body_line] = sym__body_line,
  [sym_message] = sym_message,
  [sym_trailer] = sym_trailer,
  [sym_breaking_change] = sym_breaking_change,
  [sym_comment] = sym_comment,
  [sym__scissor] = sym__scissor,
  [sym__change] = sym__change,
  [sym__filepath] = sym__filepath,
  [sym_rebase_command] = sym_rebase_command,
  [sym__date] = sym__date,
  [sym__onbranch] = sym__onbranch,
  [sym__uptodate] = sym__uptodate,
  [sym__behind] = sym__behind,
  [sym__ahead] = sym__ahead,
  [sym__rebasing] = sym__rebasing,
  [sym__interactive_rebasing] = sym__interactive_rebasing,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym__scissor_repeat1] = aux_sym__scissor_repeat1,
  [alias_sym_date] = alias_sym_date,
  [alias_sym_diff] = alias_sym_diff,
  [alias_sym_overflow] = alias_sym_overflow,
  [alias_sym_value] = alias_sym_value,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_subject_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_subject_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_subject_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_prefix_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BREAKINGCHANGE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__scissor_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_branch] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__change_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__change_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__filepath_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pick] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_edit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_squash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_merge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_drop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Date_COLON] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Date_COLON2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Ngythng_COLON] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Tarih_COLON] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Datum_COLON] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Data_COLON] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON3] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Tanggal_COLON] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Fecha_COLON] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON4] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Onbranch] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Surlabranche] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON5] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Pgrenen] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_zerindebulunulandal_COLON] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Trnnhnh] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_3] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Emramo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Nagazi] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Sulbranch] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Padacabang] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Enlarama] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_5] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AufBranch] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Enlabranca] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_6] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Yourbranchisuptodatewith_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Votrebrancheestjouravec_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Nhnhcabncpnhtvi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Dalnz_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTEilegncel_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Dingrenrjourmed_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Teuramoestatualizadocom_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Twojagajestnabiecoz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_DOT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Iltuobranchaggiornatorispettoa_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CabangAndamutakhirdengan_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Turamaestactualizadacon_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IhrBranchistaufdemselbenStandwie_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Lavostrabrancaestaldiaamb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Yourbranchisbehind_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTEby] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commit_COMMAandcanbefast_DASHforwarded_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commits_COMMAandcanbefast_DASHforwarded_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Votrebrancheestenretardsur_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTEde] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commit_COMMAetpeuttremisejourenavancerapide_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commits_COMMAetpeuttremisejourenavancerapide_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Lavostrabrancaest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comissiperdarrerede] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMAipotavanar_DASHserpidament_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comissionsperdarrerede] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IhrBranchist] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Commithinter_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_COMMAundkannvorgespultwerden_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Commitshinter_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA_DOT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Turamaestdetrsde_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTEpor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commit_COMMAypuedeseravanzadarpido_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commits_COMMAypuedeseravanzadarpido_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CabangAndadibelakang_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTEoleh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_komit_COMMAdanbisadimaju_DASHcepatkan_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CabangAndadibelakan_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Iltuobranch_COMMArispettoa_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_COMMAindietrodi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commitenepossoeseguireilfastforward_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA_DOT3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Nhnhcabnngngsau] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lnchuyngiao_COMMAvcthcchuyn_DASHtip_DASHnhanh_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTEdalndan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ilemegerideveilerisarlabilir_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Dingrenliggerefter_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEmed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_incheckning_COMMAochkansnabbspolas_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_incheckningar_COMMAochkansnabbspolas_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Teuramoestatrsde_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_memria_COMMAepodeseravanado_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_memrias_COMMAepodeseravanado_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Twojagajestza] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zapisimoezostaprzewinita_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zapisyimoezostaprzewinita_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zapiswimoezostaprzewinita_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_15] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Yourbranchisaheadof_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commit_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commits_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Votrebrancheestenavancesur_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_17] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_18] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Nhnhcabnngtrc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lnchuyngiao_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ilemeileride_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Dingrenliggerfre_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_incheckning_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_incheckningar_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_19] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Teuramoestfrentede_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_memria_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_memrias_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Twojagajestdoprzoduwzgldem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zapis_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zapisy_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zapisw_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Iltuobranchavantirispettoa_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTEdi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CabangAndamendahului_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_komit_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Turamaestadelantadaa_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Commitvor_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Commitsvor_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comissiperdavantde] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comissionsperdavantde] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_20] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_21] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Youarecurrentlyrebasingbranch_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTEon_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Voustesentrainderebaserlabranche_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTEsur_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE15] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE17] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE18] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Bnhinnayangthchinvicrebasenhnh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uanda_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTEdaln_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTEzerineyenidentemellendiriyorsunuz_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Duhllerpattombaseragrenen_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEovanp_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_22] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_23] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Estsrebaseandoramo_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTEsobre_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Przestawiaszwaniega] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_na] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE19] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_DOT3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Attualmentestaieseguendoilrebasedelbranch_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTEsu_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Andasedangmendasarkanulangcabang_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTEpada_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Estsaplicandounrebasedelarama_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rebase_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SiesindgeradebeimRebasevonBranch_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTEauf_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Actualmentesteufentrebasedelabranca] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_en] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_24] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_25] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interactiverebaseinprogress_SEMIonto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rebasageinteractifencours_SEMIsur] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_26] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rebaseinteractiuencurs_SEMIsobre] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interaktivesRebaseimGange_SEMIauf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rebase_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rebaseinteractivoenprogreso_SEMIsobre] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sedangmendasarkanulanginteraktif_SEMIke] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rebaseinterattivoincorsosu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trwainteraktywneprzestawianiena] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rebaseinterativoemcurso_SEMIsobre] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interaktivombaseringpgr_SEMIovanp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ununzerineetkileimliyenidentemellendirmesrmekte_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rebasechtngtcangcthchin_SEMIlntrn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_27] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_28] = {
    .visible = true,
    .named = false,
  },
  [sym__trailer_token] = {
    .visible = true,
    .named = true,
  },
  [sym__comment_title] = {
    .visible = true,
    .named = true,
  },
  [sym__conventional_type] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_subject] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym__body_line] = {
    .visible = false,
    .named = true,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_trailer] = {
    .visible = true,
    .named = true,
  },
  [sym_breaking_change] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__scissor] = {
    .visible = false,
    .named = true,
  },
  [sym__change] = {
    .visible = false,
    .named = true,
  },
  [sym__filepath] = {
    .visible = false,
    .named = true,
  },
  [sym_rebase_command] = {
    .visible = true,
    .named = true,
  },
  [sym__date] = {
    .visible = false,
    .named = true,
  },
  [sym__onbranch] = {
    .visible = false,
    .named = true,
  },
  [sym__uptodate] = {
    .visible = false,
    .named = true,
  },
  [sym__behind] = {
    .visible = false,
    .named = true,
  },
  [sym__ahead] = {
    .visible = false,
    .named = true,
  },
  [sym__rebasing] = {
    .visible = false,
    .named = true,
  },
  [sym__interactive_rebasing] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__scissor_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_date] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_diff] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_overflow] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_value] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_diff,
  },
  [2] = {
    [1] = alias_sym_value,
  },
  [3] = {
    [2] = alias_sym_overflow,
  },
  [4] = {
    [2] = alias_sym_date,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__scissor_repeat1, 2,
    aux_sym__scissor_repeat1,
    alias_sym_diff,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1271);
      if (lookahead == '\t') ADVANCE(3384);
      if (lookahead == '\n') ADVANCE(1272);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '!') ADVANCE(1350);
      if (lookahead == '#') ADVANCE(1354);
      if (lookahead == '(') ADVANCE(1347);
      if (lookahead == ')') ADVANCE(1349);
      if (lookahead == ':') ADVANCE(1351);
      if (lookahead != 0) ADVANCE(1273);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(3384);
      if (lookahead == '\n') ADVANCE(1272);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == ' ') ADVANCE(1366);
      if (lookahead == '#') ADVANCE(1354);
      if (lookahead == 'A') ADVANCE(1994);
      if (lookahead == 'B') ADVANCE(3271);
      if (lookahead == 'C') ADVANCE(1802);
      if (lookahead == 'D') ADVANCE(1803);
      if (lookahead == 'E') ADVANCE(2405);
      if (lookahead == 'F') ADVANCE(2079);
      if (lookahead == 'I') ADVANCE(2267);
      if (lookahead == 'L') ADVANCE(1825);
      if (lookahead == 'N') ADVANCE(1830);
      if (lookahead == 'O') ADVANCE(2443);
      if (lookahead == 'P') ADVANCE(1902);
      if (lookahead == 'S') ADVANCE(2301);
      if (lookahead == 'T') ADVANCE(1804);
      if (lookahead == 'V') ADVANCE(2544);
      if (lookahead == 'Y') ADVANCE(2547);
      if (lookahead == 'i') ADVANCE(2434);
      if (lookahead == 'r') ADVANCE(2127);
      if (lookahead == 's') ADVANCE(2126);
      if (lookahead == 't') ADVANCE(2602);
      if (lookahead == 171) ADVANCE(2651);
      if (lookahead == 220) ADVANCE(2882);
      if (lookahead == 350) ADVANCE(2829);
      if (lookahead == 351) ADVANCE(2824);
      if (lookahead == 913) ADVANCE(3063);
      if (lookahead == 919) ADVANCE(3008);
      if (lookahead == 927) ADVANCE(1449);
      if (lookahead == 931) ADVANCE(3049);
      if (lookahead == 949) ADVANCE(3001);
      if (lookahead == 1042) ADVANCE(1369);
      if (lookahead == 1044) ADVANCE(3087);
      if (lookahead == 1050) ADVANCE(3169);
      if (lookahead == 1053) ADVANCE(3079);
      if (lookahead == 1058) ADVANCE(3111);
      if (lookahead == 1069) ADVANCE(3244);
      if (lookahead == 1080) ADVANCE(3147);
      if (lookahead == 20114) ADVANCE(3316);
      if (lookahead == 20132) ADVANCE(3305);
      if (lookahead == 20301) ADVANCE(3339);
      if (lookahead == 24744) ADVANCE(3320);
      if (lookahead == 26085) ADVANCE(3340);
      if (lookahead == 45824) ADVANCE(3373);
      if (lookahead == 48652) ADVANCE(3358);
      if (lookahead == 49884) ADVANCE(3355);
      if (lookahead == 54788) ADVANCE(3365);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(1368);
      if (lookahead != 0) ADVANCE(3378);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(3384);
      if (lookahead == '\n') ADVANCE(1272);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == ' ') ADVANCE(1617);
      if (lookahead == '#') ADVANCE(1354);
      if (lookahead == 'A') ADVANCE(1994);
      if (lookahead == 'B') ADVANCE(3271);
      if (lookahead == 'C') ADVANCE(1802);
      if (lookahead == 'D') ADVANCE(1803);
      if (lookahead == 'E') ADVANCE(2405);
      if (lookahead == 'F') ADVANCE(2079);
      if (lookahead == 'I') ADVANCE(2267);
      if (lookahead == 'L') ADVANCE(1825);
      if (lookahead == 'N') ADVANCE(1830);
      if (lookahead == 'O') ADVANCE(2443);
      if (lookahead == 'P') ADVANCE(1902);
      if (lookahead == 'S') ADVANCE(2301);
      if (lookahead == 'T') ADVANCE(1804);
      if (lookahead == 'V') ADVANCE(2544);
      if (lookahead == 'Y') ADVANCE(2547);
      if (lookahead == 'i') ADVANCE(2434);
      if (lookahead == 'r') ADVANCE(2127);
      if (lookahead == 's') ADVANCE(2126);
      if (lookahead == 't') ADVANCE(2602);
      if (lookahead == 171) ADVANCE(2651);
      if (lookahead == 220) ADVANCE(2882);
      if (lookahead == 350) ADVANCE(2829);
      if (lookahead == 351) ADVANCE(2824);
      if (lookahead == 913) ADVANCE(3063);
      if (lookahead == 919) ADVANCE(3008);
      if (lookahead == 927) ADVANCE(1449);
      if (lookahead == 931) ADVANCE(3049);
      if (lookahead == 949) ADVANCE(3001);
      if (lookahead == 1042) ADVANCE(1369);
      if (lookahead == 1044) ADVANCE(3087);
      if (lookahead == 1050) ADVANCE(3169);
      if (lookahead == 1053) ADVANCE(3079);
      if (lookahead == 1058) ADVANCE(3111);
      if (lookahead == 1069) ADVANCE(3244);
      if (lookahead == 1080) ADVANCE(3147);
      if (lookahead == 20114) ADVANCE(3316);
      if (lookahead == 20132) ADVANCE(3305);
      if (lookahead == 20301) ADVANCE(3339);
      if (lookahead == 24744) ADVANCE(3320);
      if (lookahead == 26085) ADVANCE(3340);
      if (lookahead == 45824) ADVANCE(3373);
      if (lookahead == 48652) ADVANCE(3358);
      if (lookahead == 49884) ADVANCE(3355);
      if (lookahead == 54788) ADVANCE(3365);
      if (lookahead != 0) ADVANCE(3378);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(3377);
      if (lookahead == ' ') ADVANCE(1367);
      if (lookahead == '#') ADVANCE(1357);
      if (lookahead == ':' ||
          lookahead == 65306) ADVANCE(3388);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(1362);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(3387);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(1272);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(1272);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '#') ADVANCE(1354);
      if (lookahead == 8221) ADVANCE(59);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(1368);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(1272);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '#') ADVANCE(1361);
      if (lookahead != 0) ADVANCE(1325);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(215);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(216);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(216);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(285);
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(1368);
      if (lookahead == '#') ADVANCE(1359);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(1363);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(3388);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(289);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(290);
      if (lookahead == '!') ADVANCE(1350);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(1354);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '(') ADVANCE(1347);
      if (lookahead == ')') ADVANCE(1349);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == ':') ADVANCE(1351);
      if (lookahead == 'b') ADVANCE(771);
      if (lookahead == 'd') ADVANCE(764);
      if (lookahead == 'e') ADVANCE(399);
      if (lookahead == 'f') ADVANCE(553);
      if (lookahead == 'l') ADVANCE(300);
      if (lookahead == 'm') ADVANCE(444);
      if (lookahead == 'p') ADVANCE(554);
      if (lookahead == 'r') ADVANCE(439);
      if (lookahead == 's') ADVANCE(761);
      if (lookahead == 187) ADVANCE(17);
      if (lookahead == 8220) ADVANCE(18);
      if (lookahead == 8221) ADVANCE(19);
      if (lookahead == 44060) ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3383);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(632);
      if (lookahead == '.') ADVANCE(3443);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(307);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '.') ADVANCE(3433);
      if (lookahead == 48372) ADVANCE(1227);
      if (lookahead == 50640) ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(489);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '.') ADVANCE(3445);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(1060);
      if (lookahead == '.') ADVANCE(3457);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(3496);
      if (lookahead == '.') ADVANCE(3439);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(1261);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(883);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(1238);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(3518);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(3493);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(3459);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(3463);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(3549);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(219);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(1236);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(934);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(3505);
      if (lookahead == 1076) ADVANCE(70);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(1231);
      if (lookahead == 47564) ADVANCE(1262);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(3501);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(3483);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(1248);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(3487);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(3479);
      END_STATE();
    case 38:
      if (lookahead == ' ') ADVANCE(1247);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(540);
      END_STATE();
    case 41:
      if (lookahead == ' ') ADVANCE(1177);
      END_STATE();
    case 42:
      if (lookahead == ' ') ADVANCE(1256);
      END_STATE();
    case 43:
      if (lookahead == ' ') ADVANCE(348);
      END_STATE();
    case 44:
      if (lookahead == ' ') ADVANCE(214);
      END_STATE();
    case 45:
      if (lookahead == ' ') ADVANCE(1003);
      END_STATE();
    case 46:
      if (lookahead == ' ') ADVANCE(1090);
      END_STATE();
    case 47:
      if (lookahead == ' ') ADVANCE(3498);
      END_STATE();
    case 48:
      if (lookahead == ' ') ADVANCE(1259);
      END_STATE();
    case 49:
      if (lookahead == ' ') ADVANCE(1241);
      END_STATE();
    case 50:
      if (lookahead == ' ') ADVANCE(1054);
      END_STATE();
    case 51:
      if (lookahead == ' ') ADVANCE(1008);
      END_STATE();
    case 52:
      if (lookahead == ' ') ADVANCE(1229);
      END_STATE();
    case 53:
      if (lookahead == ' ') ADVANCE(950);
      END_STATE();
    case 54:
      if (lookahead == ' ') ADVANCE(3491);
      END_STATE();
    case 55:
      if (lookahead == ' ') ADVANCE(1123);
      END_STATE();
    case 56:
      if (lookahead == ' ') ADVANCE(1242);
      END_STATE();
    case 57:
      if (lookahead == ' ') ADVANCE(1011);
      END_STATE();
    case 58:
      if (lookahead == ' ') ADVANCE(959);
      END_STATE();
    case 59:
      if (lookahead == ' ') ADVANCE(680);
      END_STATE();
    case 60:
      if (lookahead == ' ') ADVANCE(3513);
      END_STATE();
    case 61:
      if (lookahead == ' ') ADVANCE(1176);
      END_STATE();
    case 62:
      if (lookahead == ' ') ADVANCE(245);
      END_STATE();
    case 63:
      if (lookahead == ' ') ADVANCE(1022);
      END_STATE();
    case 64:
      if (lookahead == ' ') ADVANCE(901);
      END_STATE();
    case 65:
      if (lookahead == ' ') ADVANCE(924);
      END_STATE();
    case 66:
      if (lookahead == ' ') ADVANCE(534);
      END_STATE();
    case 67:
      if (lookahead == ' ') ADVANCE(527);
      END_STATE();
    case 68:
      if (lookahead == ' ') ADVANCE(1093);
      if (lookahead == '.') ADVANCE(3537);
      if (lookahead == 1072) ADVANCE(203);
      if (lookahead == 1086) ADVANCE(1062);
      END_STATE();
    case 69:
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 70:
      if (lookahead == ' ') ADVANCE(935);
      END_STATE();
    case 71:
      if (lookahead == ' ') ADVANCE(914);
      END_STATE();
    case 72:
      if (lookahead == ' ') ADVANCE(1246);
      END_STATE();
    case 73:
      if (lookahead == ' ') ADVANCE(1178);
      END_STATE();
    case 74:
      if (lookahead == ' ') ADVANCE(1257);
      END_STATE();
    case 75:
      if (lookahead == ' ') ADVANCE(1004);
      END_STATE();
    case 76:
      if (lookahead == ' ') ADVANCE(1053);
      END_STATE();
    case 77:
      if (lookahead == ' ') ADVANCE(1122);
      END_STATE();
    case 78:
      if (lookahead == ' ') ADVANCE(603);
      END_STATE();
    case 79:
      if (lookahead == ' ') ADVANCE(374);
      END_STATE();
    case 80:
      if (lookahead == ' ') ADVANCE(1098);
      END_STATE();
    case 81:
      if (lookahead == ' ') ADVANCE(907);
      END_STATE();
    case 82:
      if (lookahead == ' ') ADVANCE(922);
      END_STATE();
    case 83:
      if (lookahead == ' ') ADVANCE(1035);
      END_STATE();
    case 84:
      if (lookahead == ' ') ADVANCE(221);
      END_STATE();
    case 85:
      if (lookahead == ' ') ADVANCE(936);
      END_STATE();
    case 86:
      if (lookahead == ' ') ADVANCE(1179);
      END_STATE();
    case 87:
      if (lookahead == ' ') ADVANCE(1055);
      END_STATE();
    case 88:
      if (lookahead == ' ') ADVANCE(577);
      END_STATE();
    case 89:
      if (lookahead == ' ') ADVANCE(387);
      END_STATE();
    case 90:
      if (lookahead == ' ') ADVANCE(737);
      END_STATE();
    case 91:
      if (lookahead == ' ') ADVANCE(899);
      END_STATE();
    case 92:
      if (lookahead == ' ') ADVANCE(538);
      END_STATE();
    case 93:
      if (lookahead == ' ') ADVANCE(608);
      END_STATE();
    case 94:
      if (lookahead == ' ') ADVANCE(222);
      END_STATE();
    case 95:
      if (lookahead == ' ') ADVANCE(937);
      END_STATE();
    case 96:
      if (lookahead == ' ') ADVANCE(1180);
      END_STATE();
    case 97:
      if (lookahead == ' ') ADVANCE(223);
      END_STATE();
    case 98:
      if (lookahead == ' ') ADVANCE(938);
      END_STATE();
    case 99:
      if (lookahead == ' ') ADVANCE(1181);
      END_STATE();
    case 100:
      if (lookahead == ' ') ADVANCE(394);
      END_STATE();
    case 101:
      if (lookahead == ' ') ADVANCE(631);
      END_STATE();
    case 102:
      if (lookahead == ' ') ADVANCE(751);
      END_STATE();
    case 103:
      if (lookahead == ' ') ADVANCE(423);
      END_STATE();
    case 104:
      if (lookahead == ' ') ADVANCE(224);
      END_STATE();
    case 105:
      if (lookahead == ' ') ADVANCE(939);
      END_STATE();
    case 106:
      if (lookahead == ' ') ADVANCE(1182);
      END_STATE();
    case 107:
      if (lookahead == ' ') ADVANCE(634);
      END_STATE();
    case 108:
      if (lookahead == ' ') ADVANCE(738);
      END_STATE();
    case 109:
      if (lookahead == ' ') ADVANCE(225);
      END_STATE();
    case 110:
      if (lookahead == ' ') ADVANCE(385);
      END_STATE();
    case 111:
      if (lookahead == ' ') ADVANCE(746);
      END_STATE();
    case 112:
      if (lookahead == ' ') ADVANCE(226);
      END_STATE();
    case 113:
      if (lookahead == ' ') ADVANCE(767);
      END_STATE();
    case 114:
      if (lookahead == ' ') ADVANCE(564);
      END_STATE();
    case 115:
      if (lookahead == ' ') ADVANCE(741);
      END_STATE();
    case 116:
      if (lookahead == ' ') ADVANCE(840);
      END_STATE();
    case 117:
      if (lookahead == ' ') ADVANCE(227);
      END_STATE();
    case 118:
      if (lookahead == ' ') ADVANCE(334);
      END_STATE();
    case 119:
      if (lookahead == ' ') ADVANCE(705);
      END_STATE();
    case 120:
      if (lookahead == ' ') ADVANCE(743);
      END_STATE();
    case 121:
      if (lookahead == ' ') ADVANCE(228);
      END_STATE();
    case 122:
      if (lookahead == ' ') ADVANCE(870);
      END_STATE();
    case 123:
      if (lookahead == ' ') ADVANCE(229);
      END_STATE();
    case 124:
      if (lookahead == ' ') ADVANCE(744);
      END_STATE();
    case 125:
      if (lookahead == ' ') ADVANCE(230);
      END_STATE();
    case 126:
      if (lookahead == ' ') ADVANCE(856);
      END_STATE();
    case 127:
      if (lookahead == ' ') ADVANCE(830);
      END_STATE();
    case 128:
      if (lookahead == ' ') ADVANCE(231);
      END_STATE();
    case 129:
      if (lookahead == ' ') ADVANCE(831);
      END_STATE();
    case 130:
      if (lookahead == ' ') ADVANCE(232);
      END_STATE();
    case 131:
      if (lookahead == ' ') ADVANCE(763);
      END_STATE();
    case 132:
      if (lookahead == ' ') ADVANCE(233);
      END_STATE();
    case 133:
      if (lookahead == ' ') ADVANCE(789);
      END_STATE();
    case 134:
      if (lookahead == ' ') ADVANCE(592);
      END_STATE();
    case 135:
      if (lookahead == ' ') ADVANCE(461);
      END_STATE();
    case 136:
      if (lookahead == ' ') ADVANCE(570);
      END_STATE();
    case 137:
      if (lookahead == ' ') ADVANCE(379);
      END_STATE();
    case 138:
      if (lookahead == ' ') ADVANCE(1065);
      END_STATE();
    case 139:
      if (lookahead == ' ') ADVANCE(941);
      END_STATE();
    case 140:
      if (lookahead == ' ') ADVANCE(432);
      END_STATE();
    case 141:
      if (lookahead == ' ') ADVANCE(529);
      END_STATE();
    case 142:
      if (lookahead == ' ') ADVANCE(1100);
      END_STATE();
    case 143:
      if (lookahead == ' ') ADVANCE(578);
      if (lookahead == '.') ADVANCE(3544);
      if (lookahead == 'y') ADVANCE(197);
      if (lookahead == 243) ADVANCE(910);
      END_STATE();
    case 144:
      if (lookahead == ' ') ADVANCE(388);
      END_STATE();
    case 145:
      if (lookahead == ' ') ADVANCE(610);
      END_STATE();
    case 146:
      if (lookahead == ' ') ADVANCE(403);
      END_STATE();
    case 147:
      if (lookahead == ' ') ADVANCE(635);
      END_STATE();
    case 148:
      if (lookahead == ' ') ADVANCE(470);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '.') ADVANCE(3523);
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 149:
      if (lookahead == ' ') ADVANCE(472);
      END_STATE();
    case 150:
      if (lookahead == ' ') ADVANCE(1091);
      END_STATE();
    case 151:
      if (lookahead == ' ') ADVANCE(531);
      END_STATE();
    case 152:
      if (lookahead == ' ') ADVANCE(684);
      END_STATE();
    case 153:
      if (lookahead == ' ') ADVANCE(425);
      END_STATE();
    case 154:
      if (lookahead == ' ') ADVANCE(341);
      END_STATE();
    case 155:
      if (lookahead == ' ') ADVANCE(502);
      END_STATE();
    case 156:
      if (lookahead == ' ') ADVANCE(428);
      END_STATE();
    case 157:
      if (lookahead == ' ') ADVANCE(429);
      END_STATE();
    case 158:
      if (lookahead == ' ') ADVANCE(430);
      END_STATE();
    case 159:
      if (lookahead == ' ') ADVANCE(431);
      END_STATE();
    case 160:
      if (lookahead == ' ') ADVANCE(551);
      END_STATE();
    case 161:
      if (lookahead == ' ') ADVANCE(1258);
      END_STATE();
    case 162:
      if (lookahead == ' ') ADVANCE(352);
      END_STATE();
    case 163:
      if (lookahead == ' ') ADVANCE(803);
      END_STATE();
    case 164:
      if (lookahead == ' ') ADVANCE(354);
      END_STATE();
    case 165:
      if (lookahead == ' ') ADVANCE(355);
      END_STATE();
    case 166:
      if (lookahead == ' ') ADVANCE(842);
      END_STATE();
    case 167:
      if (lookahead == ' ') ADVANCE(755);
      END_STATE();
    case 168:
      if (lookahead == ' ') ADVANCE(841);
      END_STATE();
    case 169:
      if (lookahead == ' ') ADVANCE(808);
      END_STATE();
    case 170:
      if (lookahead == ' ') ADVANCE(434);
      END_STATE();
    case 171:
      if (lookahead == ' ') ADVANCE(365);
      END_STATE();
    case 172:
      if (lookahead == ' ') ADVANCE(843);
      END_STATE();
    case 173:
      if (lookahead == ' ') ADVANCE(756);
      END_STATE();
    case 174:
      if (lookahead == ' ') ADVANCE(1124);
      END_STATE();
    case 175:
      if (lookahead == ' ') ADVANCE(757);
      END_STATE();
    case 176:
      if (lookahead == ' ') ADVANCE(611);
      END_STATE();
    case 177:
      if (lookahead == ' ') ADVANCE(515);
      END_STATE();
    case 178:
      if (lookahead == ' ') ADVANCE(1125);
      END_STATE();
    case 179:
      if (lookahead == ' ') ADVANCE(1024);
      END_STATE();
    case 180:
      if (lookahead == ' ') ADVANCE(533);
      END_STATE();
    case 181:
      if (lookahead == ' ') ADVANCE(845);
      END_STATE();
    case 182:
      if (lookahead == ' ') ADVANCE(1056);
      END_STATE();
    case 183:
      if (lookahead == ' ') ADVANCE(758);
      END_STATE();
    case 184:
      if (lookahead == ' ') ADVANCE(728);
      END_STATE();
    case 185:
      if (lookahead == ' ') ADVANCE(381);
      END_STATE();
    case 186:
      if (lookahead == ' ') ADVANCE(369);
      END_STATE();
    case 187:
      if (lookahead == ' ') ADVANCE(1057);
      END_STATE();
    case 188:
      if (lookahead == ' ') ADVANCE(932);
      END_STATE();
    case 189:
      if (lookahead == ' ') ADVANCE(759);
      END_STATE();
    case 190:
      if (lookahead == ' ') ADVANCE(522);
      END_STATE();
    case 191:
      if (lookahead == ' ') ADVANCE(933);
      END_STATE();
    case 192:
      if (lookahead == ' ') ADVANCE(371);
      END_STATE();
    case 193:
      if (lookahead == ' ') ADVANCE(1058);
      END_STATE();
    case 194:
      if (lookahead == ' ') ADVANCE(1036);
      END_STATE();
    case 195:
      if (lookahead == ' ') ADVANCE(397);
      END_STATE();
    case 196:
      if (lookahead == ' ') ADVANCE(640);
      END_STATE();
    case 197:
      if (lookahead == ' ') ADVANCE(599);
      if (lookahead == '.') ADVANCE(3545);
      END_STATE();
    case 198:
      if (lookahead == ' ') ADVANCE(1059);
      END_STATE();
    case 199:
      if (lookahead == ' ') ADVANCE(641);
      END_STATE();
    case 200:
      if (lookahead == ' ') ADVANCE(600);
      if (lookahead == '.') ADVANCE(3546);
      END_STATE();
    case 201:
      if (lookahead == ' ') ADVANCE(1103);
      END_STATE();
    case 202:
      if (lookahead == ' ') ADVANCE(1104);
      END_STATE();
    case 203:
      if (lookahead == ' ') ADVANCE(1094);
      if (lookahead == '.') ADVANCE(3538);
      END_STATE();
    case 204:
      if (lookahead == ' ') ADVANCE(1005);
      END_STATE();
    case 205:
      if (lookahead == ' ') ADVANCE(604);
      END_STATE();
    case 206:
      if (lookahead == ' ') ADVANCE(943);
      END_STATE();
    case 207:
      if (lookahead == ' ') ADVANCE(1095);
      if (lookahead == '.') ADVANCE(3539);
      END_STATE();
    case 208:
      if (lookahead == ' ') ADVANCE(1013);
      END_STATE();
    case 209:
      if (lookahead == ' ') ADVANCE(642);
      END_STATE();
    case 210:
      if (lookahead == ' ') ADVANCE(952);
      END_STATE();
    case 211:
      if (lookahead == ' ') ADVANCE(1009);
      END_STATE();
    case 212:
      if (lookahead == ' ') ADVANCE(760);
      END_STATE();
    case 213:
      if (lookahead == ' ') ADVANCE(1006);
      END_STATE();
    case 214:
      if (lookahead == '"') ADVANCE(3578);
      END_STATE();
    case 215:
      if (lookahead == '#') ADVANCE(10);
      END_STATE();
    case 216:
      if (lookahead == '#') ADVANCE(1266);
      END_STATE();
    case 217:
      if (lookahead == '#') ADVANCE(1359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(3388);
      END_STATE();
    case 218:
      if (lookahead == '#') ADVANCE(1358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(3382);
      END_STATE();
    case 219:
      if (lookahead == '\'') ADVANCE(3563);
      END_STATE();
    case 220:
      if (lookahead == '\'') ADVANCE(3589);
      END_STATE();
    case 221:
      if (lookahead == '\'') ADVANCE(3596);
      END_STATE();
    case 222:
      if (lookahead == '\'') ADVANCE(3565);
      END_STATE();
    case 223:
      if (lookahead == '\'') ADVANCE(3594);
      END_STATE();
    case 224:
      if (lookahead == '\'') ADVANCE(3570);
      END_STATE();
    case 225:
      if (lookahead == '\'') ADVANCE(3591);
      END_STATE();
    case 226:
      if (lookahead == '\'') ADVANCE(3586);
      END_STATE();
    case 227:
      if (lookahead == '\'') ADVANCE(3582);
      END_STATE();
    case 228:
      if (lookahead == '\'') ADVANCE(3567);
      END_STATE();
    case 229:
      if (lookahead == '\'') ADVANCE(3575);
      END_STATE();
    case 230:
      if (lookahead == '\'') ADVANCE(3556);
      END_STATE();
    case 231:
      if (lookahead == '\'') ADVANCE(3557);
      END_STATE();
    case 232:
      if (lookahead == '\'') ADVANCE(3475);
      END_STATE();
    case 233:
      if (lookahead == '\'') ADVANCE(3477);
      END_STATE();
    case 234:
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '.') ADVANCE(3551);
      END_STATE();
    case 235:
      if (lookahead == ',') ADVANCE(149);
      if (lookahead == '.') ADVANCE(3541);
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 236:
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '.') ADVANCE(3554);
      END_STATE();
    case 237:
      if (lookahead == ',') ADVANCE(72);
      END_STATE();
    case 238:
      if (lookahead == ',') ADVANCE(119);
      if (lookahead == '.') ADVANCE(3534);
      if (lookahead == 'a') ADVANCE(774);
      END_STATE();
    case 239:
      if (lookahead == ',') ADVANCE(91);
      if (lookahead == '.') ADVANCE(3531);
      END_STATE();
    case 240:
      if (lookahead == ',') ADVANCE(177);
      if (lookahead == '.') ADVANCE(3542);
      END_STATE();
    case 241:
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == '.') ADVANCE(3535);
      END_STATE();
    case 242:
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '.') ADVANCE(3524);
      END_STATE();
    case 243:
      if (lookahead == ',') ADVANCE(213);
      if (lookahead == '.') ADVANCE(3555);
      END_STATE();
    case 244:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 245:
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 246:
      if (lookahead == '-') ADVANCE(530);
      END_STATE();
    case 247:
      if (lookahead == '-') ADVANCE(838);
      END_STATE();
    case 248:
      if (lookahead == '-') ADVANCE(862);
      END_STATE();
    case 249:
      if (lookahead == '-') ADVANCE(653);
      END_STATE();
    case 250:
      if (lookahead == '-') ADVANCE(390);
      END_STATE();
    case 251:
      if (lookahead == '-') ADVANCE(532);
      END_STATE();
    case 252:
      if (lookahead == '.') ADVANCE(3441);
      END_STATE();
    case 253:
      if (lookahead == '.') ADVANCE(3547);
      END_STATE();
    case 254:
      if (lookahead == '.') ADVANCE(3532);
      END_STATE();
    case 255:
      if (lookahead == '.') ADVANCE(3587);
      END_STATE();
    case 256:
      if (lookahead == '.') ADVANCE(3449);
      END_STATE();
    case 257:
      if (lookahead == '.') ADVANCE(3494);
      END_STATE();
    case 258:
      if (lookahead == '.') ADVANCE(3472);
      END_STATE();
    case 259:
      if (lookahead == '.') ADVANCE(3510);
      END_STATE();
    case 260:
      if (lookahead == '.') ADVANCE(3476);
      END_STATE();
    case 261:
      if (lookahead == '.') ADVANCE(3511);
      END_STATE();
    case 262:
      if (lookahead == '.') ADVANCE(3468);
      END_STATE();
    case 263:
      if (lookahead == '.') ADVANCE(3514);
      END_STATE();
    case 264:
      if (lookahead == '.') ADVANCE(3502);
      END_STATE();
    case 265:
      if (lookahead == '.') ADVANCE(3488);
      END_STATE();
    case 266:
      if (lookahead == '.') ADVANCE(3515);
      END_STATE();
    case 267:
      if (lookahead == '.') ADVANCE(3460);
      END_STATE();
    case 268:
      if (lookahead == '.') ADVANCE(3516);
      END_STATE();
    case 269:
      if (lookahead == '.') ADVANCE(3461);
      END_STATE();
    case 270:
      if (lookahead == '.') ADVANCE(3503);
      END_STATE();
    case 271:
      if (lookahead == '.') ADVANCE(3499);
      END_STATE();
    case 272:
      if (lookahead == '.') ADVANCE(3484);
      END_STATE();
    case 273:
      if (lookahead == '.') ADVANCE(3485);
      END_STATE();
    case 274:
      if (lookahead == '.') ADVANCE(3506);
      END_STATE();
    case 275:
      if (lookahead == '.') ADVANCE(3576);
      END_STATE();
    case 276:
      if (lookahead == '.') ADVANCE(3507);
      END_STATE();
    case 277:
      if (lookahead == '.') ADVANCE(3508);
      END_STATE();
    case 278:
      if (lookahead == '.') ADVANCE(3492);
      END_STATE();
    case 279:
      if (lookahead == '.') ADVANCE(3480);
      END_STATE();
    case 280:
      if (lookahead == '.') ADVANCE(3481);
      END_STATE();
    case 281:
      if (lookahead == '.') ADVANCE(3464);
      END_STATE();
    case 282:
      if (lookahead == '.') ADVANCE(3497);
      END_STATE();
    case 283:
      if (lookahead == '.') ADVANCE(3465);
      END_STATE();
    case 284:
      if (lookahead == '8') ADVANCE(62);
      END_STATE();
    case 285:
      if (lookahead == '>') ADVANCE(284);
      END_STATE();
    case 286:
      if (lookahead == '>') ADVANCE(3389);
      END_STATE();
    case 287:
      if (lookahead == 'A') ADVANCE(297);
      END_STATE();
    case 288:
      if (lookahead == 'A') ADVANCE(299);
      END_STATE();
    case 289:
      if (lookahead == 'C') ADVANCE(295);
      END_STATE();
    case 290:
      if (lookahead == 'C') ADVANCE(697);
      if (lookahead == 'c') ADVANCE(700);
      if (lookahead == 'i') ADVANCE(645);
      if (lookahead == 'k') ADVANCE(702);
      if (lookahead == 'l') ADVANCE(1170);
      if (lookahead == 'm') ADVANCE(450);
      if (lookahead == 'z') ADVANCE(301);
      if (lookahead == 965) ADVANCE(1021);
      if (lookahead == 1082) ADVANCE(1110);
      if (lookahead == 1087) ADVANCE(1111);
      if (lookahead == 20010) ADVANCE(1211);
      if (lookahead == 20491) ADVANCE(1212);
      END_STATE();
    case 291:
      if (lookahead == 'E') ADVANCE(287);
      END_STATE();
    case 292:
      if (lookahead == 'E') ADVANCE(1352);
      END_STATE();
    case 293:
      if (lookahead == 'G') ADVANCE(13);
      END_STATE();
    case 294:
      if (lookahead == 'G') ADVANCE(292);
      END_STATE();
    case 295:
      if (lookahead == 'H') ADVANCE(288);
      END_STATE();
    case 296:
      if (lookahead == 'I') ADVANCE(298);
      END_STATE();
    case 297:
      if (lookahead == 'K') ADVANCE(296);
      END_STATE();
    case 298:
      if (lookahead == 'N') ADVANCE(293);
      END_STATE();
    case 299:
      if (lookahead == 'N') ADVANCE(294);
      END_STATE();
    case 300:
      if (lookahead == 'a') ADVANCE(373);
      END_STATE();
    case 301:
      if (lookahead == 'a') ADVANCE(739);
      END_STATE();
    case 302:
      if (lookahead == 'a') ADVANCE(819);
      END_STATE();
    case 303:
      if (lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 304:
      if (lookahead == 'a') ADVANCE(792);
      END_STATE();
    case 305:
      if (lookahead == 'a') ADVANCE(956);
      END_STATE();
    case 306:
      if (lookahead == 'a') ADVANCE(602);
      END_STATE();
    case 307:
      if (lookahead == 'a') ADVANCE(882);
      if (lookahead == 'b') ADVANCE(921);
      if (lookahead == 'd') ADVANCE(308);
      if (lookahead == 'i') ADVANCE(615);
      if (lookahead == 'o') ADVANCE(616);
      if (lookahead == 'p') ADVANCE(310);
      if (lookahead == 's') ADVANCE(699);
      if (lookahead == 252) ADVANCE(928);
      if (lookahead == 954) ADVANCE(979);
      if (lookahead == 963) ADVANCE(1034);
      if (lookahead == 19968) ADVANCE(1213);
      if (lookahead == 20849) ADVANCE(23);
      if (lookahead == 21464) ADVANCE(1204);
      if (lookahead == 30340) ADVANCE(1201);
      if (lookahead == 37325) ADVANCE(1206);
      if (lookahead == 48652) ADVANCE(1232);
      if (lookahead == 50948) ADVANCE(1233);
      END_STATE();
    case 308:
      if (lookahead == 'a') ADVANCE(612);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 309:
      if (lookahead == 'a') ADVANCE(606);
      END_STATE();
    case 310:
      if (lookahead == 'a') ADVANCE(400);
      if (lookahead == 'o') ADVANCE(781);
      END_STATE();
    case 311:
      if (lookahead == 'a') ADVANCE(650);
      END_STATE();
    case 312:
      if (lookahead == 'a') ADVANCE(372);
      END_STATE();
    case 313:
      if (lookahead == 'a') ADVANCE(404);
      END_STATE();
    case 314:
      if (lookahead == 'a') ADVANCE(768);
      END_STATE();
    case 315:
      if (lookahead == 'a') ADVANCE(683);
      END_STATE();
    case 316:
      if (lookahead == 'a') ADVANCE(706);
      END_STATE();
    case 317:
      if (lookahead == 'a') ADVANCE(263);
      END_STATE();
    case 318:
      if (lookahead == 'a') ADVANCE(765);
      END_STATE();
    case 319:
      if (lookahead == 'a') ADVANCE(644);
      END_STATE();
    case 320:
      if (lookahead == 'a') ADVANCE(681);
      END_STATE();
    case 321:
      if (lookahead == 'a') ADVANCE(871);
      END_STATE();
    case 322:
      if (lookahead == 'a') ADVANCE(828);
      END_STATE();
    case 323:
      if (lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 324:
      if (lookahead == 'a') ADVANCE(647);
      END_STATE();
    case 325:
      if (lookahead == 'a') ADVANCE(837);
      END_STATE();
    case 326:
      if (lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 327:
      if (lookahead == 'a') ADVANCE(793);
      END_STATE();
    case 328:
      if (lookahead == 'a') ADVANCE(832);
      END_STATE();
    case 329:
      if (lookahead == 'a') ADVANCE(659);
      END_STATE();
    case 330:
      if (lookahead == 'a') ADVANCE(655);
      END_STATE();
    case 331:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 332:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 333:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 334:
      if (lookahead == 'a') ADVANCE(903);
      END_STATE();
    case 335:
      if (lookahead == 'a') ADVANCE(375);
      END_STATE();
    case 336:
      if (lookahead == 'a') ADVANCE(405);
      END_STATE();
    case 337:
      if (lookahead == 'a') ADVANCE(678);
      END_STATE();
    case 338:
      if (lookahead == 'a') ADVANCE(827);
      END_STATE();
    case 339:
      if (lookahead == 'a') ADVANCE(674);
      END_STATE();
    case 340:
      if (lookahead == 'a') ADVANCE(664);
      END_STATE();
    case 341:
      if (lookahead == 'a') ADVANCE(902);
      END_STATE();
    case 342:
      if (lookahead == 'a') ADVANCE(637);
      END_STATE();
    case 343:
      if (lookahead == 'a') ADVANCE(677);
      END_STATE();
    case 344:
      if (lookahead == 'a') ADVANCE(665);
      END_STATE();
    case 345:
      if (lookahead == 'a') ADVANCE(752);
      END_STATE();
    case 346:
      if (lookahead == 'a') ADVANCE(668);
      END_STATE();
    case 347:
      if (lookahead == 'a') ADVANCE(670);
      END_STATE();
    case 348:
      if (lookahead == 'a') ADVANCE(676);
      if (lookahead == 'e') ADVANCE(864);
      if (lookahead == 'y') ADVANCE(108);
      END_STATE();
    case 349:
      if (lookahead == 'a') ADVANCE(424);
      END_STATE();
    case 350:
      if (lookahead == 'a') ADVANCE(797);
      END_STATE();
    case 351:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 352:
      if (lookahead == 'a') ADVANCE(904);
      END_STATE();
    case 353:
      if (lookahead == 'a') ADVANCE(798);
      END_STATE();
    case 354:
      if (lookahead == 'a') ADVANCE(905);
      END_STATE();
    case 355:
      if (lookahead == 'a') ADVANCE(906);
      END_STATE();
    case 356:
      if (lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 357:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 358:
      if (lookahead == 'a') ADVANCE(754);
      END_STATE();
    case 359:
      if (lookahead == 'a') ADVANCE(433);
      END_STATE();
    case 360:
      if (lookahead == 'a') ADVANCE(690);
      END_STATE();
    case 361:
      if (lookahead == 'a') ADVANCE(812);
      END_STATE();
    case 362:
      if (lookahead == 'a') ADVANCE(691);
      END_STATE();
    case 363:
      if (lookahead == 'a') ADVANCE(844);
      END_STATE();
    case 364:
      if (lookahead == 'a') ADVANCE(692);
      END_STATE();
    case 365:
      if (lookahead == 'a') ADVANCE(908);
      END_STATE();
    case 366:
      if (lookahead == 'a') ADVANCE(957);
      END_STATE();
    case 367:
      if (lookahead == 'a') ADVANCE(958);
      END_STATE();
    case 368:
      if (lookahead == 'a') ADVANCE(693);
      END_STATE();
    case 369:
      if (lookahead == 'a') ADVANCE(909);
      END_STATE();
    case 370:
      if (lookahead == 'a') ADVANCE(695);
      END_STATE();
    case 371:
      if (lookahead == 'a') ADVANCE(696);
      if (lookahead == 'e') ADVANCE(881);
      if (lookahead == 'y') ADVANCE(189);
      END_STATE();
    case 372:
      if (lookahead == 'b') ADVANCE(377);
      END_STATE();
    case 373:
      if (lookahead == 'b') ADVANCE(447);
      END_STATE();
    case 374:
      if (lookahead == 'b') ADVANCE(568);
      END_STATE();
    case 375:
      if (lookahead == 'b') ADVANCE(572);
      END_STATE();
    case 376:
      if (lookahead == 'b') ADVANCE(794);
      END_STATE();
    case 377:
      if (lookahead == 'b') ADVANCE(829);
      END_STATE();
    case 378:
      if (lookahead == 'b') ADVANCE(836);
      END_STATE();
    case 379:
      if (lookahead == 'b') ADVANCE(478);
      END_STATE();
    case 380:
      if (lookahead == 'b') ADVANCE(378);
      END_STATE();
    case 381:
      if (lookahead == 'b') ADVANCE(519);
      END_STATE();
    case 382:
      if (lookahead == 'c') ADVANCE(605);
      END_STATE();
    case 383:
      if (lookahead == 'c') ADVANCE(544);
      END_STATE();
    case 384:
      if (lookahead == 'c') ADVANCE(3399);
      END_STATE();
    case 385:
      if (lookahead == 'c') ADVANCE(954);
      END_STATE();
    case 386:
      if (lookahead == 'c') ADVANCE(607);
      END_STATE();
    case 387:
      if (lookahead == 'c') ADVANCE(543);
      END_STATE();
    case 388:
      if (lookahead == 'c') ADVANCE(545);
      END_STATE();
    case 389:
      if (lookahead == 'c') ADVANCE(452);
      END_STATE();
    case 390:
      if (lookahead == 'c') ADVANCE(462);
      END_STATE();
    case 391:
      if (lookahead == 'c') ADVANCE(549);
      END_STATE();
    case 392:
      if (lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 393:
      if (lookahead == 'c') ADVANCE(487);
      END_STATE();
    case 394:
      if (lookahead == 'c') ADVANCE(346);
      END_STATE();
    case 395:
      if (lookahead == 'c') ADVANCE(513);
      END_STATE();
    case 396:
      if (lookahead == 'c') ADVANCE(552);
      END_STATE();
    case 397:
      if (lookahead == 'c') ADVANCE(370);
      END_STATE();
    case 398:
      if (lookahead == 'd') ADVANCE(3398);
      END_STATE();
    case 399:
      if (lookahead == 'd') ADVANCE(555);
      if (lookahead == 'x') ADVANCE(446);
      END_STATE();
    case 400:
      if (lookahead == 'd') ADVANCE(331);
      END_STATE();
    case 401:
      if (lookahead == 'd') ADVANCE(340);
      if (lookahead == 305) ADVANCE(123);
      END_STATE();
    case 402:
      if (lookahead == 'd') ADVANCE(575);
      END_STATE();
    case 403:
      if (lookahead == 'd') ADVANCE(304);
      END_STATE();
    case 404:
      if (lookahead == 'd') ADVANCE(708);
      END_STATE();
    case 405:
      if (lookahead == 'd') ADVANCE(712);
      END_STATE();
    case 406:
      if (lookahead == 'd') ADVANCE(267);
      END_STATE();
    case 407:
      if (lookahead == 'd') ADVANCE(715);
      END_STATE();
    case 408:
      if (lookahead == 'd') ADVANCE(342);
      END_STATE();
    case 409:
      if (lookahead == 'd') ADVANCE(449);
      END_STATE();
    case 410:
      if (lookahead == 'd') ADVANCE(269);
      END_STATE();
    case 411:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 412:
      if (lookahead == 'd') ADVANCE(501);
      END_STATE();
    case 413:
      if (lookahead == 'd') ADVANCE(588);
      END_STATE();
    case 414:
      if (lookahead == 'd') ADVANCE(278);
      END_STATE();
    case 415:
      if (lookahead == 'd') ADVANCE(463);
      END_STATE();
    case 416:
      if (lookahead == 'd') ADVANCE(457);
      END_STATE();
    case 417:
      if (lookahead == 'd') ADVANCE(466);
      END_STATE();
    case 418:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 419:
      if (lookahead == 'd') ADVANCE(467);
      END_STATE();
    case 420:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 421:
      if (lookahead == 'd') ADVANCE(716);
      END_STATE();
    case 422:
      if (lookahead == 'd') ADVANCE(494);
      END_STATE();
    case 423:
      if (lookahead == 'd') ADVANCE(579);
      END_STATE();
    case 424:
      if (lookahead == 'd') ADVANCE(332);
      END_STATE();
    case 425:
      if (lookahead == 'd') ADVANCE(580);
      END_STATE();
    case 426:
      if (lookahead == 'd') ADVANCE(475);
      END_STATE();
    case 427:
      if (lookahead == 'd') ADVANCE(476);
      END_STATE();
    case 428:
      if (lookahead == 'd') ADVANCE(481);
      END_STATE();
    case 429:
      if (lookahead == 'd') ADVANCE(482);
      END_STATE();
    case 430:
      if (lookahead == 'd') ADVANCE(483);
      END_STATE();
    case 431:
      if (lookahead == 'd') ADVANCE(484);
      END_STATE();
    case 432:
      if (lookahead == 'd') ADVANCE(344);
      END_STATE();
    case 433:
      if (lookahead == 'd') ADVANCE(357);
      END_STATE();
    case 434:
      if (lookahead == 'd') ADVANCE(361);
      END_STATE();
    case 435:
      if (lookahead == 'd') ADVANCE(512);
      END_STATE();
    case 436:
      if (lookahead == 'd') ADVANCE(514);
      END_STATE();
    case 437:
      if (lookahead == 'd') ADVANCE(518);
      END_STATE();
    case 438:
      if (lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 439:
      if (lookahead == 'e') ADVANCE(822);
      END_STATE();
    case 440:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 441:
      if (lookahead == 'e') ADVANCE(3395);
      END_STATE();
    case 442:
      if (lookahead == 'e') ADVANCE(851);
      END_STATE();
    case 443:
      if (lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 444:
      if (lookahead == 'e') ADVANCE(762);
      END_STATE();
    case 445:
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 446:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 447:
      if (lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 448:
      if (lookahead == 'e') ADVANCE(912);
      END_STATE();
    case 449:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 450:
      if (lookahead == 'e') ADVANCE(629);
      END_STATE();
    case 451:
      if (lookahead == 'e') ADVANCE(639);
      END_STATE();
    case 452:
      if (lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 453:
      if (lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 454:
      if (lookahead == 'e') ADVANCE(894);
      END_STATE();
    case 455:
      if (lookahead == 'e') ADVANCE(624);
      END_STATE();
    case 456:
      if (lookahead == 'e') ADVANCE(869);
      END_STATE();
    case 457:
      if (lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 458:
      if (lookahead == 'e') ADVANCE(796);
      END_STATE();
    case 459:
      if (lookahead == 'e') ADVANCE(825);
      END_STATE();
    case 460:
      if (lookahead == 'e') ADVANCE(795);
      END_STATE();
    case 461:
      if (lookahead == 'e') ADVANCE(833);
      END_STATE();
    case 462:
      if (lookahead == 'e') ADVANCE(748);
      END_STATE();
    case 463:
      if (lookahead == 'e') ADVANCE(656);
      END_STATE();
    case 464:
      if (lookahead == 'e') ADVANCE(661);
      END_STATE();
    case 465:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 466:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 467:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 468:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 469:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 470:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 471:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 472:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 473:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 474:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 475:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 476:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 477:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 478:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 479:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 480:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 481:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 482:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 483:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 484:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 485:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 486:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 487:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 488:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 489:
      if (lookahead == 'e') ADVANCE(662);
      if (lookahead == 1085) ADVANCE(1041);
      END_STATE();
    case 490:
      if (lookahead == 'e') ADVANCE(636);
      END_STATE();
    case 491:
      if (lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 492:
      if (lookahead == 'e') ADVANCE(776);
      END_STATE();
    case 493:
      if (lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 494:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 495:
      if (lookahead == 'e') ADVANCE(777);
      END_STATE();
    case 496:
      if (lookahead == 'e') ADVANCE(802);
      END_STATE();
    case 497:
      if (lookahead == 'e') ADVANCE(791);
      END_STATE();
    case 498:
      if (lookahead == 'e') ADVANCE(785);
      END_STATE();
    case 499:
      if (lookahead == 'e') ADVANCE(786);
      END_STATE();
    case 500:
      if (lookahead == 'e') ADVANCE(804);
      END_STATE();
    case 501:
      if (lookahead == 'e') ADVANCE(669);
      END_STATE();
    case 502:
      if (lookahead == 'e') ADVANCE(686);
      END_STATE();
    case 503:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 504:
      if (lookahead == 'e') ADVANCE(799);
      END_STATE();
    case 505:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 506:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 507:
      if (lookahead == 'e') ADVANCE(916);
      END_STATE();
    case 508:
      if (lookahead == 'e') ADVANCE(805);
      END_STATE();
    case 509:
      if (lookahead == 'e') ADVANCE(809);
      END_STATE();
    case 510:
      if (lookahead == 'e') ADVANCE(917);
      END_STATE();
    case 511:
      if (lookahead == 'e') ADVANCE(806);
      END_STATE();
    case 512:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 513:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 514:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 515:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 516:
      if (lookahead == 'e') ADVANCE(813);
      END_STATE();
    case 517:
      if (lookahead == 'e') ADVANCE(814);
      END_STATE();
    case 518:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 519:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 520:
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 521:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 522:
      if (lookahead == 'e') ADVANCE(694);
      END_STATE();
    case 523:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 524:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 525:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 526:
      if (lookahead == 'e') ADVANCE(898);
      END_STATE();
    case 527:
      if (lookahead == 'f') ADVANCE(338);
      END_STATE();
    case 528:
      if (lookahead == 'f') ADVANCE(84);
      END_STATE();
    case 529:
      if (lookahead == 'f') ADVANCE(325);
      END_STATE();
    case 530:
      if (lookahead == 'f') ADVANCE(713);
      END_STATE();
    case 531:
      if (lookahead == 'f') ADVANCE(723);
      END_STATE();
    case 532:
      if (lookahead == 'f') ADVANCE(725);
      END_STATE();
    case 533:
      if (lookahead == 'f') ADVANCE(363);
      END_STATE();
    case 534:
      if (lookahead == 'g') ADVANCE(955);
      END_STATE();
    case 535:
      if (lookahead == 'g') ADVANCE(238);
      END_STATE();
    case 536:
      if (lookahead == 'g') ADVANCE(893);
      END_STATE();
    case 537:
      if (lookahead == 'g') ADVANCE(441);
      END_STATE();
    case 538:
      if (lookahead == 'g') ADVANCE(571);
      END_STATE();
    case 539:
      if (lookahead == 'g') ADVANCE(459);
      END_STATE();
    case 540:
      if (lookahead == 'g') ADVANCE(495);
      if (lookahead == 'i') ADVANCE(627);
      END_STATE();
    case 541:
      if (lookahead == 'h') ADVANCE(3394);
      END_STATE();
    case 542:
      if (lookahead == 'h') ADVANCE(1173);
      END_STATE();
    case 543:
      if (lookahead == 'h') ADVANCE(884);
      END_STATE();
    case 544:
      if (lookahead == 'h') ADVANCE(488);
      END_STATE();
    case 545:
      if (lookahead == 'h') ADVANCE(888);
      END_STATE();
    case 546:
      if (lookahead == 'h') ADVANCE(573);
      if (lookahead == 'v') ADVANCE(721);
      END_STATE();
    case 547:
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 548:
      if (lookahead == 'h') ADVANCE(282);
      END_STATE();
    case 549:
      if (lookahead == 'h') ADVANCE(145);
      END_STATE();
    case 550:
      if (lookahead == 'h') ADVANCE(330);
      END_STATE();
    case 551:
      if (lookahead == 'h') ADVANCE(598);
      if (lookahead == 'v') ADVANCE(724);
      END_STATE();
    case 552:
      if (lookahead == 'h') ADVANCE(176);
      END_STATE();
    case 553:
      if (lookahead == 'i') ADVANCE(918);
      END_STATE();
    case 554:
      if (lookahead == 'i') ADVANCE(382);
      END_STATE();
    case 555:
      if (lookahead == 'i') ADVANCE(850);
      END_STATE();
    case 556:
      if (lookahead == 'i') ADVANCE(709);
      END_STATE();
    case 557:
      if (lookahead == 'i') ADVANCE(960);
      END_STATE();
    case 558:
      if (lookahead == 'i') ADVANCE(1171);
      END_STATE();
    case 559:
      if (lookahead == 'i') ADVANCE(820);
      if (lookahead == 'm') ADVANCE(565);
      END_STATE();
    case 560:
      if (lookahead == 'i') ADVANCE(852);
      END_STATE();
    case 561:
      if (lookahead == 'i') ADVANCE(818);
      END_STATE();
    case 562:
      if (lookahead == 'i') ADVANCE(923);
      END_STATE();
    case 563:
      if (lookahead == 'i') ADVANCE(853);
      END_STATE();
    case 564:
      if (lookahead == 'i') ADVANCE(648);
      END_STATE();
    case 565:
      if (lookahead == 'i') ADVANCE(854);
      END_STATE();
    case 566:
      if (lookahead == 'i') ADVANCE(426);
      END_STATE();
    case 567:
      if (lookahead == 'i') ADVANCE(682);
      END_STATE();
    case 568:
      if (lookahead == 'i') ADVANCE(834);
      END_STATE();
    case 569:
      if (lookahead == 'i') ADVANCE(303);
      END_STATE();
    case 570:
      if (lookahead == 'i') ADVANCE(622);
      END_STATE();
    case 571:
      if (lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 572:
      if (lookahead == 'i') ADVANCE(620);
      END_STATE();
    case 573:
      if (lookahead == 'i') ADVANCE(654);
      END_STATE();
    case 574:
      if (lookahead == 'i') ADVANCE(646);
      END_STATE();
    case 575:
      if (lookahead == 'i') ADVANCE(456);
      END_STATE();
    case 576:
      if (lookahead == 'i') ADVANCE(779);
      END_STATE();
    case 577:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 578:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 579:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 580:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 581:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 582:
      if (lookahead == 'i') ADVANCE(409);
      END_STATE();
    case 583:
      if (lookahead == 'i') ADVANCE(412);
      END_STATE();
    case 584:
      if (lookahead == 'i') ADVANCE(663);
      END_STATE();
    case 585:
      if (lookahead == 'i') ADVANCE(407);
      END_STATE();
    case 586:
      if (lookahead == 'i') ADVANCE(408);
      END_STATE();
    case 587:
      if (lookahead == 'i') ADVANCE(421);
      END_STATE();
    case 588:
      if (lookahead == 'i') ADVANCE(782);
      END_STATE();
    case 589:
      if (lookahead == 'i') ADVANCE(417);
      END_STATE();
    case 590:
      if (lookahead == 'i') ADVANCE(419);
      END_STATE();
    case 591:
      if (lookahead == 'i') ADVANCE(961);
      END_STATE();
    case 592:
      if (lookahead == 'i') ADVANCE(625);
      END_STATE();
    case 593:
      if (lookahead == 'i') ADVANCE(839);
      END_STATE();
    case 594:
      if (lookahead == 'i') ADVANCE(685);
      END_STATE();
    case 595:
      if (lookahead == 'i') ADVANCE(962);
      END_STATE();
    case 596:
      if (lookahead == 'i') ADVANCE(687);
      END_STATE();
    case 597:
      if (lookahead == 'i') ADVANCE(801);
      END_STATE();
    case 598:
      if (lookahead == 'i') ADVANCE(688);
      END_STATE();
    case 599:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 600:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 601:
      if (lookahead == 'i') ADVANCE(849);
      END_STATE();
    case 602:
      if (lookahead == 'j') ADVANCE(887);
      END_STATE();
    case 603:
      if (lookahead == 'j') ADVANCE(710);
      END_STATE();
    case 604:
      if (lookahead == 'j') ADVANCE(733);
      END_STATE();
    case 605:
      if (lookahead == 'k') ADVANCE(3392);
      END_STATE();
    case 606:
      if (lookahead == 'k') ADVANCE(3402);
      END_STATE();
    case 607:
      if (lookahead == 'k') ADVANCE(660);
      END_STATE();
    case 608:
      if (lookahead == 'k') ADVANCE(315);
      END_STATE();
    case 609:
      if (lookahead == 'k') ADVANCE(329);
      END_STATE();
    case 610:
      if (lookahead == 'k') ADVANCE(347);
      END_STATE();
    case 611:
      if (lookahead == 'k') ADVANCE(364);
      END_STATE();
    case 612:
      if (lookahead == 'l') ADVANCE(963);
      END_STATE();
    case 613:
      if (lookahead == 'l') ADVANCE(3400);
      END_STATE();
    case 614:
      if (lookahead == 'l') ADVANCE(252);
      END_STATE();
    case 615:
      if (lookahead == 'l') ADVANCE(465);
      END_STATE();
    case 616:
      if (lookahead == 'l') ADVANCE(443);
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 617:
      if (lookahead == 'l') ADVANCE(322);
      END_STATE();
    case 618:
      if (lookahead == 'l') ADVANCE(491);
      END_STATE();
    case 619:
      if (lookahead == 'l') ADVANCE(328);
      END_STATE();
    case 620:
      if (lookahead == 'l') ADVANCE(576);
      END_STATE();
    case 621:
      if (lookahead == 'l') ADVANCE(451);
      END_STATE();
    case 622:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 623:
      if (lookahead == 'l') ADVANCE(335);
      END_STATE();
    case 624:
      if (lookahead == 'l') ADVANCE(618);
      END_STATE();
    case 625:
      if (lookahead == 'l') ADVANCE(458);
      END_STATE();
    case 626:
      if (lookahead == 'l') ADVANCE(867);
      END_STATE();
    case 627:
      if (lookahead == 'l') ADVANCE(497);
      END_STATE();
    case 628:
      if (lookahead == 'm') ADVANCE(559);
      END_STATE();
    case 629:
      if (lookahead == 'm') ADVANCE(953);
      END_STATE();
    case 630:
      if (lookahead == 'm') ADVANCE(560);
      END_STATE();
    case 631:
      if (lookahead == 'm') ADVANCE(698);
      END_STATE();
    case 632:
      if (lookahead == 'm') ADVANCE(440);
      if (lookahead == 'o') ADVANCE(900);
      END_STATE();
    case 633:
      if (lookahead == 'm') ADVANCE(563);
      END_STATE();
    case 634:
      if (lookahead == 'm') ADVANCE(306);
      END_STATE();
    case 635:
      if (lookahead == 'm') ADVANCE(593);
      END_STATE();
    case 636:
      if (lookahead == 'm') ADVANCE(455);
      END_STATE();
    case 637:
      if (lookahead == 'm') ADVANCE(464);
      END_STATE();
    case 638:
      if (lookahead == 'm') ADVANCE(633);
      END_STATE();
    case 639:
      if (lookahead == 'm') ADVANCE(468);
      END_STATE();
    case 640:
      if (lookahead == 'm') ADVANCE(731);
      END_STATE();
    case 641:
      if (lookahead == 'm') ADVANCE(732);
      END_STATE();
    case 642:
      if (lookahead == 'm') ADVANCE(601);
      END_STATE();
    case 643:
      if (lookahead == 'n') ADVANCE(401);
      END_STATE();
    case 644:
      if (lookahead == 'n') ADVANCE(947);
      END_STATE();
    case 645:
      if (lookahead == 'n') ADVANCE(383);
      if (lookahead == 351) ADVANCE(621);
      END_STATE();
    case 646:
      if (lookahead == 'n') ADVANCE(535);
      END_STATE();
    case 647:
      if (lookahead == 'n') ADVANCE(925);
      END_STATE();
    case 648:
      if (lookahead == 'n') ADVANCE(402);
      END_STATE();
    case 649:
      if (lookahead == 'n') ADVANCE(389);
      END_STATE();
    case 650:
      if (lookahead == 'n') ADVANCE(736);
      END_STATE();
    case 651:
      if (lookahead == 'n') ADVANCE(848);
      END_STATE();
    case 652:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 653:
      if (lookahead == 'n') ADVANCE(550);
      END_STATE();
    case 654:
      if (lookahead == 'n') ADVANCE(872);
      END_STATE();
    case 655:
      if (lookahead == 'n') ADVANCE(548);
      END_STATE();
    case 656:
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 657:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 658:
      if (lookahead == 'n') ADVANCE(889);
      END_STATE();
    case 659:
      if (lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 660:
      if (lookahead == 'n') ADVANCE(574);
      END_STATE();
    case 661:
      if (lookahead == 'n') ADVANCE(857);
      END_STATE();
    case 662:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 663:
      if (lookahead == 'n') ADVANCE(557);
      END_STATE();
    case 664:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 665:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 666:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 667:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 668:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 669:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 670:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 671:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 672:
      if (lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 673:
      if (lookahead == 'n') ADVANCE(418);
      END_STATE();
    case 674:
      if (lookahead == 'n') ADVANCE(948);
      END_STATE();
    case 675:
      if (lookahead == 'n') ADVANCE(413);
      END_STATE();
    case 676:
      if (lookahead == 'n') ADVANCE(420);
      END_STATE();
    case 677:
      if (lookahead == 'n') ADVANCE(949);
      END_STATE();
    case 678:
      if (lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 679:
      if (lookahead == 'n') ADVANCE(583);
      END_STATE();
    case 680:
      if (lookahead == 'n') ADVANCE(333);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == 't') ADVANCE(766);
      END_STATE();
    case 681:
      if (lookahead == 'n') ADVANCE(866);
      END_STATE();
    case 682:
      if (lookahead == 'n') ADVANCE(471);
      END_STATE();
    case 683:
      if (lookahead == 'n') ADVANCE(667);
      END_STATE();
    case 684:
      if (lookahead == 'n') ADVANCE(473);
      END_STATE();
    case 685:
      if (lookahead == 'n') ADVANCE(591);
      END_STATE();
    case 686:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 687:
      if (lookahead == 'n') ADVANCE(595);
      END_STATE();
    case 688:
      if (lookahead == 'n') ADVANCE(874);
      END_STATE();
    case 689:
      if (lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 690:
      if (lookahead == 'n') ADVANCE(875);
      END_STATE();
    case 691:
      if (lookahead == 'n') ADVANCE(929);
      END_STATE();
    case 692:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 693:
      if (lookahead == 'n') ADVANCE(395);
      END_STATE();
    case 694:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 695:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 696:
      if (lookahead == 'n') ADVANCE(438);
      END_STATE();
    case 697:
      if (lookahead == 'o') ADVANCE(638);
      END_STATE();
    case 698:
      if (lookahead == 'o') ADVANCE(965);
      END_STATE();
    case 699:
      if (lookahead == 'o') ADVANCE(376);
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 700:
      if (lookahead == 'o') ADVANCE(628);
      END_STATE();
    case 701:
      if (lookahead == 'o') ADVANCE(734);
      END_STATE();
    case 702:
      if (lookahead == 'o') ADVANCE(630);
      END_STATE();
    case 703:
      if (lookahead == 'o') ADVANCE(770);
      END_STATE();
    case 704:
      if (lookahead == 'o') ADVANCE(863);
      END_STATE();
    case 705:
      if (lookahead == 'o') ADVANCE(391);
      END_STATE();
    case 706:
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 707:
      if (lookahead == 'o') ADVANCE(823);
      END_STATE();
    case 708:
      if (lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 709:
      if (lookahead == 'o') ADVANCE(651);
      if (lookahead == 243) ADVANCE(102);
      END_STATE();
    case 710:
      if (lookahead == 'o') ADVANCE(895);
      END_STATE();
    case 711:
      if (lookahead == 'o') ADVANCE(617);
      END_STATE();
    case 712:
      if (lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 713:
      if (lookahead == 'o') ADVANCE(772);
      END_STATE();
    case 714:
      if (lookahead == 'o') ADVANCE(778);
      END_STATE();
    case 715:
      if (lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 716:
      if (lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 717:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 718:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 719:
      if (lookahead == 'o') ADVANCE(821);
      END_STATE();
    case 720:
      if (lookahead == 'o') ADVANCE(788);
      END_STATE();
    case 721:
      if (lookahead == 'o') ADVANCE(783);
      END_STATE();
    case 722:
      if (lookahead == 'o') ADVANCE(619);
      END_STATE();
    case 723:
      if (lookahead == 'o') ADVANCE(790);
      END_STATE();
    case 724:
      if (lookahead == 'o') ADVANCE(784);
      END_STATE();
    case 725:
      if (lookahead == 'o') ADVANCE(807);
      END_STATE();
    case 726:
      if (lookahead == 'o') ADVANCE(435);
      END_STATE();
    case 727:
      if (lookahead == 'o') ADVANCE(436);
      END_STATE();
    case 728:
      if (lookahead == 'o') ADVANCE(396);
      END_STATE();
    case 729:
      if (lookahead == 'o') ADVANCE(846);
      END_STATE();
    case 730:
      if (lookahead == 'o') ADVANCE(847);
      END_STATE();
    case 731:
      if (lookahead == 'o') ADVANCE(966);
      END_STATE();
    case 732:
      if (lookahead == 'o') ADVANCE(967);
      END_STATE();
    case 733:
      if (lookahead == 'o') ADVANCE(897);
      END_STATE();
    case 734:
      if (lookahead == 'p') ADVANCE(3397);
      END_STATE();
    case 735:
      if (lookahead == 'p') ADVANCE(3396);
      END_STATE();
    case 736:
      if (lookahead == 'p') ADVANCE(946);
      END_STATE();
    case 737:
      if (lookahead == 'p') ADVANCE(704);
      END_STATE();
    case 738:
      if (lookahead == 'p') ADVANCE(891);
      END_STATE();
    case 739:
      if (lookahead == 'p') ADVANCE(561);
      END_STATE();
    case 740:
      if (lookahead == 'p') ADVANCE(249);
      END_STATE();
    case 741:
      if (lookahead == 'p') ADVANCE(726);
      END_STATE();
    case 742:
      if (lookahead == 'p') ADVANCE(890);
      END_STATE();
    case 743:
      if (lookahead == 'p') ADVANCE(719);
      END_STATE();
    case 744:
      if (lookahead == 'p') ADVANCE(769);
      END_STATE();
    case 745:
      if (lookahead == 'p') ADVANCE(711);
      END_STATE();
    case 746:
      if (lookahead == 'p') ADVANCE(454);
      END_STATE();
    case 747:
      if (lookahead == 'p') ADVANCE(586);
      END_STATE();
    case 748:
      if (lookahead == 'p') ADVANCE(321);
      END_STATE();
    case 749:
      if (lookahead == 'p') ADVANCE(585);
      END_STATE();
    case 750:
      if (lookahead == 'p') ADVANCE(722);
      END_STATE();
    case 751:
      if (lookahead == 'p') ADVANCE(496);
      END_STATE();
    case 752:
      if (lookahead == 'p') ADVANCE(589);
      END_STATE();
    case 753:
      if (lookahead == 'p') ADVANCE(587);
      END_STATE();
    case 754:
      if (lookahead == 'p') ADVANCE(590);
      END_STATE();
    case 755:
      if (lookahead == 'p') ADVANCE(810);
      END_STATE();
    case 756:
      if (lookahead == 'p') ADVANCE(815);
      END_STATE();
    case 757:
      if (lookahead == 'p') ADVANCE(727);
      END_STATE();
    case 758:
      if (lookahead == 'p') ADVANCE(516);
      END_STATE();
    case 759:
      if (lookahead == 'p') ADVANCE(896);
      END_STATE();
    case 760:
      if (lookahead == 'p') ADVANCE(526);
      END_STATE();
    case 761:
      if (lookahead == 'q') ADVANCE(886);
      END_STATE();
    case 762:
      if (lookahead == 'r') ADVANCE(537);
      END_STATE();
    case 763:
      if (lookahead == 'r') ADVANCE(944);
      END_STATE();
    case 764:
      if (lookahead == 'r') ADVANCE(701);
      END_STATE();
    case 765:
      if (lookahead == 'r') ADVANCE(964);
      END_STATE();
    case 766:
      if (lookahead == 'r') ADVANCE(951);
      END_STATE();
    case 767:
      if (lookahead == 'r') ADVANCE(942);
      END_STATE();
    case 768:
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 769:
      if (lookahead == 'r') ADVANCE(927);
      END_STATE();
    case 770:
      if (lookahead == 'r') ADVANCE(398);
      END_STATE();
    case 771:
      if (lookahead == 'r') ADVANCE(445);
      END_STATE();
    case 772:
      if (lookahead == 'r') ADVANCE(911);
      END_STATE();
    case 773:
      if (lookahead == 'r') ADVANCE(717);
      END_STATE();
    case 774:
      if (lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 775:
      if (lookahead == 'r') ADVANCE(569);
      END_STATE();
    case 776:
      if (lookahead == 'r') ADVANCE(567);
      END_STATE();
    case 777:
      if (lookahead == 'r') ADVANCE(566);
      END_STATE();
    case 778:
      if (lookahead == 'r') ADVANCE(824);
      END_STATE();
    case 779:
      if (lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 780:
      if (lookahead == 'r') ADVANCE(504);
      END_STATE();
    case 781:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 782:
      if (lookahead == 'r') ADVANCE(562);
      END_STATE();
    case 783:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 784:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 785:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 786:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 787:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 788:
      if (lookahead == 'r') ADVANCE(539);
      END_STATE();
    case 789:
      if (lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 790:
      if (lookahead == 'r') ADVANCE(913);
      END_STATE();
    case 791:
      if (lookahead == 'r') ADVANCE(582);
      END_STATE();
    case 792:
      if (lookahead == 'r') ADVANCE(780);
      if (lookahead == 'v') ADVANCE(320);
      END_STATE();
    case 793:
      if (lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 794:
      if (lookahead == 'r') ADVANCE(469);
      END_STATE();
    case 795:
      if (lookahead == 'r') ADVANCE(415);
      END_STATE();
    case 796:
      if (lookahead == 'r') ADVANCE(581);
      END_STATE();
    case 797:
      if (lookahead == 'r') ADVANCE(416);
      END_STATE();
    case 798:
      if (lookahead == 'r') ADVANCE(422);
      END_STATE();
    case 799:
      if (lookahead == 'r') ADVANCE(505);
      END_STATE();
    case 800:
      if (lookahead == 'r') ADVANCE(480);
      END_STATE();
    case 801:
      if (lookahead == 'r') ADVANCE(486);
      END_STATE();
    case 802:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 803:
      if (lookahead == 'r') ADVANCE(945);
      END_STATE();
    case 804:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 805:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 806:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 807:
      if (lookahead == 'r') ADVANCE(915);
      END_STATE();
    case 808:
      if (lookahead == 'r') ADVANCE(358);
      END_STATE();
    case 809:
      if (lookahead == 'r') ADVANCE(506);
      END_STATE();
    case 810:
      if (lookahead == 'r') ADVANCE(930);
      END_STATE();
    case 811:
      if (lookahead == 'r') ADVANCE(509);
      END_STATE();
    case 812:
      if (lookahead == 'r') ADVANCE(811);
      if (lookahead == 'v') ADVANCE(360);
      END_STATE();
    case 813:
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 814:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 815:
      if (lookahead == 'r') ADVANCE(931);
      END_STATE();
    case 816:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 817:
      if (lookahead == 'r') ADVANCE(525);
      END_STATE();
    case 818:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 819:
      if (lookahead == 's') ADVANCE(541);
      END_STATE();
    case 820:
      if (lookahead == 's') ADVANCE(826);
      END_STATE();
    case 821:
      if (lookahead == 's') ADVANCE(835);
      END_STATE();
    case 822:
      if (lookahead == 's') ADVANCE(442);
      if (lookahead == 'w') ADVANCE(703);
      END_STATE();
    case 823:
      if (lookahead == 's') ADVANCE(858);
      END_STATE();
    case 824:
      if (lookahead == 's') ADVANCE(892);
      END_STATE();
    case 825:
      if (lookahead == 's') ADVANCE(742);
      END_STATE();
    case 826:
      if (lookahead == 's') ADVANCE(556);
      END_STATE();
    case 827:
      if (lookahead == 's') ADVANCE(855);
      END_STATE();
    case 828:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 829:
      if (lookahead == 's') ADVANCE(745);
      END_STATE();
    case 830:
      if (lookahead == 's') ADVANCE(672);
      END_STATE();
    case 831:
      if (lookahead == 's') ADVANCE(318);
      END_STATE();
    case 832:
      if (lookahead == 's') ADVANCE(270);
      END_STATE();
    case 833:
      if (lookahead == 's') ADVANCE(453);
      END_STATE();
    case 834:
      if (lookahead == 's') ADVANCE(351);
      END_STATE();
    case 835:
      if (lookahead == 's') ADVANCE(718);
      END_STATE();
    case 836:
      if (lookahead == 's') ADVANCE(750);
      END_STATE();
    case 837:
      if (lookahead == 's') ADVANCE(868);
      END_STATE();
    case 838:
      if (lookahead == 's') ADVANCE(479);
      END_STATE();
    case 839:
      if (lookahead == 's') ADVANCE(485);
      END_STATE();
    case 840:
      if (lookahead == 's') ADVANCE(500);
      END_STATE();
    case 841:
      if (lookahead == 's') ADVANCE(689);
      END_STATE();
    case 842:
      if (lookahead == 's') ADVANCE(508);
      END_STATE();
    case 843:
      if (lookahead == 's') ADVANCE(511);
      END_STATE();
    case 844:
      if (lookahead == 's') ADVANCE(876);
      END_STATE();
    case 845:
      if (lookahead == 's') ADVANCE(517);
      END_STATE();
    case 846:
      if (lookahead == 's') ADVANCE(877);
      END_STATE();
    case 847:
      if (lookahead == 's') ADVANCE(878);
      END_STATE();
    case 848:
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 849:
      if (lookahead == 's') ADVANCE(524);
      END_STATE();
    case 850:
      if (lookahead == 't') ADVANCE(3393);
      END_STATE();
    case 851:
      if (lookahead == 't') ADVANCE(3401);
      END_STATE();
    case 852:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 853:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 854:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 855:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 856:
      if (lookahead == 't') ADVANCE(542);
      END_STATE();
    case 857:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 858:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 859:
      if (lookahead == 't') ADVANCE(317);
      END_STATE();
    case 860:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 861:
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 862:
      if (lookahead == 't') ADVANCE(558);
      END_STATE();
    case 863:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 864:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 865:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 866:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 867:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 868:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 869:
      if (lookahead == 't') ADVANCE(773);
      END_STATE();
    case 870:
      if (lookahead == 't') ADVANCE(490);
      END_STATE();
    case 871:
      if (lookahead == 't') ADVANCE(609);
      END_STATE();
    case 872:
      if (lookahead == 't') ADVANCE(498);
      END_STATE();
    case 873:
      if (lookahead == 't') ADVANCE(800);
      END_STATE();
    case 874:
      if (lookahead == 't') ADVANCE(499);
      END_STATE();
    case 875:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 876:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 877:
      if (lookahead == 't') ADVANCE(366);
      END_STATE();
    case 878:
      if (lookahead == 't') ADVANCE(367);
      END_STATE();
    case 879:
      if (lookahead == 't') ADVANCE(817);
      END_STATE();
    case 880:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 881:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 882:
      if (lookahead == 'u') ADVANCE(528);
      END_STATE();
    case 883:
      if (lookahead == 'u') ADVANCE(673);
      if (lookahead == 232) ADVANCE(114);
      END_STATE();
    case 884:
      if (lookahead == 'u') ADVANCE(919);
      END_STATE();
    case 885:
      if (lookahead == 'u') ADVANCE(735);
      END_STATE();
    case 886:
      if (lookahead == 'u') ADVANCE(302);
      END_STATE();
    case 887:
      if (lookahead == 'u') ADVANCE(250);
      END_STATE();
    case 888:
      if (lookahead == 'u') ADVANCE(920);
      END_STATE();
    case 889:
      if (lookahead == 'u') ADVANCE(926);
      END_STATE();
    case 890:
      if (lookahead == 'u') ADVANCE(626);
      END_STATE();
    case 891:
      if (lookahead == 'u') ADVANCE(503);
      END_STATE();
    case 892:
      if (lookahead == 'u') ADVANCE(658);
      END_STATE();
    case 893:
      if (lookahead == 'u') ADVANCE(597);
      END_STATE();
    case 894:
      if (lookahead == 'u') ADVANCE(865);
      END_STATE();
    case 895:
      if (lookahead == 'u') ADVANCE(787);
      END_STATE();
    case 896:
      if (lookahead == 'u') ADVANCE(520);
      END_STATE();
    case 897:
      if (lookahead == 'u') ADVANCE(816);
      END_STATE();
    case 898:
      if (lookahead == 'u') ADVANCE(880);
      END_STATE();
    case 899:
      if (lookahead == 'v') ADVANCE(940);
      END_STATE();
    case 900:
      if (lookahead == 'v') ADVANCE(311);
      END_STATE();
    case 901:
      if (lookahead == 'v') ADVANCE(720);
      END_STATE();
    case 902:
      if (lookahead == 'v') ADVANCE(337);
      END_STATE();
    case 903:
      if (lookahead == 'v') ADVANCE(319);
      END_STATE();
    case 904:
      if (lookahead == 'v') ADVANCE(324);
      END_STATE();
    case 905:
      if (lookahead == 'v') ADVANCE(339);
      END_STATE();
    case 906:
      if (lookahead == 'v') ADVANCE(343);
      END_STATE();
    case 907:
      if (lookahead == 'v') ADVANCE(477);
      END_STATE();
    case 908:
      if (lookahead == 'v') ADVANCE(362);
      END_STATE();
    case 909:
      if (lookahead == 'v') ADVANCE(368);
      END_STATE();
    case 910:
      if (lookahead == 'w') ADVANCE(200);
      END_STATE();
    case 911:
      if (lookahead == 'w') ADVANCE(350);
      END_STATE();
    case 912:
      if (lookahead == 'w') ADVANCE(584);
      END_STATE();
    case 913:
      if (lookahead == 'w') ADVANCE(327);
      END_STATE();
    case 914:
      if (lookahead == 'w') ADVANCE(460);
      END_STATE();
    case 915:
      if (lookahead == 'w') ADVANCE(353);
      END_STATE();
    case 916:
      if (lookahead == 'w') ADVANCE(594);
      END_STATE();
    case 917:
      if (lookahead == 'w') ADVANCE(596);
      END_STATE();
    case 918:
      if (lookahead == 'x') ADVANCE(885);
      END_STATE();
    case 919:
      if (lookahead == 'y') ADVANCE(1174);
      END_STATE();
    case 920:
      if (lookahead == 'y') ADVANCE(1172);
      END_STATE();
    case 921:
      if (lookahead == 'y') ADVANCE(25);
      END_STATE();
    case 922:
      if (lookahead == 'y') ADVANCE(493);
      END_STATE();
    case 923:
      if (lookahead == 'y') ADVANCE(714);
      END_STATE();
    case 924:
      if (lookahead == 'z') ADVANCE(707);
      END_STATE();
    case 925:
      if (lookahead == 'z') ADVANCE(349);
      END_STATE();
    case 926:
      if (lookahead == 'z') ADVANCE(275);
      END_STATE();
    case 927:
      if (lookahead == 'z') ADVANCE(448);
      END_STATE();
    case 928:
      if (lookahead == 'z') ADVANCE(492);
      END_STATE();
    case 929:
      if (lookahead == 'z') ADVANCE(359);
      END_STATE();
    case 930:
      if (lookahead == 'z') ADVANCE(507);
      END_STATE();
    case 931:
      if (lookahead == 'z') ADVANCE(510);
      END_STATE();
    case 932:
      if (lookahead == 'z') ADVANCE(729);
      END_STATE();
    case 933:
      if (lookahead == 'z') ADVANCE(730);
      END_STATE();
    case 934:
      if (lookahead == 171) ADVANCE(3598);
      END_STATE();
    case 935:
      if (lookahead == 171) ADVANCE(3580);
      END_STATE();
    case 936:
      if (lookahead == 171) ADVANCE(3558);
      END_STATE();
    case 937:
      if (lookahead == 171) ADVANCE(3467);
      END_STATE();
    case 938:
      if (lookahead == 171) ADVANCE(3559);
      END_STATE();
    case 939:
      if (lookahead == 171) ADVANCE(3469);
      END_STATE();
    case 940:
      if (lookahead == 224) ADVANCE(110);
      END_STATE();
    case 941:
      if (lookahead == 224) ADVANCE(78);
      END_STATE();
    case 942:
      if (lookahead == 224) ADVANCE(747);
      END_STATE();
    case 943:
      if (lookahead == 224) ADVANCE(205);
      END_STATE();
    case 944:
      if (lookahead == 225) ADVANCE(749);
      END_STATE();
    case 945:
      if (lookahead == 225) ADVANCE(753);
      END_STATE();
    case 946:
      if (lookahead == 229) ADVANCE(44);
      END_STATE();
    case 947:
      if (lookahead == 231) ADVANCE(314);
      END_STATE();
    case 948:
      if (lookahead == 231) ADVANCE(313);
      END_STATE();
    case 949:
      if (lookahead == 231) ADVANCE(336);
      END_STATE();
    case 950:
      if (lookahead == 234) ADVANCE(873);
      END_STATE();
    case 951:
      if (lookahead == 234) ADVANCE(671);
      END_STATE();
    case 952:
      if (lookahead == 234) ADVANCE(879);
      END_STATE();
    case 953:
      if (lookahead == 243) ADVANCE(775);
      END_STATE();
    case 954:
      if (lookahead == 243) ADVANCE(126);
      END_STATE();
    case 955:
      if (lookahead == 252) ADVANCE(649);
      END_STATE();
    case 956:
      if (lookahead == 263) ADVANCE(124);
      END_STATE();
    case 957:
      if (lookahead == 263) ADVANCE(167);
      END_STATE();
    case 958:
      if (lookahead == 263) ADVANCE(173);
      END_STATE();
    case 959:
      if (lookahead == 273) ADVANCE(968);
      END_STATE();
    case 960:
      if (lookahead == 281) ADVANCE(859);
      END_STATE();
    case 961:
      if (lookahead == 281) ADVANCE(860);
      END_STATE();
    case 962:
      if (lookahead == 281) ADVANCE(861);
      END_STATE();
    case 963:
      if (lookahead == 305) ADVANCE(643);
      END_STATE();
    case 964:
      if (lookahead == 305) ADVANCE(623);
      END_STATE();
    case 965:
      if (lookahead == 380) ADVANCE(474);
      END_STATE();
    case 966:
      if (lookahead == 380) ADVANCE(521);
      END_STATE();
    case 967:
      if (lookahead == 380) ADVANCE(523);
      END_STATE();
    case 968:
      if (lookahead == 432) ADVANCE(1175);
      END_STATE();
    case 969:
      if (lookahead == 940) ADVANCE(1010);
      END_STATE();
    case 970:
      if (lookahead == 940) ADVANCE(37);
      END_STATE();
    case 971:
      if (lookahead == 940) ADVANCE(1012);
      END_STATE();
    case 972:
      if (lookahead == 941) ADVANCE(1030);
      if (lookahead == 942) ADVANCE(236);
      END_STATE();
    case 973:
      if (lookahead == 943) ADVANCE(57);
      END_STATE();
    case 974:
      if (lookahead == 943) ADVANCE(981);
      END_STATE();
    case 975:
      if (lookahead == 943) ADVANCE(982);
      END_STATE();
    case 976:
      if (lookahead == 943) ADVANCE(208);
      END_STATE();
    case 977:
      if (lookahead == 945) ADVANCE(999);
      END_STATE();
    case 978:
      if (lookahead == 945) ADVANCE(1037);
      END_STATE();
    case 979:
      if (lookahead == 945) ADVANCE(1033);
      END_STATE();
    case 980:
      if (lookahead == 945) ADVANCE(75);
      END_STATE();
    case 981:
      if (lookahead == 945) ADVANCE(63);
      END_STATE();
    case 982:
      if (lookahead == 945) ADVANCE(179);
      END_STATE();
    case 983:
      if (lookahead == 945) ADVANCE(1038);
      END_STATE();
    case 984:
      if (lookahead == 945) ADVANCE(204);
      END_STATE();
    case 985:
      if (lookahead == 945) ADVANCE(1002);
      END_STATE();
    case 986:
      if (lookahead == 946) ADVANCE(1015);
      END_STATE();
    case 987:
      if (lookahead == 949) ADVANCE(973);
      END_STATE();
    case 988:
      if (lookahead == 949) ADVANCE(974);
      END_STATE();
    case 989:
      if (lookahead == 949) ADVANCE(1000);
      END_STATE();
    case 990:
      if (lookahead == 949) ADVANCE(975);
      END_STATE();
    case 991:
      if (lookahead == 949) ADVANCE(1001);
      END_STATE();
    case 992:
      if (lookahead == 949) ADVANCE(976);
      END_STATE();
    case 993:
      if (lookahead == 951) ADVANCE(1031);
      END_STATE();
    case 994:
      if (lookahead == 951) ADVANCE(279);
      END_STATE();
    case 995:
      if (lookahead == 951) ADVANCE(280);
      END_STATE();
    case 996:
      if (lookahead == 951) ADVANCE(1032);
      END_STATE();
    case 997:
      if (lookahead == 952) ADVANCE(993);
      END_STATE();
    case 998:
      if (lookahead == 952) ADVANCE(996);
      END_STATE();
    case 999:
      if (lookahead == 953) ADVANCE(51);
      END_STATE();
    case 1000:
      if (lookahead == 953) ADVANCE(83);
      END_STATE();
    case 1001:
      if (lookahead == 953) ADVANCE(194);
      END_STATE();
    case 1002:
      if (lookahead == 953) ADVANCE(211);
      END_STATE();
    case 1003:
      if (lookahead == 954) ADVANCE(977);
      END_STATE();
    case 1004:
      if (lookahead == 954) ADVANCE(969);
      END_STATE();
    case 1005:
      if (lookahead == 954) ADVANCE(971);
      END_STATE();
    case 1006:
      if (lookahead == 954) ADVANCE(985);
      END_STATE();
    case 1007:
      if (lookahead == 955) ADVANCE(972);
      END_STATE();
    case 1008:
      if (lookahead == 956) ADVANCE(1023);
      END_STATE();
    case 1009:
      if (lookahead == 956) ADVANCE(1025);
      END_STATE();
    case 1010:
      if (lookahead == 957) ADVANCE(989);
      END_STATE();
    case 1011:
      if (lookahead == 957) ADVANCE(980);
      END_STATE();
    case 1012:
      if (lookahead == 957) ADVANCE(991);
      END_STATE();
    case 1013:
      if (lookahead == 957) ADVANCE(984);
      END_STATE();
    case 1014:
      if (lookahead == 959) ADVANCE(986);
      END_STATE();
    case 1015:
      if (lookahead == 959) ADVANCE(1007);
      END_STATE();
    case 1016:
      if (lookahead == 959) ADVANCE(1026);
      END_STATE();
    case 1017:
      if (lookahead == 959) ADVANCE(1039);
      END_STATE();
    case 1018:
      if (lookahead == 959) ADVANCE(97);
      END_STATE();
    case 1019:
      if (lookahead == 959) ADVANCE(1040);
      END_STATE();
    case 1020:
      if (lookahead == 959) ADVANCE(1029);
      END_STATE();
    case 1021:
      if (lookahead == 960) ADVANCE(1014);
      END_STATE();
    case 1022:
      if (lookahead == 960) ADVANCE(1027);
      END_STATE();
    case 1023:
      if (lookahead == 960) ADVANCE(1016);
      END_STATE();
    case 1024:
      if (lookahead == 960) ADVANCE(1028);
      END_STATE();
    case 1025:
      if (lookahead == 960) ADVANCE(1020);
      END_STATE();
    case 1026:
      if (lookahead == 961) ADVANCE(987);
      END_STATE();
    case 1027:
      if (lookahead == 961) ADVANCE(1017);
      END_STATE();
    case 1028:
      if (lookahead == 961) ADVANCE(1019);
      END_STATE();
    case 1029:
      if (lookahead == 961) ADVANCE(992);
      END_STATE();
    case 1030:
      if (lookahead == 962) ADVANCE(243);
      END_STATE();
    case 1031:
      if (lookahead == 963) ADVANCE(994);
      END_STATE();
    case 1032:
      if (lookahead == 963) ADVANCE(995);
      END_STATE();
    case 1033:
      if (lookahead == 964) ADVANCE(970);
      END_STATE();
    case 1034:
      if (lookahead == 964) ADVANCE(1018);
      END_STATE();
    case 1035:
      if (lookahead == 964) ADVANCE(978);
      END_STATE();
    case 1036:
      if (lookahead == 964) ADVANCE(983);
      END_STATE();
    case 1037:
      if (lookahead == 967) ADVANCE(988);
      END_STATE();
    case 1038:
      if (lookahead == 967) ADVANCE(990);
      END_STATE();
    case 1039:
      if (lookahead == 974) ADVANCE(997);
      END_STATE();
    case 1040:
      if (lookahead == 974) ADVANCE(998);
      END_STATE();
    case 1041:
      if (lookahead == 1072) ADVANCE(31);
      END_STATE();
    case 1042:
      if (lookahead == 1072) ADVANCE(1061);
      END_STATE();
    case 1043:
      if (lookahead == 1072) ADVANCE(1105);
      END_STATE();
    case 1044:
      if (lookahead == 1072) ADVANCE(1066);
      END_STATE();
    case 1045:
      if (lookahead == 1072) ADVANCE(1106);
      END_STATE();
    case 1046:
      if (lookahead == 1072) ADVANCE(274);
      END_STATE();
    case 1047:
      if (lookahead == 1072) ADVANCE(276);
      END_STATE();
    case 1048:
      if (lookahead == 1072) ADVANCE(277);
      END_STATE();
    case 1049:
      if (lookahead == 1072) ADVANCE(50);
      END_STATE();
    case 1050:
      if (lookahead == 1072) ADVANCE(1068);
      END_STATE();
    case 1051:
      if (lookahead == 1072) ADVANCE(1108);
      END_STATE();
    case 1052:
      if (lookahead == 1072) ADVANCE(1109);
      END_STATE();
    case 1053:
      if (lookahead == 1073) ADVANCE(1160);
      END_STATE();
    case 1054:
      if (lookahead == 1073) ADVANCE(1157);
      END_STATE();
    case 1055:
      if (lookahead == 1073) ADVANCE(1159);
      END_STATE();
    case 1056:
      if (lookahead == 1073) ADVANCE(1161);
      END_STATE();
    case 1057:
      if (lookahead == 1073) ADVANCE(1162);
      END_STATE();
    case 1058:
      if (lookahead == 1073) ADVANCE(1163);
      END_STATE();
    case 1059:
      if (lookahead == 1073) ADVANCE(1164);
      END_STATE();
    case 1060:
      if (lookahead == 1074) ADVANCE(1156);
      if (lookahead == 1080) ADVANCE(80);
      END_STATE();
    case 1061:
      if (lookahead == 1074) ADVANCE(1043);
      END_STATE();
    case 1062:
      if (lookahead == 1074) ADVANCE(207);
      END_STATE();
    case 1063:
      if (lookahead == 1074) ADVANCE(1158);
      END_STATE();
    case 1064:
      if (lookahead == 1076) ADVANCE(1042);
      END_STATE();
    case 1065:
      if (lookahead == 1076) ADVANCE(1049);
      END_STATE();
    case 1066:
      if (lookahead == 1076) ADVANCE(73);
      END_STATE();
    case 1067:
      if (lookahead == 1076) ADVANCE(86);
      END_STATE();
    case 1068:
      if (lookahead == 1076) ADVANCE(96);
      END_STATE();
    case 1069:
      if (lookahead == 1076) ADVANCE(99);
      END_STATE();
    case 1070:
      if (lookahead == 1076) ADVANCE(1076);
      END_STATE();
    case 1071:
      if (lookahead == 1077) ADVANCE(1145);
      END_STATE();
    case 1072:
      if (lookahead == 1077) ADVANCE(1063);
      END_STATE();
    case 1073:
      if (lookahead == 1077) ADVANCE(1099);
      END_STATE();
    case 1074:
      if (lookahead == 1077) ADVANCE(138);
      END_STATE();
    case 1075:
      if (lookahead == 1077) ADVANCE(46);
      if (lookahead == 1080) ADVANCE(1169);
      END_STATE();
    case 1076:
      if (lookahead == 1077) ADVANCE(55);
      END_STATE();
    case 1077:
      if (lookahead == 1077) ADVANCE(1067);
      END_STATE();
    case 1078:
      if (lookahead == 1077) ADVANCE(1131);
      END_STATE();
    case 1079:
      if (lookahead == 1077) ADVANCE(1069);
      END_STATE();
    case 1080:
      if (lookahead == 1077) ADVANCE(1101);
      END_STATE();
    case 1081:
      if (lookahead == 1077) ADVANCE(1133);
      END_STATE();
    case 1082:
      if (lookahead == 1077) ADVANCE(1102);
      END_STATE();
    case 1083:
      if (lookahead == 1077) ADVANCE(1134);
      END_STATE();
    case 1084:
      if (lookahead == 1077) ADVANCE(1152);
      END_STATE();
    case 1085:
      if (lookahead == 1077) ADVANCE(1153);
      END_STATE();
    case 1086:
      if (lookahead == 1078) ADVANCE(1074);
      END_STATE();
    case 1087:
      if (lookahead == 1078) ADVANCE(1071);
      END_STATE();
    case 1088:
      if (lookahead == 1078) ADVANCE(1084);
      END_STATE();
    case 1089:
      if (lookahead == 1078) ADVANCE(1085);
      END_STATE();
    case 1090:
      if (lookahead == 1079) ADVANCE(1044);
      if (lookahead == 1087) ADVANCE(1127);
      END_STATE();
    case 1091:
      if (lookahead == 1079) ADVANCE(1050);
      if (lookahead == 1087) ADVANCE(1132);
      END_STATE();
    case 1092:
      if (lookahead == 1080) ADVANCE(1140);
      END_STATE();
    case 1093:
      if (lookahead == 1080) ADVANCE(142);
      END_STATE();
    case 1094:
      if (lookahead == 1080) ADVANCE(201);
      END_STATE();
    case 1095:
      if (lookahead == 1080) ADVANCE(202);
      END_STATE();
    case 1096:
      if (lookahead == 1084) ADVANCE(1092);
      END_STATE();
    case 1097:
      if (lookahead == 1084) ADVANCE(1096);
      END_STATE();
    case 1098:
      if (lookahead == 1084) ADVANCE(1112);
      END_STATE();
    case 1099:
      if (lookahead == 1084) ADVANCE(1113);
      END_STATE();
    case 1100:
      if (lookahead == 1084) ADVANCE(1115);
      END_STATE();
    case 1101:
      if (lookahead == 1084) ADVANCE(1116);
      END_STATE();
    case 1102:
      if (lookahead == 1084) ADVANCE(1117);
      END_STATE();
    case 1103:
      if (lookahead == 1084) ADVANCE(1120);
      END_STATE();
    case 1104:
      if (lookahead == 1084) ADVANCE(1121);
      END_STATE();
    case 1105:
      if (lookahead == 1085) ADVANCE(1075);
      END_STATE();
    case 1106:
      if (lookahead == 1085) ADVANCE(1046);
      END_STATE();
    case 1107:
      if (lookahead == 1085) ADVANCE(258);
      END_STATE();
    case 1108:
      if (lookahead == 1085) ADVANCE(1047);
      END_STATE();
    case 1109:
      if (lookahead == 1085) ADVANCE(1048);
      END_STATE();
    case 1110:
      if (lookahead == 1086) ADVANCE(1097);
      END_STATE();
    case 1111:
      if (lookahead == 1086) ADVANCE(1064);
      END_STATE();
    case 1112:
      if (lookahead == 1086) ADVANCE(1086);
      END_STATE();
    case 1113:
      if (lookahead == 1086) ADVANCE(1144);
      END_STATE();
    case 1114:
      if (lookahead == 1086) ADVANCE(77);
      END_STATE();
    case 1115:
      if (lookahead == 1086) ADVANCE(1087);
      END_STATE();
    case 1116:
      if (lookahead == 1086) ADVANCE(1146);
      END_STATE();
    case 1117:
      if (lookahead == 1086) ADVANCE(1147);
      END_STATE();
    case 1118:
      if (lookahead == 1086) ADVANCE(174);
      END_STATE();
    case 1119:
      if (lookahead == 1086) ADVANCE(178);
      END_STATE();
    case 1120:
      if (lookahead == 1086) ADVANCE(1088);
      END_STATE();
    case 1121:
      if (lookahead == 1086) ADVANCE(1089);
      END_STATE();
    case 1122:
      if (lookahead == 1087) ADVANCE(1078);
      END_STATE();
    case 1123:
      if (lookahead == 1087) ADVANCE(1130);
      END_STATE();
    case 1124:
      if (lookahead == 1087) ADVANCE(1081);
      END_STATE();
    case 1125:
      if (lookahead == 1087) ADVANCE(1083);
      END_STATE();
    case 1126:
      if (lookahead == 1088) ADVANCE(1155);
      END_STATE();
    case 1127:
      if (lookahead == 1088) ADVANCE(1077);
      END_STATE();
    case 1128:
      if (lookahead == 1088) ADVANCE(1114);
      END_STATE();
    case 1129:
      if (lookahead == 1088) ADVANCE(1142);
      END_STATE();
    case 1130:
      if (lookahead == 1088) ADVANCE(1072);
      END_STATE();
    case 1131:
      if (lookahead == 1088) ADVANCE(1073);
      END_STATE();
    case 1132:
      if (lookahead == 1088) ADVANCE(1079);
      END_STATE();
    case 1133:
      if (lookahead == 1088) ADVANCE(1080);
      END_STATE();
    case 1134:
      if (lookahead == 1088) ADVANCE(1082);
      END_STATE();
    case 1135:
      if (lookahead == 1088) ADVANCE(1118);
      END_STATE();
    case 1136:
      if (lookahead == 1088) ADVANCE(1119);
      END_STATE();
    case 1137:
      if (lookahead == 1089) ADVANCE(1143);
      END_STATE();
    case 1138:
      if (lookahead == 1089) ADVANCE(1148);
      END_STATE();
    case 1139:
      if (lookahead == 1089) ADVANCE(1149);
      END_STATE();
    case 1140:
      if (lookahead == 1090) ADVANCE(68);
      END_STATE();
    case 1141:
      if (lookahead == 1090) ADVANCE(1165);
      END_STATE();
    case 1142:
      if (lookahead == 1090) ADVANCE(1168);
      END_STATE();
    case 1143:
      if (lookahead == 1090) ADVANCE(1128);
      END_STATE();
    case 1144:
      if (lookahead == 1090) ADVANCE(1045);
      END_STATE();
    case 1145:
      if (lookahead == 1090) ADVANCE(76);
      END_STATE();
    case 1146:
      if (lookahead == 1090) ADVANCE(1051);
      END_STATE();
    case 1147:
      if (lookahead == 1090) ADVANCE(1052);
      END_STATE();
    case 1148:
      if (lookahead == 1090) ADVANCE(1135);
      END_STATE();
    case 1149:
      if (lookahead == 1090) ADVANCE(1136);
      END_STATE();
    case 1150:
      if (lookahead == 1090) ADVANCE(1166);
      END_STATE();
    case 1151:
      if (lookahead == 1090) ADVANCE(1167);
      END_STATE();
    case 1152:
      if (lookahead == 1090) ADVANCE(193);
      END_STATE();
    case 1153:
      if (lookahead == 1090) ADVANCE(198);
      END_STATE();
    case 1154:
      if (lookahead == 1091) ADVANCE(41);
      END_STATE();
    case 1155:
      if (lookahead == 1093) ADVANCE(1154);
      END_STATE();
    case 1156:
      if (lookahead == 1098) ADVANCE(1126);
      END_STATE();
    case 1157:
      if (lookahead == 1098) ADVANCE(1070);
      END_STATE();
    case 1158:
      if (lookahead == 1098) ADVANCE(1129);
      END_STATE();
    case 1159:
      if (lookahead == 1099) ADVANCE(1137);
      END_STATE();
    case 1160:
      if (lookahead == 1099) ADVANCE(1141);
      END_STATE();
    case 1161:
      if (lookahead == 1099) ADVANCE(1138);
      END_STATE();
    case 1162:
      if (lookahead == 1099) ADVANCE(1139);
      END_STATE();
    case 1163:
      if (lookahead == 1099) ADVANCE(1150);
      END_STATE();
    case 1164:
      if (lookahead == 1099) ADVANCE(1151);
      END_STATE();
    case 1165:
      if (lookahead == 1100) ADVANCE(87);
      END_STATE();
    case 1166:
      if (lookahead == 1100) ADVANCE(182);
      END_STATE();
    case 1167:
      if (lookahead == 1100) ADVANCE(187);
      END_STATE();
    case 1168:
      if (lookahead == 1103) ADVANCE(1107);
      END_STATE();
    case 1169:
      if (lookahead == 1103) ADVANCE(150);
      END_STATE();
    case 1170:
      if (lookahead == 7847) ADVANCE(657);
      END_STATE();
    case 1171:
      if (lookahead == 7871) ADVANCE(740);
      END_STATE();
    case 1172:
      if (lookahead == 7875) ADVANCE(652);
      END_STATE();
    case 1173:
      if (lookahead == 7875) ADVANCE(58);
      END_STATE();
    case 1174:
      if (lookahead == 7875) ADVANCE(666);
      END_STATE();
    case 1175:
      if (lookahead == 7907) ADVANCE(392);
      END_STATE();
    case 1176:
      if (lookahead == 8220) ADVANCE(3573);
      END_STATE();
    case 1177:
      if (lookahead == 8222) ADVANCE(3600);
      END_STATE();
    case 1178:
      if (lookahead == 8222) ADVANCE(3471);
      END_STATE();
    case 1179:
      if (lookahead == 8222) ADVANCE(3560);
      END_STATE();
    case 1180:
      if (lookahead == 8222) ADVANCE(3473);
      END_STATE();
    case 1181:
      if (lookahead == 8222) ADVANCE(3561);
      END_STATE();
    case 1182:
      if (lookahead == 8222) ADVANCE(3584);
      END_STATE();
    case 1183:
      if (lookahead == 12290) ADVANCE(3529);
      if (lookahead == 65292) ADVANCE(1207);
      END_STATE();
    case 1184:
      if (lookahead == 12290) ADVANCE(3527);
      if (lookahead == 65292) ADVANCE(1192);
      END_STATE();
    case 1185:
      if (lookahead == 12290) ADVANCE(3436);
      END_STATE();
    case 1186:
      if (lookahead == 12290) ADVANCE(3568);
      END_STATE();
    case 1187:
      if (lookahead == 12290) ADVANCE(3571);
      END_STATE();
    case 1188:
      if (lookahead == 12290) ADVANCE(3519);
      END_STATE();
    case 1189:
      if (lookahead == 12290) ADVANCE(3521);
      END_STATE();
    case 1190:
      if (lookahead == 19988) ADVANCE(1202);
      END_STATE();
    case 1191:
      if (lookahead == 19988) ADVANCE(1203);
      END_STATE();
    case 1192:
      if (lookahead == 20006) ADVANCE(1191);
      END_STATE();
    case 1193:
      if (lookahead == 20132) ADVANCE(1183);
      END_STATE();
    case 1194:
      if (lookahead == 20132) ADVANCE(1184);
      END_STATE();
    case 1195:
      if (lookahead == 20197) ADVANCE(1209);
      END_STATE();
    case 1196:
      if (lookahead == 20197) ADVANCE(1210);
      END_STATE();
    case 1197:
      if (lookahead == 20316) ADVANCE(1186);
      END_STATE();
    case 1198:
      if (lookahead == 20316) ADVANCE(1187);
      END_STATE();
    case 1199:
      if (lookahead == 21040) ADVANCE(104);
      END_STATE();
    case 1200:
      if (lookahead == 21040) ADVANCE(121);
      END_STATE();
    case 1201:
      if (lookahead == 21205) ADVANCE(1197);
      if (lookahead == 25805) ADVANCE(1198);
      END_STATE();
    case 1202:
      if (lookahead == 21487) ADVANCE(1195);
      END_STATE();
    case 1203:
      if (lookahead == 21487) ADVANCE(1196);
      END_STATE();
    case 1204:
      if (lookahead == 22522) ADVANCE(1199);
      END_STATE();
    case 1205:
      if (lookahead == 22522) ADVANCE(1208);
      END_STATE();
    case 1206:
      if (lookahead == 23450) ADVANCE(1205);
      END_STATE();
    case 1207:
      if (lookahead == 24182) ADVANCE(1190);
      END_STATE();
    case 1208:
      if (lookahead == 24213) ADVANCE(1200);
      END_STATE();
    case 1209:
      if (lookahead == 24555) ADVANCE(1215);
      END_STATE();
    case 1210:
      if (lookahead == 24555) ADVANCE(1214);
      END_STATE();
    case 1211:
      if (lookahead == 25552) ADVANCE(1193);
      END_STATE();
    case 1212:
      if (lookahead == 25552) ADVANCE(1194);
      END_STATE();
    case 1213:
      if (lookahead == 33268) ADVANCE(1185);
      END_STATE();
    case 1214:
      if (lookahead == 36681) ADVANCE(1189);
      END_STATE();
    case 1215:
      if (lookahead == 36827) ADVANCE(1188);
      END_STATE();
    case 1216:
      if (lookahead == 44172) ADVANCE(35);
      END_STATE();
    case 1217:
      if (lookahead == 44256) ADVANCE(237);
      END_STATE();
    case 1218:
      if (lookahead == 45716) ADVANCE(48);
      END_STATE();
    case 1219:
      if (lookahead == 45768) ADVANCE(1223);
      END_STATE();
    case 1220:
      if (lookahead == 45768) ADVANCE(1224);
      END_STATE();
    case 1221:
      if (lookahead == 45768) ADVANCE(1225);
      END_STATE();
    case 1222:
      if (lookahead == 45768) ADVANCE(1226);
      END_STATE();
    case 1223:
      if (lookahead == 45796) ADVANCE(253);
      END_STATE();
    case 1224:
      if (lookahead == 45796) ADVANCE(255);
      END_STATE();
    case 1225:
      if (lookahead == 45796) ADVANCE(256);
      END_STATE();
    case 1226:
      if (lookahead == 45796) ADVANCE(257);
      END_STATE();
    case 1227:
      if (lookahead == 45796) ADVANCE(24);
      END_STATE();
    case 1228:
      if (lookahead == 45936) ADVANCE(1253);
      END_STATE();
    case 1229:
      if (lookahead == 46028) ADVANCE(1237);
      END_STATE();
    case 1230:
      if (lookahead == 46108) ADVANCE(49);
      END_STATE();
    case 1231:
      if (lookahead == 46244) ADVANCE(1249);
      END_STATE();
    case 1232:
      if (lookahead == 47004) ADVANCE(1260);
      END_STATE();
    case 1233:
      if (lookahead == 47196) ADVANCE(29);
      END_STATE();
    case 1234:
      if (lookahead == 47196) ADVANCE(52);
      END_STATE();
    case 1235:
      if (lookahead == 47484) ADVANCE(112);
      END_STATE();
    case 1236:
      if (lookahead == 47532) ADVANCE(1240);
      END_STATE();
    case 1237:
      if (lookahead == 47540) ADVANCE(56);
      END_STATE();
    case 1238:
      if (lookahead == 47582) ADVANCE(1216);
      END_STATE();
    case 1239:
      if (lookahead == 48139) ADVANCE(32);
      END_STATE();
    case 1240:
      if (lookahead == 48288) ADVANCE(1252);
      END_STATE();
    case 1241:
      if (lookahead == 49345) ADVANCE(1263);
      END_STATE();
    case 1242:
      if (lookahead == 49688) ADVANCE(161);
      END_STATE();
    case 1243:
      if (lookahead == 49828) ADVANCE(1265);
      END_STATE();
    case 1244:
      if (lookahead == 49845) ADVANCE(1219);
      END_STATE();
    case 1245:
      if (lookahead == 49845) ADVANCE(1222);
      END_STATE();
    case 1246:
      if (lookahead == 50526) ADVANCE(1251);
      END_STATE();
    case 1247:
      if (lookahead == 50526) ADVANCE(1250);
      END_STATE();
    case 1248:
      if (lookahead == 50629) ADVANCE(1228);
      END_STATE();
    case 1249:
      if (lookahead == 50640) ADVANCE(42);
      END_STATE();
    case 1250:
      if (lookahead == 50640) ADVANCE(74);
      END_STATE();
    case 1251:
      if (lookahead == 51004) ADVANCE(1234);
      END_STATE();
    case 1252:
      if (lookahead == 51060) ADVANCE(1243);
      END_STATE();
    case 1253:
      if (lookahead == 51060) ADVANCE(1264);
      END_STATE();
    case 1254:
      if (lookahead == 51077) ADVANCE(1220);
      END_STATE();
    case 1255:
      if (lookahead == 51077) ADVANCE(1221);
      END_STATE();
    case 1256:
      if (lookahead == 51080) ADVANCE(1217);
      END_STATE();
    case 1257:
      if (lookahead == 51080) ADVANCE(1244);
      END_STATE();
    case 1258:
      if (lookahead == 51080) ADVANCE(1245);
      END_STATE();
    case 1259:
      if (lookahead == 51473) ADVANCE(1254);
      END_STATE();
    case 1260:
      if (lookahead == 52824) ADVANCE(1235);
      END_STATE();
    case 1261:
      if (lookahead == 52964) ADVANCE(1239);
      END_STATE();
    case 1262:
      if (lookahead == 53372) ADVANCE(38);
      END_STATE();
    case 1263:
      if (lookahead == 53468) ADVANCE(1255);
      END_STATE();
    case 1264:
      if (lookahead == 53944) ADVANCE(1230);
      END_STATE();
    case 1265:
      if (lookahead == 54616) ADVANCE(1218);
      END_STATE();
    case 1266:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3381);
      END_STATE();
    case 1267:
      if (eof) ADVANCE(1271);
      if (lookahead == '\n') ADVANCE(1272);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '#') ADVANCE(1355);
      if (lookahead == 'B') ADVANCE(1274);
      if (lookahead != 0) ADVANCE(1273);
      END_STATE();
    case 1268:
      if (eof) ADVANCE(1271);
      if (lookahead == '\n') ADVANCE(1272);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '#') ADVANCE(1355);
      if (lookahead != 0) ADVANCE(1273);
      END_STATE();
    case 1269:
      if (eof) ADVANCE(1271);
      if (lookahead == '\n') ADVANCE(1272);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '#') ADVANCE(1356);
      if (lookahead == 'B') ADVANCE(1275);
      if (lookahead != 0) ADVANCE(1276);
      END_STATE();
    case 1270:
      if (eof) ADVANCE(1271);
      if (lookahead == '\n') ADVANCE(1272);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '#') ADVANCE(1360);
      if (lookahead != 0) ADVANCE(1346);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      if (lookahead == 'R') ADVANCE(291);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      if (lookahead == 'R') ADVANCE(1337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1346);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1346);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1277);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1278);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1279);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1280);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1281);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1282);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1283);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1284);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1285);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1286);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1287);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1288);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1289);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1290);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1291);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1292);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1293);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1294);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1295);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1296);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1297);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1298);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1299);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1300);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1301);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1302);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1303);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1304);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1305);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1306);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1307);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1308);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1309);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1310);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1311);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1312);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1313);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1314);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1315);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1316);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1317);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1318);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1319);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1320);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1321);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1322);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1323);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1324);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(aux_sym_subject_token3);
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '-') ADVANCE(1326);
      if (lookahead != 0) ADVANCE(1346);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(aux_sym_subject_token3);
      if (lookahead == ' ') ADVANCE(1333);
      if (lookahead == '-') ADVANCE(1327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1346);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(aux_sym_subject_token3);
      if (lookahead == ' ') ADVANCE(1336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1346);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(aux_sym_subject_token3);
      if (lookahead == ' ') ADVANCE(1331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1346);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(aux_sym_subject_token3);
      if (lookahead == '-') ADVANCE(1327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1346);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(aux_sym_subject_token3);
      if (lookahead == '-') ADVANCE(1326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1346);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(aux_sym_subject_token3);
      if (lookahead == '8') ADVANCE(1329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1346);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(aux_sym_subject_token3);
      if (lookahead == '>') ADVANCE(1332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1346);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(aux_sym_subject_token3);
      if (lookahead == 'A') ADVANCE(1343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1346);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(aux_sym_subject_token3);
      if (lookahead == 'A') ADVANCE(1345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1346);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(aux_sym_subject_token3);
      if (lookahead == 'C') ADVANCE(1341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1346);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(aux_sym_subject_token3);
      if (lookahead == 'E') ADVANCE(1334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1346);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(aux_sym_subject_token3);
      if (lookahead == 'E') ADVANCE(1353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1346);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(aux_sym_subject_token3);
      if (lookahead == 'G') ADVANCE(1338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1346);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(aux_sym_subject_token3);
      if (lookahead == 'G') ADVANCE(1328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1346);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(aux_sym_subject_token3);
      if (lookahead == 'H') ADVANCE(1335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1346);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(aux_sym_subject_token3);
      if (lookahead == 'I') ADVANCE(1344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1346);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(aux_sym_subject_token3);
      if (lookahead == 'K') ADVANCE(1342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1346);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(aux_sym_subject_token3);
      if (lookahead == 'N') ADVANCE(1340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1346);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(aux_sym_subject_token3);
      if (lookahead == 'N') ADVANCE(1339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1346);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(aux_sym_subject_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1346);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(aux_sym_prefix_token1);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(anon_sym_BREAKINGCHANGE);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(anon_sym_BREAKINGCHANGE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1346);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ' ') ADVANCE(244);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ' ') ADVANCE(1330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1346);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3377);
      if (lookahead == ':' ||
          lookahead == 65306) ADVANCE(3386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3387);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(3382);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(3388);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1346);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1324);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t') ADVANCE(3377);
      if (lookahead == ' ') ADVANCE(1367);
      if (lookahead == ':' ||
          lookahead == 65306) ADVANCE(3386);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(1362);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(3387);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ' ') ADVANCE(1368);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(1363);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(3388);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ' ') ADVANCE(3391);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(1368);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ' ') ADVANCE(1364);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(1368);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ' ') ADVANCE(1365);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(1368);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ':' ||
          lookahead == 65306) ADVANCE(3385);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(1367);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(3377);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(1368);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3172);
      if (lookahead == 1072) ADVANCE(3262);
      if (lookahead == 1077) ADVANCE(3230);
      if (lookahead == 1099) ADVANCE(1374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2859);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3221);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1795);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1970);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1807);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2929);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1794);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3097);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3045);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3203);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2050);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2936);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1810);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2922);
      if (lookahead == ',') ADVANCE(1548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1842);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1836);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2086);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2058);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2894);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2986);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1798);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1801);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3605);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3390);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2998);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2221);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1955);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2036);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2904);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2923);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2979);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1820);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3044);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2933);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2895);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1723);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3000);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1956);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1995);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2869);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2880);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2934);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2900);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3034);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3051);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2764);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1969);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1998);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2985);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1774);
      if (lookahead == ':') ADVANCE(3404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3222);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3048);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2935);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2896);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1725);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1971);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2870);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2858);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2753);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2897);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2549);
      if (lookahead == 'e') ADVANCE(2713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2040);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1958);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2969);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2898);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2860);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2899);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1996);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1909);
      if (lookahead == 'r') ADVANCE(1714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2802);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2010);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2012);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2003);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2088);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1740);
      if (lookahead == 'g') ADVANCE(1560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2755);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1741);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2804);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1743);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1744);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1838);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2094);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1745);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1746);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1747);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1749);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1751);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1752);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1812);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1753);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1754);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1755);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1756);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1757);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1758);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1759);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1760);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1763);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1764);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1765);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1827);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1766);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1835);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1767);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1913);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1768);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3011);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3058);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2763);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2041);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1829);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1957);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2004);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2000);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2868);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2235);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2890);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2053);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2873);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3199);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2782);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1791);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2760);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2876);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2051);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2043);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2044);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1864);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1865);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1867);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1870);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1643:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2009);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2849);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1648:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2845);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1649:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1650:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3059);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1652:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2663);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2076);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2014);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3060);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2065);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1665:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2067);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2068);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2069);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1670:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2937);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1671:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1800);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1672:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2666);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1673:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3002);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1674:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1975);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1675:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1676:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1677:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1678:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2653);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1679:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1680:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2740);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1681:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2819);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1682:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1683:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2854);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1684:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2075);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1685:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2669);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1686:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3003);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1687:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1978);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1688:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1689:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1690:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2670);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1691:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1692:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1693:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1694:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1695:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1696:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1986);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1697:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1698:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2975);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1699:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2746);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1987);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1701:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2749);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1988);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1703:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1989);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1704:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1796);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1705:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1990);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1706:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2037);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1707:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1708:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1709:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1710:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1711:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1712:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1713:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1797);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1714:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1991);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1715:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1716:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1717:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1992);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1718:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1719:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1993);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1720:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3062);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1721:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1722:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '"') ADVANCE(3533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1723:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '"') ADVANCE(3500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1724:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '"') ADVANCE(3442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1725:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '"') ADVANCE(3577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1726:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3585);
      if (lookahead == 48652) ADVANCE(3359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1727:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1728:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1729:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1730:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1731:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1732:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1733:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1734:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1735:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1736:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1737:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1738:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1739:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1740:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1741:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1742:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1743:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1744:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1745:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1746:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1747:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1748:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1749:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1750:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1751:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1752:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1753:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1754:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1755:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1756:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1757:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1758:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1759:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1760:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1761:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1762:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1763:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1764:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1765:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1766:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1767:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1768:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1769:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ',') ADVANCE(1485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1770:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '.') ADVANCE(1416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1771:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':') ADVANCE(3411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1772:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':') ADVANCE(3410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1773:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':') ADVANCE(3409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1774:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':') ADVANCE(3403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1775:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':') ADVANCE(3408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1776:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':') ADVANCE(3413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1777:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':') ADVANCE(3407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1778:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':') ADVANCE(3412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1779:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':') ADVANCE(3406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1780:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':') ADVANCE(3414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1781:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':') ADVANCE(1414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1782:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':') ADVANCE(1430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1783:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':') ADVANCE(1447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1784:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ';') ADVANCE(1559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1785:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ';') ADVANCE(1550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1786:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ';') ADVANCE(1595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1787:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ';') ADVANCE(1557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1788:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ';') ADVANCE(1512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1789:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ';') ADVANCE(1533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1790:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ';') ADVANCE(1552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1791:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ';') ADVANCE(1689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1792:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ';') ADVANCE(1699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1793:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ';') ADVANCE(1701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1794:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'A') ADVANCE(2525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1795:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'B') ADVANCE(2679);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1796:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'B') ADVANCE(2681);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1797:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'B') ADVANCE(2685);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1798:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'G') ADVANCE(1850);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1799:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'R') ADVANCE(2194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1800:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'R') ADVANCE(2196);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1801:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'S') ADVANCE(2805);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1802:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1953);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1803:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2370);
      if (lookahead == 'i') ADVANCE(2480);
      if (lookahead == 'u') ADVANCE(1370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1804:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2436);
      if (lookahead == 'e') ADVANCE(2856);
      if (lookahead == 'r') ADVANCE(2924);
      if (lookahead == 'u') ADVANCE(1607);
      if (lookahead == 'w') ADVANCE(2545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1805:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2942);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1806:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1999);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1807:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2591);
      if (lookahead == 'r') ADVANCE(2150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1808:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1809:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2015);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1810:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2030);
      if (lookahead == 'd') ADVANCE(2133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1811:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2946);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1812:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2232);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1813:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2871);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1814:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1772);
      if (lookahead == 'e') ADVANCE(1495);
      if (lookahead == 'u') ADVANCE(2406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1815:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1816:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1817:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2943);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1818:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1819:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2364);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1820:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2866);
      if (lookahead == 'r') ADVANCE(2160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1821:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1822:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1823:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1824:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2252);
      if (lookahead == 'e') ADVANCE(1384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1825:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1826:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1776);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1827:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2861);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1828:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1829:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1830:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1373);
      if (lookahead == 'g') ADVANCE(2903);
      if (lookahead == 'h') ADVANCE(2906);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1831:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2017);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1832:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1833:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1834:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1835:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1836:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2273);
      if (lookahead == 'b') ADVANCE(2092);
      if (lookahead == 'u') ADVANCE(2596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1837:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1838:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2800);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1839:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1840:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1841:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1842:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2754);
      if (lookahead == 224) ADVANCE(1450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1843:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1844:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1845:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1846:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1847:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1848:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2798);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1849:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1850:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1851:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1852:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1853:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2643);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1854:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1855:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1856:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1857:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1858:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1859:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1860:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1861:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1862:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1863:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1864:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1865:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1866:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1867:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1868:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1869:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1870:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1871:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1872:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2879);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1873:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1874:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2872);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1875:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1876:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2046);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1877:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1878:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1879:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1880:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1881:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1620);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1882:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1883:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1884:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1885:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1886:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1887:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1888:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1889:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1890:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2741);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1891:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2836);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1892:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1893:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1894:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1895:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1896:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1897:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1898:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1899:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1900:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1901:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1902:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2052);
      if (lookahead == 'r') ADVANCE(2884);
      if (lookahead == 229) ADVANCE(1456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1903:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2060);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1904:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1905:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2945);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1906:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1907:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1908:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2062);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1909:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1910:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1911:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2020);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1912:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1913:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2844);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1914:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1915:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1916:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1639);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1917:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1918:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1919:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1920:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1921:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1922:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2747);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1923:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1924:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2809);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1925:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1926:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1927:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2064);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1928:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1929:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1930:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2066);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1931:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1932:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1974);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1933:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1934:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1935:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1936:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1937:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1985);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1938:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1939:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1940:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1664);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1941:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1942:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1943:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1944:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1945:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1946:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1947:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1948:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1949:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1950:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1951:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2752);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1952:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1953:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1822);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1954:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1821);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1955:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2639);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1956:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2827);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1957:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1958:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1959:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1906);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1960:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1961:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1828);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1962:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1880);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1963:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1837);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1964:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1840);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1965:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1882);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1966:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1890);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1967:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1893);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1968:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1894);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1969:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(3272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1970:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2641);
      if (lookahead == 'r') ADVANCE(1907);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1971:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1972:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1910);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1973:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1914);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1974:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1885);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1975:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2660);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1976:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1922);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1977:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2648);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1978:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2665);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1979:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1926);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1980:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2649);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1981:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1929);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1982:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1983:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1931);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1984:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1985:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1899);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1986:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2659);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1987:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2664);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1988:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2667);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1989:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1990:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1991:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1992:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1993:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1994:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2759);
      if (lookahead == 'n') ADVANCE(2049);
      if (lookahead == 't') ADVANCE(2822);
      if (lookahead == 'u') ADVANCE(2217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1995:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(3285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1996:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(3273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1997:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1998:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2830);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 1999:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2766);
      if (lookahead == 'k') ADVANCE(2768);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2000:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2001:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2002:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2003:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2004:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2005:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(1431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2006:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(1575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2007:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(1504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2008:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2009:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2831);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2010:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2011:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(1625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2012:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2013:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2014:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2832);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2015:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2773);
      if (lookahead == 't') ADVANCE(2322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2016:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2017:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2775);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2018:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(1845);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2019:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2020:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2778);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2021:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2022:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2023:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2024:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2025:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(1861);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2026:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(1940);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2027:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2028:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2029:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(1871);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2030:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2797);
      if (lookahead == 'd') ADVANCE(2141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2031:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2032:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2033:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(1676);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2034:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(1670);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2035:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(1681);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2036:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(1932);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2037:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(1937);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2038:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2039:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1839);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2040:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2041:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2089);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2042:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2043:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1924);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2044:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2095);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2045:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2046:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2047:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2048:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2049:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1847);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2050:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2317);
      if (lookahead == 'm') ADVANCE(2186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2051:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1878);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2052:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1851);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2053:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2099);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2054:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2055:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2835);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2056:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1834);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2057:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2058:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2565);
      if (lookahead == 'n') ADVANCE(1862);
      if (lookahead == 'z') ADVANCE(1863);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2059:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1857);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2060:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2061:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1860);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2062:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2063:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2064:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1916);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2065:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2066:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2067:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2068:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2069:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2070:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1877);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2071:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2072:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1632);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2073:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2074:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1680);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2075:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2076:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2077:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1951);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2078:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1952);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2079:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1997);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2080:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2902);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2081:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2947);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2082:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2950);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2083:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1769);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2084:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(3293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2085:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2086:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2222);
      if (lookahead == 'f') ADVANCE(2927);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2087:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2088:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2089:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2090:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2091:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2092:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2093:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2094:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2095:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2096:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2097:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2723);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2098:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2811);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2099:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2100:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2101:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2102:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1876);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2103:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2104:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2105:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1645);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2106:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2107:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2108:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2109:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2110:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2111:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2112:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2113:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2114:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2115:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2116:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1623);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2117:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2118:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2119:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2120:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2121:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2122:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2123:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2124:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2125:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2126:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2070);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2127:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1954);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2128:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2901);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2129:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2130:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2626);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2131:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2638);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2132:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2133:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2774);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2134:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2135:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2136:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2137:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2138:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2139:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2834);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2140:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1961);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2141:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2142:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2143:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2144:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2145:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2146:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2725);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2147:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2148:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2149:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1783);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2150:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1962);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2151:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2152:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2153:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2048);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2154:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2155:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2156:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2006);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2157:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2158:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2159:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2620);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2160:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2785);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2161:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2162:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1959);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2163:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2164:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1883);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2165:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2166:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2167:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2168:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2169:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2622);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2170:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2171:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2172:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2173:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2637);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2174:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2463);
      if (lookahead == 224) ADVANCE(1677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2175:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2176:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2177:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2178:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2179:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2180:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2181:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2182:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2183:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2647);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2184:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2185:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2642);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2186:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2488);
      if (lookahead == 'u') ADVANCE(2780);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2187:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1972);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2188:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1964);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2189:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2656);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2190:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2191:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2192:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1655);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2193:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2194:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1973);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2195:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1976);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2196:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1979);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2197:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1966);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2198:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1981);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2199:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1967);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2200:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1983);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2201:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1968);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2202:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2203:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2204:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2814);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2205:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2206:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1653);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2207:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2208:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2821);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2209:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1667);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2210:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1669);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2211:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2212:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2213:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2751);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2214:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2215:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2216:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2078);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2217:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'f') ADVANCE(1376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2218:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'f') ADVANCE(1602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2219:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'f') ADVANCE(1564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2220:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'f') ADVANCE(1434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2221:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'f') ADVANCE(2678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2222:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'f') ADVANCE(2813);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2223:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'f') ADVANCE(1788);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2224:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'f') ADVANCE(2157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2225:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'f') ADVANCE(1666);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2226:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(2919);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2227:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1805);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2228:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(2608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2229:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(2610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2230:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1779);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2231:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(2253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2232:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(2237);
      if (lookahead == 'v') ADVANCE(1892);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2233:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1823);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2234:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(2371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2235:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1817);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2236:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(2841);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2237:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(2308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2238:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(2624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2239:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2240:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(2144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2241:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2242:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2243:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2244:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2245:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1631);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2246:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2247:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2248:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2249:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(2233);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2250:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2251:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(2625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2252:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(2214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2253:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(2152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2254:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1905);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2255:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(2159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2256:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1901);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2257:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(2687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2258:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2259:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2260:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2261:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1721);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2262:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(2917);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2263:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(3276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2264:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(1408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2265:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(3286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2266:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(3274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2267:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(2691);
      if (lookahead == 'l') ADVANCE(1600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2268:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(2296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2269:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(1826);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2270:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(1777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2271:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(2828);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2272:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(2335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2273:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(2102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2274:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(1472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2275:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(2300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2276:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(1393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2277:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(1396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2278:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(1540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2279:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(1398);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2280:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(1399);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2281:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(1543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2282:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(1577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2283:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(1583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2284:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(1590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2285:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(1596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2286:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(1515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2287:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(2907);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2288:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(2326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2289:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(2205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2290:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(2108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2291:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(2124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2292:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(2346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2293:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(2913);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2294:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(3287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2295:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(2914);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2296:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(3279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2297:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2864);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2298:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(3278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2299:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2857);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2300:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(3277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2301:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2096);
      if (lookahead == 'u') ADVANCE(2402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2302:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2887);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2303:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2223);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2304:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2305:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2018);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2306:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2307:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2308:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2309:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2231);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2310:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2311:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2312:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2313:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2314:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2315:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2082);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2316:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(1392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2317:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(1505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2318:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(1568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2319:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(1553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2320:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(1477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2321:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(1487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2322:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2862);
      if (lookahead == 't') ADVANCE(2348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2323:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2893);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2324:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2325:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2326:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2327:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2328:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2803);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2329:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2330:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2855);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2331:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2073);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2332:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2721);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2333:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(1832);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2334:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2335:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2658);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2336:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2337:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(1936);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2338:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2339:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2340:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2341:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2342:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2343:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(1866);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2344:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2345:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2346:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(3280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2347:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2863);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2348:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2865);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2349:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2350:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2745);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2351:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2534);
      if (lookahead == 7903) ADVANCE(1618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2352:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2353:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2354:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2355:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2356:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(1710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2357:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'j') ADVANCE(2550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2358:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'j') ADVANCE(1881);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2359:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'j') ADVANCE(2575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2360:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'j') ADVANCE(2158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2361:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'k') ADVANCE(2757);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2362:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'k') ADVANCE(2324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2363:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'k') ADVANCE(1898);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2364:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'k') ADVANCE(2272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2365:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'k') ADVANCE(1846);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2366:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'k') ADVANCE(2787);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2367:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'k') ADVANCE(2784);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2368:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'k') ADVANCE(2123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2369:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'k') ADVANCE(1946);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2370:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2941);
      if (lookahead == 't') ADVANCE(1814);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2371:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2939);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2372:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2373:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2374:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1778);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2375:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2376:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2309);
      if (lookahead == 228) ADVANCE(2627);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2377:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2378:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2842);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2379:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2380:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2381:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1888);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2382:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1875);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2383:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2384:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1782);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2385:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2386:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2881);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2387:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2388:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1984);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2389:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1855);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2390:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2391:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2392:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1947);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2393:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1919);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2394:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2925);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2395:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2840);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2396:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2397:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1900);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2398:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1895);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2399:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1896);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2400:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1938);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2401:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2402:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1705);
      if (lookahead == 'r') ADVANCE(1643);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2403:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1948);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2404:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2405:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(1488);
      if (lookahead == 'n') ADVANCE(1371);
      if (lookahead == 's') ADVANCE(2756);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2406:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(1775);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2407:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(1960);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2408:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(2129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2409:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(2390);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2410:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(2135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2411:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(2153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2412:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(2181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2413:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(2143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2414:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(1429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2415:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(1572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2416:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(1525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2417:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(2553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2418:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(2180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2419:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(2576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2420:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(2708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2421:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(1963);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2422:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(1856);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2423:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(2556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2424:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(1859);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2425:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(1869);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2426:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(2125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2427:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(1646);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2428:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(1965);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2429:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(1671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2430:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(2215);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2431:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2432:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2057);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2433:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2940);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2434:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2765);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2435:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2045);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2436:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2249);
      if (lookahead == 'r') ADVANCE(2304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2437:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2054);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2438:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2439:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2239);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2440:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2843);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2441:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2025);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2442:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2230);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2443:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2444:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2788);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2445:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2839);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2446:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2767);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2447:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2028);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2448:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2449:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1872);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2450:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2451:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2452:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2453:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2454:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2455:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1848);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2456:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2457:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1390);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2458:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2459:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2460:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2461:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1648);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2462:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1634);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2463:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2464:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2465:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2466:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2467:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2468:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2469:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2470:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2471:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1637);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2472:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2473:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2474:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2008);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2475:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2476:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2038);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2477:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2241);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2478:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2042);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2479:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2480:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2481:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2240);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2482:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1656);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2483:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2056);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2484:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2801);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2485:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2047);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2486:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2487:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2488:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2039);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2489:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2001);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2490:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2491:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2492:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2783);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2493:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2002);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2494:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2495:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2072);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2496:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2497:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2498:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2781);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2499:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2793);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2500:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2501:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2502:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2503:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2504:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2505:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2506:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2507:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2508:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2509:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2247);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2510:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2511:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1868);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2512:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2026);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2513:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2514:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2515:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2013);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2516:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2808);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2517:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1654);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2518:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2031);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2519:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2059);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2520:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2063);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2521:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2029);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2522:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1657);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2523:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2016);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2524:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2032);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2525:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2061);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2526:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2807);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2527:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2019);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2528:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2021);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2529:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2022);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2530:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2023);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2531:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2532:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2024);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2533:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2810);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2534:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2815);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2535:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2816);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2536:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2817);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2537:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2818);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2538:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2539:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2540:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2541:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2542:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2077);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2543:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2544:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2545:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2546:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1784);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2547:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2823);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2548:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2055);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2549:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2550:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2846);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2551:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2552:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2553:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2554:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1647);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2555:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2556:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2557:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1638);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2558:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2559:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2560:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2561:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2562:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2563:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1977);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2564:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2565:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2566:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2567:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2568:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2569:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2570:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2833);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2571:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2572:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2573:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2574:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2867);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2575:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2847);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2576:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1649);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2577:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2578:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2579:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1641);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2580:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2581:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1663);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2582:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1659);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2583:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1980);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2584:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1982);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2585:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2586:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2587:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1793);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2588:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2589:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'p') ADVANCE(2920);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2590:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'p') ADVANCE(2918);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2591:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'p') ADVANCE(2375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2592:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'p') ADVANCE(2677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2593:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'p') ADVANCE(2606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2594:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'p') ADVANCE(2612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2595:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'p') ADVANCE(2098);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2596:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'p') ADVANCE(1554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2597:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'p') ADVANCE(2921);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2598:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'p') ADVANCE(2655);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2599:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'p') ADVANCE(1626);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2600:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'p') ADVANCE(2204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2601:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'p') ADVANCE(2208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2602:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2874);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2603:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2604:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2605:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2953);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2606:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2885);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2607:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1816);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2608:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2090);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2609:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1818);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2610:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2611:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2612:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2613:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1806);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2614:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2654);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2615:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2616:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2617:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2618:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2619:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1808);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2620:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1903);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2621:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1809);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2622:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1831);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2623:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1844);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2624:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2097);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2625:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2626:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2627:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2628:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2629:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2630:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2631:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2632:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2633:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2634:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1785);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2635:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2636:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2637:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1873);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2638:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2639:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1833);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2640:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2641:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1843);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2642:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2643:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2074);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2644:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2645:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2646:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2647:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1949);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2648:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2649:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2650:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2651:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2652:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2912);
      if (lookahead == 'u') ADVANCE(1879);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2653:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1904);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2654:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2655:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2656:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1911);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2657:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1627);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2658:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1622);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2659:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1912);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2660:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1915);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2661:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2926);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2662:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1918);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2663:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1920);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2664:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1921);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2665:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1923);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2666:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2667:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1925);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2668:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1928);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2669:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2670:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2671:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2197);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2672:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2673:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2187);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2674:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2199);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2675:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2200);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2676:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2677:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2892);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2678:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2679:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1935);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2680:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1934);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2681:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1939);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2682:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1941);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2683:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1942);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2684:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1943);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2685:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1944);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2686:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1945);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2687:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2203);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2688:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2689:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2915);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2690:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2691:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2692:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2693:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2694:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(1824);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2695:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2928);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2696:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2697:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2770);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2698:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2769);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2699:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2080);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2700:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2701:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2702:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2703:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2795);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2704:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(1841);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2705:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(1454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2706:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2091);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2707:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(1381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2708:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2093);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2709:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2083);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2710:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(1891);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2711:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2084);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2712:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(1658);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2713:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(1407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2714:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(1413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2715:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(1630);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2716:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2889);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2717:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2758);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2718:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2719:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2720:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2779);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2721:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2789);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2722:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2723:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2724:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2796);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2725:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2776);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2726:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2791);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2727:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(1787);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2728:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2792);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2729:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2837);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2730:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2731:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2732:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2733:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2734:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2735:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2736:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2737:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2738:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2739:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2848);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2740:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2850);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2741:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2742:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2851);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2743:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(1662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2744:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(1665);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2745:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2746:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2747:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2210);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2748:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2749:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2750:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(1792);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2751:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2752:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(1950);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2753:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2216);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2754:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2755:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2952);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2756:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2910);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2757:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2877);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2758:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2908);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2759:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2825);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2760:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2911);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2761:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2762:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2635);
      if (lookahead == 'u') ADVANCE(2705);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2763:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2826);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2764:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2765:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2766:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2767:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2768:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2769:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2680);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2770:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(1813);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2771:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2772:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2773:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2774:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2775:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2776:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2777:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2605);
      if (lookahead == 273) ADVANCE(3275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2778:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2779:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(1886);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2780:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(1819);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2781:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2782:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2783:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(1927);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2784:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2785:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(1853);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2786:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2787:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2788:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(1612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2789:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(1411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2790:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(1679);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2791:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(1418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2792:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(1422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2793:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(1483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2794:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(1508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2795:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2905);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2796:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2909);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2797:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2852);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2798:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2799:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(1874);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2800:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2801:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2802:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2623);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2803:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2804:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2805:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(1917);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2806:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2807:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2808:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2809:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2810:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2811:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2806);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2812:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2813:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2814:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2812);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2815:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2816:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2817:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2818:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2819:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2820:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2821:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2820);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2822:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2853);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2823:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(1535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2824:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2825:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(1815);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2826:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2827:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2828:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2829:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(1604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2830:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2831:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2832:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2833:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2645);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2834:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(1470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2835:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(1506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2836:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(1468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2837:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(1433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2838:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2218);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2839:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2840:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2841:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2842:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2843:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2844:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2845:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2398);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2846:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2657);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2847:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2630);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2848:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2631);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2849:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2850:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2632);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2851:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2633);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2852:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(1887);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2853:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(1933);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2854:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2399);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2855:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(1668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2856:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(1678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2857:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'v') ADVANCE(1516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2858:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'v') ADVANCE(3283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2859:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'v') ADVANCE(2564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2860:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'v') ADVANCE(2298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2861:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'v') ADVANCE(2156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2862:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'v') ADVANCE(2555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2863:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'v') ADVANCE(2581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2864:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'v') ADVANCE(2106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2865:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'v') ADVANCE(2582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2866:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'v') ADVANCE(1849);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2867:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'v') ADVANCE(1852);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2868:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'v') ADVANCE(2573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2869:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'w') ADVANCE(2944);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2870:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'w') ADVANCE(2886);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2871:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'w') ADVANCE(2333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2872:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'w') ADVANCE(2337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2873:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'w') ADVANCE(2328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2874:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'w') ADVANCE(1854);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2875:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'w') ADVANCE(2507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2876:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'w') ADVANCE(2345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2877:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'y') ADVANCE(2875);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2878:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'y') ADVANCE(1490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2879:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'y') ADVANCE(1404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2880:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'y') ADVANCE(2136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2881:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'y') ADVANCE(1685);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2882:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'z') ADVANCE(2087);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2883:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'z') ADVANCE(2316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2884:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'z') ADVANCE(2085);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2885:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'z') ADVANCE(2548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2886:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'z') ADVANCE(2234);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2887:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'z') ADVANCE(1908);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2888:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'z') ADVANCE(1521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2889:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'z') ADVANCE(1473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2890:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'z') ADVANCE(1514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2891:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'z') ADVANCE(2131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2892:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'z') ADVANCE(2202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2893:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'z') ADVANCE(1930);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2894:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 171) ADVANCE(3504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2895:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 171) ADVANCE(3536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2896:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 171) ADVANCE(3444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2897:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 171) ADVANCE(3579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2898:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 171) ADVANCE(3455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2899:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 171) ADVANCE(3597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2900:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 171) ADVANCE(2673);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2901:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 187) ADVANCE(1684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2902:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 187) ADVANCE(1715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2903:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 224) ADVANCE(2878);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2904:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 224) ADVANCE(1478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2905:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 224) ADVANCE(1428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2906:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 225) ADVANCE(2438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2907:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 225) ADVANCE(2442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2908:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 225) ADVANCE(1406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2909:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 225) ADVANCE(1409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2910:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 225) ADVANCE(2707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2911:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 225) ADVANCE(2034);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2912:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 225) ADVANCE(2743);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2913:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 225) ADVANCE(2496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2914:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 225) ADVANCE(2508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2915:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 225) ADVANCE(2744);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2916:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 227) ADVANCE(1530);
      if (lookahead == 7913) ADVANCE(2494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2917:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 229) ADVANCE(2372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2918:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 229) ADVANCE(2226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2919:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 229) ADVANCE(2634);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2920:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 229) ADVANCE(1561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2921:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 229) ADVANCE(1439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2922:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 232) ADVANCE(1576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2923:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 234) ADVANCE(2771);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2924:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 234) ADVANCE(2452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2925:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 234) ADVANCE(2472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2926:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 234) ADVANCE(2473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2927:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 246) ADVANCE(2646);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2928:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 252) ADVANCE(2644);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2929:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 252) ADVANCE(2891);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2930:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 261) ADVANCE(2948);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2931:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 261) ADVANCE(2027);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2932:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 261) ADVANCE(2949);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2933:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 273) ADVANCE(3281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2934:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 273) ADVANCE(2916);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2935:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 273) ADVANCE(2954);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2936:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 273) ADVANCE(1889);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2937:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 273) ADVANCE(1897);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2938:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 281) ADVANCE(2883);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2939:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 281) ADVANCE(2071);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2940:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 305) ADVANCE(2888);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2941:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 305) ADVANCE(2433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2942:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 322) ADVANCE(2938);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2943:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 322) ADVANCE(2930);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2944:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 322) ADVANCE(1811);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2945:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 322) ADVANCE(2932);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2946:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 347) ADVANCE(2451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2947:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 351) ADVANCE(2310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2948:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 378) ADVANCE(1457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2949:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 378) ADVANCE(1484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2950:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 380) ADVANCE(2931);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2951:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 417) ADVANCE(2500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2952:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 432) ADVANCE(2951);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2953:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 432) ADVANCE(3282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2954:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 432) ADVANCE(3284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2955:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 940) ADVANCE(2978);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2956:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 940) ADVANCE(3015);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2957:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 940) ADVANCE(3016);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2958:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 940) ADVANCE(2980);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2959:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 940) ADVANCE(2981);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2960:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 940) ADVANCE(1698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2961:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 942) ADVANCE(1489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2962:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 942) ADVANCE(1469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2963:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 942) ADVANCE(3012);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2964:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 943) ADVANCE(2971);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2965:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 943) ADVANCE(3017);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2966:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 943) ADVANCE(3043);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2967:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 943) ADVANCE(3052);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2968:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 945) ADVANCE(2996);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2969:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 945) ADVANCE(3033);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2970:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 945) ADVANCE(2977);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2971:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 945) ADVANCE(1780);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2972:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 945) ADVANCE(3041);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2973:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 945) ADVANCE(3046);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2974:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 945) ADVANCE(2997);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2975:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 945) ADVANCE(3035);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2976:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 947) ADVANCE(3009);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2977:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 948) ADVANCE(3038);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2978:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 948) ADVANCE(3021);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2979:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 948) ADVANCE(2995);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2980:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 948) ADVANCE(3023);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2981:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 948) ADVANCE(3027);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2982:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 949) ADVANCE(3036);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2983:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 949) ADVANCE(2967);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2984:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 949) ADVANCE(3005);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2985:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 949) ADVANCE(2965);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2986:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 949) ADVANCE(3014);
      if (lookahead == 956) ADVANCE(3032);
      if (lookahead == 960) ADVANCE(2966);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2987:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 949) ADVANCE(3057);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2988:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 949) ADVANCE(3039);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2989:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 949) ADVANCE(1651);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2990:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 949) ADVANCE(1692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2991:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 951) ADVANCE(3013);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2992:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 951) ADVANCE(1388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2993:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 953) ADVANCE(2976);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2994:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 953) ADVANCE(2999);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2995:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 953) ADVANCE(2970);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2996:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 953) ADVANCE(1458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2997:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 953) ADVANCE(1424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2998:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 954) ADVANCE(3004);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 2999:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 954) ADVANCE(3068);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3000:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 954) ADVANCE(2956);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3001:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 954) ADVANCE(3053);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3002:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 954) ADVANCE(3006);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3003:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 954) ADVANCE(3007);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3004:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 955) ADVANCE(2955);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3005:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 955) ADVANCE(2983);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3006:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 955) ADVANCE(2958);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3007:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 955) ADVANCE(2959);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3008:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 956) ADVANCE(2982);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3009:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 956) ADVANCE(2962);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3010:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 956) ADVANCE(2991);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3011:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 956) ADVANCE(2989);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3012:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 956) ADVANCE(2988);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3013:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 957) ADVANCE(2964);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3014:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 957) ADVANCE(2963);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3015:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 957) ADVANCE(2987);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3016:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 957) ADVANCE(3065);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3017:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 957) ADVANCE(2974);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3018:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 957) ADVANCE(1673);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3019:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 957) ADVANCE(1686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3020:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 959) ADVANCE(3018);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3021:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 959) ADVANCE(3040);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3022:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 959) ADVANCE(3010);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3023:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 959) ADVANCE(1400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3024:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 959) ADVANCE(1578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3025:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 959) ADVANCE(1584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3026:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 959) ADVANCE(1585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3027:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 959) ADVANCE(1592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3028:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 959) ADVANCE(1443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3029:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 959) ADVANCE(3042);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3030:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 959) ADVANCE(3047);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3031:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 959) ADVANCE(3019);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3032:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 960) ADVANCE(3037);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3033:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 960) ADVANCE(3066);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3034:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 960) ADVANCE(2957);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3035:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 960) ADVANCE(3067);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3036:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 961) ADVANCE(3022);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3037:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 961) ADVANCE(3030);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3038:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 961) ADVANCE(2973);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3039:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 961) ADVANCE(3029);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3040:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 962) ADVANCE(1462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3041:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 962) ADVANCE(1493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3042:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 962) ADVANCE(1598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3043:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 963) ADVANCE(3064);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3044:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 963) ADVANCE(2972);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3045:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 963) ADVANCE(3054);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3046:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 963) ADVANCE(3056);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3047:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 963) ADVANCE(3055);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3048:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 963) ADVANCE(3061);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3049:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 964) ADVANCE(3020);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3050:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 964) ADVANCE(2961);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3051:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 964) ADVANCE(2992);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3052:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 964) ADVANCE(2968);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3053:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 964) ADVANCE(2984);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3054:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 964) ADVANCE(2993);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3055:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 964) ADVANCE(2960);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3056:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 964) ADVANCE(2994);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3057:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 964) ADVANCE(2990);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3058:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 964) ADVANCE(3024);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3059:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 964) ADVANCE(3025);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3060:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 964) ADVANCE(3026);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3061:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 964) ADVANCE(3028);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3062:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 964) ADVANCE(3031);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3063:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 965) ADVANCE(3050);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3064:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 969) ADVANCE(1523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3065:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 969) ADVANCE(1499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3066:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 972) ADVANCE(1599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3067:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 972) ADVANCE(1660);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3068:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 972) ADVANCE(1693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3069:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(3270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3070:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(3148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3071:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(3110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3072:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(1773);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3073:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(3225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3074:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(3161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3075:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(3131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3076:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(3237);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3077:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(3186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3078:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(1781);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3079:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(1475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3080:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(3140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3081:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(1455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3082:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(1474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3083:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(1395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3084:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(1497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3085:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(1507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3086:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(1502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3087:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(3233);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3088:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(3149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3089:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(3248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3090:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(3135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3091:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(3168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3092:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(1707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3093:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1073) ADVANCE(3070);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3094:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1073) ADVANCE(3180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3095:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1073) ADVANCE(3088);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3096:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1074) ADVANCE(3266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3097:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1074) ADVANCE(3153);
      if (lookahead == 1077) ADVANCE(1494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3098:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1074) ADVANCE(3257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3099:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1074) ADVANCE(3179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3100:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1074) ADVANCE(3141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3101:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1074) ADVANCE(3129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3102:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1074) ADVANCE(3120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3103:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1074) ADVANCE(3121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3104:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1074) ADVANCE(3076);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3105:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1074) ADVANCE(3269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3106:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1074) ADVANCE(3127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3107:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1074) ADVANCE(1601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3108:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1074) ADVANCE(3181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3109:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1074) ADVANCE(3143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3110:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1076) ADVANCE(1445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3111:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3112:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3113:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3114:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3187);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3115:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3116:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3117:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3093);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3118:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3119:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3120:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3121:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3122:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(1481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3123:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(1605);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3124:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(1520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3125:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(1642);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3126:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3127:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3234);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3128:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3129:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3130:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3131:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3132:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(1633);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3133:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3134:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3216);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3135:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3241);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3136:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3137:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(1789);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3138:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3095);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3139:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3140:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3249);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3141:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3142:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(1675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3143:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3144:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(1697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3145:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3146:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1078) ADVANCE(3090);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3147:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1079) ADVANCE(3096);
      if (lookahead == 1085) ADVANCE(3229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3148:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1079) ADVANCE(3151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3149:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1079) ADVANCE(3154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3150:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1080) ADVANCE(3099);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3151:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1080) ADVANCE(3217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3152:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1080) ADVANCE(3188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3153:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1080) ADVANCE(1613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3154:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1080) ADVANCE(3213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3155:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1080) ADVANCE(3124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3156:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1080) ADVANCE(3108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3157:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1081) ADVANCE(3260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3158:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1082) ADVANCE(3254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3159:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1082) ADVANCE(3255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3160:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1082) ADVANCE(3267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3161:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1082) ADVANCE(3232);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3162:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1082) ADVANCE(3078);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3163:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1082) ADVANCE(3082);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3164:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1082) ADVANCE(3084);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3165:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1082) ADVANCE(3085);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3166:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1082) ADVANCE(3170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3167:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1082) ADVANCE(3171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3168:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1082) ADVANCE(3252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3169:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1083) ADVANCE(3189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3170:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1083) ADVANCE(3193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3171:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1083) ADVANCE(3195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3172:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1084) ADVANCE(3192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3173:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1084) ADVANCE(3114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3174:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1084) ADVANCE(3126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3175:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1084) ADVANCE(3115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3176:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1084) ADVANCE(1466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3177:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1085) ADVANCE(3268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3178:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1085) ADVANCE(3155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3179:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1085) ADVANCE(3200);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3180:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1085) ADVANCE(3197);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3181:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1085) ADVANCE(3202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3182:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1085) ADVANCE(3071);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3183:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1085) ADVANCE(1389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3184:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1085) ADVANCE(1519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3185:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1085) ADVANCE(3086);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3186:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1085) ADVANCE(3125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3187:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1085) ADVANCE(3247);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3188:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1085) ADVANCE(3253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3189:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1086) ADVANCE(3177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3190:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1086) ADVANCE(3094);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3191:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1086) ADVANCE(3259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3192:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1086) ADVANCE(3173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3193:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1086) ADVANCE(3183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3194:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1086) ADVANCE(3231);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3195:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1086) ADVANCE(3185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3196:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1086) ADVANCE(3246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3197:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1086) ADVANCE(3101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3198:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1086) ADVANCE(3196);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3199:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1086) ADVANCE(3240);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3200:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1086) ADVANCE(3144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3201:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1086) ADVANCE(3206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3202:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1086) ADVANCE(1695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3203:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1087) ADVANCE(3212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3204:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1087) ADVANCE(3215);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3205:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1087) ADVANCE(3130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3206:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1087) ADVANCE(3134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3207:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1087) ADVANCE(3218);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3208:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1087) ADVANCE(3139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3209:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1088) ADVANCE(3258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3210:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1088) ADVANCE(3261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3211:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1088) ADVANCE(3074);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3212:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1088) ADVANCE(3117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3213:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1088) ADVANCE(3077);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3214:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1088) ADVANCE(3128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3215:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1088) ADVANCE(3191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3216:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1088) ADVANCE(3113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3217:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1088) ADVANCE(3089);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3218:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1088) ADVANCE(3138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3219:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1088) ADVANCE(3133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3220:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1088) ADVANCE(3091);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3221:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1089) ADVANCE(3112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3222:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1089) ADVANCE(3198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3223:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1089) ADVANCE(3235);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3224:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1089) ADVANCE(3137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3225:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1089) ADVANCE(1463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3226:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1089) ADVANCE(1410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3227:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1089) ADVANCE(3224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3228:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1089) ADVANCE(3238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3229:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3230:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3231:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3232:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3233:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3072);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3234:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3235:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3098);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3236:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3223);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3237:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3238:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3075);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3239:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(1385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3240:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(1419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3241:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(1465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3242:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(1501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3243:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3244:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3245:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(1624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3246:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3247:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3083);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3248:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3249:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3250:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3251:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3252:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3253:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3254:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1091) ADVANCE(3263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3255:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1091) ADVANCE(1513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3256:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1091) ADVANCE(1444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3257:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1091) ADVANCE(3136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3258:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1093) ADVANCE(3256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3259:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1094) ADVANCE(3118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3260:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1095) ADVANCE(3073);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3261:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1096) ADVANCE(3104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3262:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1096) ADVANCE(3092);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3263:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1097) ADVANCE(3069);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3264:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1097) ADVANCE(3119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3265:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1097) ADVANCE(3080);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3266:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1098) ADVANCE(3210);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3267:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1098) ADVANCE(3176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3268:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1098) ADVANCE(3239);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3269:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1098) ADVANCE(3209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3270:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1103) ADVANCE(1644);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3271:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7841) ADVANCE(2450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3272:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7841) ADVANCE(2460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3273:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7853) ADVANCE(2599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3274:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7853) ADVANCE(2794);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3275:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7857) ADVANCE(2502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3276:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7871) ADVANCE(1464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3277:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7879) ADVANCE(2501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3278:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7879) ADVANCE(2007);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3279:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7879) ADVANCE(2456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3280:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7879) ADVANCE(2466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3281:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7897) ADVANCE(1551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3282:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7899) ADVANCE(2005);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3283:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7899) ADVANCE(2321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3284:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7907) ADVANCE(2035);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3285:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7911) ADVANCE(1858);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3286:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7921) ADVANCE(2033);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3287:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7921) ADVANCE(2011);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3288:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 8220) ADVANCE(3530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3289:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 8220) ADVANCE(3495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3290:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 8220) ADVANCE(3438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3291:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 8220) ADVANCE(3572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3292:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 8220) ADVANCE(2676);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3293:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 8221) ADVANCE(1711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3294:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 8222) ADVANCE(3512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3295:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 8222) ADVANCE(3456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3296:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 8222) ADVANCE(3583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3297:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 8222) ADVANCE(3599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3298:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 8222) ADVANCE(3447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3299:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 8222) ADVANCE(3543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3300:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 19978) ADVANCE(3343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3301:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 19978) ADVANCE(3344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3302:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 19982) ADVANCE(3300);
      if (lookahead == 33287) ADVANCE(3301);
      if (lookahead == 33853) ADVANCE(3319);
      if (lookahead == 38936) ADVANCE(3308);
      if (lookahead == 39046) ADVANCE(3309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3303:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 20013) ADVANCE(3375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3304:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 20013) ADVANCE(3376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3305:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 20114) ADVANCE(3331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3306:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 20316) ADVANCE(3341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3307:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 20316) ADVANCE(3342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3308:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 20808) ADVANCE(1498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3309:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 20808) ADVANCE(1510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3310:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 20998) ADVANCE(3334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3311:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 20998) ADVANCE(3333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3312:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 20998) ADVANCE(3335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3313:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 20998) ADVANCE(3336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3314:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 20998) ADVANCE(3337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3315:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 20998) ADVANCE(3338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3316:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 21205) ADVANCE(3330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3317:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 21205) ADVANCE(3307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3318:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 21464) ADVANCE(3324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3319:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 21518) ADVANCE(1459);
      if (lookahead == 24460) ADVANCE(1480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3320:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 22312) ADVANCE(3323);
      if (lookahead == 30340) ADVANCE(3311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3321:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 22312) ADVANCE(3351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3322:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 22312) ADVANCE(3352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3323:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 22519) ADVANCE(3347);
      if (lookahead == 25191) ADVANCE(3348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3324:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 22522) ADVANCE(3332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3325:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 22522) ADVANCE(3329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3326:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 23450) ADVANCE(3325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3327:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 23558) ADVANCE(3313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3328:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 23559) ADVANCE(3312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3329:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 24213) ADVANCE(3317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3330:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 24335) ADVANCE(3353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3331:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 24335) ADVANCE(3318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3332:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 25805) ADVANCE(3306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3333:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 25903) ADVANCE(3302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3334:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 25903) ADVANCE(1378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3335:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 25903) ADVANCE(1531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3336:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 25903) ADVANCE(1534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3337:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 25903) ADVANCE(1538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3338:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 25903) ADVANCE(1541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3339:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 26044) ADVANCE(3310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3340:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 26399) ADVANCE(3374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3341:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 27491) ADVANCE(3321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3342:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 27491) ADVANCE(3322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3343:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 28216) ADVANCE(3314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3344:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 28216) ADVANCE(3315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3345:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 33267) ADVANCE(1415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3346:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 33267) ADVANCE(1420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3347:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 34892) ADVANCE(3328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3348:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 34892) ADVANCE(3327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3349:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 34892) ADVANCE(3303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3350:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 34892) ADVANCE(3304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3351:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 36827) ADVANCE(3349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3352:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 36914) ADVANCE(3350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3353:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 37325) ADVANCE(3326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3354:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 44032) ADVANCE(1379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3355:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 44033) ADVANCE(1771);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3356:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 44040) ADVANCE(1421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3357:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 45716) ADVANCE(1427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3358:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 47004) ADVANCE(3368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3359:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 47004) ADVANCE(3370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3360:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 47532) ADVANCE(3361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3361:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 48288) ADVANCE(3364);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3362:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 49828) ADVANCE(1391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3363:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 50948) ADVANCE(3369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3364:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 51060) ADVANCE(3362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3365:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 51116) ADVANCE(1375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3366:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 51473) ADVANCE(1770);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3367:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 51652) ADVANCE(3371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3368:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 52824) ADVANCE(3354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3369:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 52824) ADVANCE(3357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3370:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 52824) ADVANCE(1386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3371:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 54665) ADVANCE(1403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3372:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 54805) ADVANCE(1377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3373:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 54868) ADVANCE(3372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3374:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 65306) ADVANCE(3405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3375:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 65307) ADVANCE(3345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3376:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 65307) ADVANCE(3346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3377:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':' ||
          lookahead == 65306) ADVANCE(3385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3377);
      END_STATE();
    case 3378:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3378);
      END_STATE();
    case 3379:
      ACCEPT_TOKEN(aux_sym__scissor_token1);
      END_STATE();
    case 3380:
      ACCEPT_TOKEN(aux_sym__scissor_token1);
      if (lookahead == '\n') ADVANCE(3379);
      END_STATE();
    case 3381:
      ACCEPT_TOKEN(aux_sym__scissor_token1);
      if (lookahead == '\n') ADVANCE(3379);
      if (lookahead == '\r') ADVANCE(3380);
      if (lookahead != 0) ADVANCE(3381);
      END_STATE();
    case 3382:
      ACCEPT_TOKEN(sym_branch);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(3382);
      END_STATE();
    case 3383:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3383);
      END_STATE();
    case 3384:
      ACCEPT_TOKEN(aux_sym__change_token1);
      END_STATE();
    case 3385:
      ACCEPT_TOKEN(aux_sym__change_token2);
      END_STATE();
    case 3386:
      ACCEPT_TOKEN(aux_sym__change_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(3388);
      END_STATE();
    case 3387:
      ACCEPT_TOKEN(aux_sym__filepath_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3377);
      if (lookahead == ':' ||
          lookahead == 65306) ADVANCE(3386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3387);
      END_STATE();
    case 3388:
      ACCEPT_TOKEN(aux_sym__filepath_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(3388);
      END_STATE();
    case 3389:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 3390:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 3391:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(1368);
      END_STATE();
    case 3392:
      ACCEPT_TOKEN(anon_sym_pick);
      END_STATE();
    case 3393:
      ACCEPT_TOKEN(anon_sym_edit);
      END_STATE();
    case 3394:
      ACCEPT_TOKEN(anon_sym_squash);
      END_STATE();
    case 3395:
      ACCEPT_TOKEN(anon_sym_merge);
      END_STATE();
    case 3396:
      ACCEPT_TOKEN(anon_sym_fixup);
      END_STATE();
    case 3397:
      ACCEPT_TOKEN(anon_sym_drop);
      END_STATE();
    case 3398:
      ACCEPT_TOKEN(anon_sym_reword);
      END_STATE();
    case 3399:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 3400:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 3401:
      ACCEPT_TOKEN(anon_sym_reset);
      END_STATE();
    case 3402:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 3403:
      ACCEPT_TOKEN(anon_sym_Date_COLON);
      END_STATE();
    case 3404:
      ACCEPT_TOKEN(anon_sym_Date_COLON2);
      END_STATE();
    case 3405:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 3406:
      ACCEPT_TOKEN(anon_sym_Ngythng_COLON);
      END_STATE();
    case 3407:
      ACCEPT_TOKEN(anon_sym_Tarih_COLON);
      END_STATE();
    case 3408:
      ACCEPT_TOKEN(anon_sym_Datum_COLON);
      END_STATE();
    case 3409:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 3410:
      ACCEPT_TOKEN(anon_sym_Data_COLON);
      END_STATE();
    case 3411:
      ACCEPT_TOKEN(anon_sym_COLON3);
      END_STATE();
    case 3412:
      ACCEPT_TOKEN(anon_sym_Tanggal_COLON);
      END_STATE();
    case 3413:
      ACCEPT_TOKEN(anon_sym_Fecha_COLON);
      END_STATE();
    case 3414:
      ACCEPT_TOKEN(anon_sym_COLON4);
      END_STATE();
    case 3415:
      ACCEPT_TOKEN(anon_sym_Onbranch);
      END_STATE();
    case 3416:
      ACCEPT_TOKEN(anon_sym_Surlabranche);
      END_STATE();
    case 3417:
      ACCEPT_TOKEN(anon_sym_COLON5);
      END_STATE();
    case 3418:
      ACCEPT_TOKEN(anon_sym_Pgrenen);
      END_STATE();
    case 3419:
      ACCEPT_TOKEN(anon_sym_zerindebulunulandal_COLON);
      END_STATE();
    case 3420:
      ACCEPT_TOKEN(anon_sym_Trnnhnh);
      END_STATE();
    case 3421:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 3422:
      ACCEPT_TOKEN(anon_sym_Emramo);
      END_STATE();
    case 3423:
      ACCEPT_TOKEN(anon_sym_Nagazi);
      END_STATE();
    case 3424:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 3425:
      ACCEPT_TOKEN(anon_sym_Sulbranch);
      END_STATE();
    case 3426:
      ACCEPT_TOKEN(anon_sym_Padacabang);
      END_STATE();
    case 3427:
      ACCEPT_TOKEN(anon_sym_Enlarama);
      END_STATE();
    case 3428:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 3429:
      ACCEPT_TOKEN(anon_sym_AufBranch);
      END_STATE();
    case 3430:
      ACCEPT_TOKEN(anon_sym_Enlabranca);
      END_STATE();
    case 3431:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 3432:
      ACCEPT_TOKEN(anon_sym_Yourbranchisuptodatewith_SQUOTE);
      END_STATE();
    case 3433:
      ACCEPT_TOKEN(anon_sym_SQUOTE_DOT);
      END_STATE();
    case 3434:
      ACCEPT_TOKEN(anon_sym_Votrebrancheestjouravec_SQUOTE);
      END_STATE();
    case 3435:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 3436:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 3437:
      ACCEPT_TOKEN(anon_sym_SQUOTE3);
      END_STATE();
    case 3438:
      ACCEPT_TOKEN(anon_sym_Nhnhcabncpnhtvi);
      END_STATE();
    case 3439:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 3440:
      ACCEPT_TOKEN(anon_sym_Dalnz_SQUOTE);
      END_STATE();
    case 3441:
      ACCEPT_TOKEN(anon_sym_SQUOTEilegncel_DOT);
      END_STATE();
    case 3442:
      ACCEPT_TOKEN(anon_sym_Dingrenrjourmed_DQUOTE);
      END_STATE();
    case 3443:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DOT);
      END_STATE();
    case 3444:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 3445:
      ACCEPT_TOKEN(anon_sym_DOT2);
      END_STATE();
    case 3446:
      ACCEPT_TOKEN(anon_sym_Teuramoestatualizadocom_SQUOTE);
      END_STATE();
    case 3447:
      ACCEPT_TOKEN(anon_sym_Twojagajestnabiecoz);
      END_STATE();
    case 3448:
      ACCEPT_TOKEN(anon_sym_SQUOTE4);
      END_STATE();
    case 3449:
      ACCEPT_TOKEN(anon_sym_SQUOTE_DOT2);
      END_STATE();
    case 3450:
      ACCEPT_TOKEN(anon_sym_Iltuobranchaggiornatorispettoa_SQUOTE);
      END_STATE();
    case 3451:
      ACCEPT_TOKEN(anon_sym_CabangAndamutakhirdengan_SQUOTE);
      END_STATE();
    case 3452:
      ACCEPT_TOKEN(anon_sym_Turamaestactualizadacon_SQUOTE);
      END_STATE();
    case 3453:
      ACCEPT_TOKEN(anon_sym_SQUOTE5);
      END_STATE();
    case 3454:
      ACCEPT_TOKEN(anon_sym_IhrBranchistaufdemselbenStandwie_SQUOTE);
      END_STATE();
    case 3455:
      ACCEPT_TOKEN(anon_sym_Lavostrabrancaestaldiaamb);
      END_STATE();
    case 3456:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 3457:
      ACCEPT_TOKEN(anon_sym_DOT3);
      END_STATE();
    case 3458:
      ACCEPT_TOKEN(anon_sym_Yourbranchisbehind_SQUOTE);
      END_STATE();
    case 3459:
      ACCEPT_TOKEN(anon_sym_SQUOTEby);
      END_STATE();
    case 3460:
      ACCEPT_TOKEN(anon_sym_commit_COMMAandcanbefast_DASHforwarded_DOT);
      END_STATE();
    case 3461:
      ACCEPT_TOKEN(anon_sym_commits_COMMAandcanbefast_DASHforwarded_DOT);
      END_STATE();
    case 3462:
      ACCEPT_TOKEN(anon_sym_Votrebrancheestenretardsur_SQUOTE);
      END_STATE();
    case 3463:
      ACCEPT_TOKEN(anon_sym_SQUOTEde);
      END_STATE();
    case 3464:
      ACCEPT_TOKEN(anon_sym_commit_COMMAetpeuttremisejourenavancerapide_DOT);
      END_STATE();
    case 3465:
      ACCEPT_TOKEN(anon_sym_commits_COMMAetpeuttremisejourenavancerapide_DOT);
      END_STATE();
    case 3466:
      ACCEPT_TOKEN(anon_sym_Lavostrabrancaest);
      if (lookahead == 'a') ADVANCE(2383);
      END_STATE();
    case 3467:
      ACCEPT_TOKEN(anon_sym_comissiperdarrerede);
      END_STATE();
    case 3468:
      ACCEPT_TOKEN(anon_sym_COMMAipotavanar_DASHserpidament_DOT);
      END_STATE();
    case 3469:
      ACCEPT_TOKEN(anon_sym_comissionsperdarrerede);
      END_STATE();
    case 3470:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 3471:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 3472:
      ACCEPT_TOKEN(anon_sym_DOT4);
      END_STATE();
    case 3473:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 3474:
      ACCEPT_TOKEN(anon_sym_IhrBranchist);
      if (lookahead == 'a') ADVANCE(2838);
      END_STATE();
    case 3475:
      ACCEPT_TOKEN(anon_sym_Commithinter_SQUOTE);
      END_STATE();
    case 3476:
      ACCEPT_TOKEN(anon_sym_SQUOTE_COMMAundkannvorgespultwerden_DOT);
      END_STATE();
    case 3477:
      ACCEPT_TOKEN(anon_sym_Commitshinter_SQUOTE);
      END_STATE();
    case 3478:
      ACCEPT_TOKEN(anon_sym_SQUOTE6);
      END_STATE();
    case 3479:
      ACCEPT_TOKEN(anon_sym_SQUOTE7);
      END_STATE();
    case 3480:
      ACCEPT_TOKEN(anon_sym_COMMA_DOT);
      END_STATE();
    case 3481:
      ACCEPT_TOKEN(anon_sym_COMMA_DOT2);
      END_STATE();
    case 3482:
      ACCEPT_TOKEN(anon_sym_Turamaestdetrsde_SQUOTE);
      END_STATE();
    case 3483:
      ACCEPT_TOKEN(anon_sym_SQUOTEpor);
      END_STATE();
    case 3484:
      ACCEPT_TOKEN(anon_sym_commit_COMMAypuedeseravanzadarpido_DOT);
      END_STATE();
    case 3485:
      ACCEPT_TOKEN(anon_sym_commits_COMMAypuedeseravanzadarpido_DOT);
      END_STATE();
    case 3486:
      ACCEPT_TOKEN(anon_sym_CabangAndadibelakang_SQUOTE);
      END_STATE();
    case 3487:
      ACCEPT_TOKEN(anon_sym_SQUOTEoleh);
      END_STATE();
    case 3488:
      ACCEPT_TOKEN(anon_sym_komit_COMMAdanbisadimaju_DASHcepatkan_DOT);
      END_STATE();
    case 3489:
      ACCEPT_TOKEN(anon_sym_CabangAndadibelakan_SQUOTE);
      END_STATE();
    case 3490:
      ACCEPT_TOKEN(anon_sym_Iltuobranch_COMMArispettoa_SQUOTE);
      END_STATE();
    case 3491:
      ACCEPT_TOKEN(anon_sym_SQUOTE_COMMAindietrodi);
      END_STATE();
    case 3492:
      ACCEPT_TOKEN(anon_sym_commitenepossoeseguireilfastforward_DOT);
      END_STATE();
    case 3493:
      ACCEPT_TOKEN(anon_sym_SQUOTE8);
      END_STATE();
    case 3494:
      ACCEPT_TOKEN(anon_sym_COMMA_DOT3);
      END_STATE();
    case 3495:
      ACCEPT_TOKEN(anon_sym_Nhnhcabnngngsau);
      END_STATE();
    case 3496:
      ACCEPT_TOKEN(anon_sym_12);
      END_STATE();
    case 3497:
      ACCEPT_TOKEN(anon_sym_lnchuyngiao_COMMAvcthcchuyn_DASHtip_DASHnhanh_DOT);
      END_STATE();
    case 3498:
      ACCEPT_TOKEN(anon_sym_SQUOTEdalndan);
      END_STATE();
    case 3499:
      ACCEPT_TOKEN(anon_sym_ilemegerideveilerisarlabilir_DOT);
      END_STATE();
    case 3500:
      ACCEPT_TOKEN(anon_sym_Dingrenliggerefter_DQUOTE);
      END_STATE();
    case 3501:
      ACCEPT_TOKEN(anon_sym_DQUOTEmed);
      END_STATE();
    case 3502:
      ACCEPT_TOKEN(anon_sym_incheckning_COMMAochkansnabbspolas_DOT);
      END_STATE();
    case 3503:
      ACCEPT_TOKEN(anon_sym_incheckningar_COMMAochkansnabbspolas_DOT);
      END_STATE();
    case 3504:
      ACCEPT_TOKEN(anon_sym_13);
      END_STATE();
    case 3505:
      ACCEPT_TOKEN(anon_sym_14);
      END_STATE();
    case 3506:
      ACCEPT_TOKEN(anon_sym_DOT5);
      END_STATE();
    case 3507:
      ACCEPT_TOKEN(anon_sym_DOT6);
      END_STATE();
    case 3508:
      ACCEPT_TOKEN(anon_sym_DOT7);
      END_STATE();
    case 3509:
      ACCEPT_TOKEN(anon_sym_Teuramoestatrsde_SQUOTE);
      END_STATE();
    case 3510:
      ACCEPT_TOKEN(anon_sym_memria_COMMAepodeseravanado_DOT);
      END_STATE();
    case 3511:
      ACCEPT_TOKEN(anon_sym_memrias_COMMAepodeseravanado_DOT);
      END_STATE();
    case 3512:
      ACCEPT_TOKEN(anon_sym_Twojagajestza);
      END_STATE();
    case 3513:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 3514:
      ACCEPT_TOKEN(anon_sym_zapisimoezostaprzewinita_DOT);
      END_STATE();
    case 3515:
      ACCEPT_TOKEN(anon_sym_zapisyimoezostaprzewinita_DOT);
      END_STATE();
    case 3516:
      ACCEPT_TOKEN(anon_sym_zapiswimoezostaprzewinita_DOT);
      END_STATE();
    case 3517:
      ACCEPT_TOKEN(anon_sym_SQUOTE9);
      END_STATE();
    case 3518:
      ACCEPT_TOKEN(anon_sym_SQUOTE10);
      END_STATE();
    case 3519:
      ACCEPT_TOKEN(anon_sym_15);
      END_STATE();
    case 3520:
      ACCEPT_TOKEN(anon_sym_SQUOTE11);
      END_STATE();
    case 3521:
      ACCEPT_TOKEN(anon_sym_16);
      END_STATE();
    case 3522:
      ACCEPT_TOKEN(anon_sym_Yourbranchisaheadof_SQUOTE);
      END_STATE();
    case 3523:
      ACCEPT_TOKEN(anon_sym_commit_DOT);
      END_STATE();
    case 3524:
      ACCEPT_TOKEN(anon_sym_commits_DOT);
      END_STATE();
    case 3525:
      ACCEPT_TOKEN(anon_sym_Votrebrancheestenavancesur_SQUOTE);
      END_STATE();
    case 3526:
      ACCEPT_TOKEN(anon_sym_SQUOTE12);
      END_STATE();
    case 3527:
      ACCEPT_TOKEN(anon_sym_17);
      END_STATE();
    case 3528:
      ACCEPT_TOKEN(anon_sym_SQUOTE13);
      END_STATE();
    case 3529:
      ACCEPT_TOKEN(anon_sym_18);
      END_STATE();
    case 3530:
      ACCEPT_TOKEN(anon_sym_Nhnhcabnngtrc);
      END_STATE();
    case 3531:
      ACCEPT_TOKEN(anon_sym_lnchuyngiao_DOT);
      END_STATE();
    case 3532:
      ACCEPT_TOKEN(anon_sym_ilemeileride_DOT);
      END_STATE();
    case 3533:
      ACCEPT_TOKEN(anon_sym_Dingrenliggerfre_DQUOTE);
      END_STATE();
    case 3534:
      ACCEPT_TOKEN(anon_sym_incheckning_DOT);
      END_STATE();
    case 3535:
      ACCEPT_TOKEN(anon_sym_incheckningar_DOT);
      END_STATE();
    case 3536:
      ACCEPT_TOKEN(anon_sym_19);
      END_STATE();
    case 3537:
      ACCEPT_TOKEN(anon_sym_DOT8);
      END_STATE();
    case 3538:
      ACCEPT_TOKEN(anon_sym_DOT9);
      END_STATE();
    case 3539:
      ACCEPT_TOKEN(anon_sym_DOT10);
      END_STATE();
    case 3540:
      ACCEPT_TOKEN(anon_sym_Teuramoestfrentede_SQUOTE);
      END_STATE();
    case 3541:
      ACCEPT_TOKEN(anon_sym_memria_DOT);
      END_STATE();
    case 3542:
      ACCEPT_TOKEN(anon_sym_memrias_DOT);
      END_STATE();
    case 3543:
      ACCEPT_TOKEN(anon_sym_Twojagajestdoprzoduwzgldem);
      END_STATE();
    case 3544:
      ACCEPT_TOKEN(anon_sym_zapis_DOT);
      END_STATE();
    case 3545:
      ACCEPT_TOKEN(anon_sym_zapisy_DOT);
      END_STATE();
    case 3546:
      ACCEPT_TOKEN(anon_sym_zapisw_DOT);
      END_STATE();
    case 3547:
      ACCEPT_TOKEN(anon_sym_DOT11);
      END_STATE();
    case 3548:
      ACCEPT_TOKEN(anon_sym_Iltuobranchavantirispettoa_SQUOTE);
      END_STATE();
    case 3549:
      ACCEPT_TOKEN(anon_sym_SQUOTEdi);
      END_STATE();
    case 3550:
      ACCEPT_TOKEN(anon_sym_CabangAndamendahului_SQUOTE);
      END_STATE();
    case 3551:
      ACCEPT_TOKEN(anon_sym_komit_DOT);
      END_STATE();
    case 3552:
      ACCEPT_TOKEN(anon_sym_Turamaestadelantadaa_SQUOTE);
      END_STATE();
    case 3553:
      ACCEPT_TOKEN(anon_sym_SQUOTE14);
      END_STATE();
    case 3554:
      ACCEPT_TOKEN(anon_sym_DOT12);
      END_STATE();
    case 3555:
      ACCEPT_TOKEN(anon_sym_DOT13);
      END_STATE();
    case 3556:
      ACCEPT_TOKEN(anon_sym_Commitvor_SQUOTE);
      END_STATE();
    case 3557:
      ACCEPT_TOKEN(anon_sym_Commitsvor_SQUOTE);
      END_STATE();
    case 3558:
      ACCEPT_TOKEN(anon_sym_comissiperdavantde);
      END_STATE();
    case 3559:
      ACCEPT_TOKEN(anon_sym_comissionsperdavantde);
      END_STATE();
    case 3560:
      ACCEPT_TOKEN(anon_sym_20);
      END_STATE();
    case 3561:
      ACCEPT_TOKEN(anon_sym_21);
      END_STATE();
    case 3562:
      ACCEPT_TOKEN(anon_sym_Youarecurrentlyrebasingbranch_SQUOTE);
      END_STATE();
    case 3563:
      ACCEPT_TOKEN(anon_sym_SQUOTEon_SQUOTE);
      END_STATE();
    case 3564:
      ACCEPT_TOKEN(anon_sym_Voustesentrainderebaserlabranche_SQUOTE);
      END_STATE();
    case 3565:
      ACCEPT_TOKEN(anon_sym_SQUOTEsur_SQUOTE);
      END_STATE();
    case 3566:
      ACCEPT_TOKEN(anon_sym_SQUOTE15);
      END_STATE();
    case 3567:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 3568:
      ACCEPT_TOKEN(anon_sym_SQUOTE16);
      END_STATE();
    case 3569:
      ACCEPT_TOKEN(anon_sym_SQUOTE17);
      END_STATE();
    case 3570:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE2);
      END_STATE();
    case 3571:
      ACCEPT_TOKEN(anon_sym_SQUOTE18);
      END_STATE();
    case 3572:
      ACCEPT_TOKEN(anon_sym_Bnhinnayangthchinvicrebasenhnh);
      END_STATE();
    case 3573:
      ACCEPT_TOKEN(anon_sym_trn);
      END_STATE();
    case 3574:
      ACCEPT_TOKEN(anon_sym_uanda_SQUOTE);
      END_STATE();
    case 3575:
      ACCEPT_TOKEN(anon_sym_SQUOTEdaln_SQUOTE);
      END_STATE();
    case 3576:
      ACCEPT_TOKEN(anon_sym_SQUOTEzerineyenidentemellendiriyorsunuz_DOT);
      END_STATE();
    case 3577:
      ACCEPT_TOKEN(anon_sym_Duhllerpattombaseragrenen_DQUOTE);
      END_STATE();
    case 3578:
      ACCEPT_TOKEN(anon_sym_DQUOTEovanp_DQUOTE);
      END_STATE();
    case 3579:
      ACCEPT_TOKEN(anon_sym_22);
      END_STATE();
    case 3580:
      ACCEPT_TOKEN(anon_sym_23);
      END_STATE();
    case 3581:
      ACCEPT_TOKEN(anon_sym_Estsrebaseandoramo_SQUOTE);
      END_STATE();
    case 3582:
      ACCEPT_TOKEN(anon_sym_SQUOTEsobre_SQUOTE);
      END_STATE();
    case 3583:
      ACCEPT_TOKEN(anon_sym_Przestawiaszwaniega);
      END_STATE();
    case 3584:
      ACCEPT_TOKEN(anon_sym_na);
      END_STATE();
    case 3585:
      ACCEPT_TOKEN(anon_sym_SQUOTE19);
      END_STATE();
    case 3586:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE3);
      END_STATE();
    case 3587:
      ACCEPT_TOKEN(anon_sym_SQUOTE_DOT3);
      END_STATE();
    case 3588:
      ACCEPT_TOKEN(anon_sym_Attualmentestaieseguendoilrebasedelbranch_SQUOTE);
      END_STATE();
    case 3589:
      ACCEPT_TOKEN(anon_sym_SQUOTEsu_SQUOTE);
      END_STATE();
    case 3590:
      ACCEPT_TOKEN(anon_sym_Andasedangmendasarkanulangcabang_SQUOTE);
      END_STATE();
    case 3591:
      ACCEPT_TOKEN(anon_sym_SQUOTEpada_SQUOTE);
      END_STATE();
    case 3592:
      ACCEPT_TOKEN(anon_sym_Estsaplicandounrebasedelarama_SQUOTE);
      END_STATE();
    case 3593:
      ACCEPT_TOKEN(anon_sym_rebase_SQUOTE);
      END_STATE();
    case 3594:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE4);
      END_STATE();
    case 3595:
      ACCEPT_TOKEN(anon_sym_SiesindgeradebeimRebasevonBranch_SQUOTE);
      END_STATE();
    case 3596:
      ACCEPT_TOKEN(anon_sym_SQUOTEauf_SQUOTE);
      END_STATE();
    case 3597:
      ACCEPT_TOKEN(anon_sym_Actualmentesteufentrebasedelabranca);
      END_STATE();
    case 3598:
      ACCEPT_TOKEN(anon_sym_en);
      END_STATE();
    case 3599:
      ACCEPT_TOKEN(anon_sym_24);
      END_STATE();
    case 3600:
      ACCEPT_TOKEN(anon_sym_25);
      END_STATE();
    case 3601:
      ACCEPT_TOKEN(anon_sym_interactiverebaseinprogress_SEMIonto);
      END_STATE();
    case 3602:
      ACCEPT_TOKEN(anon_sym_rebasageinteractifencours_SEMIsur);
      END_STATE();
    case 3603:
      ACCEPT_TOKEN(anon_sym_26);
      END_STATE();
    case 3604:
      ACCEPT_TOKEN(anon_sym_rebaseinteractiuencurs_SEMIsobre);
      END_STATE();
    case 3605:
      ACCEPT_TOKEN(anon_sym_interaktivesRebaseimGange_SEMIauf);
      END_STATE();
    case 3606:
      ACCEPT_TOKEN(anon_sym_rebase_COMMA);
      END_STATE();
    case 3607:
      ACCEPT_TOKEN(anon_sym_rebaseinteractivoenprogreso_SEMIsobre);
      END_STATE();
    case 3608:
      ACCEPT_TOKEN(anon_sym_sedangmendasarkanulanginteraktif_SEMIke);
      END_STATE();
    case 3609:
      ACCEPT_TOKEN(anon_sym_rebaseinterattivoincorsosu);
      END_STATE();
    case 3610:
      ACCEPT_TOKEN(anon_sym_DOT14);
      END_STATE();
    case 3611:
      ACCEPT_TOKEN(anon_sym_trwainteraktywneprzestawianiena);
      END_STATE();
    case 3612:
      ACCEPT_TOKEN(anon_sym_rebaseinterativoemcurso_SEMIsobre);
      END_STATE();
    case 3613:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 3614:
      ACCEPT_TOKEN(anon_sym_interaktivombaseringpgr_SEMIovanp);
      END_STATE();
    case 3615:
      ACCEPT_TOKEN(anon_sym_ununzerineetkileimliyenidentemellendirmesrmekte_COLON);
      END_STATE();
    case 3616:
      ACCEPT_TOKEN(anon_sym_rebasechtngtcangcthchin_SEMIlntrn);
      END_STATE();
    case 3617:
      ACCEPT_TOKEN(anon_sym_27);
      END_STATE();
    case 3618:
      ACCEPT_TOKEN(anon_sym_28);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 1268, .external_lex_state = 2},
  [2] = {.lex_state = 1, .external_lex_state = 3},
  [3] = {.lex_state = 2, .external_lex_state = 3},
  [4] = {.lex_state = 1267, .external_lex_state = 4},
  [5] = {.lex_state = 1267, .external_lex_state = 4},
  [6] = {.lex_state = 1267, .external_lex_state = 4},
  [7] = {.lex_state = 1267, .external_lex_state = 4},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 1267, .external_lex_state = 4},
  [10] = {.lex_state = 1269, .external_lex_state = 4},
  [11] = {.lex_state = 1267, .external_lex_state = 4},
  [12] = {.lex_state = 1267, .external_lex_state = 4},
  [13] = {.lex_state = 1267, .external_lex_state = 4},
  [14] = {.lex_state = 1267, .external_lex_state = 4},
  [15] = {.lex_state = 1267, .external_lex_state = 4},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 1270},
  [18] = {.lex_state = 1270},
  [19] = {.lex_state = 1268},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 1270},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 1270},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 12},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 217},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 1270},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 14},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 217},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 14},
  [56] = {.lex_state = 218},
  [57] = {.lex_state = 218},
  [58] = {.lex_state = 218},
  [59] = {.lex_state = 218},
  [60] = {.lex_state = 218},
  [61] = {.lex_state = 218},
  [62] = {.lex_state = 218},
  [63] = {.lex_state = 218},
  [64] = {.lex_state = 218},
  [65] = {.lex_state = 218},
  [66] = {.lex_state = 218},
  [67] = {.lex_state = 218},
  [68] = {.lex_state = 218},
  [69] = {.lex_state = 218},
  [70] = {.lex_state = 218},
  [71] = {.lex_state = 218},
  [72] = {.lex_state = 218},
  [73] = {.lex_state = 218},
  [74] = {.lex_state = 218},
  [75] = {.lex_state = 218},
  [76] = {.lex_state = 218},
  [77] = {.lex_state = 218},
  [78] = {.lex_state = 218},
  [79] = {.lex_state = 218},
  [80] = {.lex_state = 218},
  [81] = {.lex_state = 218},
  [82] = {.lex_state = 218},
  [83] = {.lex_state = 218},
  [84] = {.lex_state = 218},
  [85] = {.lex_state = 218},
  [86] = {.lex_state = 218},
  [87] = {.lex_state = 218},
  [88] = {.lex_state = 218},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 14},
  [91] = {.lex_state = 1270},
  [92] = {.lex_state = 1270},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 1270},
  [99] = {.lex_state = 1270},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 14},
  [102] = {.lex_state = 14},
  [103] = {.lex_state = 14},
  [104] = {.lex_state = 14},
  [105] = {.lex_state = 14},
  [106] = {.lex_state = 14},
  [107] = {.lex_state = 14},
  [108] = {.lex_state = 14},
  [109] = {.lex_state = 14},
  [110] = {.lex_state = 14},
  [111] = {.lex_state = 14},
  [112] = {.lex_state = 14},
  [113] = {.lex_state = 14},
  [114] = {.lex_state = 14},
  [115] = {.lex_state = 14},
  [116] = {.lex_state = 14},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 14},
  [119] = {.lex_state = 14},
  [120] = {.lex_state = 14},
  [121] = {.lex_state = 14},
  [122] = {.lex_state = 14},
  [123] = {.lex_state = 14},
  [124] = {.lex_state = 14},
  [125] = {.lex_state = 14},
  [126] = {.lex_state = 14},
  [127] = {.lex_state = 14},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 14},
  [130] = {.lex_state = 14},
  [131] = {.lex_state = 14},
  [132] = {.lex_state = 14},
  [133] = {.lex_state = 14},
  [134] = {.lex_state = 14},
  [135] = {.lex_state = 14},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 14},
  [138] = {.lex_state = 14},
  [139] = {.lex_state = 14},
  [140] = {.lex_state = 14},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 14},
  [143] = {.lex_state = 14},
  [144] = {.lex_state = 14},
  [145] = {.lex_state = 14},
  [146] = {.lex_state = 14},
  [147] = {.lex_state = 14},
  [148] = {.lex_state = 14},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 14},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 218},
  [153] = {.lex_state = 218},
  [154] = {.lex_state = 218},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 218},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 218},
  [159] = {.lex_state = 218},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 218},
  [163] = {.lex_state = 14},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 14},
  [168] = {.lex_state = 14},
  [169] = {.lex_state = 14},
  [170] = {.lex_state = 14},
  [171] = {.lex_state = 218},
  [172] = {.lex_state = 218},
  [173] = {.lex_state = 218},
  [174] = {.lex_state = 218},
  [175] = {.lex_state = 218},
  [176] = {.lex_state = 218},
  [177] = {.lex_state = 14},
  [178] = {.lex_state = 14},
  [179] = {.lex_state = 14},
  [180] = {.lex_state = 14},
  [181] = {.lex_state = 14},
  [182] = {.lex_state = 14},
  [183] = {.lex_state = 14},
  [184] = {.lex_state = 14},
  [185] = {.lex_state = 14},
  [186] = {.lex_state = 14},
  [187] = {.lex_state = 14},
  [188] = {.lex_state = 14},
  [189] = {.lex_state = 14},
  [190] = {.lex_state = 14},
  [191] = {.lex_state = 14},
  [192] = {.lex_state = 14},
  [193] = {.lex_state = 14},
  [194] = {.lex_state = 14},
  [195] = {.lex_state = 14},
  [196] = {.lex_state = 14},
  [197] = {.lex_state = 14},
  [198] = {.lex_state = 14},
  [199] = {.lex_state = 218},
  [200] = {.lex_state = 218},
  [201] = {.lex_state = 218},
  [202] = {.lex_state = 218},
  [203] = {.lex_state = 218},
  [204] = {.lex_state = 218},
  [205] = {.lex_state = 218},
  [206] = {.lex_state = 218},
  [207] = {.lex_state = 218},
  [208] = {.lex_state = 218},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 218},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 14},
  [214] = {.lex_state = 14},
  [215] = {.lex_state = 14},
  [216] = {.lex_state = 218},
  [217] = {.lex_state = 14},
  [218] = {.lex_state = 14},
  [219] = {.lex_state = 14},
  [220] = {.lex_state = 14},
  [221] = {.lex_state = 14},
  [222] = {.lex_state = 14},
  [223] = {.lex_state = 218},
  [224] = {.lex_state = 218},
  [225] = {.lex_state = 14},
  [226] = {.lex_state = 14},
  [227] = {.lex_state = 14},
  [228] = {.lex_state = 218},
  [229] = {.lex_state = 218},
  [230] = {.lex_state = 218},
  [231] = {.lex_state = 218},
  [232] = {.lex_state = 14},
  [233] = {.lex_state = 14},
  [234] = {.lex_state = 218},
  [235] = {.lex_state = 14},
  [236] = {.lex_state = 14},
  [237] = {.lex_state = 14},
  [238] = {.lex_state = 218},
  [239] = {.lex_state = 218},
  [240] = {.lex_state = 218},
  [241] = {.lex_state = 5},
  [242] = {.lex_state = 14},
  [243] = {.lex_state = 14},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 14},
  [246] = {.lex_state = 14},
  [247] = {.lex_state = 14},
  [248] = {.lex_state = 14},
  [249] = {.lex_state = 14},
  [250] = {.lex_state = 14},
  [251] = {.lex_state = 14},
  [252] = {.lex_state = 14},
  [253] = {.lex_state = 14},
  [254] = {.lex_state = 14},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 217},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {(TSStateId)(-1)},
  [261] = {(TSStateId)(-1)},
  [262] = {(TSStateId)(-1)},
};

enum {
  ts_external_token__trailer_token = 0,
  ts_external_token__comment_title = 1,
  ts_external_token__conventional_type = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__trailer_token] = sym__trailer_token,
  [ts_external_token__comment_title] = sym__comment_title,
  [ts_external_token__conventional_type] = sym__conventional_type,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__trailer_token] = true,
    [ts_external_token__comment_title] = true,
    [ts_external_token__conventional_type] = true,
  },
  [2] = {
    [ts_external_token__conventional_type] = true,
  },
  [3] = {
    [ts_external_token__comment_title] = true,
  },
  [4] = {
    [ts_external_token__trailer_token] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_token1] = ACTIONS(1),
    [aux_sym_subject_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(1),
    [aux_sym__change_token1] = ACTIONS(1),
    [sym__trailer_token] = ACTIONS(1),
    [sym__comment_title] = ACTIONS(1),
    [sym__conventional_type] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(151),
    [sym_subject] = STATE(95),
    [sym_prefix] = STATE(32),
    [sym_comment] = STATE(1),
    [sym__scissor] = STATE(255),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_source_token1] = ACTIONS(7),
    [aux_sym_subject_token1] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [aux_sym__scissor_token1] = ACTIONS(13),
    [sym__conventional_type] = ACTIONS(15),
  },
  [2] = {
    [sym_comment] = STATE(2),
    [sym__change] = STATE(244),
    [sym_rebase_command] = STATE(244),
    [sym__date] = STATE(244),
    [sym__onbranch] = STATE(244),
    [sym__uptodate] = STATE(244),
    [sym__behind] = STATE(244),
    [sym__ahead] = STATE(244),
    [sym__rebasing] = STATE(244),
    [sym__interactive_rebasing] = STATE(244),
    [aux_sym_source_token1] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(19),
    [aux_sym_comment_token2] = ACTIONS(21),
    [aux_sym__change_token1] = ACTIONS(23),
    [anon_sym_] = ACTIONS(25),
    [anon_sym_Date_COLON] = ACTIONS(27),
    [anon_sym_Date_COLON2] = ACTIONS(27),
    [anon_sym_2] = ACTIONS(27),
    [anon_sym_Ngythng_COLON] = ACTIONS(27),
    [anon_sym_Tarih_COLON] = ACTIONS(27),
    [anon_sym_Datum_COLON] = ACTIONS(27),
    [anon_sym_COLON2] = ACTIONS(27),
    [anon_sym_Data_COLON] = ACTIONS(27),
    [anon_sym_COLON3] = ACTIONS(27),
    [anon_sym_Tanggal_COLON] = ACTIONS(27),
    [anon_sym_Fecha_COLON] = ACTIONS(27),
    [anon_sym_COLON4] = ACTIONS(27),
    [anon_sym_Onbranch] = ACTIONS(29),
    [anon_sym_Surlabranche] = ACTIONS(29),
    [anon_sym_COLON5] = ACTIONS(29),
    [anon_sym_Pgrenen] = ACTIONS(29),
    [anon_sym_zerindebulunulandal_COLON] = ACTIONS(29),
    [anon_sym_Trnnhnh] = ACTIONS(29),
    [anon_sym_3] = ACTIONS(29),
    [anon_sym_Emramo] = ACTIONS(29),
    [anon_sym_Nagazi] = ACTIONS(29),
    [anon_sym_4] = ACTIONS(29),
    [anon_sym_Sulbranch] = ACTIONS(29),
    [anon_sym_Padacabang] = ACTIONS(29),
    [anon_sym_Enlarama] = ACTIONS(29),
    [anon_sym_5] = ACTIONS(29),
    [anon_sym_AufBranch] = ACTIONS(29),
    [anon_sym_Enlabranca] = ACTIONS(29),
    [anon_sym_6] = ACTIONS(29),
    [anon_sym_Yourbranchisuptodatewith_SQUOTE] = ACTIONS(31),
    [anon_sym_Votrebrancheestjouravec_SQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE3] = ACTIONS(33),
    [anon_sym_Nhnhcabncpnhtvi] = ACTIONS(35),
    [anon_sym_Dalnz_SQUOTE] = ACTIONS(37),
    [anon_sym_Dingrenrjourmed_DQUOTE] = ACTIONS(39),
    [anon_sym_7] = ACTIONS(41),
    [anon_sym_Teuramoestatualizadocom_SQUOTE] = ACTIONS(31),
    [anon_sym_Twojagajestnabiecoz] = ACTIONS(35),
    [anon_sym_SQUOTE4] = ACTIONS(43),
    [anon_sym_Iltuobranchaggiornatorispettoa_SQUOTE] = ACTIONS(31),
    [anon_sym_CabangAndamutakhirdengan_SQUOTE] = ACTIONS(31),
    [anon_sym_Turamaestactualizadacon_SQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE5] = ACTIONS(31),
    [anon_sym_IhrBranchistaufdemselbenStandwie_SQUOTE] = ACTIONS(31),
    [anon_sym_Lavostrabrancaestaldiaamb] = ACTIONS(41),
    [anon_sym_8] = ACTIONS(45),
    [anon_sym_Yourbranchisbehind_SQUOTE] = ACTIONS(47),
    [anon_sym_Votrebrancheestenretardsur_SQUOTE] = ACTIONS(49),
    [anon_sym_Lavostrabrancaest] = ACTIONS(51),
    [anon_sym_9] = ACTIONS(53),
    [anon_sym_IhrBranchist] = ACTIONS(55),
    [anon_sym_SQUOTE6] = ACTIONS(57),
    [anon_sym_Turamaestdetrsde_SQUOTE] = ACTIONS(59),
    [anon_sym_CabangAndadibelakang_SQUOTE] = ACTIONS(61),
    [anon_sym_CabangAndadibelakan_SQUOTE] = ACTIONS(61),
    [anon_sym_Iltuobranch_COMMArispettoa_SQUOTE] = ACTIONS(63),
    [anon_sym_Nhnhcabnngngsau] = ACTIONS(65),
    [anon_sym_Dingrenliggerefter_DQUOTE] = ACTIONS(67),
    [anon_sym_13] = ACTIONS(69),
    [anon_sym_Teuramoestatrsde_SQUOTE] = ACTIONS(71),
    [anon_sym_Twojagajestza] = ACTIONS(73),
    [anon_sym_SQUOTE9] = ACTIONS(75),
    [anon_sym_SQUOTE11] = ACTIONS(77),
    [anon_sym_Yourbranchisaheadof_SQUOTE] = ACTIONS(79),
    [anon_sym_Votrebrancheestenavancesur_SQUOTE] = ACTIONS(81),
    [anon_sym_SQUOTE12] = ACTIONS(83),
    [anon_sym_SQUOTE13] = ACTIONS(85),
    [anon_sym_Nhnhcabnngtrc] = ACTIONS(87),
    [anon_sym_Dingrenliggerfre_DQUOTE] = ACTIONS(89),
    [anon_sym_19] = ACTIONS(91),
    [anon_sym_Teuramoestfrentede_SQUOTE] = ACTIONS(93),
    [anon_sym_Twojagajestdoprzoduwzgldem] = ACTIONS(95),
    [anon_sym_Iltuobranchavantirispettoa_SQUOTE] = ACTIONS(97),
    [anon_sym_CabangAndamendahului_SQUOTE] = ACTIONS(99),
    [anon_sym_Turamaestadelantadaa_SQUOTE] = ACTIONS(101),
    [anon_sym_SQUOTE14] = ACTIONS(103),
    [anon_sym_Youarecurrentlyrebasingbranch_SQUOTE] = ACTIONS(105),
    [anon_sym_Voustesentrainderebaserlabranche_SQUOTE] = ACTIONS(107),
    [anon_sym_SQUOTE15] = ACTIONS(109),
    [anon_sym_SQUOTE17] = ACTIONS(111),
    [anon_sym_Bnhinnayangthchinvicrebasenhnh] = ACTIONS(113),
    [anon_sym_uanda_SQUOTE] = ACTIONS(115),
    [anon_sym_Duhllerpattombaseragrenen_DQUOTE] = ACTIONS(117),
    [anon_sym_22] = ACTIONS(119),
    [anon_sym_Estsrebaseandoramo_SQUOTE] = ACTIONS(121),
    [anon_sym_Przestawiaszwaniega] = ACTIONS(123),
    [anon_sym_SQUOTE19] = ACTIONS(125),
    [anon_sym_Attualmentestaieseguendoilrebasedelbranch_SQUOTE] = ACTIONS(127),
    [anon_sym_Andasedangmendasarkanulangcabang_SQUOTE] = ACTIONS(129),
    [anon_sym_Estsaplicandounrebasedelarama_SQUOTE] = ACTIONS(121),
    [anon_sym_rebase_SQUOTE] = ACTIONS(131),
    [anon_sym_SiesindgeradebeimRebasevonBranch_SQUOTE] = ACTIONS(133),
    [anon_sym_Actualmentesteufentrebasedelabranca] = ACTIONS(135),
    [anon_sym_24] = ACTIONS(137),
    [anon_sym_interactiverebaseinprogress_SEMIonto] = ACTIONS(139),
    [anon_sym_rebasageinteractifencours_SEMIsur] = ACTIONS(139),
    [anon_sym_26] = ACTIONS(139),
    [anon_sym_rebaseinteractiuencurs_SEMIsobre] = ACTIONS(139),
    [anon_sym_interaktivesRebaseimGange_SEMIauf] = ACTIONS(139),
    [anon_sym_rebase_COMMA] = ACTIONS(139),
    [anon_sym_rebaseinteractivoenprogreso_SEMIsobre] = ACTIONS(139),
    [anon_sym_sedangmendasarkanulanginteraktif_SEMIke] = ACTIONS(139),
    [anon_sym_rebaseinterattivoincorsosu] = ACTIONS(139),
    [anon_sym_DOT14] = ACTIONS(139),
    [anon_sym_trwainteraktywneprzestawianiena] = ACTIONS(139),
    [anon_sym_rebaseinterativoemcurso_SEMIsobre] = ACTIONS(139),
    [anon_sym_SEMI] = ACTIONS(139),
    [anon_sym_interaktivombaseringpgr_SEMIovanp] = ACTIONS(139),
    [anon_sym_ununzerineetkileimliyenidentemellendirmesrmekte_COLON] = ACTIONS(139),
    [anon_sym_rebasechtngtcangcthchin_SEMIlntrn] = ACTIONS(139),
    [anon_sym_27] = ACTIONS(139),
    [anon_sym_28] = ACTIONS(139),
    [sym__comment_title] = ACTIONS(141),
  },
  [3] = {
    [sym_comment] = STATE(3),
    [sym__change] = STATE(96),
    [sym_rebase_command] = STATE(96),
    [sym__date] = STATE(96),
    [sym__onbranch] = STATE(96),
    [sym__uptodate] = STATE(96),
    [sym__behind] = STATE(96),
    [sym__ahead] = STATE(96),
    [sym__rebasing] = STATE(96),
    [sym__interactive_rebasing] = STATE(96),
    [aux_sym_source_token1] = ACTIONS(143),
    [anon_sym_POUND] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(145),
    [aux_sym__change_token1] = ACTIONS(23),
    [anon_sym_] = ACTIONS(147),
    [anon_sym_Date_COLON] = ACTIONS(27),
    [anon_sym_Date_COLON2] = ACTIONS(27),
    [anon_sym_2] = ACTIONS(27),
    [anon_sym_Ngythng_COLON] = ACTIONS(27),
    [anon_sym_Tarih_COLON] = ACTIONS(27),
    [anon_sym_Datum_COLON] = ACTIONS(27),
    [anon_sym_COLON2] = ACTIONS(27),
    [anon_sym_Data_COLON] = ACTIONS(27),
    [anon_sym_COLON3] = ACTIONS(27),
    [anon_sym_Tanggal_COLON] = ACTIONS(27),
    [anon_sym_Fecha_COLON] = ACTIONS(27),
    [anon_sym_COLON4] = ACTIONS(27),
    [anon_sym_Onbranch] = ACTIONS(29),
    [anon_sym_Surlabranche] = ACTIONS(29),
    [anon_sym_COLON5] = ACTIONS(29),
    [anon_sym_Pgrenen] = ACTIONS(29),
    [anon_sym_zerindebulunulandal_COLON] = ACTIONS(29),
    [anon_sym_Trnnhnh] = ACTIONS(29),
    [anon_sym_3] = ACTIONS(29),
    [anon_sym_Emramo] = ACTIONS(29),
    [anon_sym_Nagazi] = ACTIONS(29),
    [anon_sym_4] = ACTIONS(29),
    [anon_sym_Sulbranch] = ACTIONS(29),
    [anon_sym_Padacabang] = ACTIONS(29),
    [anon_sym_Enlarama] = ACTIONS(29),
    [anon_sym_5] = ACTIONS(29),
    [anon_sym_AufBranch] = ACTIONS(29),
    [anon_sym_Enlabranca] = ACTIONS(29),
    [anon_sym_6] = ACTIONS(29),
    [anon_sym_Yourbranchisuptodatewith_SQUOTE] = ACTIONS(31),
    [anon_sym_Votrebrancheestjouravec_SQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE3] = ACTIONS(33),
    [anon_sym_Nhnhcabncpnhtvi] = ACTIONS(35),
    [anon_sym_Dalnz_SQUOTE] = ACTIONS(37),
    [anon_sym_Dingrenrjourmed_DQUOTE] = ACTIONS(39),
    [anon_sym_7] = ACTIONS(41),
    [anon_sym_Teuramoestatualizadocom_SQUOTE] = ACTIONS(31),
    [anon_sym_Twojagajestnabiecoz] = ACTIONS(35),
    [anon_sym_SQUOTE4] = ACTIONS(43),
    [anon_sym_Iltuobranchaggiornatorispettoa_SQUOTE] = ACTIONS(31),
    [anon_sym_CabangAndamutakhirdengan_SQUOTE] = ACTIONS(31),
    [anon_sym_Turamaestactualizadacon_SQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE5] = ACTIONS(31),
    [anon_sym_IhrBranchistaufdemselbenStandwie_SQUOTE] = ACTIONS(31),
    [anon_sym_Lavostrabrancaestaldiaamb] = ACTIONS(41),
    [anon_sym_8] = ACTIONS(45),
    [anon_sym_Yourbranchisbehind_SQUOTE] = ACTIONS(47),
    [anon_sym_Votrebrancheestenretardsur_SQUOTE] = ACTIONS(49),
    [anon_sym_Lavostrabrancaest] = ACTIONS(51),
    [anon_sym_9] = ACTIONS(53),
    [anon_sym_IhrBranchist] = ACTIONS(55),
    [anon_sym_SQUOTE6] = ACTIONS(57),
    [anon_sym_Turamaestdetrsde_SQUOTE] = ACTIONS(59),
    [anon_sym_CabangAndadibelakang_SQUOTE] = ACTIONS(61),
    [anon_sym_CabangAndadibelakan_SQUOTE] = ACTIONS(61),
    [anon_sym_Iltuobranch_COMMArispettoa_SQUOTE] = ACTIONS(63),
    [anon_sym_Nhnhcabnngngsau] = ACTIONS(65),
    [anon_sym_Dingrenliggerefter_DQUOTE] = ACTIONS(67),
    [anon_sym_13] = ACTIONS(69),
    [anon_sym_Teuramoestatrsde_SQUOTE] = ACTIONS(71),
    [anon_sym_Twojagajestza] = ACTIONS(73),
    [anon_sym_SQUOTE9] = ACTIONS(75),
    [anon_sym_SQUOTE11] = ACTIONS(77),
    [anon_sym_Yourbranchisaheadof_SQUOTE] = ACTIONS(79),
    [anon_sym_Votrebrancheestenavancesur_SQUOTE] = ACTIONS(81),
    [anon_sym_SQUOTE12] = ACTIONS(83),
    [anon_sym_SQUOTE13] = ACTIONS(85),
    [anon_sym_Nhnhcabnngtrc] = ACTIONS(87),
    [anon_sym_Dingrenliggerfre_DQUOTE] = ACTIONS(89),
    [anon_sym_19] = ACTIONS(91),
    [anon_sym_Teuramoestfrentede_SQUOTE] = ACTIONS(93),
    [anon_sym_Twojagajestdoprzoduwzgldem] = ACTIONS(95),
    [anon_sym_Iltuobranchavantirispettoa_SQUOTE] = ACTIONS(97),
    [anon_sym_CabangAndamendahului_SQUOTE] = ACTIONS(99),
    [anon_sym_Turamaestadelantadaa_SQUOTE] = ACTIONS(101),
    [anon_sym_SQUOTE14] = ACTIONS(103),
    [anon_sym_Youarecurrentlyrebasingbranch_SQUOTE] = ACTIONS(105),
    [anon_sym_Voustesentrainderebaserlabranche_SQUOTE] = ACTIONS(107),
    [anon_sym_SQUOTE15] = ACTIONS(109),
    [anon_sym_SQUOTE17] = ACTIONS(111),
    [anon_sym_Bnhinnayangthchinvicrebasenhnh] = ACTIONS(113),
    [anon_sym_uanda_SQUOTE] = ACTIONS(115),
    [anon_sym_Duhllerpattombaseragrenen_DQUOTE] = ACTIONS(117),
    [anon_sym_22] = ACTIONS(119),
    [anon_sym_Estsrebaseandoramo_SQUOTE] = ACTIONS(121),
    [anon_sym_Przestawiaszwaniega] = ACTIONS(123),
    [anon_sym_SQUOTE19] = ACTIONS(125),
    [anon_sym_Attualmentestaieseguendoilrebasedelbranch_SQUOTE] = ACTIONS(127),
    [anon_sym_Andasedangmendasarkanulangcabang_SQUOTE] = ACTIONS(129),
    [anon_sym_Estsaplicandounrebasedelarama_SQUOTE] = ACTIONS(121),
    [anon_sym_rebase_SQUOTE] = ACTIONS(131),
    [anon_sym_SiesindgeradebeimRebasevonBranch_SQUOTE] = ACTIONS(133),
    [anon_sym_Actualmentesteufentrebasedelabranca] = ACTIONS(135),
    [anon_sym_24] = ACTIONS(137),
    [anon_sym_interactiverebaseinprogress_SEMIonto] = ACTIONS(139),
    [anon_sym_rebasageinteractifencours_SEMIsur] = ACTIONS(139),
    [anon_sym_26] = ACTIONS(139),
    [anon_sym_rebaseinteractiuencurs_SEMIsobre] = ACTIONS(139),
    [anon_sym_interaktivesRebaseimGange_SEMIauf] = ACTIONS(139),
    [anon_sym_rebase_COMMA] = ACTIONS(139),
    [anon_sym_rebaseinteractivoenprogreso_SEMIsobre] = ACTIONS(139),
    [anon_sym_sedangmendasarkanulanginteraktif_SEMIke] = ACTIONS(139),
    [anon_sym_rebaseinterattivoincorsosu] = ACTIONS(139),
    [anon_sym_DOT14] = ACTIONS(139),
    [anon_sym_trwainteraktywneprzestawianiena] = ACTIONS(139),
    [anon_sym_rebaseinterativoemcurso_SEMIsobre] = ACTIONS(139),
    [anon_sym_SEMI] = ACTIONS(139),
    [anon_sym_interaktivombaseringpgr_SEMIovanp] = ACTIONS(139),
    [anon_sym_ununzerineetkileimliyenidentemellendirmesrmekte_COLON] = ACTIONS(139),
    [anon_sym_rebasechtngtcangcthchin_SEMIlntrn] = ACTIONS(139),
    [anon_sym_27] = ACTIONS(139),
    [anon_sym_28] = ACTIONS(139),
    [sym__comment_title] = ACTIONS(149),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      aux_sym__scissor_token1,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 1,
      aux_sym_source_token1,
    ACTIONS(155), 1,
      aux_sym_subject_token1,
    ACTIONS(157), 1,
      anon_sym_BREAKINGCHANGE,
    ACTIONS(159), 1,
      sym__trailer_token,
    STATE(4), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_source_repeat1,
    STATE(15), 1,
      sym__body_line,
    STATE(155), 1,
      sym__scissor,
    STATE(14), 3,
      sym_message,
      sym_trailer,
      sym_breaking_change,
  [39] = 12,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      aux_sym__scissor_token1,
    ACTIONS(153), 1,
      aux_sym_source_token1,
    ACTIONS(155), 1,
      aux_sym_subject_token1,
    ACTIONS(157), 1,
      anon_sym_BREAKINGCHANGE,
    ACTIONS(159), 1,
      sym__trailer_token,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      aux_sym_source_repeat1,
    STATE(5), 1,
      sym_comment,
    STATE(15), 1,
      sym__body_line,
    STATE(93), 1,
      sym__scissor,
    STATE(14), 3,
      sym_message,
      sym_trailer,
      sym_breaking_change,
  [78] = 12,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      aux_sym__scissor_token1,
    ACTIONS(153), 1,
      aux_sym_source_token1,
    ACTIONS(155), 1,
      aux_sym_subject_token1,
    ACTIONS(157), 1,
      anon_sym_BREAKINGCHANGE,
    ACTIONS(159), 1,
      sym__trailer_token,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_source_repeat1,
    STATE(15), 1,
      sym__body_line,
    STATE(209), 1,
      sym__scissor,
    STATE(14), 3,
      sym_message,
      sym_trailer,
      sym_breaking_change,
  [117] = 12,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      aux_sym__scissor_token1,
    ACTIONS(153), 1,
      aux_sym_source_token1,
    ACTIONS(155), 1,
      aux_sym_subject_token1,
    ACTIONS(157), 1,
      anon_sym_BREAKINGCHANGE,
    ACTIONS(159), 1,
      sym__trailer_token,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_source_repeat1,
    STATE(15), 1,
      sym__body_line,
    STATE(256), 1,
      sym__scissor,
    STATE(14), 3,
      sym_message,
      sym_trailer,
      sym_breaking_change,
  [156] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(8), 1,
      sym_comment,
    ACTIONS(167), 11,
      anon_sym_pick,
      anon_sym_edit,
      anon_sym_squash,
      anon_sym_merge,
      anon_sym_fixup,
      anon_sym_drop,
      anon_sym_reword,
      anon_sym_exec,
      anon_sym_label,
      anon_sym_reset,
      anon_sym_break,
  [176] = 9,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      aux_sym_source_token1,
    ACTIONS(174), 1,
      aux_sym_subject_token1,
    ACTIONS(177), 1,
      anon_sym_BREAKINGCHANGE,
    ACTIONS(180), 1,
      sym__trailer_token,
    STATE(15), 1,
      sym__body_line,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      aux_sym__scissor_token1,
    STATE(9), 2,
      sym_comment,
      aux_sym_source_repeat1,
    STATE(14), 3,
      sym_message,
      sym_trailer,
      sym_breaking_change,
  [208] = 5,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(187), 1,
      aux_sym_subject_token3,
    STATE(10), 1,
      sym_comment,
    ACTIONS(185), 2,
      aux_sym_subject_token1,
      anon_sym_BREAKINGCHANGE,
    ACTIONS(183), 4,
      sym__trailer_token,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__scissor_token1,
  [228] = 4,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(191), 1,
      aux_sym_subject_token1,
    STATE(11), 1,
      sym_comment,
    ACTIONS(189), 5,
      sym__trailer_token,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_BREAKINGCHANGE,
      aux_sym__scissor_token1,
  [245] = 4,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      aux_sym_subject_token1,
    STATE(12), 1,
      sym_comment,
    ACTIONS(193), 5,
      sym__trailer_token,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_BREAKINGCHANGE,
      aux_sym__scissor_token1,
  [262] = 4,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      aux_sym_subject_token1,
    STATE(13), 1,
      sym_comment,
    ACTIONS(197), 5,
      sym__trailer_token,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_BREAKINGCHANGE,
      aux_sym__scissor_token1,
  [279] = 4,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(203), 1,
      aux_sym_subject_token1,
    STATE(14), 1,
      sym_comment,
    ACTIONS(201), 5,
      sym__trailer_token,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_BREAKINGCHANGE,
      aux_sym__scissor_token1,
  [296] = 4,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(207), 1,
      aux_sym_subject_token1,
    STATE(15), 1,
      sym_comment,
    ACTIONS(205), 5,
      sym__trailer_token,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_BREAKINGCHANGE,
      aux_sym__scissor_token1,
  [313] = 7,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      aux_sym_comment_token1,
    ACTIONS(211), 1,
      aux_sym_comment_token2,
    ACTIONS(213), 1,
      aux_sym__change_token2,
    ACTIONS(215), 1,
      aux_sym__filepath_token1,
    STATE(16), 1,
      sym_comment,
    STATE(97), 1,
      sym__filepath,
  [335] = 6,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    ACTIONS(219), 1,
      aux_sym_source_token1,
    ACTIONS(221), 1,
      aux_sym_subject_token3,
    STATE(17), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym__scissor_repeat1,
  [354] = 6,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      aux_sym_source_token1,
    ACTIONS(221), 1,
      aux_sym_subject_token3,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym__scissor_repeat1,
  [373] = 6,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      aux_sym__scissor_token1,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(225), 1,
      aux_sym_source_token1,
    STATE(19), 1,
      sym_comment,
    STATE(155), 1,
      sym__scissor,
  [392] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(20), 1,
      sym_comment,
    ACTIONS(227), 2,
      anon_sym_comissiperdarrerede,
      anon_sym_comissionsperdarrerede,
    ACTIONS(229), 2,
      anon_sym_comissiperdavantde,
      anon_sym_comissionsperdavantde,
  [407] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(21), 1,
      sym_comment,
    ACTIONS(231), 2,
      anon_sym_10,
      anon_sym_11,
    ACTIONS(233), 2,
      anon_sym_20,
      anon_sym_21,
  [422] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(22), 1,
      sym_comment,
    ACTIONS(235), 2,
      anon_sym_Commithinter_SQUOTE,
      anon_sym_Commitshinter_SQUOTE,
    ACTIONS(237), 2,
      anon_sym_Commitvor_SQUOTE,
      anon_sym_Commitsvor_SQUOTE,
  [437] = 5,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    ACTIONS(241), 1,
      aux_sym_source_token1,
    ACTIONS(244), 1,
      aux_sym_subject_token3,
    STATE(23), 2,
      sym_comment,
      aux_sym__scissor_repeat1,
  [454] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(24), 1,
      sym_comment,
    ACTIONS(247), 3,
      anon_sym_zapisimoezostaprzewinita_DOT,
      anon_sym_zapisyimoezostaprzewinita_DOT,
      anon_sym_zapiswimoezostaprzewinita_DOT,
  [466] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_BANG,
    ACTIONS(253), 1,
      anon_sym_COLON,
    STATE(25), 1,
      sym_comment,
  [482] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(26), 1,
      sym_comment,
    ACTIONS(247), 3,
      anon_sym_DOT5,
      anon_sym_DOT6,
      anon_sym_DOT7,
  [494] = 4,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      aux_sym_subject_token3,
    STATE(27), 1,
      sym_comment,
    ACTIONS(255), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [508] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(28), 1,
      sym_comment,
    ACTIONS(259), 3,
      anon_sym_DOT8,
      anon_sym_DOT9,
      anon_sym_DOT10,
  [520] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(29), 1,
      sym_comment,
    ACTIONS(259), 3,
      anon_sym_zapis_DOT,
      anon_sym_zapisy_DOT,
      anon_sym_zapisw_DOT,
  [532] = 5,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(215), 1,
      aux_sym__filepath_token1,
    ACTIONS(261), 1,
      aux_sym_comment_token1,
    STATE(30), 1,
      sym_comment,
    STATE(161), 1,
      sym__filepath,
  [548] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(31), 1,
      sym_comment,
    ACTIONS(259), 2,
      anon_sym_DOT12,
      anon_sym_DOT13,
  [559] = 4,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(263), 1,
      aux_sym_source_token1,
    ACTIONS(265), 1,
      aux_sym_subject_token2,
    STATE(32), 1,
      sym_comment,
  [572] = 4,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(215), 1,
      aux_sym__filepath_token1,
    STATE(33), 1,
      sym_comment,
    STATE(211), 1,
      sym__filepath,
  [585] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(267), 1,
      anon_sym_BANG,
    ACTIONS(269), 1,
      anon_sym_COLON,
    STATE(34), 1,
      sym_comment,
  [598] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(247), 1,
      anon_sym_ilemegerideveilerisarlabilir_DOT,
    ACTIONS(259), 1,
      anon_sym_ilemeileride_DOT,
    STATE(35), 1,
      sym_comment,
  [611] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(247), 1,
      anon_sym_COMMA_DOT3,
    ACTIONS(259), 1,
      anon_sym_DOT11,
    STATE(36), 1,
      sym_comment,
  [624] = 4,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(271), 1,
      aux_sym_source_token1,
    ACTIONS(273), 1,
      aux_sym_subject_token2,
    STATE(37), 1,
      sym_comment,
  [637] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(275), 1,
      aux_sym_source_token1,
    ACTIONS(277), 1,
      aux_sym_comment_token1,
    STATE(38), 1,
      sym_comment,
  [650] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(39), 1,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_commit_COMMAandcanbefast_DASHforwarded_DOT,
      anon_sym_commits_COMMAandcanbefast_DASHforwarded_DOT,
  [661] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(40), 1,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_commit_COMMAetpeuttremisejourenavancerapide_DOT,
      anon_sym_commits_COMMAetpeuttremisejourenavancerapide_DOT,
  [672] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_SQUOTEilegncel_DOT,
    ACTIONS(281), 1,
      anon_sym_SQUOTEdalndan,
    STATE(41), 1,
      sym_comment,
  [685] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(42), 1,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_COMMA_DOT,
      anon_sym_COMMA_DOT2,
  [696] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(43), 1,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_commit_COMMAypuedeseravanzadarpido_DOT,
      anon_sym_commits_COMMAypuedeseravanzadarpido_DOT,
  [707] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(44), 1,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_incheckning_COMMAochkansnabbspolas_DOT,
      anon_sym_incheckningar_COMMAochkansnabbspolas_DOT,
  [718] = 4,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(283), 1,
      aux_sym_source_token1,
    ACTIONS(285), 1,
      aux_sym_subject_token3,
    STATE(45), 1,
      sym_comment,
  [731] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(46), 1,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_memria_COMMAepodeseravanado_DOT,
      anon_sym_memrias_COMMAepodeseravanado_DOT,
  [742] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(47), 1,
      sym_comment,
    ACTIONS(259), 2,
      anon_sym_commit_DOT,
      anon_sym_commits_DOT,
  [753] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(48), 1,
      sym_comment,
    ACTIONS(259), 2,
      anon_sym_incheckning_DOT,
      anon_sym_incheckningar_DOT,
  [764] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(49), 1,
      sym_comment,
    ACTIONS(259), 2,
      anon_sym_memria_DOT,
      anon_sym_memrias_DOT,
  [775] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_SQUOTE_DOT2,
    ACTIONS(287), 1,
      anon_sym_SQUOTE8,
    STATE(50), 1,
      sym_comment,
  [788] = 4,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(289), 1,
      aux_sym_source_token1,
    ACTIONS(291), 1,
      aux_sym_subject_token2,
    STATE(51), 1,
      sym_comment,
  [801] = 4,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(215), 1,
      aux_sym__filepath_token1,
    STATE(52), 1,
      sym_comment,
    STATE(161), 1,
      sym__filepath,
  [814] = 4,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(293), 1,
      aux_sym_source_token1,
    ACTIONS(295), 1,
      aux_sym_subject_token2,
    STATE(53), 1,
      sym_comment,
  [827] = 4,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(297), 1,
      aux_sym_source_token1,
    ACTIONS(299), 1,
      aux_sym_subject_token2,
    STATE(54), 1,
      sym_comment,
  [840] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(301), 1,
      anon_sym_SQUOTEpor,
    STATE(55), 1,
      sym_comment,
  [850] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(303), 1,
      sym_branch,
    STATE(56), 1,
      sym_comment,
  [860] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(305), 1,
      sym_branch,
    STATE(57), 1,
      sym_comment,
  [870] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(307), 1,
      sym_branch,
    STATE(58), 1,
      sym_comment,
  [880] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(309), 1,
      sym_branch,
    STATE(59), 1,
      sym_comment,
  [890] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(311), 1,
      sym_branch,
    STATE(60), 1,
      sym_comment,
  [900] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(313), 1,
      sym_branch,
    STATE(61), 1,
      sym_comment,
  [910] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(315), 1,
      sym_branch,
    STATE(62), 1,
      sym_comment,
  [920] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(317), 1,
      sym_branch,
    STATE(63), 1,
      sym_comment,
  [930] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(319), 1,
      sym_branch,
    STATE(64), 1,
      sym_comment,
  [940] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(321), 1,
      sym_branch,
    STATE(65), 1,
      sym_comment,
  [950] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      sym_branch,
    STATE(66), 1,
      sym_comment,
  [960] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(325), 1,
      sym_branch,
    STATE(67), 1,
      sym_comment,
  [970] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(327), 1,
      sym_branch,
    STATE(68), 1,
      sym_comment,
  [980] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(329), 1,
      sym_branch,
    STATE(69), 1,
      sym_comment,
  [990] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(331), 1,
      sym_branch,
    STATE(70), 1,
      sym_comment,
  [1000] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(333), 1,
      sym_branch,
    STATE(71), 1,
      sym_comment,
  [1010] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(335), 1,
      sym_branch,
    STATE(72), 1,
      sym_comment,
  [1020] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(337), 1,
      sym_branch,
    STATE(73), 1,
      sym_comment,
  [1030] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(339), 1,
      sym_branch,
    STATE(74), 1,
      sym_comment,
  [1040] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(341), 1,
      sym_branch,
    STATE(75), 1,
      sym_comment,
  [1050] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(343), 1,
      sym_branch,
    STATE(76), 1,
      sym_comment,
  [1060] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(345), 1,
      sym_branch,
    STATE(77), 1,
      sym_comment,
  [1070] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(347), 1,
      sym_branch,
    STATE(78), 1,
      sym_comment,
  [1080] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(349), 1,
      sym_branch,
    STATE(79), 1,
      sym_comment,
  [1090] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(351), 1,
      sym_branch,
    STATE(80), 1,
      sym_comment,
  [1100] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(353), 1,
      sym_branch,
    STATE(81), 1,
      sym_comment,
  [1110] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(355), 1,
      sym_branch,
    STATE(82), 1,
      sym_comment,
  [1120] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(357), 1,
      sym_branch,
    STATE(83), 1,
      sym_comment,
  [1130] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(359), 1,
      sym_branch,
    STATE(84), 1,
      sym_comment,
  [1140] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(361), 1,
      sym_branch,
    STATE(85), 1,
      sym_comment,
  [1150] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(363), 1,
      sym_branch,
    STATE(86), 1,
      sym_comment,
  [1160] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(365), 1,
      sym_branch,
    STATE(87), 1,
      sym_comment,
  [1170] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(367), 1,
      sym_branch,
    STATE(88), 1,
      sym_comment,
  [1180] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(369), 1,
      aux_sym_prefix_token1,
    STATE(89), 1,
      sym_comment,
  [1190] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(371), 1,
      anon_sym_COLON,
    STATE(90), 1,
      sym_comment,
  [1200] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(373), 1,
      aux_sym_subject_token3,
    STATE(91), 1,
      sym_comment,
  [1210] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(375), 1,
      aux_sym_subject_token3,
    STATE(92), 1,
      sym_comment,
  [1220] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    STATE(93), 1,
      sym_comment,
  [1230] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(377), 1,
      aux_sym_source_token1,
    STATE(94), 1,
      sym_comment,
  [1240] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(379), 1,
      aux_sym_source_token1,
    STATE(95), 1,
      sym_comment,
  [1250] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(381), 1,
      aux_sym_source_token1,
    STATE(96), 1,
      sym_comment,
  [1260] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(383), 1,
      aux_sym_source_token1,
    STATE(97), 1,
      sym_comment,
  [1270] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(385), 1,
      aux_sym_subject_token3,
    STATE(98), 1,
      sym_comment,
  [1280] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(387), 1,
      aux_sym_subject_token3,
    STATE(99), 1,
      sym_comment,
  [1290] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(389), 1,
      aux_sym_source_token1,
    STATE(100), 1,
      sym_comment,
  [1300] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_SQUOTE_DOT,
    STATE(101), 1,
      sym_comment,
  [1310] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_SQUOTE2,
    STATE(102), 1,
      sym_comment,
  [1320] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_DOT,
    STATE(103), 1,
      sym_comment,
  [1330] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_DQUOTE_DOT,
    STATE(104), 1,
      sym_comment,
  [1340] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_DOT2,
    STATE(105), 1,
      sym_comment,
  [1350] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_DOT3,
    STATE(106), 1,
      sym_comment,
  [1360] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(391), 1,
      anon_sym_SQUOTEby,
    STATE(107), 1,
      sym_comment,
  [1370] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(393), 1,
      anon_sym_SQUOTEde,
    STATE(108), 1,
      sym_comment,
  [1380] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(395), 1,
      anon_sym_SQUOTE7,
    STATE(109), 1,
      sym_comment,
  [1390] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(397), 1,
      anon_sym_SQUOTEpor,
    STATE(110), 1,
      sym_comment,
  [1400] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(399), 1,
      anon_sym_SQUOTEoleh,
    STATE(111), 1,
      sym_comment,
  [1410] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      anon_sym_SQUOTE_COMMAindietrodi,
    STATE(112), 1,
      sym_comment,
  [1420] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(403), 1,
      anon_sym_12,
    STATE(113), 1,
      sym_comment,
  [1430] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(405), 1,
      anon_sym_DQUOTEmed,
    STATE(114), 1,
      sym_comment,
  [1440] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(407), 1,
      anon_sym_14,
    STATE(115), 1,
      sym_comment,
  [1450] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(409), 1,
      anon_sym_SQUOTEpor,
    STATE(116), 1,
      sym_comment,
  [1460] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(411), 1,
      anon_sym_o,
    STATE(117), 1,
      sym_comment,
  [1470] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(413), 1,
      anon_sym_SQUOTE10,
    STATE(118), 1,
      sym_comment,
  [1480] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(415), 1,
      anon_sym_SQUOTE10,
    STATE(119), 1,
      sym_comment,
  [1490] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(301), 1,
      anon_sym_SQUOTEby,
    STATE(120), 1,
      sym_comment,
  [1500] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(301), 1,
      anon_sym_SQUOTEde,
    STATE(121), 1,
      sym_comment,
  [1510] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(417), 1,
      anon_sym_SQUOTE10,
    STATE(122), 1,
      sym_comment,
  [1520] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(419), 1,
      anon_sym_SQUOTE10,
    STATE(123), 1,
      sym_comment,
  [1530] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(421), 1,
      anon_sym_12,
    STATE(124), 1,
      sym_comment,
  [1540] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(423), 1,
      anon_sym_DQUOTEmed,
    STATE(125), 1,
      sym_comment,
  [1550] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(425), 1,
      anon_sym_14,
    STATE(126), 1,
      sym_comment,
  [1560] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(427), 1,
      anon_sym_SQUOTEpor,
    STATE(127), 1,
      sym_comment,
  [1570] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(429), 1,
      anon_sym_o,
    STATE(128), 1,
      sym_comment,
  [1580] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(431), 1,
      anon_sym_SQUOTEdi,
    STATE(129), 1,
      sym_comment,
  [1590] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(433), 1,
      anon_sym_SQUOTEoleh,
    STATE(130), 1,
      sym_comment,
  [1600] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(435), 1,
      anon_sym_SQUOTE7,
    STATE(131), 1,
      sym_comment,
  [1610] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(437), 1,
      anon_sym_SQUOTEon_SQUOTE,
    STATE(132), 1,
      sym_comment,
  [1620] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(437), 1,
      anon_sym_SQUOTEsur_SQUOTE,
    STATE(133), 1,
      sym_comment,
  [1630] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(439), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(134), 1,
      sym_comment,
  [1640] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(441), 1,
      anon_sym_SQUOTE_SQUOTE2,
    STATE(135), 1,
      sym_comment,
  [1650] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(443), 1,
      anon_sym_trn,
    STATE(136), 1,
      sym_comment,
  [1660] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(445), 1,
      anon_sym_SQUOTEdaln_SQUOTE,
    STATE(137), 1,
      sym_comment,
  [1670] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(447), 1,
      anon_sym_DQUOTEovanp_DQUOTE,
    STATE(138), 1,
      sym_comment,
  [1680] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(449), 1,
      anon_sym_23,
    STATE(139), 1,
      sym_comment,
  [1690] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(437), 1,
      anon_sym_SQUOTEsobre_SQUOTE,
    STATE(140), 1,
      sym_comment,
  [1700] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(443), 1,
      anon_sym_na,
    STATE(141), 1,
      sym_comment,
  [1710] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(451), 1,
      anon_sym_SQUOTE_SQUOTE3,
    STATE(142), 1,
      sym_comment,
  [1720] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(437), 1,
      anon_sym_SQUOTEsu_SQUOTE,
    STATE(143), 1,
      sym_comment,
  [1730] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(437), 1,
      anon_sym_SQUOTEpada_SQUOTE,
    STATE(144), 1,
      sym_comment,
  [1740] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(437), 1,
      anon_sym_SQUOTE_SQUOTE4,
    STATE(145), 1,
      sym_comment,
  [1750] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(437), 1,
      anon_sym_SQUOTEauf_SQUOTE,
    STATE(146), 1,
      sym_comment,
  [1760] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(449), 1,
      anon_sym_en,
    STATE(147), 1,
      sym_comment,
  [1770] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(453), 1,
      anon_sym_25,
    STATE(148), 1,
      sym_comment,
  [1780] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(455), 1,
      aux_sym_source_token1,
    STATE(149), 1,
      sym_comment,
  [1790] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      sym_comment,
  [1800] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(459), 1,
      ts_builtin_sym_end,
    STATE(151), 1,
      sym_comment,
  [1810] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(461), 1,
      sym_branch,
    STATE(152), 1,
      sym_comment,
  [1820] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(463), 1,
      sym_branch,
    STATE(153), 1,
      sym_comment,
  [1830] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(465), 1,
      sym_branch,
    STATE(154), 1,
      sym_comment,
  [1840] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    STATE(155), 1,
      sym_comment,
  [1850] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(467), 1,
      sym_branch,
    STATE(156), 1,
      sym_comment,
  [1860] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(469), 1,
      aux_sym_source_token1,
    STATE(157), 1,
      sym_comment,
  [1870] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(471), 1,
      sym_branch,
    STATE(158), 1,
      sym_comment,
  [1880] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(473), 1,
      sym_branch,
    STATE(159), 1,
      sym_comment,
  [1890] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(475), 1,
      aux_sym_source_token1,
    STATE(160), 1,
      sym_comment,
  [1900] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(477), 1,
      aux_sym_source_token1,
    STATE(161), 1,
      sym_comment,
  [1910] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(479), 1,
      sym_branch,
    STATE(162), 1,
      sym_comment,
  [1920] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(481), 1,
      anon_sym_DASH_GT,
    STATE(163), 1,
      sym_comment,
  [1930] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(483), 1,
      aux_sym_source_token1,
    STATE(164), 1,
      sym_comment,
  [1940] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(485), 1,
      aux_sym_source_token1,
    STATE(165), 1,
      sym_comment,
  [1950] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(487), 1,
      aux_sym_source_token1,
    STATE(166), 1,
      sym_comment,
  [1960] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(489), 1,
      sym_number,
    STATE(167), 1,
      sym_comment,
  [1970] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(491), 1,
      sym_number,
    STATE(168), 1,
      sym_comment,
  [1980] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(493), 1,
      sym_number,
    STATE(169), 1,
      sym_comment,
  [1990] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      sym_number,
    STATE(170), 1,
      sym_comment,
  [2000] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(497), 1,
      sym_branch,
    STATE(171), 1,
      sym_comment,
  [2010] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(499), 1,
      sym_branch,
    STATE(172), 1,
      sym_comment,
  [2020] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(501), 1,
      sym_branch,
    STATE(173), 1,
      sym_comment,
  [2030] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(503), 1,
      sym_branch,
    STATE(174), 1,
      sym_comment,
  [2040] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(505), 1,
      sym_branch,
    STATE(175), 1,
      sym_comment,
  [2050] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(507), 1,
      sym_branch,
    STATE(176), 1,
      sym_comment,
  [2060] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(509), 1,
      sym_number,
    STATE(177), 1,
      sym_comment,
  [2070] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(511), 1,
      sym_number,
    STATE(178), 1,
      sym_comment,
  [2080] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(513), 1,
      sym_number,
    STATE(179), 1,
      sym_comment,
  [2090] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(515), 1,
      sym_number,
    STATE(180), 1,
      sym_comment,
  [2100] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(517), 1,
      sym_number,
    STATE(181), 1,
      sym_comment,
  [2110] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(519), 1,
      sym_number,
    STATE(182), 1,
      sym_comment,
  [2120] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(521), 1,
      sym_number,
    STATE(183), 1,
      sym_comment,
  [2130] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(523), 1,
      sym_number,
    STATE(184), 1,
      sym_comment,
  [2140] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(525), 1,
      sym_number,
    STATE(185), 1,
      sym_comment,
  [2150] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(527), 1,
      sym_number,
    STATE(186), 1,
      sym_comment,
  [2160] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(529), 1,
      sym_number,
    STATE(187), 1,
      sym_comment,
  [2170] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(531), 1,
      sym_number,
    STATE(188), 1,
      sym_comment,
  [2180] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(533), 1,
      sym_number,
    STATE(189), 1,
      sym_comment,
  [2190] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(535), 1,
      sym_number,
    STATE(190), 1,
      sym_comment,
  [2200] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(537), 1,
      sym_number,
    STATE(191), 1,
      sym_comment,
  [2210] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(539), 1,
      sym_number,
    STATE(192), 1,
      sym_comment,
  [2220] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(541), 1,
      sym_number,
    STATE(193), 1,
      sym_comment,
  [2230] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(543), 1,
      sym_number,
    STATE(194), 1,
      sym_comment,
  [2240] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(545), 1,
      sym_number,
    STATE(195), 1,
      sym_comment,
  [2250] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(547), 1,
      sym_number,
    STATE(196), 1,
      sym_comment,
  [2260] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(549), 1,
      sym_number,
    STATE(197), 1,
      sym_comment,
  [2270] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(551), 1,
      sym_number,
    STATE(198), 1,
      sym_comment,
  [2280] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(553), 1,
      sym_branch,
    STATE(199), 1,
      sym_comment,
  [2290] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(555), 1,
      sym_branch,
    STATE(200), 1,
      sym_comment,
  [2300] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(557), 1,
      sym_branch,
    STATE(201), 1,
      sym_comment,
  [2310] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(559), 1,
      sym_branch,
    STATE(202), 1,
      sym_comment,
  [2320] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      sym_branch,
    STATE(203), 1,
      sym_comment,
  [2330] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(563), 1,
      sym_branch,
    STATE(204), 1,
      sym_comment,
  [2340] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(565), 1,
      sym_branch,
    STATE(205), 1,
      sym_comment,
  [2350] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(567), 1,
      sym_branch,
    STATE(206), 1,
      sym_comment,
  [2360] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(569), 1,
      sym_branch,
    STATE(207), 1,
      sym_comment,
  [2370] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(571), 1,
      sym_branch,
    STATE(208), 1,
      sym_comment,
  [2380] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    STATE(209), 1,
      sym_comment,
  [2390] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(573), 1,
      sym_branch,
    STATE(210), 1,
      sym_comment,
  [2400] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(575), 1,
      aux_sym_source_token1,
    STATE(211), 1,
      sym_comment,
  [2410] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(577), 1,
      aux_sym_comment_token1,
    STATE(212), 1,
      sym_comment,
  [2420] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(579), 1,
      sym_number,
    STATE(213), 1,
      sym_comment,
  [2430] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      sym_number,
    STATE(214), 1,
      sym_comment,
  [2440] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(583), 1,
      sym_number,
    STATE(215), 1,
      sym_comment,
  [2450] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(585), 1,
      sym_branch,
    STATE(216), 1,
      sym_comment,
  [2460] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(247), 1,
      anon_sym_COMMAipotavanar_DASHserpidament_DOT,
    STATE(217), 1,
      sym_comment,
  [2470] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_DOT2,
    STATE(218), 1,
      sym_comment,
  [2480] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(247), 1,
      anon_sym_DOT4,
    STATE(219), 1,
      sym_comment,
  [2490] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_DOT3,
    STATE(220), 1,
      sym_comment,
  [2500] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(247), 1,
      anon_sym_SQUOTE_COMMAundkannvorgespultwerden_DOT,
    STATE(221), 1,
      sym_comment,
  [2510] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_SQUOTE_DOT,
    STATE(222), 1,
      sym_comment,
  [2520] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(587), 1,
      sym_branch,
    STATE(223), 1,
      sym_comment,
  [2530] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(589), 1,
      sym_branch,
    STATE(224), 1,
      sym_comment,
  [2540] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(247), 1,
      anon_sym_komit_COMMAdanbisadimaju_DASHcepatkan_DOT,
    STATE(225), 1,
      sym_comment,
  [2550] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(247), 1,
      anon_sym_commitenepossoeseguireilfastforward_DOT,
    STATE(226), 1,
      sym_comment,
  [2560] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(247), 1,
      anon_sym_lnchuyngiao_COMMAvcthcchuyn_DASHtip_DASHnhanh_DOT,
    STATE(227), 1,
      sym_comment,
  [2570] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(591), 1,
      sym_branch,
    STATE(228), 1,
      sym_comment,
  [2580] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(593), 1,
      sym_branch,
    STATE(229), 1,
      sym_comment,
  [2590] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(595), 1,
      sym_branch,
    STATE(230), 1,
      sym_comment,
  [2600] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(597), 1,
      sym_branch,
    STATE(231), 1,
      sym_comment,
  [2610] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(247), 1,
      anon_sym_15,
    STATE(232), 1,
      sym_comment,
  [2620] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(247), 1,
      anon_sym_16,
    STATE(233), 1,
      sym_comment,
  [2630] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(599), 1,
      sym_branch,
    STATE(234), 1,
      sym_comment,
  [2640] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_17,
    STATE(235), 1,
      sym_comment,
  [2650] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_18,
    STATE(236), 1,
      sym_comment,
  [2660] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_lnchuyngiao_DOT,
    STATE(237), 1,
      sym_comment,
  [2670] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(601), 1,
      sym_branch,
    STATE(238), 1,
      sym_comment,
  [2680] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(603), 1,
      sym_branch,
    STATE(239), 1,
      sym_comment,
  [2690] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(605), 1,
      sym_branch,
    STATE(240), 1,
      sym_comment,
  [2700] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(607), 1,
      aux_sym_comment_token1,
    STATE(241), 1,
      sym_comment,
  [2710] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_commit_DOT,
    STATE(242), 1,
      sym_comment,
  [2720] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_komit_DOT,
    STATE(243), 1,
      sym_comment,
  [2730] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(143), 1,
      aux_sym_source_token1,
    STATE(244), 1,
      sym_comment,
  [2740] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(609), 1,
      anon_sym_SQUOTE_DOT,
    STATE(245), 1,
      sym_comment,
  [2750] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(609), 1,
      anon_sym_SQUOTE16,
    STATE(246), 1,
      sym_comment,
  [2760] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(609), 1,
      anon_sym_SQUOTE18,
    STATE(247), 1,
      sym_comment,
  [2770] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(609), 1,
      anon_sym_DOT,
    STATE(248), 1,
      sym_comment,
  [2780] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(609), 1,
      anon_sym_SQUOTEzerineyenidentemellendiriyorsunuz_DOT,
    STATE(249), 1,
      sym_comment,
  [2790] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(609), 1,
      anon_sym_DQUOTE_DOT,
    STATE(250), 1,
      sym_comment,
  [2800] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(609), 1,
      anon_sym_DOT2,
    STATE(251), 1,
      sym_comment,
  [2810] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(609), 1,
      anon_sym_SQUOTE_DOT3,
    STATE(252), 1,
      sym_comment,
  [2820] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(609), 1,
      anon_sym_DOT3,
    STATE(253), 1,
      sym_comment,
  [2830] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(611), 1,
      anon_sym_COLON,
    STATE(254), 1,
      sym_comment,
  [2840] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    STATE(255), 1,
      sym_comment,
  [2850] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(613), 1,
      ts_builtin_sym_end,
    STATE(256), 1,
      sym_comment,
  [2860] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(615), 1,
      aux_sym__filepath_token1,
    STATE(257), 1,
      sym_comment,
  [2870] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(617), 1,
      aux_sym_source_token1,
    STATE(258), 1,
      sym_comment,
  [2880] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(619), 1,
      aux_sym_source_token1,
    STATE(259), 1,
      sym_comment,
  [2890] = 1,
    ACTIONS(621), 1,
      ts_builtin_sym_end,
  [2894] = 1,
    ACTIONS(623), 1,
      ts_builtin_sym_end,
  [2898] = 1,
    ACTIONS(625), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 39,
  [SMALL_STATE(6)] = 78,
  [SMALL_STATE(7)] = 117,
  [SMALL_STATE(8)] = 156,
  [SMALL_STATE(9)] = 176,
  [SMALL_STATE(10)] = 208,
  [SMALL_STATE(11)] = 228,
  [SMALL_STATE(12)] = 245,
  [SMALL_STATE(13)] = 262,
  [SMALL_STATE(14)] = 279,
  [SMALL_STATE(15)] = 296,
  [SMALL_STATE(16)] = 313,
  [SMALL_STATE(17)] = 335,
  [SMALL_STATE(18)] = 354,
  [SMALL_STATE(19)] = 373,
  [SMALL_STATE(20)] = 392,
  [SMALL_STATE(21)] = 407,
  [SMALL_STATE(22)] = 422,
  [SMALL_STATE(23)] = 437,
  [SMALL_STATE(24)] = 454,
  [SMALL_STATE(25)] = 466,
  [SMALL_STATE(26)] = 482,
  [SMALL_STATE(27)] = 494,
  [SMALL_STATE(28)] = 508,
  [SMALL_STATE(29)] = 520,
  [SMALL_STATE(30)] = 532,
  [SMALL_STATE(31)] = 548,
  [SMALL_STATE(32)] = 559,
  [SMALL_STATE(33)] = 572,
  [SMALL_STATE(34)] = 585,
  [SMALL_STATE(35)] = 598,
  [SMALL_STATE(36)] = 611,
  [SMALL_STATE(37)] = 624,
  [SMALL_STATE(38)] = 637,
  [SMALL_STATE(39)] = 650,
  [SMALL_STATE(40)] = 661,
  [SMALL_STATE(41)] = 672,
  [SMALL_STATE(42)] = 685,
  [SMALL_STATE(43)] = 696,
  [SMALL_STATE(44)] = 707,
  [SMALL_STATE(45)] = 718,
  [SMALL_STATE(46)] = 731,
  [SMALL_STATE(47)] = 742,
  [SMALL_STATE(48)] = 753,
  [SMALL_STATE(49)] = 764,
  [SMALL_STATE(50)] = 775,
  [SMALL_STATE(51)] = 788,
  [SMALL_STATE(52)] = 801,
  [SMALL_STATE(53)] = 814,
  [SMALL_STATE(54)] = 827,
  [SMALL_STATE(55)] = 840,
  [SMALL_STATE(56)] = 850,
  [SMALL_STATE(57)] = 860,
  [SMALL_STATE(58)] = 870,
  [SMALL_STATE(59)] = 880,
  [SMALL_STATE(60)] = 890,
  [SMALL_STATE(61)] = 900,
  [SMALL_STATE(62)] = 910,
  [SMALL_STATE(63)] = 920,
  [SMALL_STATE(64)] = 930,
  [SMALL_STATE(65)] = 940,
  [SMALL_STATE(66)] = 950,
  [SMALL_STATE(67)] = 960,
  [SMALL_STATE(68)] = 970,
  [SMALL_STATE(69)] = 980,
  [SMALL_STATE(70)] = 990,
  [SMALL_STATE(71)] = 1000,
  [SMALL_STATE(72)] = 1010,
  [SMALL_STATE(73)] = 1020,
  [SMALL_STATE(74)] = 1030,
  [SMALL_STATE(75)] = 1040,
  [SMALL_STATE(76)] = 1050,
  [SMALL_STATE(77)] = 1060,
  [SMALL_STATE(78)] = 1070,
  [SMALL_STATE(79)] = 1080,
  [SMALL_STATE(80)] = 1090,
  [SMALL_STATE(81)] = 1100,
  [SMALL_STATE(82)] = 1110,
  [SMALL_STATE(83)] = 1120,
  [SMALL_STATE(84)] = 1130,
  [SMALL_STATE(85)] = 1140,
  [SMALL_STATE(86)] = 1150,
  [SMALL_STATE(87)] = 1160,
  [SMALL_STATE(88)] = 1170,
  [SMALL_STATE(89)] = 1180,
  [SMALL_STATE(90)] = 1190,
  [SMALL_STATE(91)] = 1200,
  [SMALL_STATE(92)] = 1210,
  [SMALL_STATE(93)] = 1220,
  [SMALL_STATE(94)] = 1230,
  [SMALL_STATE(95)] = 1240,
  [SMALL_STATE(96)] = 1250,
  [SMALL_STATE(97)] = 1260,
  [SMALL_STATE(98)] = 1270,
  [SMALL_STATE(99)] = 1280,
  [SMALL_STATE(100)] = 1290,
  [SMALL_STATE(101)] = 1300,
  [SMALL_STATE(102)] = 1310,
  [SMALL_STATE(103)] = 1320,
  [SMALL_STATE(104)] = 1330,
  [SMALL_STATE(105)] = 1340,
  [SMALL_STATE(106)] = 1350,
  [SMALL_STATE(107)] = 1360,
  [SMALL_STATE(108)] = 1370,
  [SMALL_STATE(109)] = 1380,
  [SMALL_STATE(110)] = 1390,
  [SMALL_STATE(111)] = 1400,
  [SMALL_STATE(112)] = 1410,
  [SMALL_STATE(113)] = 1420,
  [SMALL_STATE(114)] = 1430,
  [SMALL_STATE(115)] = 1440,
  [SMALL_STATE(116)] = 1450,
  [SMALL_STATE(117)] = 1460,
  [SMALL_STATE(118)] = 1470,
  [SMALL_STATE(119)] = 1480,
  [SMALL_STATE(120)] = 1490,
  [SMALL_STATE(121)] = 1500,
  [SMALL_STATE(122)] = 1510,
  [SMALL_STATE(123)] = 1520,
  [SMALL_STATE(124)] = 1530,
  [SMALL_STATE(125)] = 1540,
  [SMALL_STATE(126)] = 1550,
  [SMALL_STATE(127)] = 1560,
  [SMALL_STATE(128)] = 1570,
  [SMALL_STATE(129)] = 1580,
  [SMALL_STATE(130)] = 1590,
  [SMALL_STATE(131)] = 1600,
  [SMALL_STATE(132)] = 1610,
  [SMALL_STATE(133)] = 1620,
  [SMALL_STATE(134)] = 1630,
  [SMALL_STATE(135)] = 1640,
  [SMALL_STATE(136)] = 1650,
  [SMALL_STATE(137)] = 1660,
  [SMALL_STATE(138)] = 1670,
  [SMALL_STATE(139)] = 1680,
  [SMALL_STATE(140)] = 1690,
  [SMALL_STATE(141)] = 1700,
  [SMALL_STATE(142)] = 1710,
  [SMALL_STATE(143)] = 1720,
  [SMALL_STATE(144)] = 1730,
  [SMALL_STATE(145)] = 1740,
  [SMALL_STATE(146)] = 1750,
  [SMALL_STATE(147)] = 1760,
  [SMALL_STATE(148)] = 1770,
  [SMALL_STATE(149)] = 1780,
  [SMALL_STATE(150)] = 1790,
  [SMALL_STATE(151)] = 1800,
  [SMALL_STATE(152)] = 1810,
  [SMALL_STATE(153)] = 1820,
  [SMALL_STATE(154)] = 1830,
  [SMALL_STATE(155)] = 1840,
  [SMALL_STATE(156)] = 1850,
  [SMALL_STATE(157)] = 1860,
  [SMALL_STATE(158)] = 1870,
  [SMALL_STATE(159)] = 1880,
  [SMALL_STATE(160)] = 1890,
  [SMALL_STATE(161)] = 1900,
  [SMALL_STATE(162)] = 1910,
  [SMALL_STATE(163)] = 1920,
  [SMALL_STATE(164)] = 1930,
  [SMALL_STATE(165)] = 1940,
  [SMALL_STATE(166)] = 1950,
  [SMALL_STATE(167)] = 1960,
  [SMALL_STATE(168)] = 1970,
  [SMALL_STATE(169)] = 1980,
  [SMALL_STATE(170)] = 1990,
  [SMALL_STATE(171)] = 2000,
  [SMALL_STATE(172)] = 2010,
  [SMALL_STATE(173)] = 2020,
  [SMALL_STATE(174)] = 2030,
  [SMALL_STATE(175)] = 2040,
  [SMALL_STATE(176)] = 2050,
  [SMALL_STATE(177)] = 2060,
  [SMALL_STATE(178)] = 2070,
  [SMALL_STATE(179)] = 2080,
  [SMALL_STATE(180)] = 2090,
  [SMALL_STATE(181)] = 2100,
  [SMALL_STATE(182)] = 2110,
  [SMALL_STATE(183)] = 2120,
  [SMALL_STATE(184)] = 2130,
  [SMALL_STATE(185)] = 2140,
  [SMALL_STATE(186)] = 2150,
  [SMALL_STATE(187)] = 2160,
  [SMALL_STATE(188)] = 2170,
  [SMALL_STATE(189)] = 2180,
  [SMALL_STATE(190)] = 2190,
  [SMALL_STATE(191)] = 2200,
  [SMALL_STATE(192)] = 2210,
  [SMALL_STATE(193)] = 2220,
  [SMALL_STATE(194)] = 2230,
  [SMALL_STATE(195)] = 2240,
  [SMALL_STATE(196)] = 2250,
  [SMALL_STATE(197)] = 2260,
  [SMALL_STATE(198)] = 2270,
  [SMALL_STATE(199)] = 2280,
  [SMALL_STATE(200)] = 2290,
  [SMALL_STATE(201)] = 2300,
  [SMALL_STATE(202)] = 2310,
  [SMALL_STATE(203)] = 2320,
  [SMALL_STATE(204)] = 2330,
  [SMALL_STATE(205)] = 2340,
  [SMALL_STATE(206)] = 2350,
  [SMALL_STATE(207)] = 2360,
  [SMALL_STATE(208)] = 2370,
  [SMALL_STATE(209)] = 2380,
  [SMALL_STATE(210)] = 2390,
  [SMALL_STATE(211)] = 2400,
  [SMALL_STATE(212)] = 2410,
  [SMALL_STATE(213)] = 2420,
  [SMALL_STATE(214)] = 2430,
  [SMALL_STATE(215)] = 2440,
  [SMALL_STATE(216)] = 2450,
  [SMALL_STATE(217)] = 2460,
  [SMALL_STATE(218)] = 2470,
  [SMALL_STATE(219)] = 2480,
  [SMALL_STATE(220)] = 2490,
  [SMALL_STATE(221)] = 2500,
  [SMALL_STATE(222)] = 2510,
  [SMALL_STATE(223)] = 2520,
  [SMALL_STATE(224)] = 2530,
  [SMALL_STATE(225)] = 2540,
  [SMALL_STATE(226)] = 2550,
  [SMALL_STATE(227)] = 2560,
  [SMALL_STATE(228)] = 2570,
  [SMALL_STATE(229)] = 2580,
  [SMALL_STATE(230)] = 2590,
  [SMALL_STATE(231)] = 2600,
  [SMALL_STATE(232)] = 2610,
  [SMALL_STATE(233)] = 2620,
  [SMALL_STATE(234)] = 2630,
  [SMALL_STATE(235)] = 2640,
  [SMALL_STATE(236)] = 2650,
  [SMALL_STATE(237)] = 2660,
  [SMALL_STATE(238)] = 2670,
  [SMALL_STATE(239)] = 2680,
  [SMALL_STATE(240)] = 2690,
  [SMALL_STATE(241)] = 2700,
  [SMALL_STATE(242)] = 2710,
  [SMALL_STATE(243)] = 2720,
  [SMALL_STATE(244)] = 2730,
  [SMALL_STATE(245)] = 2740,
  [SMALL_STATE(246)] = 2750,
  [SMALL_STATE(247)] = 2760,
  [SMALL_STATE(248)] = 2770,
  [SMALL_STATE(249)] = 2780,
  [SMALL_STATE(250)] = 2790,
  [SMALL_STATE(251)] = 2800,
  [SMALL_STATE(252)] = 2810,
  [SMALL_STATE(253)] = 2820,
  [SMALL_STATE(254)] = 2830,
  [SMALL_STATE(255)] = 2840,
  [SMALL_STATE(256)] = 2850,
  [SMALL_STATE(257)] = 2860,
  [SMALL_STATE(258)] = 2870,
  [SMALL_STATE(259)] = 2880,
  [SMALL_STATE(260)] = 2890,
  [SMALL_STATE(261)] = 2894,
  [SMALL_STATE(262)] = 2898,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(14),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(10),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(92),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(91),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breaking_change, 2, .production_id = 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_breaking_change, 2, .production_id = 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trailer, 2, .production_id = 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trailer, 2, .production_id = 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_line, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_line, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scissor, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scissor, 2, .production_id = 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__scissor_repeat1, 2),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__scissor_repeat1, 2), SHIFT_REPEAT(27),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__scissor_repeat1, 2), SHIFT_REPEAT(27),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__scissor_repeat1, 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__scissor_repeat1, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 3),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filepath, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 2),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 5),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 5),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 6),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 6),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filepath, 5),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__change, 2),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__onbranch, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interactive_rebasing, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [459] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 3, .production_id = 3),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebasing, 5),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__change, 3),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rebase_command, 3),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date, 3, .production_id = 4),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uptodate, 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__change, 4),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 5),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__behind, 5),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ahead, 5),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_gitcommit_external_scanner_create(void);
void tree_sitter_gitcommit_external_scanner_destroy(void *);
bool tree_sitter_gitcommit_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_gitcommit_external_scanner_serialize(void *, char *);
void tree_sitter_gitcommit_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gitcommit(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_gitcommit_external_scanner_create,
      tree_sitter_gitcommit_external_scanner_destroy,
      tree_sitter_gitcommit_external_scanner_scan,
      tree_sitter_gitcommit_external_scanner_serialize,
      tree_sitter_gitcommit_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
