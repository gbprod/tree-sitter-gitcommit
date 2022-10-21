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
#define STATE_COUNT 252
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 252
#define ALIAS_COUNT 4
#define TOKEN_COUNT 234
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum {
  aux_sym_source_token1 = 1,
  aux_sym_subject_token1 = 2,
  aux_sym_subject_token2 = 3,
  aux_sym_subject_token3 = 4,
  anon_sym_POUND = 5,
  aux_sym_comment_token1 = 6,
  aux_sym_comment_token2 = 7,
  aux_sym__scissor_token1 = 8,
  sym_branch = 9,
  sym_number = 10,
  aux_sym__change_token1 = 11,
  aux_sym__change_token2 = 12,
  aux_sym__filepath_token1 = 13,
  anon_sym_DASH_GT = 14,
  anon_sym_Date_COLON = 15,
  anon_sym_Date_COLON2 = 16,
  anon_sym_ = 17,
  anon_sym_Ngythng_COLON = 18,
  anon_sym_Tarih_COLON = 19,
  anon_sym_Datum_COLON = 20,
  anon_sym_COLON = 21,
  anon_sym_Data_COLON = 22,
  anon_sym_COLON2 = 23,
  anon_sym_Tanggal_COLON = 24,
  anon_sym_Fecha_COLON = 25,
  anon_sym_COLON3 = 26,
  anon_sym_Onbranch = 27,
  anon_sym_Surlabranche = 28,
  anon_sym_COLON4 = 29,
  anon_sym_Pgrenen = 30,
  anon_sym_zerindebulunulandal_COLON = 31,
  anon_sym_Trnnhnh = 32,
  anon_sym_2 = 33,
  anon_sym_Emramo = 34,
  anon_sym_Nagazi = 35,
  anon_sym_3 = 36,
  anon_sym_Sulbranch = 37,
  anon_sym_Padacabang = 38,
  anon_sym_Enlarama = 39,
  anon_sym_4 = 40,
  anon_sym_AufBranch = 41,
  anon_sym_Enlabranca = 42,
  anon_sym_5 = 43,
  anon_sym_Yourbranchisuptodatewith_SQUOTE = 44,
  anon_sym_SQUOTE_DOT = 45,
  anon_sym_Votrebrancheestjouravec_SQUOTE = 46,
  anon_sym_SQUOTE = 47,
  anon_sym_SQUOTE2 = 48,
  anon_sym_SQUOTE3 = 49,
  anon_sym_Nhnhcabncpnhtvi = 50,
  anon_sym_DOT = 51,
  anon_sym_Dalnz_SQUOTE = 52,
  anon_sym_SQUOTEilegncel_DOT = 53,
  anon_sym_Dingrenrjourmed_DQUOTE = 54,
  anon_sym_DQUOTE_DOT = 55,
  anon_sym_6 = 56,
  anon_sym_DOT2 = 57,
  anon_sym_Teuramoestatualizadocom_SQUOTE = 58,
  anon_sym_Twojagajestnabiecoz = 59,
  anon_sym_SQUOTE4 = 60,
  anon_sym_SQUOTE_DOT2 = 61,
  anon_sym_Iltuobranchaggiornatorispettoa_SQUOTE = 62,
  anon_sym_CabangAndamutakhirdengan_SQUOTE = 63,
  anon_sym_Turamaestactualizadacon_SQUOTE = 64,
  anon_sym_SQUOTE5 = 65,
  anon_sym_IhrBranchistaufdemselbenStandwie_SQUOTE = 66,
  anon_sym_Lavostrabrancaestaldiaamb = 67,
  anon_sym_7 = 68,
  anon_sym_DOT3 = 69,
  anon_sym_Yourbranchisbehind_SQUOTE = 70,
  anon_sym_SQUOTEby = 71,
  anon_sym_commit_COMMAandcanbefast_DASHforwarded_DOT = 72,
  anon_sym_commits_COMMAandcanbefast_DASHforwarded_DOT = 73,
  anon_sym_Votrebrancheestenretardsur_SQUOTE = 74,
  anon_sym_SQUOTEde = 75,
  anon_sym_commit_COMMAetpeuttremisejourenavancerapide_DOT = 76,
  anon_sym_commits_COMMAetpeuttremisejourenavancerapide_DOT = 77,
  anon_sym_Lavostrabrancaest = 78,
  anon_sym_comissiperdarrerede = 79,
  anon_sym_COMMAipotavanar_DASHserpidament_DOT = 80,
  anon_sym_comissionsperdarrerede = 81,
  anon_sym_8 = 82,
  anon_sym_9 = 83,
  anon_sym_DOT4 = 84,
  anon_sym_10 = 85,
  anon_sym_IhrBranchist = 86,
  anon_sym_Commithinter_SQUOTE = 87,
  anon_sym_SQUOTE_COMMAundkannvorgespultwerden_DOT = 88,
  anon_sym_Commitshinter_SQUOTE = 89,
  anon_sym_SQUOTE6 = 90,
  anon_sym_SQUOTE7 = 91,
  anon_sym_COMMA_DOT = 92,
  anon_sym_COMMA_DOT2 = 93,
  anon_sym_Turamaestdetrsde_SQUOTE = 94,
  anon_sym_SQUOTEpor = 95,
  anon_sym_commit_COMMAypuedeseravanzadarpido_DOT = 96,
  anon_sym_commits_COMMAypuedeseravanzadarpido_DOT = 97,
  anon_sym_CabangAndadibelakang_SQUOTE = 98,
  anon_sym_SQUOTEoleh = 99,
  anon_sym_komit_COMMAdanbisadimaju_DASHcepatkan_DOT = 100,
  anon_sym_CabangAndadibelakan_SQUOTE = 101,
  anon_sym_Iltuobranch_COMMArispettoa_SQUOTE = 102,
  anon_sym_SQUOTE_COMMAindietrodi = 103,
  anon_sym_commitenepossoeseguireilfastforward_DOT = 104,
  anon_sym_SQUOTE8 = 105,
  anon_sym_COMMA_DOT3 = 106,
  anon_sym_Nhnhcabnngngsau = 107,
  anon_sym_11 = 108,
  anon_sym_lnchuyngiao_COMMAvcthcchuyn_DASHtip_DASHnhanh_DOT = 109,
  anon_sym_SQUOTEdalndan = 110,
  anon_sym_ilemegerideveilerisarlabilir_DOT = 111,
  anon_sym_Dingrenliggerefter_DQUOTE = 112,
  anon_sym_DQUOTEmed = 113,
  anon_sym_incheckning_COMMAochkansnabbspolas_DOT = 114,
  anon_sym_incheckningar_COMMAochkansnabbspolas_DOT = 115,
  anon_sym_12 = 116,
  anon_sym_13 = 117,
  anon_sym_DOT5 = 118,
  anon_sym_DOT6 = 119,
  anon_sym_DOT7 = 120,
  anon_sym_Teuramoestatrsde_SQUOTE = 121,
  anon_sym_memria_COMMAepodeseravanado_DOT = 122,
  anon_sym_memrias_COMMAepodeseravanado_DOT = 123,
  anon_sym_Twojagajestza = 124,
  anon_sym_o = 125,
  anon_sym_zapisimoezostaprzewinita_DOT = 126,
  anon_sym_zapisyimoezostaprzewinita_DOT = 127,
  anon_sym_zapiswimoezostaprzewinita_DOT = 128,
  anon_sym_SQUOTE9 = 129,
  anon_sym_SQUOTE10 = 130,
  anon_sym_14 = 131,
  anon_sym_SQUOTE11 = 132,
  anon_sym_15 = 133,
  anon_sym_Yourbranchisaheadof_SQUOTE = 134,
  anon_sym_commit_DOT = 135,
  anon_sym_commits_DOT = 136,
  anon_sym_Votrebrancheestenavancesur_SQUOTE = 137,
  anon_sym_SQUOTE12 = 138,
  anon_sym_16 = 139,
  anon_sym_SQUOTE13 = 140,
  anon_sym_17 = 141,
  anon_sym_Nhnhcabnngtrc = 142,
  anon_sym_lnchuyngiao_DOT = 143,
  anon_sym_ilemeileride_DOT = 144,
  anon_sym_Dingrenliggerfre_DQUOTE = 145,
  anon_sym_incheckning_DOT = 146,
  anon_sym_incheckningar_DOT = 147,
  anon_sym_18 = 148,
  anon_sym_DOT8 = 149,
  anon_sym_DOT9 = 150,
  anon_sym_DOT10 = 151,
  anon_sym_Teuramoestfrentede_SQUOTE = 152,
  anon_sym_memria_DOT = 153,
  anon_sym_memrias_DOT = 154,
  anon_sym_Twojagajestdoprzoduwzgldem = 155,
  anon_sym_zapis_DOT = 156,
  anon_sym_zapisy_DOT = 157,
  anon_sym_zapisw_DOT = 158,
  anon_sym_DOT11 = 159,
  anon_sym_Iltuobranchavantirispettoa_SQUOTE = 160,
  anon_sym_SQUOTEdi = 161,
  anon_sym_CabangAndamendahului_SQUOTE = 162,
  anon_sym_komit_DOT = 163,
  anon_sym_Turamaestadelantadaa_SQUOTE = 164,
  anon_sym_SQUOTE14 = 165,
  anon_sym_DOT12 = 166,
  anon_sym_DOT13 = 167,
  anon_sym_Commitvor_SQUOTE = 168,
  anon_sym_Commitsvor_SQUOTE = 169,
  anon_sym_comissiperdavantde = 170,
  anon_sym_comissionsperdavantde = 171,
  anon_sym_19 = 172,
  anon_sym_20 = 173,
  anon_sym_Youarecurrentlyrebasingbranch_SQUOTE = 174,
  anon_sym_SQUOTEon_SQUOTE = 175,
  anon_sym_Voustesentrainderebaserlabranche_SQUOTE = 176,
  anon_sym_SQUOTEsur_SQUOTE = 177,
  anon_sym_SQUOTE15 = 178,
  anon_sym_SQUOTE_SQUOTE = 179,
  anon_sym_SQUOTE16 = 180,
  anon_sym_SQUOTE17 = 181,
  anon_sym_SQUOTE_SQUOTE2 = 182,
  anon_sym_SQUOTE18 = 183,
  anon_sym_Bnhinnayangthchinvicrebasenhnh = 184,
  anon_sym_trn = 185,
  anon_sym_uanda_SQUOTE = 186,
  anon_sym_SQUOTEdaln_SQUOTE = 187,
  anon_sym_SQUOTEzerineyenidentemellendiriyorsunuz_DOT = 188,
  anon_sym_Duhllerpattombaseragrenen_DQUOTE = 189,
  anon_sym_DQUOTEovanp_DQUOTE = 190,
  anon_sym_21 = 191,
  anon_sym_22 = 192,
  anon_sym_Estsrebaseandoramo_SQUOTE = 193,
  anon_sym_SQUOTEsobre_SQUOTE = 194,
  anon_sym_Przestawiaszwaniega = 195,
  anon_sym_na = 196,
  anon_sym_SQUOTE19 = 197,
  anon_sym_SQUOTE_SQUOTE3 = 198,
  anon_sym_SQUOTE_DOT3 = 199,
  anon_sym_Attualmentestaieseguendoilrebasedelbranch_SQUOTE = 200,
  anon_sym_SQUOTEsu_SQUOTE = 201,
  anon_sym_Andasedangmendasarkanulangcabang_SQUOTE = 202,
  anon_sym_SQUOTEpada_SQUOTE = 203,
  anon_sym_Estsaplicandounrebasedelarama_SQUOTE = 204,
  anon_sym_DOT14 = 205,
  anon_sym_rebase_SQUOTE = 206,
  anon_sym_SQUOTE_SQUOTE4 = 207,
  anon_sym_SiesindgeradebeimRebasevonBranch_SQUOTE = 208,
  anon_sym_SQUOTEauf_SQUOTE = 209,
  anon_sym_Actualmentesteufentrebasedelabranca = 210,
  anon_sym_en = 211,
  anon_sym_23 = 212,
  anon_sym_24 = 213,
  anon_sym_interactiverebaseinprogress_SEMIonto = 214,
  anon_sym_rebasageinteractifencours_SEMIsur = 215,
  anon_sym_25 = 216,
  anon_sym_rebaseinteractiuencurs_SEMIsobre = 217,
  anon_sym_interaktivesRebaseimGange_SEMIauf = 218,
  anon_sym_rebase_COMMA = 219,
  anon_sym_rebaseinteractivoenprogreso_SEMIsobre = 220,
  anon_sym_sedangmendasarkanulanginteraktif_SEMIke = 221,
  anon_sym_rebaseinterattivoincorsosu = 222,
  anon_sym_DOT15 = 223,
  anon_sym_trwainteraktywneprzestawianiena = 224,
  anon_sym_rebaseinterativoemcurso_SEMIsobre = 225,
  anon_sym_SEMI = 226,
  anon_sym_interaktivombaseringpgr_SEMIovanp = 227,
  anon_sym_ununzerineetkileimliyenidentemellendirmesrmekte_COLON = 228,
  anon_sym_rebasechtngtcangcthchin_SEMIlntrn = 229,
  anon_sym_26 = 230,
  anon_sym_27 = 231,
  sym__trailer_token = 232,
  sym__comment_title = 233,
  sym_source = 234,
  sym_subject = 235,
  sym__body_line = 236,
  sym_message = 237,
  sym_trailer = 238,
  sym_comment = 239,
  sym__scissor = 240,
  sym__change = 241,
  sym__filepath = 242,
  sym__date = 243,
  sym__onbranch = 244,
  sym__uptodate = 245,
  sym__behind = 246,
  sym__ahead = 247,
  sym__rebasing = 248,
  sym__interactive_rebasing = 249,
  aux_sym_source_repeat1 = 250,
  aux_sym__scissor_repeat1 = 251,
  alias_sym_date = 252,
  alias_sym_diff = 253,
  alias_sym_overflow = 254,
  alias_sym_value = 255,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_token1] = "source_token1",
  [aux_sym_subject_token1] = "subject_token1",
  [aux_sym_subject_token2] = "subject_token2",
  [aux_sym_subject_token3] = "subject_token3",
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
  [anon_sym_Date_COLON] = "title",
  [anon_sym_Date_COLON2] = "title",
  [anon_sym_] = "title",
  [anon_sym_Ngythng_COLON] = "title",
  [anon_sym_Tarih_COLON] = "title",
  [anon_sym_Datum_COLON] = "title",
  [anon_sym_COLON] = "title",
  [anon_sym_Data_COLON] = "title",
  [anon_sym_COLON2] = "title",
  [anon_sym_Tanggal_COLON] = "title",
  [anon_sym_Fecha_COLON] = "title",
  [anon_sym_COLON3] = "title",
  [anon_sym_Onbranch] = "text",
  [anon_sym_Surlabranche] = "text",
  [anon_sym_COLON4] = "text",
  [anon_sym_Pgrenen] = "text",
  [anon_sym_zerindebulunulandal_COLON] = "text",
  [anon_sym_Trnnhnh] = "text",
  [anon_sym_2] = "text",
  [anon_sym_Emramo] = "text",
  [anon_sym_Nagazi] = "text",
  [anon_sym_3] = "text",
  [anon_sym_Sulbranch] = "text",
  [anon_sym_Padacabang] = "text",
  [anon_sym_Enlarama] = "text",
  [anon_sym_4] = "text",
  [anon_sym_AufBranch] = "text",
  [anon_sym_Enlabranca] = "text",
  [anon_sym_5] = "text",
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
  [anon_sym_6] = "Эта ветка соответствует «",
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
  [anon_sym_7] = "Клонът е обновен към „",
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
  [anon_sym_8] = "Клонът ви е с ",
  [anon_sym_9] = " подаване зад „",
  [anon_sym_DOT4] = "“ и може да бъде превъртян.",
  [anon_sym_10] = " подавания зад „",
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
  [anon_sym_11] = "” ",
  [anon_sym_lnchuyngiao_COMMAvcthcchuyn_DASHtip_DASHnhanh_DOT] = " lần chuyển giao, và có thể được chuyển-tiếp-nhanh.",
  [anon_sym_SQUOTEdalndan] = "' dalından ",
  [anon_sym_ilemegerideveilerisarlabilir_DOT] = " işleme geride ve ileri sarılabilir.",
  [anon_sym_Dingrenliggerefter_DQUOTE] = "Din gren ligger efter \"",
  [anon_sym_DQUOTEmed] = "\" med ",
  [anon_sym_incheckning_COMMAochkansnabbspolas_DOT] = " incheckning, och kan snabbspolas.",
  [anon_sym_incheckningar_COMMAochkansnabbspolas_DOT] = " incheckningar, och kan snabbspolas.",
  [anon_sym_12] = "Ветка отстает от «",
  [anon_sym_13] = "» на ",
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
  [anon_sym_14] = " 个提交，并且可以快进。",
  [anon_sym_SQUOTE11] = "您的分支落後 '",
  [anon_sym_15] = " 個提交，並且可以快轉。",
  [anon_sym_Yourbranchisaheadof_SQUOTE] = "Your branch is ahead of '",
  [anon_sym_commit_DOT] = " commit.",
  [anon_sym_commits_DOT] = " commits.",
  [anon_sym_Votrebrancheestenavancesur_SQUOTE] = "Votre branche est en avance sur '",
  [anon_sym_SQUOTE12] = "您的分支領先 '",
  [anon_sym_16] = " 個提交。",
  [anon_sym_SQUOTE13] = "您的分支领先 '",
  [anon_sym_17] = " 个提交。",
  [anon_sym_Nhnhcabnngtrc] = "Nhánh của bạn đứng trước “",
  [anon_sym_lnchuyngiao_DOT] = " lần chuyển giao.",
  [anon_sym_ilemeileride_DOT] = " işleme ileride.",
  [anon_sym_Dingrenliggerfre_DQUOTE] = "Din gren ligger före \"",
  [anon_sym_incheckning_DOT] = " incheckning.",
  [anon_sym_incheckningar_DOT] = " incheckningar.",
  [anon_sym_18] = "Ваша ветка опережает «",
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
  [anon_sym_19] = " подаване пред „",
  [anon_sym_20] = " подавания пред „",
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
  [anon_sym_21] = "Вы сейчас перемещаете ветку «",
  [anon_sym_22] = "» над «",
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
  [anon_sym_DOT14] = ".",
  [anon_sym_rebase_SQUOTE] = "Αυτή τη στιγμή κάνετε rebase τον κλάδο '",
  [anon_sym_SQUOTE_SQUOTE4] = "' στο '",
  [anon_sym_SiesindgeradebeimRebasevonBranch_SQUOTE] = "Sie sind gerade beim Rebase von Branch '",
  [anon_sym_SQUOTEauf_SQUOTE] = "' auf '",
  [anon_sym_Actualmentesteufentrebasedelabranca] = "Actualment esteu fent «rebase» de la branca «",
  [anon_sym_en] = "» en «",
  [anon_sym_23] = "В момента пребазирате клона „",
  [anon_sym_24] = "“ върху „",
  [anon_sym_interactiverebaseinprogress_SEMIonto] = "interactive rebase in progress; onto ",
  [anon_sym_rebasageinteractifencours_SEMIsur] = "rebasage interactif en cours ; sur ",
  [anon_sym_25] = "извършвате интерактивно пребазиране върху ",
  [anon_sym_rebaseinteractiuencurs_SEMIsobre] = "«rebase» interactiu en curs; sobre ",
  [anon_sym_interaktivesRebaseimGange_SEMIauf] = "interaktives Rebase im Gange; auf ",
  [anon_sym_rebase_COMMA] = "εκτελείται διαδραστικό rebase, πάνω στο ",
  [anon_sym_rebaseinteractivoenprogreso_SEMIsobre] = "rebase interactivo en progreso; sobre ",
  [anon_sym_sedangmendasarkanulanginteraktif_SEMIke] = "sedang mendasarkan ulang interaktif; ke ",
  [anon_sym_rebaseinterattivoincorsosu] = "rebase interattivo in corso su ",
  [anon_sym_DOT15] = "대화형 리베이스 진행 중. 갈 위치는 ",
  [anon_sym_trwainteraktywneprzestawianiena] = "trwa interaktywne przestawianie na ",
  [anon_sym_rebaseinterativoemcurso_SEMIsobre] = "rebase interativo em curso; sobre ",
  [anon_sym_SEMI] = "интерактивное перемещение в процессе; над ",
  [anon_sym_interaktivombaseringpgr_SEMIovanp] = "interaktiv ombasering pågår; ovanpå ",
  [anon_sym_ununzerineetkileimliyenidentemellendirmesrmekte_COLON] = "şunun üzerine etkileşimli yeniden temellendirme sürmekte: ",
  [anon_sym_rebasechtngtcangcthchin_SEMIlntrn] = "rebase ở chế độ tương tác đang được thực hiện; lên trên ",
  [anon_sym_26] = "交互式变基操作正在进行中；至 ",
  [anon_sym_27] = "互動式重定基底動作正在進行中；至 ",
  [sym__trailer_token] = "token",
  [sym__comment_title] = "title",
  [sym_source] = "source",
  [sym_subject] = "subject",
  [sym__body_line] = "_body_line",
  [sym_message] = "message",
  [sym_trailer] = "trailer",
  [sym_comment] = "comment",
  [sym__scissor] = "_scissor",
  [sym__change] = "_change",
  [sym__filepath] = "_filepath",
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
  [anon_sym_Date_COLON] = sym__comment_title,
  [anon_sym_Date_COLON2] = sym__comment_title,
  [anon_sym_] = sym__comment_title,
  [anon_sym_Ngythng_COLON] = sym__comment_title,
  [anon_sym_Tarih_COLON] = sym__comment_title,
  [anon_sym_Datum_COLON] = sym__comment_title,
  [anon_sym_COLON] = sym__comment_title,
  [anon_sym_Data_COLON] = sym__comment_title,
  [anon_sym_COLON2] = sym__comment_title,
  [anon_sym_Tanggal_COLON] = sym__comment_title,
  [anon_sym_Fecha_COLON] = sym__comment_title,
  [anon_sym_COLON3] = sym__comment_title,
  [anon_sym_Onbranch] = anon_sym_Onbranch,
  [anon_sym_Surlabranche] = anon_sym_Onbranch,
  [anon_sym_COLON4] = anon_sym_Onbranch,
  [anon_sym_Pgrenen] = anon_sym_Onbranch,
  [anon_sym_zerindebulunulandal_COLON] = anon_sym_Onbranch,
  [anon_sym_Trnnhnh] = anon_sym_Onbranch,
  [anon_sym_2] = anon_sym_Onbranch,
  [anon_sym_Emramo] = anon_sym_Onbranch,
  [anon_sym_Nagazi] = anon_sym_Onbranch,
  [anon_sym_3] = anon_sym_Onbranch,
  [anon_sym_Sulbranch] = anon_sym_Onbranch,
  [anon_sym_Padacabang] = anon_sym_Onbranch,
  [anon_sym_Enlarama] = anon_sym_Onbranch,
  [anon_sym_4] = anon_sym_Onbranch,
  [anon_sym_AufBranch] = anon_sym_Onbranch,
  [anon_sym_Enlabranca] = anon_sym_Onbranch,
  [anon_sym_5] = anon_sym_Onbranch,
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
  [anon_sym_6] = anon_sym_6,
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
  [anon_sym_7] = anon_sym_7,
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
  [anon_sym_8] = anon_sym_8,
  [anon_sym_9] = anon_sym_9,
  [anon_sym_DOT4] = anon_sym_DOT4,
  [anon_sym_10] = anon_sym_10,
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
  [anon_sym_11] = anon_sym_11,
  [anon_sym_lnchuyngiao_COMMAvcthcchuyn_DASHtip_DASHnhanh_DOT] = anon_sym_lnchuyngiao_COMMAvcthcchuyn_DASHtip_DASHnhanh_DOT,
  [anon_sym_SQUOTEdalndan] = anon_sym_SQUOTEdalndan,
  [anon_sym_ilemegerideveilerisarlabilir_DOT] = anon_sym_ilemegerideveilerisarlabilir_DOT,
  [anon_sym_Dingrenliggerefter_DQUOTE] = anon_sym_Dingrenliggerefter_DQUOTE,
  [anon_sym_DQUOTEmed] = anon_sym_DQUOTEmed,
  [anon_sym_incheckning_COMMAochkansnabbspolas_DOT] = anon_sym_incheckning_COMMAochkansnabbspolas_DOT,
  [anon_sym_incheckningar_COMMAochkansnabbspolas_DOT] = anon_sym_incheckningar_COMMAochkansnabbspolas_DOT,
  [anon_sym_12] = anon_sym_12,
  [anon_sym_13] = anon_sym_13,
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
  [anon_sym_14] = anon_sym_14,
  [anon_sym_SQUOTE11] = anon_sym_SQUOTE11,
  [anon_sym_15] = anon_sym_15,
  [anon_sym_Yourbranchisaheadof_SQUOTE] = anon_sym_Yourbranchisaheadof_SQUOTE,
  [anon_sym_commit_DOT] = anon_sym_commit_DOT,
  [anon_sym_commits_DOT] = anon_sym_commits_DOT,
  [anon_sym_Votrebrancheestenavancesur_SQUOTE] = anon_sym_Votrebrancheestenavancesur_SQUOTE,
  [anon_sym_SQUOTE12] = anon_sym_SQUOTE12,
  [anon_sym_16] = anon_sym_16,
  [anon_sym_SQUOTE13] = anon_sym_SQUOTE13,
  [anon_sym_17] = anon_sym_17,
  [anon_sym_Nhnhcabnngtrc] = anon_sym_Nhnhcabnngtrc,
  [anon_sym_lnchuyngiao_DOT] = anon_sym_lnchuyngiao_DOT,
  [anon_sym_ilemeileride_DOT] = anon_sym_ilemeileride_DOT,
  [anon_sym_Dingrenliggerfre_DQUOTE] = anon_sym_Dingrenliggerfre_DQUOTE,
  [anon_sym_incheckning_DOT] = anon_sym_incheckning_DOT,
  [anon_sym_incheckningar_DOT] = anon_sym_incheckningar_DOT,
  [anon_sym_18] = anon_sym_18,
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
  [anon_sym_19] = anon_sym_19,
  [anon_sym_20] = anon_sym_20,
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
  [anon_sym_21] = anon_sym_21,
  [anon_sym_22] = anon_sym_22,
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
  [anon_sym_DOT14] = anon_sym_DOT14,
  [anon_sym_rebase_SQUOTE] = anon_sym_rebase_SQUOTE,
  [anon_sym_SQUOTE_SQUOTE4] = anon_sym_SQUOTE_SQUOTE4,
  [anon_sym_SiesindgeradebeimRebasevonBranch_SQUOTE] = anon_sym_SiesindgeradebeimRebasevonBranch_SQUOTE,
  [anon_sym_SQUOTEauf_SQUOTE] = anon_sym_SQUOTEauf_SQUOTE,
  [anon_sym_Actualmentesteufentrebasedelabranca] = anon_sym_Actualmentesteufentrebasedelabranca,
  [anon_sym_en] = anon_sym_en,
  [anon_sym_23] = anon_sym_23,
  [anon_sym_24] = anon_sym_24,
  [anon_sym_interactiverebaseinprogress_SEMIonto] = anon_sym_interactiverebaseinprogress_SEMIonto,
  [anon_sym_rebasageinteractifencours_SEMIsur] = anon_sym_rebasageinteractifencours_SEMIsur,
  [anon_sym_25] = anon_sym_25,
  [anon_sym_rebaseinteractiuencurs_SEMIsobre] = anon_sym_rebaseinteractiuencurs_SEMIsobre,
  [anon_sym_interaktivesRebaseimGange_SEMIauf] = anon_sym_interaktivesRebaseimGange_SEMIauf,
  [anon_sym_rebase_COMMA] = anon_sym_rebase_COMMA,
  [anon_sym_rebaseinteractivoenprogreso_SEMIsobre] = anon_sym_rebaseinteractivoenprogreso_SEMIsobre,
  [anon_sym_sedangmendasarkanulanginteraktif_SEMIke] = anon_sym_sedangmendasarkanulanginteraktif_SEMIke,
  [anon_sym_rebaseinterattivoincorsosu] = anon_sym_rebaseinterattivoincorsosu,
  [anon_sym_DOT15] = anon_sym_DOT15,
  [anon_sym_trwainteraktywneprzestawianiena] = anon_sym_trwainteraktywneprzestawianiena,
  [anon_sym_rebaseinterativoemcurso_SEMIsobre] = anon_sym_rebaseinterativoemcurso_SEMIsobre,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_interaktivombaseringpgr_SEMIovanp] = anon_sym_interaktivombaseringpgr_SEMIovanp,
  [anon_sym_ununzerineetkileimliyenidentemellendirmesrmekte_COLON] = anon_sym_ununzerineetkileimliyenidentemellendirmesrmekte_COLON,
  [anon_sym_rebasechtngtcangcthchin_SEMIlntrn] = anon_sym_rebasechtngtcangcthchin_SEMIlntrn,
  [anon_sym_26] = anon_sym_26,
  [anon_sym_27] = anon_sym_27,
  [sym__trailer_token] = sym__trailer_token,
  [sym__comment_title] = sym__comment_title,
  [sym_source] = sym_source,
  [sym_subject] = sym_subject,
  [sym__body_line] = sym__body_line,
  [sym_message] = sym_message,
  [sym_trailer] = sym_trailer,
  [sym_comment] = sym_comment,
  [sym__scissor] = sym__scissor,
  [sym__change] = sym__change,
  [sym__filepath] = sym__filepath,
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
  [anon_sym_Date_COLON] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Date_COLON2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Data_COLON] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON2] = {
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
  [anon_sym_COLON3] = {
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
  [anon_sym_COLON4] = {
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
  [anon_sym_2] = {
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
  [anon_sym_3] = {
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
  [anon_sym_4] = {
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
  [anon_sym_5] = {
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
  [anon_sym_6] = {
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
  [anon_sym_7] = {
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
  [anon_sym_8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_10] = {
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
  [anon_sym_11] = {
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
  [anon_sym_12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_13] = {
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
  [anon_sym_14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_15] = {
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
  [anon_sym_16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE13] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_17] = {
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
  [anon_sym_18] = {
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
  [anon_sym_19] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_20] = {
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
  [anon_sym_21] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_22] = {
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
  [anon_sym_DOT14] = {
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
  [anon_sym_23] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_24] = {
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
  [anon_sym_25] = {
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
  [anon_sym_DOT15] = {
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
  [anon_sym_26] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_27] = {
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
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_subject] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1218);
      if (lookahead == '\t') ADVANCE(3303);
      if (lookahead == '\n') ADVANCE(1219);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '#') ADVANCE(1279);
      if (lookahead == '.') ADVANCE(3499);
      if (lookahead != 0) ADVANCE(1220);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(3303);
      if (lookahead == '\n') ADVANCE(1219);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '#') ADVANCE(1279);
      if (lookahead == 'A') ADVANCE(1913);
      if (lookahead == 'B') ADVANCE(3190);
      if (lookahead == 'C') ADVANCE(1721);
      if (lookahead == 'D') ADVANCE(1722);
      if (lookahead == 'E') ADVANCE(2324);
      if (lookahead == 'F') ADVANCE(1998);
      if (lookahead == 'I') ADVANCE(2186);
      if (lookahead == 'L') ADVANCE(1744);
      if (lookahead == 'N') ADVANCE(1749);
      if (lookahead == 'O') ADVANCE(2362);
      if (lookahead == 'P') ADVANCE(1821);
      if (lookahead == 'S') ADVANCE(2220);
      if (lookahead == 'T') ADVANCE(1723);
      if (lookahead == 'V') ADVANCE(2463);
      if (lookahead == 'Y') ADVANCE(2466);
      if (lookahead == 'i') ADVANCE(2353);
      if (lookahead == 'r') ADVANCE(2046);
      if (lookahead == 's') ADVANCE(2045);
      if (lookahead == 't') ADVANCE(2521);
      if (lookahead == 171) ADVANCE(2570);
      if (lookahead == 220) ADVANCE(2801);
      if (lookahead == 350) ADVANCE(2748);
      if (lookahead == 351) ADVANCE(2743);
      if (lookahead == 913) ADVANCE(2982);
      if (lookahead == 919) ADVANCE(2927);
      if (lookahead == 927) ADVANCE(1370);
      if (lookahead == 931) ADVANCE(2968);
      if (lookahead == 949) ADVANCE(2920);
      if (lookahead == 1042) ADVANCE(1291);
      if (lookahead == 1044) ADVANCE(3006);
      if (lookahead == 1050) ADVANCE(3088);
      if (lookahead == 1053) ADVANCE(2998);
      if (lookahead == 1058) ADVANCE(3030);
      if (lookahead == 1069) ADVANCE(3163);
      if (lookahead == 1080) ADVANCE(3066);
      if (lookahead == 20114) ADVANCE(3235);
      if (lookahead == 20132) ADVANCE(3224);
      if (lookahead == 20301) ADVANCE(3258);
      if (lookahead == 24744) ADVANCE(3239);
      if (lookahead == 26085) ADVANCE(3259);
      if (lookahead == 45824) ADVANCE(3292);
      if (lookahead == 48652) ADVANCE(3277);
      if (lookahead == 49884) ADVANCE(3274);
      if (lookahead == 54788) ADVANCE(3284);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(1290);
      if (lookahead != 0) ADVANCE(3297);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(3303);
      if (lookahead == '\n') ADVANCE(1219);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '#') ADVANCE(1279);
      if (lookahead == 'A') ADVANCE(1913);
      if (lookahead == 'B') ADVANCE(3190);
      if (lookahead == 'C') ADVANCE(1721);
      if (lookahead == 'D') ADVANCE(1722);
      if (lookahead == 'E') ADVANCE(2324);
      if (lookahead == 'F') ADVANCE(1998);
      if (lookahead == 'I') ADVANCE(2186);
      if (lookahead == 'L') ADVANCE(1744);
      if (lookahead == 'N') ADVANCE(1749);
      if (lookahead == 'O') ADVANCE(2362);
      if (lookahead == 'P') ADVANCE(1821);
      if (lookahead == 'S') ADVANCE(2220);
      if (lookahead == 'T') ADVANCE(1723);
      if (lookahead == 'V') ADVANCE(2463);
      if (lookahead == 'Y') ADVANCE(2466);
      if (lookahead == 'i') ADVANCE(2353);
      if (lookahead == 'r') ADVANCE(2046);
      if (lookahead == 's') ADVANCE(2045);
      if (lookahead == 't') ADVANCE(2521);
      if (lookahead == 171) ADVANCE(2570);
      if (lookahead == 220) ADVANCE(2801);
      if (lookahead == 350) ADVANCE(2748);
      if (lookahead == 351) ADVANCE(2743);
      if (lookahead == 913) ADVANCE(2982);
      if (lookahead == 919) ADVANCE(2927);
      if (lookahead == 927) ADVANCE(1370);
      if (lookahead == 931) ADVANCE(2968);
      if (lookahead == 949) ADVANCE(2920);
      if (lookahead == 1042) ADVANCE(1291);
      if (lookahead == 1044) ADVANCE(3006);
      if (lookahead == 1050) ADVANCE(3088);
      if (lookahead == 1053) ADVANCE(2998);
      if (lookahead == 1058) ADVANCE(3030);
      if (lookahead == 1069) ADVANCE(3163);
      if (lookahead == 1080) ADVANCE(3066);
      if (lookahead == 20114) ADVANCE(3235);
      if (lookahead == 20132) ADVANCE(3224);
      if (lookahead == 20301) ADVANCE(3258);
      if (lookahead == 24744) ADVANCE(3239);
      if (lookahead == 26085) ADVANCE(3259);
      if (lookahead == 45824) ADVANCE(3292);
      if (lookahead == 48652) ADVANCE(3277);
      if (lookahead == 49884) ADVANCE(3274);
      if (lookahead == 54788) ADVANCE(3284);
      if (lookahead != 0) ADVANCE(3297);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(3296);
      if (lookahead == ' ') ADVANCE(1289);
      if (lookahead == '#') ADVANCE(1282);
      if (lookahead == ':' ||
          lookahead == 65306) ADVANCE(3307);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(1287);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(3306);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(1219);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(1219);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '#') ADVANCE(1286);
      if (lookahead != 0) ADVANCE(1270);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(214);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(215);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(215);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(284);
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(1290);
      if (lookahead == '#') ADVANCE(1284);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(1288);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(3307);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(286);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#') ADVANCE(1279);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == '.') ADVANCE(3499);
      if (lookahead == 187) ADVANCE(15);
      if (lookahead == 8220) ADVANCE(16);
      if (lookahead == 8221) ADVANCE(17);
      if (lookahead == 44060) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3302);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(594);
      if (lookahead == '.') ADVANCE(3349);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(288);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '.') ADVANCE(3339);
      if (lookahead == 48372) ADVANCE(1175);
      if (lookahead == 50640) ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(461);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '.') ADVANCE(3351);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(1008);
      if (lookahead == '.') ADVANCE(3363);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(3402);
      if (lookahead == '.') ADVANCE(3345);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(1209);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(834);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(1186);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(544);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(3424);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(3399);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(3365);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(3369);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(3455);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(218);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(1184);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(882);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(3411);
      if (lookahead == 1076) ADVANCE(71);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(1179);
      if (lookahead == 47564) ADVANCE(1210);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(3407);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(506);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(3389);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(1196);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(3393);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(3385);
      END_STATE();
    case 38:
      if (lookahead == ' ') ADVANCE(1195);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(515);
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(511);
      END_STATE();
    case 41:
      if (lookahead == ' ') ADVANCE(1125);
      END_STATE();
    case 42:
      if (lookahead == ' ') ADVANCE(1204);
      END_STATE();
    case 43:
      if (lookahead == ' ') ADVANCE(331);
      END_STATE();
    case 44:
      if (lookahead == ' ') ADVANCE(212);
      END_STATE();
    case 45:
      if (lookahead == ' ') ADVANCE(951);
      END_STATE();
    case 46:
      if (lookahead == ' ') ADVANCE(1038);
      END_STATE();
    case 47:
      if (lookahead == ' ') ADVANCE(3404);
      END_STATE();
    case 48:
      if (lookahead == ' ') ADVANCE(1207);
      END_STATE();
    case 49:
      if (lookahead == ' ') ADVANCE(1189);
      END_STATE();
    case 50:
      if (lookahead == ' ') ADVANCE(1002);
      END_STATE();
    case 51:
      if (lookahead == ' ') ADVANCE(956);
      END_STATE();
    case 52:
      if (lookahead == ' ') ADVANCE(1177);
      END_STATE();
    case 53:
      if (lookahead == ' ') ADVANCE(898);
      END_STATE();
    case 54:
      if (lookahead == ' ') ADVANCE(3397);
      END_STATE();
    case 55:
      if (lookahead == ' ') ADVANCE(1071);
      END_STATE();
    case 56:
      if (lookahead == ' ') ADVANCE(1190);
      END_STATE();
    case 57:
      if (lookahead == ' ') ADVANCE(959);
      END_STATE();
    case 58:
      if (lookahead == ' ') ADVANCE(907);
      END_STATE();
    case 59:
      if (lookahead == ' ') ADVANCE(644);
      END_STATE();
    case 60:
      if (lookahead == ' ') ADVANCE(3419);
      END_STATE();
    case 61:
      if (lookahead == ' ') ADVANCE(1124);
      END_STATE();
    case 62:
      if (lookahead == ' ') ADVANCE(244);
      END_STATE();
    case 63:
      if (lookahead == ' ') ADVANCE(970);
      END_STATE();
    case 64:
      if (lookahead == ' ') ADVANCE(697);
      END_STATE();
    case 65:
      if (lookahead == ' ') ADVANCE(850);
      END_STATE();
    case 66:
      if (lookahead == ' ') ADVANCE(873);
      END_STATE();
    case 67:
      if (lookahead == ' ') ADVANCE(499);
      END_STATE();
    case 68:
      if (lookahead == ' ') ADVANCE(359);
      END_STATE();
    case 69:
      if (lookahead == ' ') ADVANCE(1041);
      if (lookahead == '.') ADVANCE(3443);
      if (lookahead == 1072) ADVANCE(204);
      if (lookahead == 1086) ADVANCE(1010);
      END_STATE();
    case 70:
      if (lookahead == ' ') ADVANCE(219);
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 71:
      if (lookahead == ' ') ADVANCE(883);
      END_STATE();
    case 72:
      if (lookahead == ' ') ADVANCE(573);
      END_STATE();
    case 73:
      if (lookahead == ' ') ADVANCE(862);
      END_STATE();
    case 74:
      if (lookahead == ' ') ADVANCE(1194);
      END_STATE();
    case 75:
      if (lookahead == ' ') ADVANCE(1126);
      END_STATE();
    case 76:
      if (lookahead == ' ') ADVANCE(1205);
      END_STATE();
    case 77:
      if (lookahead == ' ') ADVANCE(952);
      END_STATE();
    case 78:
      if (lookahead == ' ') ADVANCE(1001);
      END_STATE();
    case 79:
      if (lookahead == ' ') ADVANCE(1070);
      END_STATE();
    case 80:
      if (lookahead == ' ') ADVANCE(570);
      END_STATE();
    case 81:
      if (lookahead == ' ') ADVANCE(1046);
      END_STATE();
    case 82:
      if (lookahead == ' ') ADVANCE(856);
      END_STATE();
    case 83:
      if (lookahead == ' ') ADVANCE(870);
      END_STATE();
    case 84:
      if (lookahead == ' ') ADVANCE(983);
      END_STATE();
    case 85:
      if (lookahead == ' ') ADVANCE(361);
      END_STATE();
    case 86:
      if (lookahead == ' ') ADVANCE(220);
      END_STATE();
    case 87:
      if (lookahead == ' ') ADVANCE(884);
      END_STATE();
    case 88:
      if (lookahead == ' ') ADVANCE(510);
      END_STATE();
    case 89:
      if (lookahead == ' ') ADVANCE(575);
      END_STATE();
    case 90:
      if (lookahead == ' ') ADVANCE(1127);
      END_STATE();
    case 91:
      if (lookahead == ' ') ADVANCE(1003);
      END_STATE();
    case 92:
      if (lookahead == ' ') ADVANCE(375);
      END_STATE();
    case 93:
      if (lookahead == ' ') ADVANCE(704);
      END_STATE();
    case 94:
      if (lookahead == ' ') ADVANCE(848);
      END_STATE();
    case 95:
      if (lookahead == ' ') ADVANCE(221);
      END_STATE();
    case 96:
      if (lookahead == ' ') ADVANCE(885);
      END_STATE();
    case 97:
      if (lookahead == ' ') ADVANCE(1128);
      END_STATE();
    case 98:
      if (lookahead == ' ') ADVANCE(367);
      END_STATE();
    case 99:
      if (lookahead == ' ') ADVANCE(698);
      END_STATE();
    case 100:
      if (lookahead == ' ') ADVANCE(222);
      END_STATE();
    case 101:
      if (lookahead == ' ') ADVANCE(886);
      END_STATE();
    case 102:
      if (lookahead == ' ') ADVANCE(1129);
      END_STATE();
    case 103:
      if (lookahead == ' ') ADVANCE(330);
      END_STATE();
    case 104:
      if (lookahead == ' ') ADVANCE(701);
      END_STATE();
    case 105:
      if (lookahead == ' ') ADVANCE(534);
      END_STATE();
    case 106:
      if (lookahead == ' ') ADVANCE(402);
      END_STATE();
    case 107:
      if (lookahead == ' ') ADVANCE(223);
      END_STATE();
    case 108:
      if (lookahead == ' ') ADVANCE(887);
      END_STATE();
    case 109:
      if (lookahead == ' ') ADVANCE(1130);
      END_STATE();
    case 110:
      if (lookahead == ' ') ADVANCE(596);
      END_STATE();
    case 111:
      if (lookahead == ' ') ADVANCE(703);
      END_STATE();
    case 112:
      if (lookahead == ' ') ADVANCE(224);
      END_STATE();
    case 113:
      if (lookahead == ' ') ADVANCE(599);
      END_STATE();
    case 114:
      if (lookahead == ' ') ADVANCE(793);
      END_STATE();
    case 115:
      if (lookahead == ' ') ADVANCE(225);
      END_STATE();
    case 116:
      if (lookahead == ' ') ADVANCE(684);
      END_STATE();
    case 117:
      if (lookahead == ' ') ADVANCE(706);
      END_STATE();
    case 118:
      if (lookahead == ' ') ADVANCE(724);
      END_STATE();
    case 119:
      if (lookahead == ' ') ADVANCE(821);
      END_STATE();
    case 120:
      if (lookahead == ' ') ADVANCE(226);
      END_STATE();
    case 121:
      if (lookahead == ' ') ADVANCE(600);
      END_STATE();
    case 122:
      if (lookahead == ' ') ADVANCE(227);
      END_STATE();
    case 123:
      if (lookahead == ' ') ADVANCE(783);
      END_STATE();
    case 124:
      if (lookahead == ' ') ADVANCE(807);
      END_STATE();
    case 125:
      if (lookahead == ' ') ADVANCE(228);
      END_STATE();
    case 126:
      if (lookahead == ' ') ADVANCE(782);
      END_STATE();
    case 127:
      if (lookahead == ' ') ADVANCE(229);
      END_STATE();
    case 128:
      if (lookahead == ' ') ADVANCE(230);
      END_STATE();
    case 129:
      if (lookahead == ' ') ADVANCE(231);
      END_STATE();
    case 130:
      if (lookahead == ' ') ADVANCE(721);
      END_STATE();
    case 131:
      if (lookahead == ' ') ADVANCE(232);
      END_STATE();
    case 132:
      if (lookahead == ' ') ADVANCE(466);
      END_STATE();
    case 133:
      if (lookahead == ' ') ADVANCE(551);
      END_STATE();
    case 134:
      if (lookahead == ' ') ADVANCE(756);
      END_STATE();
    case 135:
      if (lookahead == ' ') ADVANCE(540);
      END_STATE();
    case 136:
      if (lookahead == ' ') ADVANCE(368);
      END_STATE();
    case 137:
      if (lookahead == ' ') ADVANCE(1013);
      END_STATE();
    case 138:
      if (lookahead == ' ') ADVANCE(546);
      if (lookahead == '.') ADVANCE(3450);
      if (lookahead == 'y') ADVANCE(199);
      if (lookahead == 243) ADVANCE(859);
      END_STATE();
    case 139:
      if (lookahead == ' ') ADVANCE(889);
      END_STATE();
    case 140:
      if (lookahead == ' ') ADVANCE(411);
      END_STATE();
    case 141:
      if (lookahead == ' ') ADVANCE(502);
      END_STATE();
    case 142:
      if (lookahead == ' ') ADVANCE(1048);
      END_STATE();
    case 143:
      if (lookahead == ' ') ADVANCE(705);
      END_STATE();
    case 144:
      if (lookahead == ' ') ADVANCE(381);
      END_STATE();
    case 145:
      if (lookahead == ' ') ADVANCE(372);
      END_STATE();
    case 146:
      if (lookahead == ' ') ADVANCE(443);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '.') ADVANCE(3429);
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 147:
      if (lookahead == ' ') ADVANCE(445);
      END_STATE();
    case 148:
      if (lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 149:
      if (lookahead == ' ') ADVANCE(648);
      END_STATE();
    case 150:
      if (lookahead == ' ') ADVANCE(404);
      END_STATE();
    case 151:
      if (lookahead == ' ') ADVANCE(474);
      END_STATE();
    case 152:
      if (lookahead == ' ') ADVANCE(407);
      END_STATE();
    case 153:
      if (lookahead == ' ') ADVANCE(408);
      END_STATE();
    case 154:
      if (lookahead == ' ') ADVANCE(409);
      END_STATE();
    case 155:
      if (lookahead == ' ') ADVANCE(410);
      END_STATE();
    case 156:
      if (lookahead == ' ') ADVANCE(521);
      END_STATE();
    case 157:
      if (lookahead == ' ') ADVANCE(1206);
      END_STATE();
    case 158:
      if (lookahead == ' ') ADVANCE(503);
      END_STATE();
    case 159:
      if (lookahead == ' ') ADVANCE(336);
      END_STATE();
    case 160:
      if (lookahead == ' ') ADVANCE(759);
      END_STATE();
    case 161:
      if (lookahead == ' ') ADVANCE(758);
      END_STATE();
    case 162:
      if (lookahead == ' ') ADVANCE(338);
      END_STATE();
    case 163:
      if (lookahead == ' ') ADVANCE(339);
      END_STATE();
    case 164:
      if (lookahead == ' ') ADVANCE(340);
      END_STATE();
    case 165:
      if (lookahead == ' ') ADVANCE(345);
      END_STATE();
    case 166:
      if (lookahead == ' ') ADVANCE(794);
      END_STATE();
    case 167:
      if (lookahead == ' ') ADVANCE(413);
      END_STATE();
    case 168:
      if (lookahead == ' ') ADVANCE(486);
      END_STATE();
    case 169:
      if (lookahead == ' ') ADVANCE(349);
      END_STATE();
    case 170:
      if (lookahead == ' ') ADVANCE(795);
      END_STATE();
    case 171:
      if (lookahead == ' ') ADVANCE(1072);
      END_STATE();
    case 172:
      if (lookahead == ' ') ADVANCE(717);
      END_STATE();
    case 173:
      if (lookahead == ' ') ADVANCE(715);
      END_STATE();
    case 174:
      if (lookahead == ' ') ADVANCE(796);
      END_STATE();
    case 175:
      if (lookahead == ' ') ADVANCE(488);
      END_STATE();
    case 176:
      if (lookahead == ' ') ADVANCE(1073);
      END_STATE();
    case 177:
      if (lookahead == ' ') ADVANCE(716);
      END_STATE();
    case 178:
      if (lookahead == ' ') ADVANCE(972);
      END_STATE();
    case 179:
      if (lookahead == ' ') ADVANCE(576);
      END_STATE();
    case 180:
      if (lookahead == ' ') ADVANCE(798);
      END_STATE();
    case 181:
      if (lookahead == ' ') ADVANCE(505);
      END_STATE();
    case 182:
      if (lookahead == ' ') ADVANCE(571);
      END_STATE();
    case 183:
      if (lookahead == ' ') ADVANCE(1004);
      END_STATE();
    case 184:
      if (lookahead == ' ') ADVANCE(718);
      END_STATE();
    case 185:
      if (lookahead == ' ') ADVANCE(691);
      END_STATE();
    case 186:
      if (lookahead == ' ') ADVANCE(891);
      END_STATE();
    case 187:
      if (lookahead == ' ') ADVANCE(1005);
      END_STATE();
    case 188:
      if (lookahead == ' ') ADVANCE(364);
      END_STATE();
    case 189:
      if (lookahead == ' ') ADVANCE(719);
      END_STATE();
    case 190:
      if (lookahead == ' ') ADVANCE(355);
      END_STATE();
    case 191:
      if (lookahead == ' ') ADVANCE(880);
      END_STATE();
    case 192:
      if (lookahead == ' ') ADVANCE(1006);
      END_STATE();
    case 193:
      if (lookahead == ' ') ADVANCE(984);
      END_STATE();
    case 194:
      if (lookahead == ' ') ADVANCE(378);
      END_STATE();
    case 195:
      if (lookahead == ' ') ADVANCE(881);
      END_STATE();
    case 196:
      if (lookahead == ' ') ADVANCE(1007);
      END_STATE();
    case 197:
      if (lookahead == ' ') ADVANCE(605);
      END_STATE();
    case 198:
      if (lookahead == ' ') ADVANCE(604);
      END_STATE();
    case 199:
      if (lookahead == ' ') ADVANCE(567);
      if (lookahead == '.') ADVANCE(3451);
      END_STATE();
    case 200:
      if (lookahead == ' ') ADVANCE(1051);
      END_STATE();
    case 201:
      if (lookahead == ' ') ADVANCE(606);
      END_STATE();
    case 202:
      if (lookahead == ' ') ADVANCE(568);
      if (lookahead == '.') ADVANCE(3452);
      END_STATE();
    case 203:
      if (lookahead == ' ') ADVANCE(1052);
      END_STATE();
    case 204:
      if (lookahead == ' ') ADVANCE(1042);
      if (lookahead == '.') ADVANCE(3444);
      END_STATE();
    case 205:
      if (lookahead == ' ') ADVANCE(953);
      END_STATE();
    case 206:
      if (lookahead == ' ') ADVANCE(1043);
      if (lookahead == '.') ADVANCE(3445);
      END_STATE();
    case 207:
      if (lookahead == ' ') ADVANCE(900);
      END_STATE();
    case 208:
      if (lookahead == ' ') ADVANCE(961);
      END_STATE();
    case 209:
      if (lookahead == ' ') ADVANCE(720);
      END_STATE();
    case 210:
      if (lookahead == ' ') ADVANCE(957);
      END_STATE();
    case 211:
      if (lookahead == ' ') ADVANCE(954);
      END_STATE();
    case 212:
      if (lookahead == '"') ADVANCE(3484);
      END_STATE();
    case 213:
      if (lookahead == '#') ADVANCE(1279);
      if (lookahead == 8221) ADVANCE(59);
      END_STATE();
    case 214:
      if (lookahead == '#') ADVANCE(9);
      END_STATE();
    case 215:
      if (lookahead == '#') ADVANCE(1214);
      END_STATE();
    case 216:
      if (lookahead == '#') ADVANCE(1284);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(3307);
      END_STATE();
    case 217:
      if (lookahead == '#') ADVANCE(1283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(3301);
      END_STATE();
    case 218:
      if (lookahead == '\'') ADVANCE(3469);
      END_STATE();
    case 219:
      if (lookahead == '\'') ADVANCE(3495);
      END_STATE();
    case 220:
      if (lookahead == '\'') ADVANCE(3503);
      END_STATE();
    case 221:
      if (lookahead == '\'') ADVANCE(3471);
      END_STATE();
    case 222:
      if (lookahead == '\'') ADVANCE(3501);
      END_STATE();
    case 223:
      if (lookahead == '\'') ADVANCE(3476);
      END_STATE();
    case 224:
      if (lookahead == '\'') ADVANCE(3497);
      END_STATE();
    case 225:
      if (lookahead == '\'') ADVANCE(3492);
      END_STATE();
    case 226:
      if (lookahead == '\'') ADVANCE(3488);
      END_STATE();
    case 227:
      if (lookahead == '\'') ADVANCE(3473);
      END_STATE();
    case 228:
      if (lookahead == '\'') ADVANCE(3481);
      END_STATE();
    case 229:
      if (lookahead == '\'') ADVANCE(3462);
      END_STATE();
    case 230:
      if (lookahead == '\'') ADVANCE(3463);
      END_STATE();
    case 231:
      if (lookahead == '\'') ADVANCE(3381);
      END_STATE();
    case 232:
      if (lookahead == '\'') ADVANCE(3383);
      END_STATE();
    case 233:
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '.') ADVANCE(3457);
      END_STATE();
    case 234:
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '.') ADVANCE(3447);
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 235:
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '.') ADVANCE(3460);
      END_STATE();
    case 236:
      if (lookahead == ',') ADVANCE(74);
      END_STATE();
    case 237:
      if (lookahead == ',') ADVANCE(116);
      if (lookahead == '.') ADVANCE(3440);
      if (lookahead == 'a') ADVANCE(729);
      END_STATE();
    case 238:
      if (lookahead == ',') ADVANCE(94);
      if (lookahead == '.') ADVANCE(3437);
      END_STATE();
    case 239:
      if (lookahead == ',') ADVANCE(175);
      if (lookahead == '.') ADVANCE(3448);
      END_STATE();
    case 240:
      if (lookahead == ',') ADVANCE(185);
      if (lookahead == '.') ADVANCE(3441);
      END_STATE();
    case 241:
      if (lookahead == ',') ADVANCE(190);
      if (lookahead == '.') ADVANCE(3430);
      END_STATE();
    case 242:
      if (lookahead == ',') ADVANCE(211);
      if (lookahead == '.') ADVANCE(3461);
      END_STATE();
    case 243:
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 244:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 245:
      if (lookahead == '-') ADVANCE(500);
      END_STATE();
    case 246:
      if (lookahead == '-') ADVANCE(790);
      END_STATE();
    case 247:
      if (lookahead == '-') ADVANCE(814);
      END_STATE();
    case 248:
      if (lookahead == '-') ADVANCE(616);
      END_STATE();
    case 249:
      if (lookahead == '-') ADVANCE(370);
      END_STATE();
    case 250:
      if (lookahead == '-') ADVANCE(504);
      END_STATE();
    case 251:
      if (lookahead == '.') ADVANCE(3347);
      END_STATE();
    case 252:
      if (lookahead == '.') ADVANCE(3453);
      END_STATE();
    case 253:
      if (lookahead == '.') ADVANCE(3438);
      END_STATE();
    case 254:
      if (lookahead == '.') ADVANCE(3493);
      END_STATE();
    case 255:
      if (lookahead == '.') ADVANCE(3355);
      END_STATE();
    case 256:
      if (lookahead == '.') ADVANCE(3400);
      END_STATE();
    case 257:
      if (lookahead == '.') ADVANCE(3378);
      END_STATE();
    case 258:
      if (lookahead == '.') ADVANCE(3416);
      END_STATE();
    case 259:
      if (lookahead == '.') ADVANCE(3382);
      END_STATE();
    case 260:
      if (lookahead == '.') ADVANCE(3417);
      END_STATE();
    case 261:
      if (lookahead == '.') ADVANCE(3374);
      END_STATE();
    case 262:
      if (lookahead == '.') ADVANCE(3420);
      END_STATE();
    case 263:
      if (lookahead == '.') ADVANCE(3408);
      END_STATE();
    case 264:
      if (lookahead == '.') ADVANCE(3394);
      END_STATE();
    case 265:
      if (lookahead == '.') ADVANCE(3421);
      END_STATE();
    case 266:
      if (lookahead == '.') ADVANCE(3366);
      END_STATE();
    case 267:
      if (lookahead == '.') ADVANCE(3422);
      END_STATE();
    case 268:
      if (lookahead == '.') ADVANCE(3367);
      END_STATE();
    case 269:
      if (lookahead == '.') ADVANCE(3409);
      END_STATE();
    case 270:
      if (lookahead == '.') ADVANCE(3405);
      END_STATE();
    case 271:
      if (lookahead == '.') ADVANCE(3390);
      END_STATE();
    case 272:
      if (lookahead == '.') ADVANCE(3391);
      END_STATE();
    case 273:
      if (lookahead == '.') ADVANCE(3412);
      END_STATE();
    case 274:
      if (lookahead == '.') ADVANCE(3482);
      END_STATE();
    case 275:
      if (lookahead == '.') ADVANCE(3413);
      END_STATE();
    case 276:
      if (lookahead == '.') ADVANCE(3414);
      END_STATE();
    case 277:
      if (lookahead == '.') ADVANCE(3398);
      END_STATE();
    case 278:
      if (lookahead == '.') ADVANCE(3386);
      END_STATE();
    case 279:
      if (lookahead == '.') ADVANCE(3387);
      END_STATE();
    case 280:
      if (lookahead == '.') ADVANCE(3370);
      END_STATE();
    case 281:
      if (lookahead == '.') ADVANCE(3403);
      END_STATE();
    case 282:
      if (lookahead == '.') ADVANCE(3371);
      END_STATE();
    case 283:
      if (lookahead == '8') ADVANCE(62);
      END_STATE();
    case 284:
      if (lookahead == '>') ADVANCE(283);
      END_STATE();
    case 285:
      if (lookahead == '>') ADVANCE(3308);
      END_STATE();
    case 286:
      if (lookahead == 'C') ADVANCE(661);
      if (lookahead == 'c') ADVANCE(664);
      if (lookahead == 'i') ADVANCE(607);
      if (lookahead == 'k') ADVANCE(665);
      if (lookahead == 'l') ADVANCE(1118);
      if (lookahead == 'm') ADVANCE(423);
      if (lookahead == 'z') ADVANCE(287);
      if (lookahead == 965) ADVANCE(969);
      if (lookahead == 1082) ADVANCE(1058);
      if (lookahead == 1087) ADVANCE(1059);
      if (lookahead == 20010) ADVANCE(1159);
      if (lookahead == 20491) ADVANCE(1160);
      END_STATE();
    case 287:
      if (lookahead == 'a') ADVANCE(699);
      END_STATE();
    case 288:
      if (lookahead == 'a') ADVANCE(833);
      if (lookahead == 'b') ADVANCE(869);
      if (lookahead == 'd') ADVANCE(294);
      if (lookahead == 'i') ADVANCE(579);
      if (lookahead == 'o') ADVANCE(580);
      if (lookahead == 'p') ADVANCE(293);
      if (lookahead == 's') ADVANCE(662);
      if (lookahead == 252) ADVANCE(872);
      if (lookahead == 954) ADVANCE(927);
      if (lookahead == 963) ADVANCE(982);
      if (lookahead == 19968) ADVANCE(1161);
      if (lookahead == 20849) ADVANCE(22);
      if (lookahead == 21464) ADVANCE(1152);
      if (lookahead == 30340) ADVANCE(1149);
      if (lookahead == 37325) ADVANCE(1154);
      if (lookahead == 48652) ADVANCE(1180);
      if (lookahead == 50948) ADVANCE(1181);
      END_STATE();
    case 289:
      if (lookahead == 'a') ADVANCE(234);
      END_STATE();
    case 290:
      if (lookahead == 'a') ADVANCE(732);
      END_STATE();
    case 291:
      if (lookahead == 'a') ADVANCE(904);
      END_STATE();
    case 292:
      if (lookahead == 'a') ADVANCE(569);
      END_STATE();
    case 293:
      if (lookahead == 'a') ADVANCE(379);
      if (lookahead == 'o') ADVANCE(738);
      END_STATE();
    case 294:
      if (lookahead == 'a') ADVANCE(577);
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 295:
      if (lookahead == 'a') ADVANCE(612);
      END_STATE();
    case 296:
      if (lookahead == 'a') ADVANCE(357);
      END_STATE();
    case 297:
      if (lookahead == 'a') ADVANCE(383);
      END_STATE();
    case 298:
      if (lookahead == 'a') ADVANCE(725);
      END_STATE();
    case 299:
      if (lookahead == 'a') ADVANCE(669);
      END_STATE();
    case 300:
      if (lookahead == 'a') ADVANCE(647);
      END_STATE();
    case 301:
      if (lookahead == 'a') ADVANCE(822);
      END_STATE();
    case 302:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 303:
      if (lookahead == 'a') ADVANCE(609);
      END_STATE();
    case 304:
      if (lookahead == 'a') ADVANCE(722);
      END_STATE();
    case 305:
      if (lookahead == 'a') ADVANCE(645);
      END_STATE();
    case 306:
      if (lookahead == 'a') ADVANCE(781);
      END_STATE();
    case 307:
      if (lookahead == 'a') ADVANCE(789);
      END_STATE();
    case 308:
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 309:
      if (lookahead == 'a') ADVANCE(613);
      END_STATE();
    case 310:
      if (lookahead == 'a') ADVANCE(785);
      END_STATE();
    case 311:
      if (lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 312:
      if (lookahead == 'a') ADVANCE(749);
      END_STATE();
    case 313:
      if (lookahead == 'a') ADVANCE(627);
      END_STATE();
    case 314:
      if (lookahead == 'a') ADVANCE(620);
      END_STATE();
    case 315:
      if (lookahead == 'a') ADVANCE(618);
      END_STATE();
    case 316:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 317:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 318:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 319:
      if (lookahead == 'a') ADVANCE(360);
      END_STATE();
    case 320:
      if (lookahead == 'a') ADVANCE(386);
      END_STATE();
    case 321:
      if (lookahead == 'a') ADVANCE(780);
      END_STATE();
    case 322:
      if (lookahead == 'a') ADVANCE(602);
      END_STATE();
    case 323:
      if (lookahead == 'a') ADVANCE(639);
      END_STATE();
    case 324:
      if (lookahead == 'a') ADVANCE(630);
      END_STATE();
    case 325:
      if (lookahead == 'a') ADVANCE(643);
      END_STATE();
    case 326:
      if (lookahead == 'a') ADVANCE(631);
      END_STATE();
    case 327:
      if (lookahead == 'a') ADVANCE(711);
      END_STATE();
    case 328:
      if (lookahead == 'a') ADVANCE(634);
      END_STATE();
    case 329:
      if (lookahead == 'a') ADVANCE(636);
      END_STATE();
    case 330:
      if (lookahead == 'a') ADVANCE(851);
      END_STATE();
    case 331:
      if (lookahead == 'a') ADVANCE(642);
      if (lookahead == 'e') ADVANCE(820);
      if (lookahead == 'y') ADVANCE(99);
      END_STATE();
    case 332:
      if (lookahead == 'a') ADVANCE(403);
      END_STATE();
    case 333:
      if (lookahead == 'a') ADVANCE(750);
      END_STATE();
    case 334:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 335:
      if (lookahead == 'a') ADVANCE(714);
      END_STATE();
    case 336:
      if (lookahead == 'a') ADVANCE(852);
      END_STATE();
    case 337:
      if (lookahead == 'a') ADVANCE(752);
      END_STATE();
    case 338:
      if (lookahead == 'a') ADVANCE(853);
      END_STATE();
    case 339:
      if (lookahead == 'a') ADVANCE(854);
      END_STATE();
    case 340:
      if (lookahead == 'a') ADVANCE(855);
      END_STATE();
    case 341:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 342:
      if (lookahead == 'a') ADVANCE(412);
      END_STATE();
    case 343:
      if (lookahead == 'a') ADVANCE(652);
      END_STATE();
    case 344:
      if (lookahead == 'a') ADVANCE(654);
      END_STATE();
    case 345:
      if (lookahead == 'a') ADVANCE(857);
      END_STATE();
    case 346:
      if (lookahead == 'a') ADVANCE(770);
      END_STATE();
    case 347:
      if (lookahead == 'a') ADVANCE(363);
      END_STATE();
    case 348:
      if (lookahead == 'a') ADVANCE(656);
      END_STATE();
    case 349:
      if (lookahead == 'a') ADVANCE(858);
      END_STATE();
    case 350:
      if (lookahead == 'a') ADVANCE(797);
      END_STATE();
    case 351:
      if (lookahead == 'a') ADVANCE(658);
      END_STATE();
    case 352:
      if (lookahead == 'a') ADVANCE(905);
      END_STATE();
    case 353:
      if (lookahead == 'a') ADVANCE(906);
      END_STATE();
    case 354:
      if (lookahead == 'a') ADVANCE(659);
      END_STATE();
    case 355:
      if (lookahead == 'a') ADVANCE(660);
      if (lookahead == 'e') ADVANCE(832);
      if (lookahead == 'y') ADVANCE(189);
      END_STATE();
    case 356:
      if (lookahead == 'b') ADVANCE(747);
      END_STATE();
    case 357:
      if (lookahead == 'b') ADVANCE(358);
      END_STATE();
    case 358:
      if (lookahead == 'b') ADVANCE(788);
      END_STATE();
    case 359:
      if (lookahead == 'b') ADVANCE(536);
      END_STATE();
    case 360:
      if (lookahead == 'b') ADVANCE(541);
      END_STATE();
    case 361:
      if (lookahead == 'b') ADVANCE(451);
      END_STATE();
    case 362:
      if (lookahead == 'b') ADVANCE(792);
      END_STATE();
    case 363:
      if (lookahead == 'b') ADVANCE(362);
      END_STATE();
    case 364:
      if (lookahead == 'b') ADVANCE(493);
      END_STATE();
    case 365:
      if (lookahead == 'c') ADVANCE(514);
      END_STATE();
    case 366:
      if (lookahead == 'c') ADVANCE(572);
      END_STATE();
    case 367:
      if (lookahead == 'c') ADVANCE(902);
      END_STATE();
    case 368:
      if (lookahead == 'c') ADVANCE(512);
      END_STATE();
    case 369:
      if (lookahead == 'c') ADVANCE(424);
      END_STATE();
    case 370:
      if (lookahead == 'c') ADVANCE(433);
      END_STATE();
    case 371:
      if (lookahead == 'c') ADVANCE(518);
      END_STATE();
    case 372:
      if (lookahead == 'c') ADVANCE(519);
      END_STATE();
    case 373:
      if (lookahead == 'c') ADVANCE(460);
      END_STATE();
    case 374:
      if (lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 375:
      if (lookahead == 'c') ADVANCE(328);
      END_STATE();
    case 376:
      if (lookahead == 'c') ADVANCE(478);
      END_STATE();
    case 377:
      if (lookahead == 'c') ADVANCE(522);
      END_STATE();
    case 378:
      if (lookahead == 'c') ADVANCE(354);
      END_STATE();
    case 379:
      if (lookahead == 'd') ADVANCE(316);
      END_STATE();
    case 380:
      if (lookahead == 'd') ADVANCE(324);
      if (lookahead == 305) ADVANCE(125);
      END_STATE();
    case 381:
      if (lookahead == 'd') ADVANCE(290);
      END_STATE();
    case 382:
      if (lookahead == 'd') ADVANCE(538);
      END_STATE();
    case 383:
      if (lookahead == 'd') ADVANCE(671);
      END_STATE();
    case 384:
      if (lookahead == 'd') ADVANCE(422);
      END_STATE();
    case 385:
      if (lookahead == 'd') ADVANCE(473);
      END_STATE();
    case 386:
      if (lookahead == 'd') ADVANCE(673);
      END_STATE();
    case 387:
      if (lookahead == 'd') ADVANCE(322);
      END_STATE();
    case 388:
      if (lookahead == 'd') ADVANCE(266);
      END_STATE();
    case 389:
      if (lookahead == 'd') ADVANCE(676);
      END_STATE();
    case 390:
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 391:
      if (lookahead == 'd') ADVANCE(268);
      END_STATE();
    case 392:
      if (lookahead == 'd') ADVANCE(556);
      END_STATE();
    case 393:
      if (lookahead == 'd') ADVANCE(436);
      END_STATE();
    case 394:
      if (lookahead == 'd') ADVANCE(430);
      END_STATE();
    case 395:
      if (lookahead == 'd') ADVANCE(277);
      END_STATE();
    case 396:
      if (lookahead == 'd') ADVANCE(439);
      END_STATE();
    case 397:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 398:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 399:
      if (lookahead == 'd') ADVANCE(677);
      END_STATE();
    case 400:
      if (lookahead == 'd') ADVANCE(465);
      END_STATE();
    case 401:
      if (lookahead == 'd') ADVANCE(440);
      END_STATE();
    case 402:
      if (lookahead == 'd') ADVANCE(547);
      END_STATE();
    case 403:
      if (lookahead == 'd') ADVANCE(317);
      END_STATE();
    case 404:
      if (lookahead == 'd') ADVANCE(548);
      END_STATE();
    case 405:
      if (lookahead == 'd') ADVANCE(448);
      END_STATE();
    case 406:
      if (lookahead == 'd') ADVANCE(449);
      END_STATE();
    case 407:
      if (lookahead == 'd') ADVANCE(454);
      END_STATE();
    case 408:
      if (lookahead == 'd') ADVANCE(455);
      END_STATE();
    case 409:
      if (lookahead == 'd') ADVANCE(456);
      END_STATE();
    case 410:
      if (lookahead == 'd') ADVANCE(457);
      END_STATE();
    case 411:
      if (lookahead == 'd') ADVANCE(326);
      END_STATE();
    case 412:
      if (lookahead == 'd') ADVANCE(341);
      END_STATE();
    case 413:
      if (lookahead == 'd') ADVANCE(346);
      END_STATE();
    case 414:
      if (lookahead == 'd') ADVANCE(485);
      END_STATE();
    case 415:
      if (lookahead == 'd') ADVANCE(487);
      END_STATE();
    case 416:
      if (lookahead == 'd') ADVANCE(491);
      END_STATE();
    case 417:
      if (lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 418:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 419:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 420:
      if (lookahead == 'e') ADVANCE(516);
      END_STATE();
    case 421:
      if (lookahead == 'e') ADVANCE(861);
      END_STATE();
    case 422:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 423:
      if (lookahead == 'e') ADVANCE(593);
      END_STATE();
    case 424:
      if (lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 425:
      if (lookahead == 'e') ADVANCE(843);
      END_STATE();
    case 426:
      if (lookahead == 'e') ADVANCE(808);
      END_STATE();
    case 427:
      if (lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 428:
      if (lookahead == 'e') ADVANCE(603);
      END_STATE();
    case 429:
      if (lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 430:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 431:
      if (lookahead == 'e') ADVANCE(601);
      END_STATE();
    case 432:
      if (lookahead == 'e') ADVANCE(777);
      END_STATE();
    case 433:
      if (lookahead == 'e') ADVANCE(708);
      END_STATE();
    case 434:
      if (lookahead == 'e') ADVANCE(751);
      END_STATE();
    case 435:
      if (lookahead == 'e') ADVANCE(748);
      END_STATE();
    case 436:
      if (lookahead == 'e') ADVANCE(622);
      END_STATE();
    case 437:
      if (lookahead == 'e') ADVANCE(626);
      END_STATE();
    case 438:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 439:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 440:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 441:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 442:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 443:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 444:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 445:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 446:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 447:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 448:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 449:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 450:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 451:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 452:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 453:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 454:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 455:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 456:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 457:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 458:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 459:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 460:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 461:
      if (lookahead == 'e') ADVANCE(628);
      if (lookahead == 1085) ADVANCE(989);
      END_STATE();
    case 462:
      if (lookahead == 'e') ADVANCE(731);
      END_STATE();
    case 463:
      if (lookahead == 'e') ADVANCE(640);
      END_STATE();
    case 464:
      if (lookahead == 'e') ADVANCE(641);
      END_STATE();
    case 465:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 466:
      if (lookahead == 'e') ADVANCE(784);
      END_STATE();
    case 467:
      if (lookahead == 'e') ADVANCE(733);
      END_STATE();
    case 468:
      if (lookahead == 'e') ADVANCE(757);
      END_STATE();
    case 469:
      if (lookahead == 'e') ADVANCE(734);
      END_STATE();
    case 470:
      if (lookahead == 'e') ADVANCE(742);
      END_STATE();
    case 471:
      if (lookahead == 'e') ADVANCE(743);
      END_STATE();
    case 472:
      if (lookahead == 'e') ADVANCE(760);
      END_STATE();
    case 473:
      if (lookahead == 'e') ADVANCE(635);
      END_STATE();
    case 474:
      if (lookahead == 'e') ADVANCE(653);
      END_STATE();
    case 475:
      if (lookahead == 'e') ADVANCE(753);
      END_STATE();
    case 476:
      if (lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 477:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 478:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 479:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 480:
      if (lookahead == 'e') ADVANCE(865);
      END_STATE();
    case 481:
      if (lookahead == 'e') ADVANCE(761);
      END_STATE();
    case 482:
      if (lookahead == 'e') ADVANCE(765);
      END_STATE();
    case 483:
      if (lookahead == 'e') ADVANCE(866);
      END_STATE();
    case 484:
      if (lookahead == 'e') ADVANCE(762);
      END_STATE();
    case 485:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 486:
      if (lookahead == 'e') ADVANCE(655);
      END_STATE();
    case 487:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 488:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 489:
      if (lookahead == 'e') ADVANCE(768);
      END_STATE();
    case 490:
      if (lookahead == 'e') ADVANCE(769);
      END_STATE();
    case 491:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 492:
      if (lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 493:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 494:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 495:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 496:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 497:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 498:
      if (lookahead == 'e') ADVANCE(847);
      END_STATE();
    case 499:
      if (lookahead == 'f') ADVANCE(321);
      END_STATE();
    case 500:
      if (lookahead == 'f') ADVANCE(674);
      END_STATE();
    case 501:
      if (lookahead == 'f') ADVANCE(86);
      END_STATE();
    case 502:
      if (lookahead == 'f') ADVANCE(307);
      END_STATE();
    case 503:
      if (lookahead == 'f') ADVANCE(683);
      END_STATE();
    case 504:
      if (lookahead == 'f') ADVANCE(687);
      END_STATE();
    case 505:
      if (lookahead == 'f') ADVANCE(350);
      END_STATE();
    case 506:
      if (lookahead == 'g') ADVANCE(903);
      END_STATE();
    case 507:
      if (lookahead == 'g') ADVANCE(237);
      END_STATE();
    case 508:
      if (lookahead == 'g') ADVANCE(842);
      END_STATE();
    case 509:
      if (lookahead == 'g') ADVANCE(432);
      END_STATE();
    case 510:
      if (lookahead == 'g') ADVANCE(539);
      END_STATE();
    case 511:
      if (lookahead == 'g') ADVANCE(467);
      if (lookahead == 'i') ADVANCE(591);
      END_STATE();
    case 512:
      if (lookahead == 'h') ADVANCE(835);
      END_STATE();
    case 513:
      if (lookahead == 'h') ADVANCE(1121);
      END_STATE();
    case 514:
      if (lookahead == 'h') ADVANCE(419);
      END_STATE();
    case 515:
      if (lookahead == 'h') ADVANCE(542);
      if (lookahead == 'v') ADVANCE(680);
      END_STATE();
    case 516:
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 517:
      if (lookahead == 'h') ADVANCE(281);
      END_STATE();
    case 518:
      if (lookahead == 'h') ADVANCE(89);
      END_STATE();
    case 519:
      if (lookahead == 'h') ADVANCE(839);
      END_STATE();
    case 520:
      if (lookahead == 'h') ADVANCE(315);
      END_STATE();
    case 521:
      if (lookahead == 'h') ADVANCE(565);
      if (lookahead == 'v') ADVANCE(685);
      END_STATE();
    case 522:
      if (lookahead == 'h') ADVANCE(179);
      END_STATE();
    case 523:
      if (lookahead == 'i') ADVANCE(774);
      if (lookahead == 'm') ADVANCE(530);
      END_STATE();
    case 524:
      if (lookahead == 'i') ADVANCE(803);
      END_STATE();
    case 525:
      if (lookahead == 'i') ADVANCE(672);
      END_STATE();
    case 526:
      if (lookahead == 'i') ADVANCE(908);
      END_STATE();
    case 527:
      if (lookahead == 'i') ADVANCE(1119);
      END_STATE();
    case 528:
      if (lookahead == 'i') ADVANCE(773);
      END_STATE();
    case 529:
      if (lookahead == 'i') ADVANCE(804);
      END_STATE();
    case 530:
      if (lookahead == 'i') ADVANCE(805);
      END_STATE();
    case 531:
      if (lookahead == 'i') ADVANCE(289);
      END_STATE();
    case 532:
      if (lookahead == 'i') ADVANCE(871);
      END_STATE();
    case 533:
      if (lookahead == 'i') ADVANCE(405);
      END_STATE();
    case 534:
      if (lookahead == 'i') ADVANCE(614);
      END_STATE();
    case 535:
      if (lookahead == 'i') ADVANCE(384);
      END_STATE();
    case 536:
      if (lookahead == 'i') ADVANCE(786);
      END_STATE();
    case 537:
      if (lookahead == 'i') ADVANCE(646);
      END_STATE();
    case 538:
      if (lookahead == 'i') ADVANCE(426);
      END_STATE();
    case 539:
      if (lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 540:
      if (lookahead == 'i') ADVANCE(588);
      END_STATE();
    case 541:
      if (lookahead == 'i') ADVANCE(586);
      END_STATE();
    case 542:
      if (lookahead == 'i') ADVANCE(619);
      END_STATE();
    case 543:
      if (lookahead == 'i') ADVANCE(610);
      END_STATE();
    case 544:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 545:
      if (lookahead == 'i') ADVANCE(737);
      END_STATE();
    case 546:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 547:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 548:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 549:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 550:
      if (lookahead == 'i') ADVANCE(385);
      END_STATE();
    case 551:
      if (lookahead == 'i') ADVANCE(581);
      END_STATE();
    case 552:
      if (lookahead == 'i') ADVANCE(629);
      END_STATE();
    case 553:
      if (lookahead == 'i') ADVANCE(389);
      END_STATE();
    case 554:
      if (lookahead == 'i') ADVANCE(387);
      END_STATE();
    case 555:
      if (lookahead == 'i') ADVANCE(399);
      END_STATE();
    case 556:
      if (lookahead == 'i') ADVANCE(739);
      END_STATE();
    case 557:
      if (lookahead == 'i') ADVANCE(396);
      END_STATE();
    case 558:
      if (lookahead == 'i') ADVANCE(401);
      END_STATE();
    case 559:
      if (lookahead == 'i') ADVANCE(909);
      END_STATE();
    case 560:
      if (lookahead == 'i') ADVANCE(791);
      END_STATE();
    case 561:
      if (lookahead == 'i') ADVANCE(649);
      END_STATE();
    case 562:
      if (lookahead == 'i') ADVANCE(910);
      END_STATE();
    case 563:
      if (lookahead == 'i') ADVANCE(650);
      END_STATE();
    case 564:
      if (lookahead == 'i') ADVANCE(755);
      END_STATE();
    case 565:
      if (lookahead == 'i') ADVANCE(651);
      END_STATE();
    case 566:
      if (lookahead == 'i') ADVANCE(802);
      END_STATE();
    case 567:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 568:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 569:
      if (lookahead == 'j') ADVANCE(837);
      END_STATE();
    case 570:
      if (lookahead == 'j') ADVANCE(670);
      END_STATE();
    case 571:
      if (lookahead == 'j') ADVANCE(690);
      END_STATE();
    case 572:
      if (lookahead == 'k') ADVANCE(624);
      END_STATE();
    case 573:
      if (lookahead == 'k') ADVANCE(300);
      END_STATE();
    case 574:
      if (lookahead == 'k') ADVANCE(313);
      END_STATE();
    case 575:
      if (lookahead == 'k') ADVANCE(329);
      END_STATE();
    case 576:
      if (lookahead == 'k') ADVANCE(351);
      END_STATE();
    case 577:
      if (lookahead == 'l') ADVANCE(911);
      END_STATE();
    case 578:
      if (lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 579:
      if (lookahead == 'l') ADVANCE(438);
      END_STATE();
    case 580:
      if (lookahead == 'l') ADVANCE(420);
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 581:
      if (lookahead == 'l') ADVANCE(434);
      END_STATE();
    case 582:
      if (lookahead == 'l') ADVANCE(319);
      END_STATE();
    case 583:
      if (lookahead == 'l') ADVANCE(306);
      END_STATE();
    case 584:
      if (lookahead == 'l') ADVANCE(463);
      END_STATE();
    case 585:
      if (lookahead == 'l') ADVANCE(310);
      END_STATE();
    case 586:
      if (lookahead == 'l') ADVANCE(545);
      END_STATE();
    case 587:
      if (lookahead == 'l') ADVANCE(428);
      END_STATE();
    case 588:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 589:
      if (lookahead == 'l') ADVANCE(584);
      END_STATE();
    case 590:
      if (lookahead == 'l') ADVANCE(818);
      END_STATE();
    case 591:
      if (lookahead == 'l') ADVANCE(469);
      END_STATE();
    case 592:
      if (lookahead == 'm') ADVANCE(523);
      END_STATE();
    case 593:
      if (lookahead == 'm') ADVANCE(901);
      END_STATE();
    case 594:
      if (lookahead == 'm') ADVANCE(418);
      if (lookahead == 'o') ADVANCE(849);
      END_STATE();
    case 595:
      if (lookahead == 'm') ADVANCE(524);
      END_STATE();
    case 596:
      if (lookahead == 'm') ADVANCE(663);
      END_STATE();
    case 597:
      if (lookahead == 'm') ADVANCE(529);
      END_STATE();
    case 598:
      if (lookahead == 'm') ADVANCE(597);
      END_STATE();
    case 599:
      if (lookahead == 'm') ADVANCE(292);
      END_STATE();
    case 600:
      if (lookahead == 'm') ADVANCE(560);
      END_STATE();
    case 601:
      if (lookahead == 'm') ADVANCE(429);
      END_STATE();
    case 602:
      if (lookahead == 'm') ADVANCE(437);
      END_STATE();
    case 603:
      if (lookahead == 'm') ADVANCE(441);
      END_STATE();
    case 604:
      if (lookahead == 'm') ADVANCE(566);
      END_STATE();
    case 605:
      if (lookahead == 'm') ADVANCE(694);
      END_STATE();
    case 606:
      if (lookahead == 'm') ADVANCE(695);
      END_STATE();
    case 607:
      if (lookahead == 'n') ADVANCE(365);
      if (lookahead == 351) ADVANCE(587);
      END_STATE();
    case 608:
      if (lookahead == 'n') ADVANCE(380);
      END_STATE();
    case 609:
      if (lookahead == 'n') ADVANCE(895);
      END_STATE();
    case 610:
      if (lookahead == 'n') ADVANCE(507);
      END_STATE();
    case 611:
      if (lookahead == 'n') ADVANCE(369);
      END_STATE();
    case 612:
      if (lookahead == 'n') ADVANCE(696);
      END_STATE();
    case 613:
      if (lookahead == 'n') ADVANCE(874);
      END_STATE();
    case 614:
      if (lookahead == 'n') ADVANCE(382);
      END_STATE();
    case 615:
      if (lookahead == 'n') ADVANCE(800);
      END_STATE();
    case 616:
      if (lookahead == 'n') ADVANCE(520);
      END_STATE();
    case 617:
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 618:
      if (lookahead == 'n') ADVANCE(517);
      END_STATE();
    case 619:
      if (lookahead == 'n') ADVANCE(823);
      END_STATE();
    case 620:
      if (lookahead == 'n') ADVANCE(373);
      END_STATE();
    case 621:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 622:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 623:
      if (lookahead == 'n') ADVANCE(836);
      END_STATE();
    case 624:
      if (lookahead == 'n') ADVANCE(543);
      END_STATE();
    case 625:
      if (lookahead == 'n') ADVANCE(296);
      END_STATE();
    case 626:
      if (lookahead == 'n') ADVANCE(810);
      END_STATE();
    case 627:
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 628:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 629:
      if (lookahead == 'n') ADVANCE(526);
      END_STATE();
    case 630:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 631:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 632:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 633:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 634:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 635:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 636:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 637:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 638:
      if (lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 639:
      if (lookahead == 'n') ADVANCE(896);
      END_STATE();
    case 640:
      if (lookahead == 'n') ADVANCE(392);
      END_STATE();
    case 641:
      if (lookahead == 'n') ADVANCE(550);
      END_STATE();
    case 642:
      if (lookahead == 'n') ADVANCE(398);
      END_STATE();
    case 643:
      if (lookahead == 'n') ADVANCE(897);
      END_STATE();
    case 644:
      if (lookahead == 'n') ADVANCE(318);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == 't') ADVANCE(723);
      END_STATE();
    case 645:
      if (lookahead == 'n') ADVANCE(817);
      END_STATE();
    case 646:
      if (lookahead == 'n') ADVANCE(444);
      END_STATE();
    case 647:
      if (lookahead == 'n') ADVANCE(633);
      END_STATE();
    case 648:
      if (lookahead == 'n') ADVANCE(446);
      END_STATE();
    case 649:
      if (lookahead == 'n') ADVANCE(559);
      END_STATE();
    case 650:
      if (lookahead == 'n') ADVANCE(562);
      END_STATE();
    case 651:
      if (lookahead == 'n') ADVANCE(825);
      END_STATE();
    case 652:
      if (lookahead == 'n') ADVANCE(826);
      END_STATE();
    case 653:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 654:
      if (lookahead == 'n') ADVANCE(376);
      END_STATE();
    case 655:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 656:
      if (lookahead == 'n') ADVANCE(877);
      END_STATE();
    case 657:
      if (lookahead == 'n') ADVANCE(347);
      END_STATE();
    case 658:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 659:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 660:
      if (lookahead == 'n') ADVANCE(417);
      END_STATE();
    case 661:
      if (lookahead == 'o') ADVANCE(598);
      END_STATE();
    case 662:
      if (lookahead == 'o') ADVANCE(356);
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 663:
      if (lookahead == 'o') ADVANCE(913);
      END_STATE();
    case 664:
      if (lookahead == 'o') ADVANCE(592);
      END_STATE();
    case 665:
      if (lookahead == 'o') ADVANCE(595);
      END_STATE();
    case 666:
      if (lookahead == 'o') ADVANCE(815);
      END_STATE();
    case 667:
      if (lookahead == 'o') ADVANCE(726);
      END_STATE();
    case 668:
      if (lookahead == 'o') ADVANCE(776);
      END_STATE();
    case 669:
      if (lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 670:
      if (lookahead == 'o') ADVANCE(844);
      END_STATE();
    case 671:
      if (lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 672:
      if (lookahead == 'o') ADVANCE(615);
      if (lookahead == 243) ADVANCE(93);
      END_STATE();
    case 673:
      if (lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 674:
      if (lookahead == 'o') ADVANCE(727);
      END_STATE();
    case 675:
      if (lookahead == 'o') ADVANCE(736);
      END_STATE();
    case 676:
      if (lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 677:
      if (lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 678:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 679:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 680:
      if (lookahead == 'o') ADVANCE(740);
      END_STATE();
    case 681:
      if (lookahead == 'o') ADVANCE(775);
      END_STATE();
    case 682:
      if (lookahead == 'o') ADVANCE(583);
      END_STATE();
    case 683:
      if (lookahead == 'o') ADVANCE(746);
      END_STATE();
    case 684:
      if (lookahead == 'o') ADVANCE(371);
      END_STATE();
    case 685:
      if (lookahead == 'o') ADVANCE(741);
      END_STATE();
    case 686:
      if (lookahead == 'o') ADVANCE(585);
      END_STATE();
    case 687:
      if (lookahead == 'o') ADVANCE(763);
      END_STATE();
    case 688:
      if (lookahead == 'o') ADVANCE(414);
      END_STATE();
    case 689:
      if (lookahead == 'o') ADVANCE(415);
      END_STATE();
    case 690:
      if (lookahead == 'o') ADVANCE(845);
      END_STATE();
    case 691:
      if (lookahead == 'o') ADVANCE(377);
      END_STATE();
    case 692:
      if (lookahead == 'o') ADVANCE(799);
      END_STATE();
    case 693:
      if (lookahead == 'o') ADVANCE(801);
      END_STATE();
    case 694:
      if (lookahead == 'o') ADVANCE(914);
      END_STATE();
    case 695:
      if (lookahead == 'o') ADVANCE(915);
      END_STATE();
    case 696:
      if (lookahead == 'p') ADVANCE(894);
      END_STATE();
    case 697:
      if (lookahead == 'p') ADVANCE(666);
      END_STATE();
    case 698:
      if (lookahead == 'p') ADVANCE(840);
      END_STATE();
    case 699:
      if (lookahead == 'p') ADVANCE(528);
      END_STATE();
    case 700:
      if (lookahead == 'p') ADVANCE(838);
      END_STATE();
    case 701:
      if (lookahead == 'p') ADVANCE(688);
      END_STATE();
    case 702:
      if (lookahead == 'p') ADVANCE(248);
      END_STATE();
    case 703:
      if (lookahead == 'p') ADVANCE(681);
      END_STATE();
    case 704:
      if (lookahead == 'p') ADVANCE(468);
      END_STATE();
    case 705:
      if (lookahead == 'p') ADVANCE(425);
      END_STATE();
    case 706:
      if (lookahead == 'p') ADVANCE(745);
      END_STATE();
    case 707:
      if (lookahead == 'p') ADVANCE(682);
      END_STATE();
    case 708:
      if (lookahead == 'p') ADVANCE(301);
      END_STATE();
    case 709:
      if (lookahead == 'p') ADVANCE(554);
      END_STATE();
    case 710:
      if (lookahead == 'p') ADVANCE(553);
      END_STATE();
    case 711:
      if (lookahead == 'p') ADVANCE(557);
      END_STATE();
    case 712:
      if (lookahead == 'p') ADVANCE(686);
      END_STATE();
    case 713:
      if (lookahead == 'p') ADVANCE(555);
      END_STATE();
    case 714:
      if (lookahead == 'p') ADVANCE(558);
      END_STATE();
    case 715:
      if (lookahead == 'p') ADVANCE(764);
      END_STATE();
    case 716:
      if (lookahead == 'p') ADVANCE(766);
      END_STATE();
    case 717:
      if (lookahead == 'p') ADVANCE(689);
      END_STATE();
    case 718:
      if (lookahead == 'p') ADVANCE(489);
      END_STATE();
    case 719:
      if (lookahead == 'p') ADVANCE(846);
      END_STATE();
    case 720:
      if (lookahead == 'p') ADVANCE(498);
      END_STATE();
    case 721:
      if (lookahead == 'r') ADVANCE(892);
      END_STATE();
    case 722:
      if (lookahead == 'r') ADVANCE(912);
      END_STATE();
    case 723:
      if (lookahead == 'r') ADVANCE(899);
      END_STATE();
    case 724:
      if (lookahead == 'r') ADVANCE(890);
      END_STATE();
    case 725:
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 726:
      if (lookahead == 'r') ADVANCE(509);
      END_STATE();
    case 727:
      if (lookahead == 'r') ADVANCE(860);
      END_STATE();
    case 728:
      if (lookahead == 'r') ADVANCE(678);
      END_STATE();
    case 729:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 730:
      if (lookahead == 'r') ADVANCE(531);
      END_STATE();
    case 731:
      if (lookahead == 'r') ADVANCE(537);
      END_STATE();
    case 732:
      if (lookahead == 'r') ADVANCE(735);
      if (lookahead == 'v') ADVANCE(305);
      END_STATE();
    case 733:
      if (lookahead == 'r') ADVANCE(533);
      END_STATE();
    case 734:
      if (lookahead == 'r') ADVANCE(535);
      END_STATE();
    case 735:
      if (lookahead == 'r') ADVANCE(475);
      END_STATE();
    case 736:
      if (lookahead == 'r') ADVANCE(778);
      END_STATE();
    case 737:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 738:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 739:
      if (lookahead == 'r') ADVANCE(532);
      END_STATE();
    case 740:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 741:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 742:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 743:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 744:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 745:
      if (lookahead == 'r') ADVANCE(875);
      END_STATE();
    case 746:
      if (lookahead == 'r') ADVANCE(863);
      END_STATE();
    case 747:
      if (lookahead == 'r') ADVANCE(442);
      END_STATE();
    case 748:
      if (lookahead == 'r') ADVANCE(393);
      END_STATE();
    case 749:
      if (lookahead == 'r') ADVANCE(395);
      END_STATE();
    case 750:
      if (lookahead == 'r') ADVANCE(394);
      END_STATE();
    case 751:
      if (lookahead == 'r') ADVANCE(549);
      END_STATE();
    case 752:
      if (lookahead == 'r') ADVANCE(400);
      END_STATE();
    case 753:
      if (lookahead == 'r') ADVANCE(477);
      END_STATE();
    case 754:
      if (lookahead == 'r') ADVANCE(453);
      END_STATE();
    case 755:
      if (lookahead == 'r') ADVANCE(459);
      END_STATE();
    case 756:
      if (lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 757:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 758:
      if (lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 759:
      if (lookahead == 'r') ADVANCE(893);
      END_STATE();
    case 760:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 761:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 762:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 763:
      if (lookahead == 'r') ADVANCE(864);
      END_STATE();
    case 764:
      if (lookahead == 'r') ADVANCE(878);
      END_STATE();
    case 765:
      if (lookahead == 'r') ADVANCE(479);
      END_STATE();
    case 766:
      if (lookahead == 'r') ADVANCE(879);
      END_STATE();
    case 767:
      if (lookahead == 'r') ADVANCE(482);
      END_STATE();
    case 768:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 769:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 770:
      if (lookahead == 'r') ADVANCE(767);
      if (lookahead == 'v') ADVANCE(343);
      END_STATE();
    case 771:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 772:
      if (lookahead == 'r') ADVANCE(497);
      END_STATE();
    case 773:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 774:
      if (lookahead == 's') ADVANCE(779);
      END_STATE();
    case 775:
      if (lookahead == 's') ADVANCE(787);
      END_STATE();
    case 776:
      if (lookahead == 's') ADVANCE(809);
      END_STATE();
    case 777:
      if (lookahead == 's') ADVANCE(700);
      END_STATE();
    case 778:
      if (lookahead == 's') ADVANCE(841);
      END_STATE();
    case 779:
      if (lookahead == 's') ADVANCE(525);
      END_STATE();
    case 780:
      if (lookahead == 's') ADVANCE(806);
      END_STATE();
    case 781:
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 782:
      if (lookahead == 's') ADVANCE(304);
      END_STATE();
    case 783:
      if (lookahead == 's') ADVANCE(625);
      END_STATE();
    case 784:
      if (lookahead == 's') ADVANCE(427);
      END_STATE();
    case 785:
      if (lookahead == 's') ADVANCE(269);
      END_STATE();
    case 786:
      if (lookahead == 's') ADVANCE(334);
      END_STATE();
    case 787:
      if (lookahead == 's') ADVANCE(679);
      END_STATE();
    case 788:
      if (lookahead == 's') ADVANCE(707);
      END_STATE();
    case 789:
      if (lookahead == 's') ADVANCE(819);
      END_STATE();
    case 790:
      if (lookahead == 's') ADVANCE(452);
      END_STATE();
    case 791:
      if (lookahead == 's') ADVANCE(458);
      END_STATE();
    case 792:
      if (lookahead == 's') ADVANCE(712);
      END_STATE();
    case 793:
      if (lookahead == 's') ADVANCE(472);
      END_STATE();
    case 794:
      if (lookahead == 's') ADVANCE(481);
      END_STATE();
    case 795:
      if (lookahead == 's') ADVANCE(484);
      END_STATE();
    case 796:
      if (lookahead == 's') ADVANCE(657);
      END_STATE();
    case 797:
      if (lookahead == 's') ADVANCE(827);
      END_STATE();
    case 798:
      if (lookahead == 's') ADVANCE(490);
      END_STATE();
    case 799:
      if (lookahead == 's') ADVANCE(828);
      END_STATE();
    case 800:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 801:
      if (lookahead == 's') ADVANCE(829);
      END_STATE();
    case 802:
      if (lookahead == 's') ADVANCE(494);
      END_STATE();
    case 803:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 804:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 805:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 806:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 807:
      if (lookahead == 't') ADVANCE(513);
      END_STATE();
    case 808:
      if (lookahead == 't') ADVANCE(728);
      END_STATE();
    case 809:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 810:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 811:
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 812:
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 813:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 814:
      if (lookahead == 't') ADVANCE(527);
      END_STATE();
    case 815:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 816:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 817:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 818:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 819:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 820:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 821:
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 822:
      if (lookahead == 't') ADVANCE(574);
      END_STATE();
    case 823:
      if (lookahead == 't') ADVANCE(470);
      END_STATE();
    case 824:
      if (lookahead == 't') ADVANCE(754);
      END_STATE();
    case 825:
      if (lookahead == 't') ADVANCE(471);
      END_STATE();
    case 826:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 827:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 828:
      if (lookahead == 't') ADVANCE(352);
      END_STATE();
    case 829:
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 830:
      if (lookahead == 't') ADVANCE(772);
      END_STATE();
    case 831:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 832:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 833:
      if (lookahead == 'u') ADVANCE(501);
      END_STATE();
    case 834:
      if (lookahead == 'u') ADVANCE(638);
      if (lookahead == 232) ADVANCE(105);
      END_STATE();
    case 835:
      if (lookahead == 'u') ADVANCE(867);
      END_STATE();
    case 836:
      if (lookahead == 'u') ADVANCE(876);
      END_STATE();
    case 837:
      if (lookahead == 'u') ADVANCE(249);
      END_STATE();
    case 838:
      if (lookahead == 'u') ADVANCE(590);
      END_STATE();
    case 839:
      if (lookahead == 'u') ADVANCE(868);
      END_STATE();
    case 840:
      if (lookahead == 'u') ADVANCE(476);
      END_STATE();
    case 841:
      if (lookahead == 'u') ADVANCE(623);
      END_STATE();
    case 842:
      if (lookahead == 'u') ADVANCE(564);
      END_STATE();
    case 843:
      if (lookahead == 'u') ADVANCE(816);
      END_STATE();
    case 844:
      if (lookahead == 'u') ADVANCE(744);
      END_STATE();
    case 845:
      if (lookahead == 'u') ADVANCE(771);
      END_STATE();
    case 846:
      if (lookahead == 'u') ADVANCE(492);
      END_STATE();
    case 847:
      if (lookahead == 'u') ADVANCE(831);
      END_STATE();
    case 848:
      if (lookahead == 'v') ADVANCE(888);
      END_STATE();
    case 849:
      if (lookahead == 'v') ADVANCE(295);
      END_STATE();
    case 850:
      if (lookahead == 'v') ADVANCE(667);
      END_STATE();
    case 851:
      if (lookahead == 'v') ADVANCE(303);
      END_STATE();
    case 852:
      if (lookahead == 'v') ADVANCE(309);
      END_STATE();
    case 853:
      if (lookahead == 'v') ADVANCE(323);
      END_STATE();
    case 854:
      if (lookahead == 'v') ADVANCE(325);
      END_STATE();
    case 855:
      if (lookahead == 'v') ADVANCE(314);
      END_STATE();
    case 856:
      if (lookahead == 'v') ADVANCE(450);
      END_STATE();
    case 857:
      if (lookahead == 'v') ADVANCE(344);
      END_STATE();
    case 858:
      if (lookahead == 'v') ADVANCE(348);
      END_STATE();
    case 859:
      if (lookahead == 'w') ADVANCE(202);
      END_STATE();
    case 860:
      if (lookahead == 'w') ADVANCE(333);
      END_STATE();
    case 861:
      if (lookahead == 'w') ADVANCE(552);
      END_STATE();
    case 862:
      if (lookahead == 'w') ADVANCE(435);
      END_STATE();
    case 863:
      if (lookahead == 'w') ADVANCE(312);
      END_STATE();
    case 864:
      if (lookahead == 'w') ADVANCE(337);
      END_STATE();
    case 865:
      if (lookahead == 'w') ADVANCE(561);
      END_STATE();
    case 866:
      if (lookahead == 'w') ADVANCE(563);
      END_STATE();
    case 867:
      if (lookahead == 'y') ADVANCE(1122);
      END_STATE();
    case 868:
      if (lookahead == 'y') ADVANCE(1120);
      END_STATE();
    case 869:
      if (lookahead == 'y') ADVANCE(24);
      END_STATE();
    case 870:
      if (lookahead == 'y') ADVANCE(464);
      END_STATE();
    case 871:
      if (lookahead == 'y') ADVANCE(675);
      END_STATE();
    case 872:
      if (lookahead == 'z') ADVANCE(462);
      END_STATE();
    case 873:
      if (lookahead == 'z') ADVANCE(668);
      END_STATE();
    case 874:
      if (lookahead == 'z') ADVANCE(332);
      END_STATE();
    case 875:
      if (lookahead == 'z') ADVANCE(421);
      END_STATE();
    case 876:
      if (lookahead == 'z') ADVANCE(274);
      END_STATE();
    case 877:
      if (lookahead == 'z') ADVANCE(342);
      END_STATE();
    case 878:
      if (lookahead == 'z') ADVANCE(480);
      END_STATE();
    case 879:
      if (lookahead == 'z') ADVANCE(483);
      END_STATE();
    case 880:
      if (lookahead == 'z') ADVANCE(692);
      END_STATE();
    case 881:
      if (lookahead == 'z') ADVANCE(693);
      END_STATE();
    case 882:
      if (lookahead == 171) ADVANCE(3505);
      END_STATE();
    case 883:
      if (lookahead == 171) ADVANCE(3486);
      END_STATE();
    case 884:
      if (lookahead == 171) ADVANCE(3464);
      END_STATE();
    case 885:
      if (lookahead == 171) ADVANCE(3373);
      END_STATE();
    case 886:
      if (lookahead == 171) ADVANCE(3465);
      END_STATE();
    case 887:
      if (lookahead == 171) ADVANCE(3375);
      END_STATE();
    case 888:
      if (lookahead == 224) ADVANCE(98);
      END_STATE();
    case 889:
      if (lookahead == 224) ADVANCE(80);
      END_STATE();
    case 890:
      if (lookahead == 224) ADVANCE(709);
      END_STATE();
    case 891:
      if (lookahead == 224) ADVANCE(182);
      END_STATE();
    case 892:
      if (lookahead == 225) ADVANCE(710);
      END_STATE();
    case 893:
      if (lookahead == 225) ADVANCE(713);
      END_STATE();
    case 894:
      if (lookahead == 229) ADVANCE(44);
      END_STATE();
    case 895:
      if (lookahead == 231) ADVANCE(298);
      END_STATE();
    case 896:
      if (lookahead == 231) ADVANCE(297);
      END_STATE();
    case 897:
      if (lookahead == 231) ADVANCE(320);
      END_STATE();
    case 898:
      if (lookahead == 234) ADVANCE(824);
      END_STATE();
    case 899:
      if (lookahead == 234) ADVANCE(637);
      END_STATE();
    case 900:
      if (lookahead == 234) ADVANCE(830);
      END_STATE();
    case 901:
      if (lookahead == 243) ADVANCE(730);
      END_STATE();
    case 902:
      if (lookahead == 243) ADVANCE(124);
      END_STATE();
    case 903:
      if (lookahead == 252) ADVANCE(611);
      END_STATE();
    case 904:
      if (lookahead == 263) ADVANCE(117);
      END_STATE();
    case 905:
      if (lookahead == 263) ADVANCE(173);
      END_STATE();
    case 906:
      if (lookahead == 263) ADVANCE(177);
      END_STATE();
    case 907:
      if (lookahead == 273) ADVANCE(916);
      END_STATE();
    case 908:
      if (lookahead == 281) ADVANCE(811);
      END_STATE();
    case 909:
      if (lookahead == 281) ADVANCE(812);
      END_STATE();
    case 910:
      if (lookahead == 281) ADVANCE(813);
      END_STATE();
    case 911:
      if (lookahead == 305) ADVANCE(608);
      END_STATE();
    case 912:
      if (lookahead == 305) ADVANCE(582);
      END_STATE();
    case 913:
      if (lookahead == 380) ADVANCE(447);
      END_STATE();
    case 914:
      if (lookahead == 380) ADVANCE(495);
      END_STATE();
    case 915:
      if (lookahead == 380) ADVANCE(496);
      END_STATE();
    case 916:
      if (lookahead == 432) ADVANCE(1123);
      END_STATE();
    case 917:
      if (lookahead == 940) ADVANCE(958);
      END_STATE();
    case 918:
      if (lookahead == 940) ADVANCE(37);
      END_STATE();
    case 919:
      if (lookahead == 940) ADVANCE(960);
      END_STATE();
    case 920:
      if (lookahead == 941) ADVANCE(978);
      if (lookahead == 942) ADVANCE(235);
      END_STATE();
    case 921:
      if (lookahead == 943) ADVANCE(57);
      END_STATE();
    case 922:
      if (lookahead == 943) ADVANCE(929);
      END_STATE();
    case 923:
      if (lookahead == 943) ADVANCE(930);
      END_STATE();
    case 924:
      if (lookahead == 943) ADVANCE(208);
      END_STATE();
    case 925:
      if (lookahead == 945) ADVANCE(947);
      END_STATE();
    case 926:
      if (lookahead == 945) ADVANCE(985);
      END_STATE();
    case 927:
      if (lookahead == 945) ADVANCE(981);
      END_STATE();
    case 928:
      if (lookahead == 945) ADVANCE(77);
      END_STATE();
    case 929:
      if (lookahead == 945) ADVANCE(63);
      END_STATE();
    case 930:
      if (lookahead == 945) ADVANCE(178);
      END_STATE();
    case 931:
      if (lookahead == 945) ADVANCE(986);
      END_STATE();
    case 932:
      if (lookahead == 945) ADVANCE(205);
      END_STATE();
    case 933:
      if (lookahead == 945) ADVANCE(950);
      END_STATE();
    case 934:
      if (lookahead == 946) ADVANCE(963);
      END_STATE();
    case 935:
      if (lookahead == 949) ADVANCE(921);
      END_STATE();
    case 936:
      if (lookahead == 949) ADVANCE(922);
      END_STATE();
    case 937:
      if (lookahead == 949) ADVANCE(948);
      END_STATE();
    case 938:
      if (lookahead == 949) ADVANCE(923);
      END_STATE();
    case 939:
      if (lookahead == 949) ADVANCE(949);
      END_STATE();
    case 940:
      if (lookahead == 949) ADVANCE(924);
      END_STATE();
    case 941:
      if (lookahead == 951) ADVANCE(979);
      END_STATE();
    case 942:
      if (lookahead == 951) ADVANCE(278);
      END_STATE();
    case 943:
      if (lookahead == 951) ADVANCE(279);
      END_STATE();
    case 944:
      if (lookahead == 951) ADVANCE(980);
      END_STATE();
    case 945:
      if (lookahead == 952) ADVANCE(941);
      END_STATE();
    case 946:
      if (lookahead == 952) ADVANCE(944);
      END_STATE();
    case 947:
      if (lookahead == 953) ADVANCE(51);
      END_STATE();
    case 948:
      if (lookahead == 953) ADVANCE(84);
      END_STATE();
    case 949:
      if (lookahead == 953) ADVANCE(193);
      END_STATE();
    case 950:
      if (lookahead == 953) ADVANCE(210);
      END_STATE();
    case 951:
      if (lookahead == 954) ADVANCE(925);
      END_STATE();
    case 952:
      if (lookahead == 954) ADVANCE(917);
      END_STATE();
    case 953:
      if (lookahead == 954) ADVANCE(919);
      END_STATE();
    case 954:
      if (lookahead == 954) ADVANCE(933);
      END_STATE();
    case 955:
      if (lookahead == 955) ADVANCE(920);
      END_STATE();
    case 956:
      if (lookahead == 956) ADVANCE(971);
      END_STATE();
    case 957:
      if (lookahead == 956) ADVANCE(973);
      END_STATE();
    case 958:
      if (lookahead == 957) ADVANCE(937);
      END_STATE();
    case 959:
      if (lookahead == 957) ADVANCE(928);
      END_STATE();
    case 960:
      if (lookahead == 957) ADVANCE(939);
      END_STATE();
    case 961:
      if (lookahead == 957) ADVANCE(932);
      END_STATE();
    case 962:
      if (lookahead == 959) ADVANCE(934);
      END_STATE();
    case 963:
      if (lookahead == 959) ADVANCE(955);
      END_STATE();
    case 964:
      if (lookahead == 959) ADVANCE(974);
      END_STATE();
    case 965:
      if (lookahead == 959) ADVANCE(987);
      END_STATE();
    case 966:
      if (lookahead == 959) ADVANCE(100);
      END_STATE();
    case 967:
      if (lookahead == 959) ADVANCE(988);
      END_STATE();
    case 968:
      if (lookahead == 959) ADVANCE(977);
      END_STATE();
    case 969:
      if (lookahead == 960) ADVANCE(962);
      END_STATE();
    case 970:
      if (lookahead == 960) ADVANCE(975);
      END_STATE();
    case 971:
      if (lookahead == 960) ADVANCE(964);
      END_STATE();
    case 972:
      if (lookahead == 960) ADVANCE(976);
      END_STATE();
    case 973:
      if (lookahead == 960) ADVANCE(968);
      END_STATE();
    case 974:
      if (lookahead == 961) ADVANCE(935);
      END_STATE();
    case 975:
      if (lookahead == 961) ADVANCE(965);
      END_STATE();
    case 976:
      if (lookahead == 961) ADVANCE(967);
      END_STATE();
    case 977:
      if (lookahead == 961) ADVANCE(940);
      END_STATE();
    case 978:
      if (lookahead == 962) ADVANCE(242);
      END_STATE();
    case 979:
      if (lookahead == 963) ADVANCE(942);
      END_STATE();
    case 980:
      if (lookahead == 963) ADVANCE(943);
      END_STATE();
    case 981:
      if (lookahead == 964) ADVANCE(918);
      END_STATE();
    case 982:
      if (lookahead == 964) ADVANCE(966);
      END_STATE();
    case 983:
      if (lookahead == 964) ADVANCE(926);
      END_STATE();
    case 984:
      if (lookahead == 964) ADVANCE(931);
      END_STATE();
    case 985:
      if (lookahead == 967) ADVANCE(936);
      END_STATE();
    case 986:
      if (lookahead == 967) ADVANCE(938);
      END_STATE();
    case 987:
      if (lookahead == 974) ADVANCE(945);
      END_STATE();
    case 988:
      if (lookahead == 974) ADVANCE(946);
      END_STATE();
    case 989:
      if (lookahead == 1072) ADVANCE(30);
      END_STATE();
    case 990:
      if (lookahead == 1072) ADVANCE(1009);
      END_STATE();
    case 991:
      if (lookahead == 1072) ADVANCE(1053);
      END_STATE();
    case 992:
      if (lookahead == 1072) ADVANCE(1014);
      END_STATE();
    case 993:
      if (lookahead == 1072) ADVANCE(1054);
      END_STATE();
    case 994:
      if (lookahead == 1072) ADVANCE(273);
      END_STATE();
    case 995:
      if (lookahead == 1072) ADVANCE(275);
      END_STATE();
    case 996:
      if (lookahead == 1072) ADVANCE(276);
      END_STATE();
    case 997:
      if (lookahead == 1072) ADVANCE(50);
      END_STATE();
    case 998:
      if (lookahead == 1072) ADVANCE(1016);
      END_STATE();
    case 999:
      if (lookahead == 1072) ADVANCE(1056);
      END_STATE();
    case 1000:
      if (lookahead == 1072) ADVANCE(1057);
      END_STATE();
    case 1001:
      if (lookahead == 1073) ADVANCE(1108);
      END_STATE();
    case 1002:
      if (lookahead == 1073) ADVANCE(1105);
      END_STATE();
    case 1003:
      if (lookahead == 1073) ADVANCE(1107);
      END_STATE();
    case 1004:
      if (lookahead == 1073) ADVANCE(1109);
      END_STATE();
    case 1005:
      if (lookahead == 1073) ADVANCE(1110);
      END_STATE();
    case 1006:
      if (lookahead == 1073) ADVANCE(1111);
      END_STATE();
    case 1007:
      if (lookahead == 1073) ADVANCE(1112);
      END_STATE();
    case 1008:
      if (lookahead == 1074) ADVANCE(1104);
      if (lookahead == 1080) ADVANCE(81);
      END_STATE();
    case 1009:
      if (lookahead == 1074) ADVANCE(991);
      END_STATE();
    case 1010:
      if (lookahead == 1074) ADVANCE(206);
      END_STATE();
    case 1011:
      if (lookahead == 1074) ADVANCE(1106);
      END_STATE();
    case 1012:
      if (lookahead == 1076) ADVANCE(990);
      END_STATE();
    case 1013:
      if (lookahead == 1076) ADVANCE(997);
      END_STATE();
    case 1014:
      if (lookahead == 1076) ADVANCE(75);
      END_STATE();
    case 1015:
      if (lookahead == 1076) ADVANCE(90);
      END_STATE();
    case 1016:
      if (lookahead == 1076) ADVANCE(97);
      END_STATE();
    case 1017:
      if (lookahead == 1076) ADVANCE(102);
      END_STATE();
    case 1018:
      if (lookahead == 1076) ADVANCE(1024);
      END_STATE();
    case 1019:
      if (lookahead == 1077) ADVANCE(1093);
      END_STATE();
    case 1020:
      if (lookahead == 1077) ADVANCE(1011);
      END_STATE();
    case 1021:
      if (lookahead == 1077) ADVANCE(1047);
      END_STATE();
    case 1022:
      if (lookahead == 1077) ADVANCE(137);
      END_STATE();
    case 1023:
      if (lookahead == 1077) ADVANCE(46);
      if (lookahead == 1080) ADVANCE(1117);
      END_STATE();
    case 1024:
      if (lookahead == 1077) ADVANCE(55);
      END_STATE();
    case 1025:
      if (lookahead == 1077) ADVANCE(1015);
      END_STATE();
    case 1026:
      if (lookahead == 1077) ADVANCE(1079);
      END_STATE();
    case 1027:
      if (lookahead == 1077) ADVANCE(1017);
      END_STATE();
    case 1028:
      if (lookahead == 1077) ADVANCE(1049);
      END_STATE();
    case 1029:
      if (lookahead == 1077) ADVANCE(1081);
      END_STATE();
    case 1030:
      if (lookahead == 1077) ADVANCE(1050);
      END_STATE();
    case 1031:
      if (lookahead == 1077) ADVANCE(1082);
      END_STATE();
    case 1032:
      if (lookahead == 1077) ADVANCE(1100);
      END_STATE();
    case 1033:
      if (lookahead == 1077) ADVANCE(1101);
      END_STATE();
    case 1034:
      if (lookahead == 1078) ADVANCE(1022);
      END_STATE();
    case 1035:
      if (lookahead == 1078) ADVANCE(1019);
      END_STATE();
    case 1036:
      if (lookahead == 1078) ADVANCE(1032);
      END_STATE();
    case 1037:
      if (lookahead == 1078) ADVANCE(1033);
      END_STATE();
    case 1038:
      if (lookahead == 1079) ADVANCE(992);
      if (lookahead == 1087) ADVANCE(1075);
      END_STATE();
    case 1039:
      if (lookahead == 1079) ADVANCE(998);
      if (lookahead == 1087) ADVANCE(1080);
      END_STATE();
    case 1040:
      if (lookahead == 1080) ADVANCE(1088);
      END_STATE();
    case 1041:
      if (lookahead == 1080) ADVANCE(142);
      END_STATE();
    case 1042:
      if (lookahead == 1080) ADVANCE(200);
      END_STATE();
    case 1043:
      if (lookahead == 1080) ADVANCE(203);
      END_STATE();
    case 1044:
      if (lookahead == 1084) ADVANCE(1040);
      END_STATE();
    case 1045:
      if (lookahead == 1084) ADVANCE(1044);
      END_STATE();
    case 1046:
      if (lookahead == 1084) ADVANCE(1060);
      END_STATE();
    case 1047:
      if (lookahead == 1084) ADVANCE(1061);
      END_STATE();
    case 1048:
      if (lookahead == 1084) ADVANCE(1063);
      END_STATE();
    case 1049:
      if (lookahead == 1084) ADVANCE(1064);
      END_STATE();
    case 1050:
      if (lookahead == 1084) ADVANCE(1065);
      END_STATE();
    case 1051:
      if (lookahead == 1084) ADVANCE(1068);
      END_STATE();
    case 1052:
      if (lookahead == 1084) ADVANCE(1069);
      END_STATE();
    case 1053:
      if (lookahead == 1085) ADVANCE(1023);
      END_STATE();
    case 1054:
      if (lookahead == 1085) ADVANCE(994);
      END_STATE();
    case 1055:
      if (lookahead == 1085) ADVANCE(257);
      END_STATE();
    case 1056:
      if (lookahead == 1085) ADVANCE(995);
      END_STATE();
    case 1057:
      if (lookahead == 1085) ADVANCE(996);
      END_STATE();
    case 1058:
      if (lookahead == 1086) ADVANCE(1045);
      END_STATE();
    case 1059:
      if (lookahead == 1086) ADVANCE(1012);
      END_STATE();
    case 1060:
      if (lookahead == 1086) ADVANCE(1034);
      END_STATE();
    case 1061:
      if (lookahead == 1086) ADVANCE(1092);
      END_STATE();
    case 1062:
      if (lookahead == 1086) ADVANCE(79);
      END_STATE();
    case 1063:
      if (lookahead == 1086) ADVANCE(1035);
      END_STATE();
    case 1064:
      if (lookahead == 1086) ADVANCE(1094);
      END_STATE();
    case 1065:
      if (lookahead == 1086) ADVANCE(1095);
      END_STATE();
    case 1066:
      if (lookahead == 1086) ADVANCE(171);
      END_STATE();
    case 1067:
      if (lookahead == 1086) ADVANCE(176);
      END_STATE();
    case 1068:
      if (lookahead == 1086) ADVANCE(1036);
      END_STATE();
    case 1069:
      if (lookahead == 1086) ADVANCE(1037);
      END_STATE();
    case 1070:
      if (lookahead == 1087) ADVANCE(1026);
      END_STATE();
    case 1071:
      if (lookahead == 1087) ADVANCE(1078);
      END_STATE();
    case 1072:
      if (lookahead == 1087) ADVANCE(1029);
      END_STATE();
    case 1073:
      if (lookahead == 1087) ADVANCE(1031);
      END_STATE();
    case 1074:
      if (lookahead == 1088) ADVANCE(1103);
      END_STATE();
    case 1075:
      if (lookahead == 1088) ADVANCE(1025);
      END_STATE();
    case 1076:
      if (lookahead == 1088) ADVANCE(1062);
      END_STATE();
    case 1077:
      if (lookahead == 1088) ADVANCE(1090);
      END_STATE();
    case 1078:
      if (lookahead == 1088) ADVANCE(1020);
      END_STATE();
    case 1079:
      if (lookahead == 1088) ADVANCE(1021);
      END_STATE();
    case 1080:
      if (lookahead == 1088) ADVANCE(1027);
      END_STATE();
    case 1081:
      if (lookahead == 1088) ADVANCE(1028);
      END_STATE();
    case 1082:
      if (lookahead == 1088) ADVANCE(1030);
      END_STATE();
    case 1083:
      if (lookahead == 1088) ADVANCE(1066);
      END_STATE();
    case 1084:
      if (lookahead == 1088) ADVANCE(1067);
      END_STATE();
    case 1085:
      if (lookahead == 1089) ADVANCE(1091);
      END_STATE();
    case 1086:
      if (lookahead == 1089) ADVANCE(1096);
      END_STATE();
    case 1087:
      if (lookahead == 1089) ADVANCE(1097);
      END_STATE();
    case 1088:
      if (lookahead == 1090) ADVANCE(69);
      END_STATE();
    case 1089:
      if (lookahead == 1090) ADVANCE(1113);
      END_STATE();
    case 1090:
      if (lookahead == 1090) ADVANCE(1116);
      END_STATE();
    case 1091:
      if (lookahead == 1090) ADVANCE(1076);
      END_STATE();
    case 1092:
      if (lookahead == 1090) ADVANCE(993);
      END_STATE();
    case 1093:
      if (lookahead == 1090) ADVANCE(78);
      END_STATE();
    case 1094:
      if (lookahead == 1090) ADVANCE(999);
      END_STATE();
    case 1095:
      if (lookahead == 1090) ADVANCE(1000);
      END_STATE();
    case 1096:
      if (lookahead == 1090) ADVANCE(1083);
      END_STATE();
    case 1097:
      if (lookahead == 1090) ADVANCE(1084);
      END_STATE();
    case 1098:
      if (lookahead == 1090) ADVANCE(1114);
      END_STATE();
    case 1099:
      if (lookahead == 1090) ADVANCE(1115);
      END_STATE();
    case 1100:
      if (lookahead == 1090) ADVANCE(192);
      END_STATE();
    case 1101:
      if (lookahead == 1090) ADVANCE(196);
      END_STATE();
    case 1102:
      if (lookahead == 1091) ADVANCE(41);
      END_STATE();
    case 1103:
      if (lookahead == 1093) ADVANCE(1102);
      END_STATE();
    case 1104:
      if (lookahead == 1098) ADVANCE(1074);
      END_STATE();
    case 1105:
      if (lookahead == 1098) ADVANCE(1018);
      END_STATE();
    case 1106:
      if (lookahead == 1098) ADVANCE(1077);
      END_STATE();
    case 1107:
      if (lookahead == 1099) ADVANCE(1085);
      END_STATE();
    case 1108:
      if (lookahead == 1099) ADVANCE(1089);
      END_STATE();
    case 1109:
      if (lookahead == 1099) ADVANCE(1086);
      END_STATE();
    case 1110:
      if (lookahead == 1099) ADVANCE(1087);
      END_STATE();
    case 1111:
      if (lookahead == 1099) ADVANCE(1098);
      END_STATE();
    case 1112:
      if (lookahead == 1099) ADVANCE(1099);
      END_STATE();
    case 1113:
      if (lookahead == 1100) ADVANCE(91);
      END_STATE();
    case 1114:
      if (lookahead == 1100) ADVANCE(183);
      END_STATE();
    case 1115:
      if (lookahead == 1100) ADVANCE(187);
      END_STATE();
    case 1116:
      if (lookahead == 1103) ADVANCE(1055);
      END_STATE();
    case 1117:
      if (lookahead == 1103) ADVANCE(148);
      END_STATE();
    case 1118:
      if (lookahead == 7847) ADVANCE(621);
      END_STATE();
    case 1119:
      if (lookahead == 7871) ADVANCE(702);
      END_STATE();
    case 1120:
      if (lookahead == 7875) ADVANCE(617);
      END_STATE();
    case 1121:
      if (lookahead == 7875) ADVANCE(58);
      END_STATE();
    case 1122:
      if (lookahead == 7875) ADVANCE(632);
      END_STATE();
    case 1123:
      if (lookahead == 7907) ADVANCE(374);
      END_STATE();
    case 1124:
      if (lookahead == 8220) ADVANCE(3479);
      END_STATE();
    case 1125:
      if (lookahead == 8222) ADVANCE(3507);
      END_STATE();
    case 1126:
      if (lookahead == 8222) ADVANCE(3377);
      END_STATE();
    case 1127:
      if (lookahead == 8222) ADVANCE(3466);
      END_STATE();
    case 1128:
      if (lookahead == 8222) ADVANCE(3379);
      END_STATE();
    case 1129:
      if (lookahead == 8222) ADVANCE(3467);
      END_STATE();
    case 1130:
      if (lookahead == 8222) ADVANCE(3490);
      END_STATE();
    case 1131:
      if (lookahead == 12290) ADVANCE(3435);
      if (lookahead == 65292) ADVANCE(1155);
      END_STATE();
    case 1132:
      if (lookahead == 12290) ADVANCE(3433);
      if (lookahead == 65292) ADVANCE(1140);
      END_STATE();
    case 1133:
      if (lookahead == 12290) ADVANCE(3342);
      END_STATE();
    case 1134:
      if (lookahead == 12290) ADVANCE(3474);
      END_STATE();
    case 1135:
      if (lookahead == 12290) ADVANCE(3477);
      END_STATE();
    case 1136:
      if (lookahead == 12290) ADVANCE(3425);
      END_STATE();
    case 1137:
      if (lookahead == 12290) ADVANCE(3427);
      END_STATE();
    case 1138:
      if (lookahead == 19988) ADVANCE(1150);
      END_STATE();
    case 1139:
      if (lookahead == 19988) ADVANCE(1151);
      END_STATE();
    case 1140:
      if (lookahead == 20006) ADVANCE(1139);
      END_STATE();
    case 1141:
      if (lookahead == 20132) ADVANCE(1131);
      END_STATE();
    case 1142:
      if (lookahead == 20132) ADVANCE(1132);
      END_STATE();
    case 1143:
      if (lookahead == 20197) ADVANCE(1157);
      END_STATE();
    case 1144:
      if (lookahead == 20197) ADVANCE(1158);
      END_STATE();
    case 1145:
      if (lookahead == 20316) ADVANCE(1134);
      END_STATE();
    case 1146:
      if (lookahead == 20316) ADVANCE(1135);
      END_STATE();
    case 1147:
      if (lookahead == 21040) ADVANCE(107);
      END_STATE();
    case 1148:
      if (lookahead == 21040) ADVANCE(122);
      END_STATE();
    case 1149:
      if (lookahead == 21205) ADVANCE(1145);
      if (lookahead == 25805) ADVANCE(1146);
      END_STATE();
    case 1150:
      if (lookahead == 21487) ADVANCE(1143);
      END_STATE();
    case 1151:
      if (lookahead == 21487) ADVANCE(1144);
      END_STATE();
    case 1152:
      if (lookahead == 22522) ADVANCE(1147);
      END_STATE();
    case 1153:
      if (lookahead == 22522) ADVANCE(1156);
      END_STATE();
    case 1154:
      if (lookahead == 23450) ADVANCE(1153);
      END_STATE();
    case 1155:
      if (lookahead == 24182) ADVANCE(1138);
      END_STATE();
    case 1156:
      if (lookahead == 24213) ADVANCE(1148);
      END_STATE();
    case 1157:
      if (lookahead == 24555) ADVANCE(1163);
      END_STATE();
    case 1158:
      if (lookahead == 24555) ADVANCE(1162);
      END_STATE();
    case 1159:
      if (lookahead == 25552) ADVANCE(1141);
      END_STATE();
    case 1160:
      if (lookahead == 25552) ADVANCE(1142);
      END_STATE();
    case 1161:
      if (lookahead == 33268) ADVANCE(1133);
      END_STATE();
    case 1162:
      if (lookahead == 36681) ADVANCE(1137);
      END_STATE();
    case 1163:
      if (lookahead == 36827) ADVANCE(1136);
      END_STATE();
    case 1164:
      if (lookahead == 44172) ADVANCE(35);
      END_STATE();
    case 1165:
      if (lookahead == 44256) ADVANCE(236);
      END_STATE();
    case 1166:
      if (lookahead == 45716) ADVANCE(48);
      END_STATE();
    case 1167:
      if (lookahead == 45768) ADVANCE(1171);
      END_STATE();
    case 1168:
      if (lookahead == 45768) ADVANCE(1172);
      END_STATE();
    case 1169:
      if (lookahead == 45768) ADVANCE(1173);
      END_STATE();
    case 1170:
      if (lookahead == 45768) ADVANCE(1174);
      END_STATE();
    case 1171:
      if (lookahead == 45796) ADVANCE(252);
      END_STATE();
    case 1172:
      if (lookahead == 45796) ADVANCE(254);
      END_STATE();
    case 1173:
      if (lookahead == 45796) ADVANCE(255);
      END_STATE();
    case 1174:
      if (lookahead == 45796) ADVANCE(256);
      END_STATE();
    case 1175:
      if (lookahead == 45796) ADVANCE(23);
      END_STATE();
    case 1176:
      if (lookahead == 45936) ADVANCE(1201);
      END_STATE();
    case 1177:
      if (lookahead == 46028) ADVANCE(1185);
      END_STATE();
    case 1178:
      if (lookahead == 46108) ADVANCE(49);
      END_STATE();
    case 1179:
      if (lookahead == 46244) ADVANCE(1197);
      END_STATE();
    case 1180:
      if (lookahead == 47004) ADVANCE(1208);
      END_STATE();
    case 1181:
      if (lookahead == 47196) ADVANCE(28);
      END_STATE();
    case 1182:
      if (lookahead == 47196) ADVANCE(52);
      END_STATE();
    case 1183:
      if (lookahead == 47484) ADVANCE(115);
      END_STATE();
    case 1184:
      if (lookahead == 47532) ADVANCE(1188);
      END_STATE();
    case 1185:
      if (lookahead == 47540) ADVANCE(56);
      END_STATE();
    case 1186:
      if (lookahead == 47582) ADVANCE(1164);
      END_STATE();
    case 1187:
      if (lookahead == 48139) ADVANCE(31);
      END_STATE();
    case 1188:
      if (lookahead == 48288) ADVANCE(1200);
      END_STATE();
    case 1189:
      if (lookahead == 49345) ADVANCE(1211);
      END_STATE();
    case 1190:
      if (lookahead == 49688) ADVANCE(157);
      END_STATE();
    case 1191:
      if (lookahead == 49828) ADVANCE(1213);
      END_STATE();
    case 1192:
      if (lookahead == 49845) ADVANCE(1167);
      END_STATE();
    case 1193:
      if (lookahead == 49845) ADVANCE(1170);
      END_STATE();
    case 1194:
      if (lookahead == 50526) ADVANCE(1199);
      END_STATE();
    case 1195:
      if (lookahead == 50526) ADVANCE(1198);
      END_STATE();
    case 1196:
      if (lookahead == 50629) ADVANCE(1176);
      END_STATE();
    case 1197:
      if (lookahead == 50640) ADVANCE(42);
      END_STATE();
    case 1198:
      if (lookahead == 50640) ADVANCE(76);
      END_STATE();
    case 1199:
      if (lookahead == 51004) ADVANCE(1182);
      END_STATE();
    case 1200:
      if (lookahead == 51060) ADVANCE(1191);
      END_STATE();
    case 1201:
      if (lookahead == 51060) ADVANCE(1212);
      END_STATE();
    case 1202:
      if (lookahead == 51077) ADVANCE(1168);
      END_STATE();
    case 1203:
      if (lookahead == 51077) ADVANCE(1169);
      END_STATE();
    case 1204:
      if (lookahead == 51080) ADVANCE(1165);
      END_STATE();
    case 1205:
      if (lookahead == 51080) ADVANCE(1192);
      END_STATE();
    case 1206:
      if (lookahead == 51080) ADVANCE(1193);
      END_STATE();
    case 1207:
      if (lookahead == 51473) ADVANCE(1202);
      END_STATE();
    case 1208:
      if (lookahead == 52824) ADVANCE(1183);
      END_STATE();
    case 1209:
      if (lookahead == 52964) ADVANCE(1187);
      END_STATE();
    case 1210:
      if (lookahead == 53372) ADVANCE(38);
      END_STATE();
    case 1211:
      if (lookahead == 53468) ADVANCE(1203);
      END_STATE();
    case 1212:
      if (lookahead == 53944) ADVANCE(1178);
      END_STATE();
    case 1213:
      if (lookahead == 54616) ADVANCE(1166);
      END_STATE();
    case 1214:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3300);
      END_STATE();
    case 1215:
      if (eof) ADVANCE(1218);
      if (lookahead == '\n') ADVANCE(1219);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '#') ADVANCE(1280);
      if (lookahead != 0) ADVANCE(1220);
      END_STATE();
    case 1216:
      if (eof) ADVANCE(1218);
      if (lookahead == '\n') ADVANCE(1219);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '#') ADVANCE(1281);
      if (lookahead != 0) ADVANCE(1221);
      END_STATE();
    case 1217:
      if (eof) ADVANCE(1218);
      if (lookahead == '\n') ADVANCE(1219);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '#') ADVANCE(1285);
      if (lookahead != 0) ADVANCE(1278);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1278);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1222);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1223);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1224);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1225);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1226);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1227);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1228);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1229);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1230);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1231);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1232);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1233);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1234);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1235);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1236);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1237);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1238);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1239);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1240);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1241);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1242);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1243);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1244);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1245);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1246);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1247);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1248);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1249);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1250);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1251);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1252);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1253);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1254);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1255);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1256);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1257);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1258);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1259);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1260);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1261);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1263);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1265);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1266);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1267);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1268);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1269);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(aux_sym_subject_token3);
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '-') ADVANCE(1271);
      if (lookahead != 0) ADVANCE(1278);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(aux_sym_subject_token3);
      if (lookahead == ' ') ADVANCE(1277);
      if (lookahead == '-') ADVANCE(1272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1278);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(aux_sym_subject_token3);
      if (lookahead == ' ') ADVANCE(1275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1278);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(aux_sym_subject_token3);
      if (lookahead == '-') ADVANCE(1272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1278);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(aux_sym_subject_token3);
      if (lookahead == '-') ADVANCE(1271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1278);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(aux_sym_subject_token3);
      if (lookahead == '8') ADVANCE(1273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1278);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(aux_sym_subject_token3);
      if (lookahead == '>') ADVANCE(1276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1278);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(aux_sym_subject_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1278);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ' ') ADVANCE(243);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ' ') ADVANCE(1274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1278);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3296);
      if (lookahead == ':' ||
          lookahead == 65306) ADVANCE(3305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3306);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(3301);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(3307);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1278);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1269);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t') ADVANCE(3296);
      if (lookahead == ' ') ADVANCE(1289);
      if (lookahead == ':' ||
          lookahead == 65306) ADVANCE(3305);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(1287);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(3306);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ' ') ADVANCE(1290);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(1288);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(3307);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ':' ||
          lookahead == 65306) ADVANCE(3304);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(1289);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(3296);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(1290);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3091);
      if (lookahead == 1072) ADVANCE(3181);
      if (lookahead == 1077) ADVANCE(3149);
      if (lookahead == 1099) ADVANCE(1296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2778);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1645);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1646);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1889);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2848);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3016);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2964);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1969);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2855);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2841);
      if (lookahead == ',') ADVANCE(1469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1755);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2005);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1977);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2813);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2093);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2905);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1641);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2917);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1874);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1955);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2823);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2842);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3019);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2898);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1647);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2963);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2852);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2814);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1642);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2919);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1875);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1914);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2788);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3085);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2187);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2637);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1648);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3071);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2853);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2819);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3215);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2953);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1643);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2970);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1888);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1917);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2904);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1693);
      if (lookahead == ':') ADVANCE(3310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1649);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2967);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2854);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2815);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3216);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1644);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1890);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2789);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2816);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3210);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2468);
      if (lookahead == 'e') ADVANCE(2632);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1959);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1877);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3079);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3026);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1651);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2888);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2817);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3218);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2779);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2818);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1915);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1653);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1654);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1828);
      if (lookahead == 'r') ADVANCE(1633);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2721);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1929);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1655);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1931);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1656);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1922);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1657);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1658);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2007);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1659);
      if (lookahead == 'g') ADVANCE(1481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1660);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2723);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2658);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1663);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1757);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2013);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2648);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1664);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1665);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1666);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2067);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1667);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1669);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2053);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1670);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1673);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1676);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1679);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1680);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1681);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1746);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1685);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1754);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1832);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2930);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2977);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1960);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2398);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1876);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2065);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3042);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1923);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1919);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2787);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2809);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1972);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2792);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2679);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2795);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3022);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1970);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1962);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1963);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2705);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1783);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1784);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1789);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3024);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3025);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2639);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1928);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2768);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2764);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2978);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1995);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1933);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2090);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2979);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2082);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1984);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2086);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1986);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2094);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1987);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2095);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1988);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2856);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2921);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1894);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3086);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2659);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2773);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1994);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2922);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1897);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1905);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2894);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2665);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1906);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1907);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1908);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1909);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1956);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(3028);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1910);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1911);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(1912);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2981);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ' ') ADVANCE(2349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '"') ADVANCE(3439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '"') ADVANCE(3406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1643:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '"') ADVANCE(3348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '"') ADVANCE(3483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3491);
      if (lookahead == 48652) ADVANCE(3278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1648:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1649:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1650:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1652:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3364);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1665:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1670:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1671:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1672:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1673:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1674:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1675:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1676:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1677:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1678:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1679:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1680:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1681:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1682:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1683:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1684:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1685:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1686:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1687:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'') ADVANCE(3494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1688:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ',') ADVANCE(1406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1689:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '.') ADVANCE(1338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1690:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':') ADVANCE(3317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1691:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':') ADVANCE(3316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1692:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':') ADVANCE(3315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1693:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':') ADVANCE(3309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1694:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':') ADVANCE(3314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1695:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':') ADVANCE(3319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1696:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':') ADVANCE(3313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1697:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':') ADVANCE(3318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1698:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':') ADVANCE(3312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1699:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':') ADVANCE(3320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':') ADVANCE(1336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1701:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':') ADVANCE(1352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':') ADVANCE(1369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1703:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ';') ADVANCE(1480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1704:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ';') ADVANCE(1471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1705:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ';') ADVANCE(1516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1706:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ';') ADVANCE(1478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1707:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ';') ADVANCE(1433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1708:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ';') ADVANCE(1454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1709:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ';') ADVANCE(1473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1710:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ';') ADVANCE(1608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1711:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ';') ADVANCE(1618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1712:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ';') ADVANCE(1620);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1713:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'A') ADVANCE(2444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1714:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'B') ADVANCE(2598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1715:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'B') ADVANCE(2600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1716:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'B') ADVANCE(2604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1717:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'G') ADVANCE(1769);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1718:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'R') ADVANCE(2113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1719:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'R') ADVANCE(2115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1720:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'S') ADVANCE(2724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1721:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1872);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1722:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2289);
      if (lookahead == 'i') ADVANCE(2399);
      if (lookahead == 'u') ADVANCE(1292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1723:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2355);
      if (lookahead == 'e') ADVANCE(2775);
      if (lookahead == 'r') ADVANCE(2843);
      if (lookahead == 'u') ADVANCE(1527);
      if (lookahead == 'w') ADVANCE(2464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1724:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2861);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1725:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1918);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1726:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2510);
      if (lookahead == 'r') ADVANCE(2069);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1727:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1728:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1934);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1729:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1949);
      if (lookahead == 'd') ADVANCE(2052);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1730:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2865);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1731:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1732:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1733:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1691);
      if (lookahead == 'e') ADVANCE(1416);
      if (lookahead == 'u') ADVANCE(2325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1734:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1735:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1736:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2862);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1737:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1738:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1739:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2785);
      if (lookahead == 'r') ADVANCE(2079);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1740:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1741:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1742:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1743:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2171);
      if (lookahead == 'e') ADVANCE(1306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1744:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1745:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1746:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2780);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1747:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1748:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1749:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1295);
      if (lookahead == 'g') ADVANCE(2822);
      if (lookahead == 'h') ADVANCE(2825);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1750:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1936);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1751:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1752:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1753:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2623);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1754:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1755:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2192);
      if (lookahead == 'b') ADVANCE(2011);
      if (lookahead == 'u') ADVANCE(2515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1756:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2657);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1757:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1758:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1759:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2649);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1760:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1761:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2673);
      if (lookahead == 224) ADVANCE(1371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1762:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1763:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1764:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1765:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1766:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1767:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1768:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1769:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1770:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1771:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1772:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1773:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1774:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1775:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1776:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1777:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1778:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1779:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1780:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1781:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1782:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1783:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1784:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1785:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1786:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1787:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1788:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1789:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1790:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1791:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2798);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1792:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1793:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2791);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1794:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1795:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1965);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1796:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1797:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1798:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1799:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2620);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1800:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1801:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2638);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1802:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1803:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1804:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1805:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2237);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1806:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1807:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1808:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1809:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2660);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1810:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2755);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1811:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1812:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1813:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2630);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1814:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1815:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1816:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1817:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1818:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1819:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1820:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1821:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1971);
      if (lookahead == 'r') ADVANCE(2803);
      if (lookahead == 229) ADVANCE(1377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1822:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1979);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1823:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1824:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2864);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1825:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2656);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1826:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1827:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1981);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1828:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1829:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2641);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1830:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1939);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1831:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1832:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2763);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1833:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1834:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1835:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1836:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1837:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1838:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1839:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1840:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1841:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2666);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1842:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1843:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1844:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1845:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1846:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1983);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1847:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1848:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2653);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1849:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1985);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1850:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2654);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1851:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1893);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1852:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1853:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1854:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1855:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1856:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1904);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1857:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1858:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1859:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1860:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1861:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1862:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1863:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1864:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1865:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1866:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1867:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1622);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1868:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(1627);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1869:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1870:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1871:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'a') ADVANCE(2462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1872:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1741);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1873:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1740);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1874:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1875:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2746);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1876:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2019);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1877:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2234);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1878:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1825);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1879:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1880:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1747);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1881:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1799);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1882:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1756);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1883:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1759);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1884:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1801);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1885:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1809);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1886:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1812);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1887:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1813);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1888:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(3191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1889:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2560);
      if (lookahead == 'r') ADVANCE(1826);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1890:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2070);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1891:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1829);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1892:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1833);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1893:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1804);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1894:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1895:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1841);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1896:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1897:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1898:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1845);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1899:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1900:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1848);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1901:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1902:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1850);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1903:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2096);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1904:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(1818);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1905:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1906:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1907:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1908:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1909:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1910:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1911:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1912:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'b') ADVANCE(2605);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1913:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2678);
      if (lookahead == 'n') ADVANCE(1968);
      if (lookahead == 't') ADVANCE(2741);
      if (lookahead == 'u') ADVANCE(2136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1914:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(3204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1915:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(3192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1916:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1917:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2749);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1918:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2685);
      if (lookahead == 'k') ADVANCE(2687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1919:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1920:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1921:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1922:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1923:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1924:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(1353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1925:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(1496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1926:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(1425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1927:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1928:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1929:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1930:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(1544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1931:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1932:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2196);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1933:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2751);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1934:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2692);
      if (lookahead == 't') ADVANCE(2241);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1935:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2197);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1936:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1937:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(1764);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1938:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1939:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1940:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2200);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1941:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1942:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2203);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1943:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1944:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(1780);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1945:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(1859);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1946:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1947:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2036);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1948:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(1790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1949:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2716);
      if (lookahead == 'd') ADVANCE(2060);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1950:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1951:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(2210);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1952:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(1595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1953:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(1589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1954:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(1600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1955:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(1851);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1956:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'c') ADVANCE(1856);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1957:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1958:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1758);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1959:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1960:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2008);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1961:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2233);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1962:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1843);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1963:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2014);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1964:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1965:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1966:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1967:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1968:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1766);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1969:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2236);
      if (lookahead == 'm') ADVANCE(2105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1970:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1797);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1971:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1770);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1972:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2018);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1973:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1974:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2754);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1975:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1753);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1976:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2023);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1977:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2484);
      if (lookahead == 'n') ADVANCE(1781);
      if (lookahead == 'z') ADVANCE(1782);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1978:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1776);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1979:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2056);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1980:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1779);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1981:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1982:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1983:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1835);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1984:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2032);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1985:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1803);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1986:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2033);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1987:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2034);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1988:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1989:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1796);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1990:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2080);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1991:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1992:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2098);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1993:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1994:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1995:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(2131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1996:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1870);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1997:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'd') ADVANCE(1871);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1998:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1916);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 1999:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2821);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2000:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2866);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2001:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2869);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2002:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2003:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(3212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2004:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2005:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2141);
      if (lookahead == 'f') ADVANCE(2846);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2006:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2007:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2008:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2009:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2010:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2011:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2012:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2013:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2680);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2014:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2015:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2016:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2642);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2017:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2018:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2019:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2020:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2021:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1795);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2022:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2023:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2024:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2025:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2026:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2027:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2028:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2029:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2030:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2031:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2032:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2033:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2034:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2035:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2036:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2037:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2038:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2039:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2040:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2041:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2042:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1364);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2043:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2044:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2045:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1989);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2046:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1873);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2047:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2820);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2048:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2049:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2050:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2051:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2052:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2053:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2054:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2055:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2056:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2057:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1639);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2058:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2753);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2059:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1880);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2060:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2061:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2631);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2062:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2063:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1705);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2064:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2065:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2644);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2066:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2067:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2068:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2069:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1881);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2070:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2071:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2072:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1967);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2073:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2074:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2075:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1925);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2076:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2077:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2645);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2078:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2079:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2080:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2081:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1878);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2082:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2647);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2083:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1802);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2084:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2085:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2086:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2622);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2087:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2088:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2089:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2090:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2091:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2092:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2093:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2382);
      if (lookahead == 224) ADVANCE(1596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2094:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2095:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2096:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2097:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2098:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2390);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2099:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2100:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2101:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2643);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2102:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2103:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2104:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2105:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2407);
      if (lookahead == 'u') ADVANCE(2699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2106:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1891);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2107:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1883);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2108:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2109:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2110:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2111:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2112:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2113:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1892);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2114:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1895);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2115:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1898);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2116:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1885);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2117:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1900);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2118:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1886);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2119:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1902);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2120:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1887);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2121:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2655);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2122:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2123:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2124:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2125:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2126:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2127:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2740);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2128:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2129:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2130:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2131:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2132:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2670);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2133:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2134:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(2461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2135:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'e') ADVANCE(1997);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2136:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'f') ADVANCE(1298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2137:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'f') ADVANCE(1522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2138:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'f') ADVANCE(1485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2139:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'f') ADVANCE(1356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2140:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'f') ADVANCE(2597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2141:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'f') ADVANCE(2732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2142:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'f') ADVANCE(1707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2143:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'f') ADVANCE(2076);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2144:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'f') ADVANCE(1585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2145:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(2838);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2146:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2147:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(2527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2148:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(2529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2149:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2150:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(2172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2151:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(2156);
      if (lookahead == 'v') ADVANCE(1811);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2152:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2153:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(2290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2154:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2155:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(2760);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2156:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(2227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2157:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(2543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2158:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2159:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(2063);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2160:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2161:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2162:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2163:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2164:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2165:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2166:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2167:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2168:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(2152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2169:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2170:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(2544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2171:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(2133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2172:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(2071);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2173:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1824);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2174:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(2078);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2175:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1820);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2176:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(2606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2177:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2178:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2179:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1637);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2180:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'g') ADVANCE(1640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2181:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(2836);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2182:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(3195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2183:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(1330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2184:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(3205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2185:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(3193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2186:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(2610);
      if (lookahead == 'l') ADVANCE(1520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2187:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(2215);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2188:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(1745);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2189:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(1696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2190:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(2747);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2191:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(2254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2192:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(2021);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2193:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(1393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2194:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(2219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2195:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(1315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2196:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(1318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2197:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(1461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2198:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(1320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2199:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(1321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2200:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(1464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2201:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(1498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2202:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(1504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2203:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(1511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2204:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(1517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2205:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(1436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2206:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(2826);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2207:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(2245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2208:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(2124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2209:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(2027);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2210:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(2043);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2211:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(2265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2212:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(2832);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2213:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(3206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2214:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'h') ADVANCE(2833);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2215:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(3198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2216:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2783);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2217:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(3197);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2218:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2776);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2219:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(3196);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2220:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2015);
      if (lookahead == 'u') ADVANCE(2321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2221:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2806);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2222:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2223:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2224:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(1937);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2225:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2226:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2227:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2228:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2229:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2230:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2231:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2232:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2233:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2234:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2001);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2235:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(1314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2236:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(1426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2237:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(1489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2238:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(1474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2239:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(1398);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2240:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(1408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2241:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2781);
      if (lookahead == 't') ADVANCE(2267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2242:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2812);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2243:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2244:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2245:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2246:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2247:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2248:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2249:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2774);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2250:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(1992);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2251:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2252:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(1751);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2253:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2633);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2254:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2255:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2256:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(1855);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2257:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2258:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2259:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2260:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2261:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2262:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(1785);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2263:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2037);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2264:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2041);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2265:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(3199);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2266:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2782);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2267:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2784);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2268:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2269:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2664);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2270:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2453);
      if (lookahead == 7903) ADVANCE(1537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2271:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2667);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2272:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2273:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2274:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(2456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2275:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'i') ADVANCE(1629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2276:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'j') ADVANCE(2469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2277:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'j') ADVANCE(1800);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2278:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'j') ADVANCE(2494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2279:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'j') ADVANCE(2077);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2280:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'k') ADVANCE(2676);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2281:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'k') ADVANCE(2243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2282:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'k') ADVANCE(1817);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2283:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'k') ADVANCE(2191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2284:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'k') ADVANCE(1765);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2285:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'k') ADVANCE(2706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2286:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'k') ADVANCE(2703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2287:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'k') ADVANCE(2042);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2288:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'k') ADVANCE(1865);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2289:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2860);
      if (lookahead == 't') ADVANCE(1733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2290:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2858);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2291:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2292:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2293:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2294:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2295:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2228);
      if (lookahead == 228) ADVANCE(2546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2296:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2049);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2297:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2298:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2221);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2299:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2000);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2300:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1807);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2301:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1794);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2302:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2303:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2304:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2305:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2800);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2306:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2307:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1903);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2308:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1774);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2309:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2239);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2310:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2020);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2311:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1866);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2312:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1838);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2313:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2844);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2314:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2759);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2315:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(2337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2316:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1819);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2317:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1814);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2318:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1815);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2319:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1857);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2320:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2321:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1624);
      if (lookahead == 'r') ADVANCE(1562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2322:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1867);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2323:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'l') ADVANCE(1638);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2324:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(1409);
      if (lookahead == 'n') ADVANCE(1293);
      if (lookahead == 's') ADVANCE(2675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2325:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(1694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2326:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(1879);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2327:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(2048);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2328:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(2309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2329:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(2054);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2330:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(2072);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2331:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(2100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2332:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(2062);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2333:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(1351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2334:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(1493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2335:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(1446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2336:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(2472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2337:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(2099);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2338:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(2495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2339:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(2627);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2340:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(1882);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2341:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(1775);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2342:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(2475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2343:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(1778);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2344:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(1788);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2345:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(2044);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2346:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(1565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2347:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(1884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2348:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(1590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2349:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'm') ADVANCE(2134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2350:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2351:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1976);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2352:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2859);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2353:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2354:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1964);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2355:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2168);
      if (lookahead == 'r') ADVANCE(2223);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2356:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1973);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2357:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2358:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2359:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2360:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1944);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2361:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2362:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2363:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2364:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2758);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2365:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2366:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1947);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2367:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2368:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1791);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2369:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2370:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2371:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2372:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2373:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2374:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1767);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2375:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2376:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2377:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2378:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2379:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2380:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2381:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2382:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2383:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2384:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2385:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2386:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2387:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2388:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2389:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2390:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2391:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2392:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2393:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1927);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2394:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2395:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1957);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2396:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2397:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1961);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2398:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2399:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2400:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2401:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2402:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1975);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2403:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2404:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1966);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2405:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2406:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2407:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1958);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2408:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1920);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2409:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2410:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2411:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2412:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1921);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2413:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2414:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1991);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2415:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2199);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2416:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2417:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2418:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2419:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2420:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2421:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2422:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2026);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2423:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2424:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2425:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2426:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2028);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2427:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2428:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2429:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2430:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1787);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2431:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1945);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2432:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2089);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2433:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2434:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1932);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2435:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2436:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2437:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1950);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2438:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1978);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2439:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1982);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2440:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1948);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2441:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2442:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1935);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2443:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1951);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2444:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1980);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2445:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2446:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1938);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2447:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1940);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2448:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1941);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2449:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1942);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2450:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2097);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2451:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1943);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2452:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2453:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2454:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2455:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2456:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2457:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2458:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2459:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2460:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1632);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2461:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(1996);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2462:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'n') ADVANCE(2180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2463:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2681);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2464:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2465:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2466:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2467:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1974);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2468:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2469:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2765);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2470:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2471:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2472:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2473:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2474:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2475:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2476:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2477:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2478:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2479:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2480:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2481:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2482:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1896);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2483:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2484:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2485:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2486:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2487:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2488:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2489:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2752);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2490:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2491:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2492:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2493:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2494:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2766);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2495:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2496:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2497:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2498:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2499:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(2347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2500:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2501:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2502:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1899);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2503:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1901);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2504:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2505:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2506:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2507:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'o') ADVANCE(1635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2508:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'p') ADVANCE(2839);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2509:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'p') ADVANCE(2837);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2510:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'p') ADVANCE(2294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2511:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'p') ADVANCE(2596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2512:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'p') ADVANCE(2525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2513:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'p') ADVANCE(2531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2514:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'p') ADVANCE(2017);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2515:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'p') ADVANCE(1475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2516:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'p') ADVANCE(2840);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2517:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'p') ADVANCE(2574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2518:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'p') ADVANCE(1545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2519:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'p') ADVANCE(2123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2520:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'p') ADVANCE(2127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2521:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2793);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2522:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2523:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2524:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2872);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2525:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2804);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2526:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2527:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2009);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2528:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2529:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2085);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2530:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2531:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2532:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1725);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2533:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2534:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2535:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2231);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2536:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2651);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2537:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2669);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2538:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2539:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1822);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2540:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2541:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2542:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1763);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2543:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2016);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2544:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2545:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2546:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2547:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2548:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2549:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2550:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2551:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2552:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2553:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2554:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2555:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2556:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1792);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2557:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2232);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2558:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1752);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2559:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2022);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2560:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2561:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2562:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1993);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2563:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2564:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2634);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2565:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2031);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2566:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1868);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2567:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2038);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2568:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2039);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2569:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2040);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2570:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2059);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2571:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2831);
      if (lookahead == 'u') ADVANCE(1798);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2572:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1823);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2573:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2064);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2574:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2575:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1830);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2576:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2577:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2578:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1831);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2579:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1834);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2580:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2845);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2581:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1837);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2582:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1839);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2583:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1840);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2584:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1842);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2585:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2586:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1844);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2587:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1847);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2588:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2589:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2590:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2591:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2592:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2593:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2594:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2595:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2596:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2811);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2597:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2598:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1854);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2599:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1853);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2600:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1858);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2601:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1860);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2602:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1861);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2603:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1862);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2604:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1863);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2605:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1864);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2606:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2607:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2608:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2834);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2609:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2610:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1623);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2611:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(1631);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2612:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'r') ADVANCE(2288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2613:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(1743);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2614:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2847);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2615:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2616:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2617:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2618:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(1999);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2619:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2620:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2083);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2621:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2622:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2623:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(1760);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2624:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(1375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2625:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2010);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2626:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(1303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2627:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2012);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2628:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2002);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2629:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(1810);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2630:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2003);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2631:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(1577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2632:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(1329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2633:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(1335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2634:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(1549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2635:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2808);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2636:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2637:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2230);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2638:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2639:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2640:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2641:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2047);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2642:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2646);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2643:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2644:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2645:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2646:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(1706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2647:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2648:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2756);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2649:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2029);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2650:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2030);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2651:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2652:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2051);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2653:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2057);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2654:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2655:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2656:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2657:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2658:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2767);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2659:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2769);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2660:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2091);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2661:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2770);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2662:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(1581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2663:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(1584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2664:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2665:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2666:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2667:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2668:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2669:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(1711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2670:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2671:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(1869);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2672:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 's') ADVANCE(2135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2673:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2674:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2871);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2675:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2829);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2676:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2796);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2677:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2827);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2678:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2744);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2679:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2830);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2680:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2681:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2554);
      if (lookahead == 'u') ADVANCE(2624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2682:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2745);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2683:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2684:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2066);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2685:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2216);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2686:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2687:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2218);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2688:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2689:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(1732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2690:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2061);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2691:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2692:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2693:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2694:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2695:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2058);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2696:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2524);
      if (lookahead == 273) ADVANCE(3194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2697:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2249);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2698:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(1805);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2699:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(1738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2700:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2701:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2702:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(1846);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2703:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2222);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2704:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(1772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2705:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2074);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2706:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2068);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2707:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(1532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2708:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(1333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2709:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(1598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2710:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(1340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2711:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(1344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2712:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(1404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2713:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(1429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2714:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2824);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2715:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2828);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2716:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2771);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2717:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2718:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(1793);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2719:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2720:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2024);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2721:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2722:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2723:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2724:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(1836);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2725:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2726:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2727:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2728:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2035);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2729:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2073);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2730:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2725);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2731:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2732:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2087);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2733:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2734:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2084);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2735:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2088);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2736:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2737:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2092);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2738:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2739:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2740:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2741:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 't') ADVANCE(2772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2742:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(1456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2743:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2744:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(1734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2745:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2746:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2747:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2748:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(1524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2749:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2750:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2751:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2752:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2753:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(1391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2754:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(1427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2755:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(1389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2756:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(1355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2757:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2758:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2759:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2364);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2760:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2761:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2762:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2763:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2764:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2765:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2766:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2767:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2768:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2769:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2770:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2771:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(1806);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2772:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(1852);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2773:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(2318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2774:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(1587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2775:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'u') ADVANCE(1597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2776:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'v') ADVANCE(1437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2777:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'v') ADVANCE(3202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2778:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'v') ADVANCE(2483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2779:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'v') ADVANCE(2217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2780:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'v') ADVANCE(2075);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2781:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'v') ADVANCE(2474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2782:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'v') ADVANCE(2500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2783:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'v') ADVANCE(2025);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2784:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'v') ADVANCE(2501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2785:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'v') ADVANCE(1768);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2786:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'v') ADVANCE(1771);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2787:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'v') ADVANCE(2492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2788:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'w') ADVANCE(2863);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2789:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'w') ADVANCE(2805);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2790:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'w') ADVANCE(2252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2791:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'w') ADVANCE(2256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2792:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'w') ADVANCE(2247);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2793:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'w') ADVANCE(1773);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2794:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'w') ADVANCE(2426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2795:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'w') ADVANCE(2264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2796:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'y') ADVANCE(2794);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2797:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'y') ADVANCE(1411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2798:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'y') ADVANCE(1326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2799:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'y') ADVANCE(2055);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2800:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'y') ADVANCE(1604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2801:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'z') ADVANCE(2006);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2802:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'z') ADVANCE(2235);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2803:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'z') ADVANCE(2004);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2804:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'z') ADVANCE(2467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2805:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'z') ADVANCE(2153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2806:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'z') ADVANCE(1827);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2807:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'z') ADVANCE(1442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2808:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'z') ADVANCE(1394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2809:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'z') ADVANCE(1435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2810:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'z') ADVANCE(2050);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2811:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'z') ADVANCE(2121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2812:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 'z') ADVANCE(1849);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2813:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 171) ADVANCE(3410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2814:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 171) ADVANCE(3442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2815:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 171) ADVANCE(3350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2816:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 171) ADVANCE(3485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2817:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 171) ADVANCE(3361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2818:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 171) ADVANCE(3504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2819:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 171) ADVANCE(2592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2820:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 187) ADVANCE(1603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2821:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 187) ADVANCE(1634);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2822:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 224) ADVANCE(2797);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2823:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 224) ADVANCE(1399);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2824:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 224) ADVANCE(1350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2825:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 225) ADVANCE(2357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2826:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 225) ADVANCE(2361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2827:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 225) ADVANCE(1328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2828:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 225) ADVANCE(1331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2829:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 225) ADVANCE(2626);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2830:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 225) ADVANCE(1953);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2831:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 225) ADVANCE(2662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2832:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 225) ADVANCE(2415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2833:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 225) ADVANCE(2427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2834:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 225) ADVANCE(2663);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2835:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 227) ADVANCE(1451);
      if (lookahead == 7913) ADVANCE(2413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2836:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 229) ADVANCE(2291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2837:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 229) ADVANCE(2145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2838:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 229) ADVANCE(2553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2839:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 229) ADVANCE(1482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2840:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 229) ADVANCE(1361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2841:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 232) ADVANCE(1497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2842:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 234) ADVANCE(2690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2843:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 234) ADVANCE(2371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2844:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 234) ADVANCE(2391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2845:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 234) ADVANCE(2392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2846:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 246) ADVANCE(2565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2847:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 252) ADVANCE(2563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2848:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 252) ADVANCE(2810);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2849:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 261) ADVANCE(2867);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2850:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 261) ADVANCE(1946);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2851:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 261) ADVANCE(2868);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2852:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 273) ADVANCE(3200);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2853:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 273) ADVANCE(2835);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2854:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 273) ADVANCE(2873);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2855:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 273) ADVANCE(1808);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2856:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 273) ADVANCE(1816);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2857:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 281) ADVANCE(2802);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2858:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 281) ADVANCE(1990);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2859:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 305) ADVANCE(2807);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2860:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 305) ADVANCE(2352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2861:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 322) ADVANCE(2857);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2862:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 322) ADVANCE(2849);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2863:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 322) ADVANCE(1730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2864:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 322) ADVANCE(2851);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2865:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 347) ADVANCE(2370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2866:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 351) ADVANCE(2229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2867:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 378) ADVANCE(1378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2868:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 378) ADVANCE(1405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2869:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 380) ADVANCE(2850);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2870:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 417) ADVANCE(2419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2871:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 432) ADVANCE(2870);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2872:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 432) ADVANCE(3201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2873:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 432) ADVANCE(3203);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2874:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 940) ADVANCE(2897);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2875:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 940) ADVANCE(2934);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2876:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 940) ADVANCE(2935);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2877:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 940) ADVANCE(2899);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2878:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 940) ADVANCE(2900);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2879:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 940) ADVANCE(1617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2880:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 942) ADVANCE(1410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2881:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 942) ADVANCE(1390);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2882:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 942) ADVANCE(2931);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2883:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 943) ADVANCE(2890);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2884:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 943) ADVANCE(2936);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2885:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 943) ADVANCE(2962);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2886:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 943) ADVANCE(2971);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2887:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 945) ADVANCE(2915);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2888:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 945) ADVANCE(2952);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2889:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 945) ADVANCE(2896);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2890:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 945) ADVANCE(1699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2891:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 945) ADVANCE(2960);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2892:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 945) ADVANCE(2965);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2893:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 945) ADVANCE(2916);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2894:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 945) ADVANCE(2954);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2895:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 947) ADVANCE(2928);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2896:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 948) ADVANCE(2957);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2897:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 948) ADVANCE(2940);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2898:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 948) ADVANCE(2914);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2899:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 948) ADVANCE(2942);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2900:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 948) ADVANCE(2946);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2901:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 949) ADVANCE(2955);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2902:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 949) ADVANCE(2886);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2903:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 949) ADVANCE(2924);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2904:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 949) ADVANCE(2884);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2905:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 949) ADVANCE(2933);
      if (lookahead == 956) ADVANCE(2951);
      if (lookahead == 960) ADVANCE(2885);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2906:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 949) ADVANCE(2976);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2907:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 949) ADVANCE(2958);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2908:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 949) ADVANCE(1570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2909:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 949) ADVANCE(1611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2910:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 951) ADVANCE(2932);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2911:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 951) ADVANCE(1310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2912:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 953) ADVANCE(2895);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2913:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 953) ADVANCE(2918);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2914:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 953) ADVANCE(2889);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2915:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 953) ADVANCE(1379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2916:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 953) ADVANCE(1346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2917:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 954) ADVANCE(2923);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2918:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 954) ADVANCE(2987);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2919:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 954) ADVANCE(2875);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2920:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 954) ADVANCE(2972);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2921:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 954) ADVANCE(2925);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2922:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 954) ADVANCE(2926);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2923:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 955) ADVANCE(2874);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2924:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 955) ADVANCE(2902);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2925:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 955) ADVANCE(2877);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2926:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 955) ADVANCE(2878);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2927:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 956) ADVANCE(2901);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2928:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 956) ADVANCE(2881);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2929:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 956) ADVANCE(2910);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2930:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 956) ADVANCE(2908);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2931:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 956) ADVANCE(2907);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2932:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 957) ADVANCE(2883);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2933:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 957) ADVANCE(2882);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2934:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 957) ADVANCE(2906);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2935:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 957) ADVANCE(2984);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2936:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 957) ADVANCE(2893);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2937:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 957) ADVANCE(1592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2938:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 957) ADVANCE(1605);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2939:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 959) ADVANCE(2937);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2940:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 959) ADVANCE(2959);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2941:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 959) ADVANCE(2929);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2942:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 959) ADVANCE(1322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2943:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 959) ADVANCE(1499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2944:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 959) ADVANCE(1505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2945:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 959) ADVANCE(1506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2946:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 959) ADVANCE(1513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2947:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 959) ADVANCE(1365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2948:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 959) ADVANCE(2961);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2949:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 959) ADVANCE(2966);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2950:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 959) ADVANCE(2938);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2951:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 960) ADVANCE(2956);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2952:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 960) ADVANCE(2985);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2953:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 960) ADVANCE(2876);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2954:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 960) ADVANCE(2986);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2955:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 961) ADVANCE(2941);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2956:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 961) ADVANCE(2949);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2957:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 961) ADVANCE(2892);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2958:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 961) ADVANCE(2948);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2959:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 962) ADVANCE(1383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2960:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 962) ADVANCE(1414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2961:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 962) ADVANCE(1518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2962:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 963) ADVANCE(2983);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2963:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 963) ADVANCE(2891);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2964:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 963) ADVANCE(2973);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2965:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 963) ADVANCE(2975);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2966:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 963) ADVANCE(2974);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2967:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 963) ADVANCE(2980);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2968:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 964) ADVANCE(2939);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2969:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 964) ADVANCE(2880);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2970:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 964) ADVANCE(2911);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2971:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 964) ADVANCE(2887);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2972:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 964) ADVANCE(2903);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2973:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 964) ADVANCE(2912);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2974:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 964) ADVANCE(2879);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2975:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 964) ADVANCE(2913);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2976:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 964) ADVANCE(2909);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2977:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 964) ADVANCE(2943);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2978:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 964) ADVANCE(2944);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2979:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 964) ADVANCE(2945);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2980:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 964) ADVANCE(2947);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2981:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 964) ADVANCE(2950);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2982:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 965) ADVANCE(2969);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2983:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 969) ADVANCE(1444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2984:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 969) ADVANCE(1420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2985:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 972) ADVANCE(1519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2986:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 972) ADVANCE(1579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2987:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 972) ADVANCE(1612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2988:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(3189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2989:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(3067);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2990:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(3029);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2991:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(1692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2992:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(3144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2993:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(3080);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2994:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(3050);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2995:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(3156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2996:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(3105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2997:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(1700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2998:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(1396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 2999:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(3059);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3000:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(1376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3001:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(1395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3002:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(1317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3003:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(1418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3004:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(1428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3005:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(1423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3006:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(3152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3007:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(3068);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3008:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(3167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3009:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(3054);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3010:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(3087);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3011:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1072) ADVANCE(1626);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3012:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1073) ADVANCE(2989);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3013:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1073) ADVANCE(3099);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3014:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1073) ADVANCE(3007);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3015:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1074) ADVANCE(3185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3016:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1074) ADVANCE(3072);
      if (lookahead == 1077) ADVANCE(1415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3017:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1074) ADVANCE(3176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3018:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1074) ADVANCE(3098);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3019:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1074) ADVANCE(3060);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3020:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1074) ADVANCE(3048);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3021:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1074) ADVANCE(3039);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3022:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1074) ADVANCE(3040);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3023:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1074) ADVANCE(2995);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3024:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1074) ADVANCE(3188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3025:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1074) ADVANCE(3046);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3026:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1074) ADVANCE(1521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3027:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1074) ADVANCE(3100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3028:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1074) ADVANCE(3062);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3029:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1076) ADVANCE(1367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3030:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3077);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3031:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3076);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3032:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3065);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3033:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3034:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3035:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3036:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3012);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3037:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3038:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3097);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3039:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3040:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3041:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(1402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3042:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(1525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3043:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(1441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3044:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(1561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3045:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3046:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3047:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3093);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3048:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3049:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3050:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3051:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(1552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3052:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3094);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3053:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3054:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3055:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3056:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(1708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3057:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3014);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3058:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3059:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3060:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3061:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(1594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3062:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3063:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(1616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3064:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1077) ADVANCE(3139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3065:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1078) ADVANCE(3009);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3066:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1079) ADVANCE(3015);
      if (lookahead == 1085) ADVANCE(3148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3067:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1079) ADVANCE(3070);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3068:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1079) ADVANCE(3073);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3069:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1080) ADVANCE(3018);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3070:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1080) ADVANCE(3136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3071:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1080) ADVANCE(3107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3072:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1080) ADVANCE(1533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3073:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1080) ADVANCE(3132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3074:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1080) ADVANCE(3043);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3075:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1080) ADVANCE(3027);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3076:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1081) ADVANCE(3179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3077:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1082) ADVANCE(3173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3078:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1082) ADVANCE(3174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3079:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1082) ADVANCE(3186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3080:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1082) ADVANCE(3151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3081:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1082) ADVANCE(2997);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3082:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1082) ADVANCE(3001);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3083:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1082) ADVANCE(3003);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3084:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1082) ADVANCE(3004);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3085:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1082) ADVANCE(3089);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3086:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1082) ADVANCE(3090);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3087:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1082) ADVANCE(3171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3088:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1083) ADVANCE(3108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3089:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1083) ADVANCE(3112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3090:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1083) ADVANCE(3114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3091:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1084) ADVANCE(3111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3092:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1084) ADVANCE(3033);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3093:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1084) ADVANCE(3045);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3094:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1084) ADVANCE(3034);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3095:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1084) ADVANCE(1387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3096:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1085) ADVANCE(3187);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3097:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1085) ADVANCE(3074);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3098:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1085) ADVANCE(3119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3099:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1085) ADVANCE(3116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3100:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1085) ADVANCE(3121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3101:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1085) ADVANCE(2990);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3102:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1085) ADVANCE(1311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3103:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1085) ADVANCE(1440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3104:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1085) ADVANCE(3005);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3105:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1085) ADVANCE(3044);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3106:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1085) ADVANCE(3166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3107:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1085) ADVANCE(3172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3108:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1086) ADVANCE(3096);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3109:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1086) ADVANCE(3013);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3110:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1086) ADVANCE(3178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3111:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1086) ADVANCE(3092);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3112:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1086) ADVANCE(3102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3113:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1086) ADVANCE(3150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3114:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1086) ADVANCE(3104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3115:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1086) ADVANCE(3165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3116:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1086) ADVANCE(3020);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3117:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1086) ADVANCE(3115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3118:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1086) ADVANCE(3159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3119:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1086) ADVANCE(3063);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3120:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1086) ADVANCE(3125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3121:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1086) ADVANCE(1614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3122:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1087) ADVANCE(3131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3123:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1087) ADVANCE(3134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3124:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1087) ADVANCE(3049);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3125:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1087) ADVANCE(3053);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3126:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1087) ADVANCE(3137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3127:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1087) ADVANCE(3058);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3128:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1088) ADVANCE(3177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3129:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1088) ADVANCE(3180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3130:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1088) ADVANCE(2993);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3131:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1088) ADVANCE(3036);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3132:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1088) ADVANCE(2996);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3133:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1088) ADVANCE(3047);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3134:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1088) ADVANCE(3110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3135:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1088) ADVANCE(3032);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3136:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1088) ADVANCE(3008);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3137:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1088) ADVANCE(3057);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3138:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1088) ADVANCE(3052);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3139:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1088) ADVANCE(3010);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3140:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1089) ADVANCE(3031);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3141:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1089) ADVANCE(3117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3142:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1089) ADVANCE(3154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3143:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1089) ADVANCE(3056);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3144:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1089) ADVANCE(1384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3145:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1089) ADVANCE(1332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3146:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1089) ADVANCE(3143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3147:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1089) ADVANCE(3157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3148:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3035);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3149:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3082);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3150:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3151:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3069);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3152:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(2991);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3153:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3154:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3017);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3155:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3156:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3041);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3157:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(2994);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3158:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(1307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3159:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(1341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3160:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(1386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3161:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(1422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3162:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3078);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3163:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3000);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3164:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(1543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3165:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3021);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3166:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3002);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3167:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3061);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3168:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3051);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3169:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3083);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3170:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3084);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3171:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3075);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3172:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1090) ADVANCE(3064);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3173:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1091) ADVANCE(3182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3174:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1091) ADVANCE(1434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3175:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1091) ADVANCE(1366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3176:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1091) ADVANCE(3055);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3177:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1093) ADVANCE(3175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3178:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1094) ADVANCE(3037);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3179:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1095) ADVANCE(2992);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3180:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1096) ADVANCE(3023);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3181:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1096) ADVANCE(3011);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3182:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1097) ADVANCE(2988);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3183:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1097) ADVANCE(3038);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3184:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1097) ADVANCE(2999);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3185:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1098) ADVANCE(3129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3186:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1098) ADVANCE(3095);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3187:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1098) ADVANCE(3158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3188:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1098) ADVANCE(3128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3189:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 1103) ADVANCE(1563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3190:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7841) ADVANCE(2369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3191:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7841) ADVANCE(2379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3192:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7853) ADVANCE(2518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3193:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7853) ADVANCE(2713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3194:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7857) ADVANCE(2421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3195:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7871) ADVANCE(1385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3196:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7879) ADVANCE(2420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3197:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7879) ADVANCE(1926);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3198:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7879) ADVANCE(2375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3199:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7879) ADVANCE(2385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3200:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7897) ADVANCE(1472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3201:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7899) ADVANCE(1924);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3202:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7899) ADVANCE(2240);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3203:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7907) ADVANCE(1954);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3204:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7911) ADVANCE(1777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3205:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7921) ADVANCE(1952);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3206:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 7921) ADVANCE(1930);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3207:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 8220) ADVANCE(3436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3208:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 8220) ADVANCE(3401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3209:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 8220) ADVANCE(3344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3210:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 8220) ADVANCE(3478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3211:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 8220) ADVANCE(2595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3212:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 8221) ADVANCE(1630);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3213:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 8222) ADVANCE(3418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3214:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 8222) ADVANCE(3362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3215:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 8222) ADVANCE(3489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3216:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 8222) ADVANCE(3506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3217:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 8222) ADVANCE(3353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3218:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 8222) ADVANCE(3449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3219:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 19978) ADVANCE(3262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3220:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 19978) ADVANCE(3263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3221:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 19982) ADVANCE(3219);
      if (lookahead == 33287) ADVANCE(3220);
      if (lookahead == 33853) ADVANCE(3238);
      if (lookahead == 38936) ADVANCE(3227);
      if (lookahead == 39046) ADVANCE(3228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3222:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 20013) ADVANCE(3294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3223:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 20013) ADVANCE(3295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3224:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 20114) ADVANCE(3250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3225:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 20316) ADVANCE(3260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3226:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 20316) ADVANCE(3261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3227:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 20808) ADVANCE(1419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3228:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 20808) ADVANCE(1431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3229:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 20998) ADVANCE(3253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3230:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 20998) ADVANCE(3252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3231:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 20998) ADVANCE(3254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3232:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 20998) ADVANCE(3255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3233:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 20998) ADVANCE(3256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3234:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 20998) ADVANCE(3257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3235:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 21205) ADVANCE(3249);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3236:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 21205) ADVANCE(3226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3237:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 21464) ADVANCE(3243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3238:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 21518) ADVANCE(1380);
      if (lookahead == 24460) ADVANCE(1401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3239:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 22312) ADVANCE(3242);
      if (lookahead == 30340) ADVANCE(3230);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3240:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 22312) ADVANCE(3270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3241:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 22312) ADVANCE(3271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3242:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 22519) ADVANCE(3266);
      if (lookahead == 25191) ADVANCE(3267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3243:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 22522) ADVANCE(3251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3244:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 22522) ADVANCE(3248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3245:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 23450) ADVANCE(3244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3246:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 23558) ADVANCE(3232);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3247:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 23559) ADVANCE(3231);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3248:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 24213) ADVANCE(3236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3249:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 24335) ADVANCE(3272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3250:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 24335) ADVANCE(3237);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3251:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 25805) ADVANCE(3225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3252:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 25903) ADVANCE(3221);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3253:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 25903) ADVANCE(1300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3254:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 25903) ADVANCE(1452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3255:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 25903) ADVANCE(1455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3256:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 25903) ADVANCE(1459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3257:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 25903) ADVANCE(1462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3258:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 26044) ADVANCE(3229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3259:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 26399) ADVANCE(3293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3260:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 27491) ADVANCE(3240);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3261:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 27491) ADVANCE(3241);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3262:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 28216) ADVANCE(3233);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3263:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 28216) ADVANCE(3234);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3264:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 33267) ADVANCE(1337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3265:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 33267) ADVANCE(1342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3266:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 34892) ADVANCE(3247);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3267:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 34892) ADVANCE(3246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3268:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 34892) ADVANCE(3222);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3269:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 34892) ADVANCE(3223);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3270:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 36827) ADVANCE(3268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3271:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 36914) ADVANCE(3269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3272:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 37325) ADVANCE(3245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3273:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 44032) ADVANCE(1301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3274:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 44033) ADVANCE(1690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3275:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 44040) ADVANCE(1343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3276:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 45716) ADVANCE(1349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3277:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 47004) ADVANCE(3287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3278:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 47004) ADVANCE(3289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3279:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 47532) ADVANCE(3280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3280:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 48288) ADVANCE(3283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3281:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 49828) ADVANCE(1313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3282:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 50948) ADVANCE(3288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3283:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 51060) ADVANCE(3281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3284:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 51116) ADVANCE(1297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3285:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 51473) ADVANCE(1689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3286:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 51652) ADVANCE(3290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3287:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 52824) ADVANCE(3273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3288:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 52824) ADVANCE(3276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3289:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 52824) ADVANCE(1308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3290:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 54665) ADVANCE(1325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3291:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 54805) ADVANCE(1299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3292:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 54868) ADVANCE(3291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3293:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 65306) ADVANCE(3311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3294:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 65307) ADVANCE(3264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3295:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == 65307) ADVANCE(3265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3296:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ':' ||
          lookahead == 65306) ADVANCE(3304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3296);
      END_STATE();
    case 3297:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3297);
      END_STATE();
    case 3298:
      ACCEPT_TOKEN(aux_sym__scissor_token1);
      END_STATE();
    case 3299:
      ACCEPT_TOKEN(aux_sym__scissor_token1);
      if (lookahead == '\n') ADVANCE(3298);
      END_STATE();
    case 3300:
      ACCEPT_TOKEN(aux_sym__scissor_token1);
      if (lookahead == '\n') ADVANCE(3298);
      if (lookahead == '\r') ADVANCE(3299);
      if (lookahead != 0) ADVANCE(3300);
      END_STATE();
    case 3301:
      ACCEPT_TOKEN(sym_branch);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'') ADVANCE(3301);
      END_STATE();
    case 3302:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3302);
      END_STATE();
    case 3303:
      ACCEPT_TOKEN(aux_sym__change_token1);
      END_STATE();
    case 3304:
      ACCEPT_TOKEN(aux_sym__change_token2);
      END_STATE();
    case 3305:
      ACCEPT_TOKEN(aux_sym__change_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(3307);
      END_STATE();
    case 3306:
      ACCEPT_TOKEN(aux_sym__filepath_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3296);
      if (lookahead == ':' ||
          lookahead == 65306) ADVANCE(3305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3306);
      END_STATE();
    case 3307:
      ACCEPT_TOKEN(aux_sym__filepath_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(3307);
      END_STATE();
    case 3308:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 3309:
      ACCEPT_TOKEN(anon_sym_Date_COLON);
      END_STATE();
    case 3310:
      ACCEPT_TOKEN(anon_sym_Date_COLON2);
      END_STATE();
    case 3311:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 3312:
      ACCEPT_TOKEN(anon_sym_Ngythng_COLON);
      END_STATE();
    case 3313:
      ACCEPT_TOKEN(anon_sym_Tarih_COLON);
      END_STATE();
    case 3314:
      ACCEPT_TOKEN(anon_sym_Datum_COLON);
      END_STATE();
    case 3315:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 3316:
      ACCEPT_TOKEN(anon_sym_Data_COLON);
      END_STATE();
    case 3317:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 3318:
      ACCEPT_TOKEN(anon_sym_Tanggal_COLON);
      END_STATE();
    case 3319:
      ACCEPT_TOKEN(anon_sym_Fecha_COLON);
      END_STATE();
    case 3320:
      ACCEPT_TOKEN(anon_sym_COLON3);
      END_STATE();
    case 3321:
      ACCEPT_TOKEN(anon_sym_Onbranch);
      END_STATE();
    case 3322:
      ACCEPT_TOKEN(anon_sym_Surlabranche);
      END_STATE();
    case 3323:
      ACCEPT_TOKEN(anon_sym_COLON4);
      END_STATE();
    case 3324:
      ACCEPT_TOKEN(anon_sym_Pgrenen);
      END_STATE();
    case 3325:
      ACCEPT_TOKEN(anon_sym_zerindebulunulandal_COLON);
      END_STATE();
    case 3326:
      ACCEPT_TOKEN(anon_sym_Trnnhnh);
      END_STATE();
    case 3327:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 3328:
      ACCEPT_TOKEN(anon_sym_Emramo);
      END_STATE();
    case 3329:
      ACCEPT_TOKEN(anon_sym_Nagazi);
      END_STATE();
    case 3330:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 3331:
      ACCEPT_TOKEN(anon_sym_Sulbranch);
      END_STATE();
    case 3332:
      ACCEPT_TOKEN(anon_sym_Padacabang);
      END_STATE();
    case 3333:
      ACCEPT_TOKEN(anon_sym_Enlarama);
      END_STATE();
    case 3334:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 3335:
      ACCEPT_TOKEN(anon_sym_AufBranch);
      END_STATE();
    case 3336:
      ACCEPT_TOKEN(anon_sym_Enlabranca);
      END_STATE();
    case 3337:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 3338:
      ACCEPT_TOKEN(anon_sym_Yourbranchisuptodatewith_SQUOTE);
      END_STATE();
    case 3339:
      ACCEPT_TOKEN(anon_sym_SQUOTE_DOT);
      END_STATE();
    case 3340:
      ACCEPT_TOKEN(anon_sym_Votrebrancheestjouravec_SQUOTE);
      END_STATE();
    case 3341:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 3342:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 3343:
      ACCEPT_TOKEN(anon_sym_SQUOTE3);
      END_STATE();
    case 3344:
      ACCEPT_TOKEN(anon_sym_Nhnhcabncpnhtvi);
      END_STATE();
    case 3345:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 3346:
      ACCEPT_TOKEN(anon_sym_Dalnz_SQUOTE);
      END_STATE();
    case 3347:
      ACCEPT_TOKEN(anon_sym_SQUOTEilegncel_DOT);
      END_STATE();
    case 3348:
      ACCEPT_TOKEN(anon_sym_Dingrenrjourmed_DQUOTE);
      END_STATE();
    case 3349:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DOT);
      END_STATE();
    case 3350:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 3351:
      ACCEPT_TOKEN(anon_sym_DOT2);
      END_STATE();
    case 3352:
      ACCEPT_TOKEN(anon_sym_Teuramoestatualizadocom_SQUOTE);
      END_STATE();
    case 3353:
      ACCEPT_TOKEN(anon_sym_Twojagajestnabiecoz);
      END_STATE();
    case 3354:
      ACCEPT_TOKEN(anon_sym_SQUOTE4);
      END_STATE();
    case 3355:
      ACCEPT_TOKEN(anon_sym_SQUOTE_DOT2);
      END_STATE();
    case 3356:
      ACCEPT_TOKEN(anon_sym_Iltuobranchaggiornatorispettoa_SQUOTE);
      END_STATE();
    case 3357:
      ACCEPT_TOKEN(anon_sym_CabangAndamutakhirdengan_SQUOTE);
      END_STATE();
    case 3358:
      ACCEPT_TOKEN(anon_sym_Turamaestactualizadacon_SQUOTE);
      END_STATE();
    case 3359:
      ACCEPT_TOKEN(anon_sym_SQUOTE5);
      END_STATE();
    case 3360:
      ACCEPT_TOKEN(anon_sym_IhrBranchistaufdemselbenStandwie_SQUOTE);
      END_STATE();
    case 3361:
      ACCEPT_TOKEN(anon_sym_Lavostrabrancaestaldiaamb);
      END_STATE();
    case 3362:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 3363:
      ACCEPT_TOKEN(anon_sym_DOT3);
      END_STATE();
    case 3364:
      ACCEPT_TOKEN(anon_sym_Yourbranchisbehind_SQUOTE);
      END_STATE();
    case 3365:
      ACCEPT_TOKEN(anon_sym_SQUOTEby);
      END_STATE();
    case 3366:
      ACCEPT_TOKEN(anon_sym_commit_COMMAandcanbefast_DASHforwarded_DOT);
      END_STATE();
    case 3367:
      ACCEPT_TOKEN(anon_sym_commits_COMMAandcanbefast_DASHforwarded_DOT);
      END_STATE();
    case 3368:
      ACCEPT_TOKEN(anon_sym_Votrebrancheestenretardsur_SQUOTE);
      END_STATE();
    case 3369:
      ACCEPT_TOKEN(anon_sym_SQUOTEde);
      END_STATE();
    case 3370:
      ACCEPT_TOKEN(anon_sym_commit_COMMAetpeuttremisejourenavancerapide_DOT);
      END_STATE();
    case 3371:
      ACCEPT_TOKEN(anon_sym_commits_COMMAetpeuttremisejourenavancerapide_DOT);
      END_STATE();
    case 3372:
      ACCEPT_TOKEN(anon_sym_Lavostrabrancaest);
      if (lookahead == 'a') ADVANCE(2302);
      END_STATE();
    case 3373:
      ACCEPT_TOKEN(anon_sym_comissiperdarrerede);
      END_STATE();
    case 3374:
      ACCEPT_TOKEN(anon_sym_COMMAipotavanar_DASHserpidament_DOT);
      END_STATE();
    case 3375:
      ACCEPT_TOKEN(anon_sym_comissionsperdarrerede);
      END_STATE();
    case 3376:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 3377:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 3378:
      ACCEPT_TOKEN(anon_sym_DOT4);
      END_STATE();
    case 3379:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 3380:
      ACCEPT_TOKEN(anon_sym_IhrBranchist);
      if (lookahead == 'a') ADVANCE(2757);
      END_STATE();
    case 3381:
      ACCEPT_TOKEN(anon_sym_Commithinter_SQUOTE);
      END_STATE();
    case 3382:
      ACCEPT_TOKEN(anon_sym_SQUOTE_COMMAundkannvorgespultwerden_DOT);
      END_STATE();
    case 3383:
      ACCEPT_TOKEN(anon_sym_Commitshinter_SQUOTE);
      END_STATE();
    case 3384:
      ACCEPT_TOKEN(anon_sym_SQUOTE6);
      END_STATE();
    case 3385:
      ACCEPT_TOKEN(anon_sym_SQUOTE7);
      END_STATE();
    case 3386:
      ACCEPT_TOKEN(anon_sym_COMMA_DOT);
      END_STATE();
    case 3387:
      ACCEPT_TOKEN(anon_sym_COMMA_DOT2);
      END_STATE();
    case 3388:
      ACCEPT_TOKEN(anon_sym_Turamaestdetrsde_SQUOTE);
      END_STATE();
    case 3389:
      ACCEPT_TOKEN(anon_sym_SQUOTEpor);
      END_STATE();
    case 3390:
      ACCEPT_TOKEN(anon_sym_commit_COMMAypuedeseravanzadarpido_DOT);
      END_STATE();
    case 3391:
      ACCEPT_TOKEN(anon_sym_commits_COMMAypuedeseravanzadarpido_DOT);
      END_STATE();
    case 3392:
      ACCEPT_TOKEN(anon_sym_CabangAndadibelakang_SQUOTE);
      END_STATE();
    case 3393:
      ACCEPT_TOKEN(anon_sym_SQUOTEoleh);
      END_STATE();
    case 3394:
      ACCEPT_TOKEN(anon_sym_komit_COMMAdanbisadimaju_DASHcepatkan_DOT);
      END_STATE();
    case 3395:
      ACCEPT_TOKEN(anon_sym_CabangAndadibelakan_SQUOTE);
      END_STATE();
    case 3396:
      ACCEPT_TOKEN(anon_sym_Iltuobranch_COMMArispettoa_SQUOTE);
      END_STATE();
    case 3397:
      ACCEPT_TOKEN(anon_sym_SQUOTE_COMMAindietrodi);
      END_STATE();
    case 3398:
      ACCEPT_TOKEN(anon_sym_commitenepossoeseguireilfastforward_DOT);
      END_STATE();
    case 3399:
      ACCEPT_TOKEN(anon_sym_SQUOTE8);
      END_STATE();
    case 3400:
      ACCEPT_TOKEN(anon_sym_COMMA_DOT3);
      END_STATE();
    case 3401:
      ACCEPT_TOKEN(anon_sym_Nhnhcabnngngsau);
      END_STATE();
    case 3402:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 3403:
      ACCEPT_TOKEN(anon_sym_lnchuyngiao_COMMAvcthcchuyn_DASHtip_DASHnhanh_DOT);
      END_STATE();
    case 3404:
      ACCEPT_TOKEN(anon_sym_SQUOTEdalndan);
      END_STATE();
    case 3405:
      ACCEPT_TOKEN(anon_sym_ilemegerideveilerisarlabilir_DOT);
      END_STATE();
    case 3406:
      ACCEPT_TOKEN(anon_sym_Dingrenliggerefter_DQUOTE);
      END_STATE();
    case 3407:
      ACCEPT_TOKEN(anon_sym_DQUOTEmed);
      END_STATE();
    case 3408:
      ACCEPT_TOKEN(anon_sym_incheckning_COMMAochkansnabbspolas_DOT);
      END_STATE();
    case 3409:
      ACCEPT_TOKEN(anon_sym_incheckningar_COMMAochkansnabbspolas_DOT);
      END_STATE();
    case 3410:
      ACCEPT_TOKEN(anon_sym_12);
      END_STATE();
    case 3411:
      ACCEPT_TOKEN(anon_sym_13);
      END_STATE();
    case 3412:
      ACCEPT_TOKEN(anon_sym_DOT5);
      END_STATE();
    case 3413:
      ACCEPT_TOKEN(anon_sym_DOT6);
      END_STATE();
    case 3414:
      ACCEPT_TOKEN(anon_sym_DOT7);
      END_STATE();
    case 3415:
      ACCEPT_TOKEN(anon_sym_Teuramoestatrsde_SQUOTE);
      END_STATE();
    case 3416:
      ACCEPT_TOKEN(anon_sym_memria_COMMAepodeseravanado_DOT);
      END_STATE();
    case 3417:
      ACCEPT_TOKEN(anon_sym_memrias_COMMAepodeseravanado_DOT);
      END_STATE();
    case 3418:
      ACCEPT_TOKEN(anon_sym_Twojagajestza);
      END_STATE();
    case 3419:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 3420:
      ACCEPT_TOKEN(anon_sym_zapisimoezostaprzewinita_DOT);
      END_STATE();
    case 3421:
      ACCEPT_TOKEN(anon_sym_zapisyimoezostaprzewinita_DOT);
      END_STATE();
    case 3422:
      ACCEPT_TOKEN(anon_sym_zapiswimoezostaprzewinita_DOT);
      END_STATE();
    case 3423:
      ACCEPT_TOKEN(anon_sym_SQUOTE9);
      END_STATE();
    case 3424:
      ACCEPT_TOKEN(anon_sym_SQUOTE10);
      END_STATE();
    case 3425:
      ACCEPT_TOKEN(anon_sym_14);
      END_STATE();
    case 3426:
      ACCEPT_TOKEN(anon_sym_SQUOTE11);
      END_STATE();
    case 3427:
      ACCEPT_TOKEN(anon_sym_15);
      END_STATE();
    case 3428:
      ACCEPT_TOKEN(anon_sym_Yourbranchisaheadof_SQUOTE);
      END_STATE();
    case 3429:
      ACCEPT_TOKEN(anon_sym_commit_DOT);
      END_STATE();
    case 3430:
      ACCEPT_TOKEN(anon_sym_commits_DOT);
      END_STATE();
    case 3431:
      ACCEPT_TOKEN(anon_sym_Votrebrancheestenavancesur_SQUOTE);
      END_STATE();
    case 3432:
      ACCEPT_TOKEN(anon_sym_SQUOTE12);
      END_STATE();
    case 3433:
      ACCEPT_TOKEN(anon_sym_16);
      END_STATE();
    case 3434:
      ACCEPT_TOKEN(anon_sym_SQUOTE13);
      END_STATE();
    case 3435:
      ACCEPT_TOKEN(anon_sym_17);
      END_STATE();
    case 3436:
      ACCEPT_TOKEN(anon_sym_Nhnhcabnngtrc);
      END_STATE();
    case 3437:
      ACCEPT_TOKEN(anon_sym_lnchuyngiao_DOT);
      END_STATE();
    case 3438:
      ACCEPT_TOKEN(anon_sym_ilemeileride_DOT);
      END_STATE();
    case 3439:
      ACCEPT_TOKEN(anon_sym_Dingrenliggerfre_DQUOTE);
      END_STATE();
    case 3440:
      ACCEPT_TOKEN(anon_sym_incheckning_DOT);
      END_STATE();
    case 3441:
      ACCEPT_TOKEN(anon_sym_incheckningar_DOT);
      END_STATE();
    case 3442:
      ACCEPT_TOKEN(anon_sym_18);
      END_STATE();
    case 3443:
      ACCEPT_TOKEN(anon_sym_DOT8);
      END_STATE();
    case 3444:
      ACCEPT_TOKEN(anon_sym_DOT9);
      END_STATE();
    case 3445:
      ACCEPT_TOKEN(anon_sym_DOT10);
      END_STATE();
    case 3446:
      ACCEPT_TOKEN(anon_sym_Teuramoestfrentede_SQUOTE);
      END_STATE();
    case 3447:
      ACCEPT_TOKEN(anon_sym_memria_DOT);
      END_STATE();
    case 3448:
      ACCEPT_TOKEN(anon_sym_memrias_DOT);
      END_STATE();
    case 3449:
      ACCEPT_TOKEN(anon_sym_Twojagajestdoprzoduwzgldem);
      END_STATE();
    case 3450:
      ACCEPT_TOKEN(anon_sym_zapis_DOT);
      END_STATE();
    case 3451:
      ACCEPT_TOKEN(anon_sym_zapisy_DOT);
      END_STATE();
    case 3452:
      ACCEPT_TOKEN(anon_sym_zapisw_DOT);
      END_STATE();
    case 3453:
      ACCEPT_TOKEN(anon_sym_DOT11);
      END_STATE();
    case 3454:
      ACCEPT_TOKEN(anon_sym_Iltuobranchavantirispettoa_SQUOTE);
      END_STATE();
    case 3455:
      ACCEPT_TOKEN(anon_sym_SQUOTEdi);
      END_STATE();
    case 3456:
      ACCEPT_TOKEN(anon_sym_CabangAndamendahului_SQUOTE);
      END_STATE();
    case 3457:
      ACCEPT_TOKEN(anon_sym_komit_DOT);
      END_STATE();
    case 3458:
      ACCEPT_TOKEN(anon_sym_Turamaestadelantadaa_SQUOTE);
      END_STATE();
    case 3459:
      ACCEPT_TOKEN(anon_sym_SQUOTE14);
      END_STATE();
    case 3460:
      ACCEPT_TOKEN(anon_sym_DOT12);
      END_STATE();
    case 3461:
      ACCEPT_TOKEN(anon_sym_DOT13);
      END_STATE();
    case 3462:
      ACCEPT_TOKEN(anon_sym_Commitvor_SQUOTE);
      END_STATE();
    case 3463:
      ACCEPT_TOKEN(anon_sym_Commitsvor_SQUOTE);
      END_STATE();
    case 3464:
      ACCEPT_TOKEN(anon_sym_comissiperdavantde);
      END_STATE();
    case 3465:
      ACCEPT_TOKEN(anon_sym_comissionsperdavantde);
      END_STATE();
    case 3466:
      ACCEPT_TOKEN(anon_sym_19);
      END_STATE();
    case 3467:
      ACCEPT_TOKEN(anon_sym_20);
      END_STATE();
    case 3468:
      ACCEPT_TOKEN(anon_sym_Youarecurrentlyrebasingbranch_SQUOTE);
      END_STATE();
    case 3469:
      ACCEPT_TOKEN(anon_sym_SQUOTEon_SQUOTE);
      END_STATE();
    case 3470:
      ACCEPT_TOKEN(anon_sym_Voustesentrainderebaserlabranche_SQUOTE);
      END_STATE();
    case 3471:
      ACCEPT_TOKEN(anon_sym_SQUOTEsur_SQUOTE);
      END_STATE();
    case 3472:
      ACCEPT_TOKEN(anon_sym_SQUOTE15);
      END_STATE();
    case 3473:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 3474:
      ACCEPT_TOKEN(anon_sym_SQUOTE16);
      END_STATE();
    case 3475:
      ACCEPT_TOKEN(anon_sym_SQUOTE17);
      END_STATE();
    case 3476:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE2);
      END_STATE();
    case 3477:
      ACCEPT_TOKEN(anon_sym_SQUOTE18);
      END_STATE();
    case 3478:
      ACCEPT_TOKEN(anon_sym_Bnhinnayangthchinvicrebasenhnh);
      END_STATE();
    case 3479:
      ACCEPT_TOKEN(anon_sym_trn);
      END_STATE();
    case 3480:
      ACCEPT_TOKEN(anon_sym_uanda_SQUOTE);
      END_STATE();
    case 3481:
      ACCEPT_TOKEN(anon_sym_SQUOTEdaln_SQUOTE);
      END_STATE();
    case 3482:
      ACCEPT_TOKEN(anon_sym_SQUOTEzerineyenidentemellendiriyorsunuz_DOT);
      END_STATE();
    case 3483:
      ACCEPT_TOKEN(anon_sym_Duhllerpattombaseragrenen_DQUOTE);
      END_STATE();
    case 3484:
      ACCEPT_TOKEN(anon_sym_DQUOTEovanp_DQUOTE);
      END_STATE();
    case 3485:
      ACCEPT_TOKEN(anon_sym_21);
      END_STATE();
    case 3486:
      ACCEPT_TOKEN(anon_sym_22);
      END_STATE();
    case 3487:
      ACCEPT_TOKEN(anon_sym_Estsrebaseandoramo_SQUOTE);
      END_STATE();
    case 3488:
      ACCEPT_TOKEN(anon_sym_SQUOTEsobre_SQUOTE);
      END_STATE();
    case 3489:
      ACCEPT_TOKEN(anon_sym_Przestawiaszwaniega);
      END_STATE();
    case 3490:
      ACCEPT_TOKEN(anon_sym_na);
      END_STATE();
    case 3491:
      ACCEPT_TOKEN(anon_sym_SQUOTE19);
      END_STATE();
    case 3492:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE3);
      END_STATE();
    case 3493:
      ACCEPT_TOKEN(anon_sym_SQUOTE_DOT3);
      END_STATE();
    case 3494:
      ACCEPT_TOKEN(anon_sym_Attualmentestaieseguendoilrebasedelbranch_SQUOTE);
      END_STATE();
    case 3495:
      ACCEPT_TOKEN(anon_sym_SQUOTEsu_SQUOTE);
      END_STATE();
    case 3496:
      ACCEPT_TOKEN(anon_sym_Andasedangmendasarkanulangcabang_SQUOTE);
      END_STATE();
    case 3497:
      ACCEPT_TOKEN(anon_sym_SQUOTEpada_SQUOTE);
      END_STATE();
    case 3498:
      ACCEPT_TOKEN(anon_sym_Estsaplicandounrebasedelarama_SQUOTE);
      END_STATE();
    case 3499:
      ACCEPT_TOKEN(anon_sym_DOT14);
      END_STATE();
    case 3500:
      ACCEPT_TOKEN(anon_sym_rebase_SQUOTE);
      END_STATE();
    case 3501:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE4);
      END_STATE();
    case 3502:
      ACCEPT_TOKEN(anon_sym_SiesindgeradebeimRebasevonBranch_SQUOTE);
      END_STATE();
    case 3503:
      ACCEPT_TOKEN(anon_sym_SQUOTEauf_SQUOTE);
      END_STATE();
    case 3504:
      ACCEPT_TOKEN(anon_sym_Actualmentesteufentrebasedelabranca);
      END_STATE();
    case 3505:
      ACCEPT_TOKEN(anon_sym_en);
      END_STATE();
    case 3506:
      ACCEPT_TOKEN(anon_sym_23);
      END_STATE();
    case 3507:
      ACCEPT_TOKEN(anon_sym_24);
      END_STATE();
    case 3508:
      ACCEPT_TOKEN(anon_sym_interactiverebaseinprogress_SEMIonto);
      END_STATE();
    case 3509:
      ACCEPT_TOKEN(anon_sym_rebasageinteractifencours_SEMIsur);
      END_STATE();
    case 3510:
      ACCEPT_TOKEN(anon_sym_25);
      END_STATE();
    case 3511:
      ACCEPT_TOKEN(anon_sym_rebaseinteractiuencurs_SEMIsobre);
      END_STATE();
    case 3512:
      ACCEPT_TOKEN(anon_sym_interaktivesRebaseimGange_SEMIauf);
      END_STATE();
    case 3513:
      ACCEPT_TOKEN(anon_sym_rebase_COMMA);
      END_STATE();
    case 3514:
      ACCEPT_TOKEN(anon_sym_rebaseinteractivoenprogreso_SEMIsobre);
      END_STATE();
    case 3515:
      ACCEPT_TOKEN(anon_sym_sedangmendasarkanulanginteraktif_SEMIke);
      END_STATE();
    case 3516:
      ACCEPT_TOKEN(anon_sym_rebaseinterattivoincorsosu);
      END_STATE();
    case 3517:
      ACCEPT_TOKEN(anon_sym_DOT15);
      END_STATE();
    case 3518:
      ACCEPT_TOKEN(anon_sym_trwainteraktywneprzestawianiena);
      END_STATE();
    case 3519:
      ACCEPT_TOKEN(anon_sym_rebaseinterativoemcurso_SEMIsobre);
      END_STATE();
    case 3520:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 3521:
      ACCEPT_TOKEN(anon_sym_interaktivombaseringpgr_SEMIovanp);
      END_STATE();
    case 3522:
      ACCEPT_TOKEN(anon_sym_ununzerineetkileimliyenidentemellendirmesrmekte_COLON);
      END_STATE();
    case 3523:
      ACCEPT_TOKEN(anon_sym_rebasechtngtcangcthchin_SEMIlntrn);
      END_STATE();
    case 3524:
      ACCEPT_TOKEN(anon_sym_26);
      END_STATE();
    case 3525:
      ACCEPT_TOKEN(anon_sym_27);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 1215},
  [2] = {.lex_state = 1, .external_lex_state = 2},
  [3] = {.lex_state = 2, .external_lex_state = 2},
  [4] = {.lex_state = 1215, .external_lex_state = 3},
  [5] = {.lex_state = 1215, .external_lex_state = 3},
  [6] = {.lex_state = 1215, .external_lex_state = 3},
  [7] = {.lex_state = 1215, .external_lex_state = 3},
  [8] = {.lex_state = 1215, .external_lex_state = 3},
  [9] = {.lex_state = 1216, .external_lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 1215, .external_lex_state = 3},
  [12] = {.lex_state = 1215, .external_lex_state = 3},
  [13] = {.lex_state = 1215, .external_lex_state = 3},
  [14] = {.lex_state = 1215, .external_lex_state = 3},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 1217},
  [17] = {.lex_state = 1217},
  [18] = {.lex_state = 1215},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 1217},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 12},
  [27] = {.lex_state = 1217},
  [28] = {.lex_state = 12},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 12},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 12},
  [34] = {.lex_state = 1217},
  [35] = {.lex_state = 12},
  [36] = {.lex_state = 216},
  [37] = {.lex_state = 12},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 12},
  [41] = {.lex_state = 216},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 12},
  [44] = {.lex_state = 12},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 217},
  [49] = {.lex_state = 217},
  [50] = {.lex_state = 217},
  [51] = {.lex_state = 217},
  [52] = {.lex_state = 217},
  [53] = {.lex_state = 217},
  [54] = {.lex_state = 217},
  [55] = {.lex_state = 217},
  [56] = {.lex_state = 217},
  [57] = {.lex_state = 217},
  [58] = {.lex_state = 217},
  [59] = {.lex_state = 217},
  [60] = {.lex_state = 217},
  [61] = {.lex_state = 217},
  [62] = {.lex_state = 217},
  [63] = {.lex_state = 217},
  [64] = {.lex_state = 217},
  [65] = {.lex_state = 217},
  [66] = {.lex_state = 217},
  [67] = {.lex_state = 217},
  [68] = {.lex_state = 217},
  [69] = {.lex_state = 217},
  [70] = {.lex_state = 217},
  [71] = {.lex_state = 217},
  [72] = {.lex_state = 217},
  [73] = {.lex_state = 217},
  [74] = {.lex_state = 217},
  [75] = {.lex_state = 217},
  [76] = {.lex_state = 217},
  [77] = {.lex_state = 217},
  [78] = {.lex_state = 217},
  [79] = {.lex_state = 217},
  [80] = {.lex_state = 217},
  [81] = {.lex_state = 217},
  [82] = {.lex_state = 217},
  [83] = {.lex_state = 217},
  [84] = {.lex_state = 217},
  [85] = {.lex_state = 217},
  [86] = {.lex_state = 1217},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 1217},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 12},
  [96] = {.lex_state = 12},
  [97] = {.lex_state = 12},
  [98] = {.lex_state = 12},
  [99] = {.lex_state = 12},
  [100] = {.lex_state = 12},
  [101] = {.lex_state = 12},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 12},
  [104] = {.lex_state = 12},
  [105] = {.lex_state = 12},
  [106] = {.lex_state = 12},
  [107] = {.lex_state = 12},
  [108] = {.lex_state = 12},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 213},
  [111] = {.lex_state = 12},
  [112] = {.lex_state = 12},
  [113] = {.lex_state = 12},
  [114] = {.lex_state = 12},
  [115] = {.lex_state = 12},
  [116] = {.lex_state = 12},
  [117] = {.lex_state = 12},
  [118] = {.lex_state = 12},
  [119] = {.lex_state = 12},
  [120] = {.lex_state = 12},
  [121] = {.lex_state = 213},
  [122] = {.lex_state = 12},
  [123] = {.lex_state = 12},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 12},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 12},
  [129] = {.lex_state = 12},
  [130] = {.lex_state = 213},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 12},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 213},
  [136] = {.lex_state = 12},
  [137] = {.lex_state = 12},
  [138] = {.lex_state = 12},
  [139] = {.lex_state = 12},
  [140] = {.lex_state = 12},
  [141] = {.lex_state = 12},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 12},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 217},
  [146] = {.lex_state = 217},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 217},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 217},
  [151] = {.lex_state = 217},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 12},
  [155] = {.lex_state = 12},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 12},
  [160] = {.lex_state = 12},
  [161] = {.lex_state = 12},
  [162] = {.lex_state = 217},
  [163] = {.lex_state = 217},
  [164] = {.lex_state = 217},
  [165] = {.lex_state = 217},
  [166] = {.lex_state = 217},
  [167] = {.lex_state = 217},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 12},
  [170] = {.lex_state = 12},
  [171] = {.lex_state = 12},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 12},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 12},
  [176] = {.lex_state = 12},
  [177] = {.lex_state = 12},
  [178] = {.lex_state = 12},
  [179] = {.lex_state = 12},
  [180] = {.lex_state = 12},
  [181] = {.lex_state = 12},
  [182] = {.lex_state = 12},
  [183] = {.lex_state = 12},
  [184] = {.lex_state = 12},
  [185] = {.lex_state = 12},
  [186] = {.lex_state = 12},
  [187] = {.lex_state = 12},
  [188] = {.lex_state = 12},
  [189] = {.lex_state = 12},
  [190] = {.lex_state = 217},
  [191] = {.lex_state = 217},
  [192] = {.lex_state = 217},
  [193] = {.lex_state = 217},
  [194] = {.lex_state = 217},
  [195] = {.lex_state = 217},
  [196] = {.lex_state = 217},
  [197] = {.lex_state = 217},
  [198] = {.lex_state = 217},
  [199] = {.lex_state = 217},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 12},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 12},
  [205] = {.lex_state = 217},
  [206] = {.lex_state = 217},
  [207] = {.lex_state = 217},
  [208] = {.lex_state = 12},
  [209] = {.lex_state = 12},
  [210] = {.lex_state = 12},
  [211] = {.lex_state = 12},
  [212] = {.lex_state = 12},
  [213] = {.lex_state = 12},
  [214] = {.lex_state = 217},
  [215] = {.lex_state = 217},
  [216] = {.lex_state = 12},
  [217] = {.lex_state = 12},
  [218] = {.lex_state = 12},
  [219] = {.lex_state = 217},
  [220] = {.lex_state = 217},
  [221] = {.lex_state = 217},
  [222] = {.lex_state = 217},
  [223] = {.lex_state = 12},
  [224] = {.lex_state = 12},
  [225] = {.lex_state = 217},
  [226] = {.lex_state = 12},
  [227] = {.lex_state = 12},
  [228] = {.lex_state = 12},
  [229] = {.lex_state = 217},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 12},
  [234] = {.lex_state = 12},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 12},
  [237] = {.lex_state = 12},
  [238] = {.lex_state = 12},
  [239] = {.lex_state = 12},
  [240] = {.lex_state = 12},
  [241] = {.lex_state = 12},
  [242] = {.lex_state = 12},
  [243] = {.lex_state = 12},
  [244] = {.lex_state = 12},
  [245] = {.lex_state = 12},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 216},
  [248] = {.lex_state = 0},
  [249] = {(TSStateId)(-1)},
  [250] = {(TSStateId)(-1)},
  [251] = {(TSStateId)(-1)},
};

enum {
  ts_external_token__trailer_token = 0,
  ts_external_token__comment_title = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__trailer_token] = sym__trailer_token,
  [ts_external_token__comment_title] = sym__comment_title,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__trailer_token] = true,
    [ts_external_token__comment_title] = true,
  },
  [2] = {
    [ts_external_token__comment_title] = true,
  },
  [3] = {
    [ts_external_token__trailer_token] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_token1] = ACTIONS(1),
    [aux_sym_subject_token1] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(1),
    [aux_sym__change_token1] = ACTIONS(1),
    [anon_sym_DOT14] = ACTIONS(1),
    [sym__trailer_token] = ACTIONS(1),
    [sym__comment_title] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(126),
    [sym_subject] = STATE(235),
    [sym_comment] = STATE(1),
    [sym__scissor] = STATE(232),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_source_token1] = ACTIONS(7),
    [aux_sym_subject_token1] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [aux_sym__scissor_token1] = ACTIONS(13),
  },
  [2] = {
    [sym_comment] = STATE(2),
    [sym__change] = STATE(231),
    [sym__date] = STATE(231),
    [sym__onbranch] = STATE(231),
    [sym__uptodate] = STATE(231),
    [sym__behind] = STATE(231),
    [sym__ahead] = STATE(231),
    [sym__rebasing] = STATE(231),
    [sym__interactive_rebasing] = STATE(231),
    [aux_sym_source_token1] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(17),
    [aux_sym_comment_token2] = ACTIONS(19),
    [aux_sym__change_token1] = ACTIONS(21),
    [anon_sym_Date_COLON] = ACTIONS(23),
    [anon_sym_Date_COLON2] = ACTIONS(23),
    [anon_sym_] = ACTIONS(23),
    [anon_sym_Ngythng_COLON] = ACTIONS(23),
    [anon_sym_Tarih_COLON] = ACTIONS(23),
    [anon_sym_Datum_COLON] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_Data_COLON] = ACTIONS(23),
    [anon_sym_COLON2] = ACTIONS(23),
    [anon_sym_Tanggal_COLON] = ACTIONS(23),
    [anon_sym_Fecha_COLON] = ACTIONS(23),
    [anon_sym_COLON3] = ACTIONS(23),
    [anon_sym_Onbranch] = ACTIONS(25),
    [anon_sym_Surlabranche] = ACTIONS(25),
    [anon_sym_COLON4] = ACTIONS(25),
    [anon_sym_Pgrenen] = ACTIONS(25),
    [anon_sym_zerindebulunulandal_COLON] = ACTIONS(25),
    [anon_sym_Trnnhnh] = ACTIONS(25),
    [anon_sym_2] = ACTIONS(25),
    [anon_sym_Emramo] = ACTIONS(25),
    [anon_sym_Nagazi] = ACTIONS(25),
    [anon_sym_3] = ACTIONS(25),
    [anon_sym_Sulbranch] = ACTIONS(25),
    [anon_sym_Padacabang] = ACTIONS(25),
    [anon_sym_Enlarama] = ACTIONS(25),
    [anon_sym_4] = ACTIONS(25),
    [anon_sym_AufBranch] = ACTIONS(25),
    [anon_sym_Enlabranca] = ACTIONS(25),
    [anon_sym_5] = ACTIONS(25),
    [anon_sym_Yourbranchisuptodatewith_SQUOTE] = ACTIONS(27),
    [anon_sym_Votrebrancheestjouravec_SQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE3] = ACTIONS(29),
    [anon_sym_Nhnhcabncpnhtvi] = ACTIONS(31),
    [anon_sym_Dalnz_SQUOTE] = ACTIONS(33),
    [anon_sym_Dingrenrjourmed_DQUOTE] = ACTIONS(35),
    [anon_sym_6] = ACTIONS(37),
    [anon_sym_Teuramoestatualizadocom_SQUOTE] = ACTIONS(27),
    [anon_sym_Twojagajestnabiecoz] = ACTIONS(31),
    [anon_sym_SQUOTE4] = ACTIONS(39),
    [anon_sym_Iltuobranchaggiornatorispettoa_SQUOTE] = ACTIONS(27),
    [anon_sym_CabangAndamutakhirdengan_SQUOTE] = ACTIONS(27),
    [anon_sym_Turamaestactualizadacon_SQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE5] = ACTIONS(27),
    [anon_sym_IhrBranchistaufdemselbenStandwie_SQUOTE] = ACTIONS(27),
    [anon_sym_Lavostrabrancaestaldiaamb] = ACTIONS(37),
    [anon_sym_7] = ACTIONS(41),
    [anon_sym_Yourbranchisbehind_SQUOTE] = ACTIONS(43),
    [anon_sym_Votrebrancheestenretardsur_SQUOTE] = ACTIONS(45),
    [anon_sym_Lavostrabrancaest] = ACTIONS(47),
    [anon_sym_8] = ACTIONS(49),
    [anon_sym_IhrBranchist] = ACTIONS(51),
    [anon_sym_SQUOTE6] = ACTIONS(53),
    [anon_sym_Turamaestdetrsde_SQUOTE] = ACTIONS(55),
    [anon_sym_CabangAndadibelakang_SQUOTE] = ACTIONS(57),
    [anon_sym_CabangAndadibelakan_SQUOTE] = ACTIONS(57),
    [anon_sym_Iltuobranch_COMMArispettoa_SQUOTE] = ACTIONS(59),
    [anon_sym_Nhnhcabnngngsau] = ACTIONS(61),
    [anon_sym_Dingrenliggerefter_DQUOTE] = ACTIONS(63),
    [anon_sym_12] = ACTIONS(65),
    [anon_sym_Teuramoestatrsde_SQUOTE] = ACTIONS(67),
    [anon_sym_Twojagajestza] = ACTIONS(69),
    [anon_sym_SQUOTE9] = ACTIONS(71),
    [anon_sym_SQUOTE11] = ACTIONS(73),
    [anon_sym_Yourbranchisaheadof_SQUOTE] = ACTIONS(75),
    [anon_sym_Votrebrancheestenavancesur_SQUOTE] = ACTIONS(77),
    [anon_sym_SQUOTE12] = ACTIONS(79),
    [anon_sym_SQUOTE13] = ACTIONS(81),
    [anon_sym_Nhnhcabnngtrc] = ACTIONS(83),
    [anon_sym_Dingrenliggerfre_DQUOTE] = ACTIONS(85),
    [anon_sym_18] = ACTIONS(87),
    [anon_sym_Teuramoestfrentede_SQUOTE] = ACTIONS(89),
    [anon_sym_Twojagajestdoprzoduwzgldem] = ACTIONS(91),
    [anon_sym_Iltuobranchavantirispettoa_SQUOTE] = ACTIONS(93),
    [anon_sym_CabangAndamendahului_SQUOTE] = ACTIONS(95),
    [anon_sym_Turamaestadelantadaa_SQUOTE] = ACTIONS(97),
    [anon_sym_SQUOTE14] = ACTIONS(99),
    [anon_sym_Youarecurrentlyrebasingbranch_SQUOTE] = ACTIONS(101),
    [anon_sym_Voustesentrainderebaserlabranche_SQUOTE] = ACTIONS(103),
    [anon_sym_SQUOTE15] = ACTIONS(105),
    [anon_sym_SQUOTE17] = ACTIONS(107),
    [anon_sym_Bnhinnayangthchinvicrebasenhnh] = ACTIONS(109),
    [anon_sym_uanda_SQUOTE] = ACTIONS(111),
    [anon_sym_Duhllerpattombaseragrenen_DQUOTE] = ACTIONS(113),
    [anon_sym_21] = ACTIONS(115),
    [anon_sym_Estsrebaseandoramo_SQUOTE] = ACTIONS(117),
    [anon_sym_Przestawiaszwaniega] = ACTIONS(119),
    [anon_sym_SQUOTE19] = ACTIONS(121),
    [anon_sym_Attualmentestaieseguendoilrebasedelbranch_SQUOTE] = ACTIONS(123),
    [anon_sym_Andasedangmendasarkanulangcabang_SQUOTE] = ACTIONS(125),
    [anon_sym_Estsaplicandounrebasedelarama_SQUOTE] = ACTIONS(127),
    [anon_sym_rebase_SQUOTE] = ACTIONS(129),
    [anon_sym_SiesindgeradebeimRebasevonBranch_SQUOTE] = ACTIONS(131),
    [anon_sym_Actualmentesteufentrebasedelabranca] = ACTIONS(133),
    [anon_sym_23] = ACTIONS(135),
    [anon_sym_interactiverebaseinprogress_SEMIonto] = ACTIONS(137),
    [anon_sym_rebasageinteractifencours_SEMIsur] = ACTIONS(137),
    [anon_sym_25] = ACTIONS(137),
    [anon_sym_rebaseinteractiuencurs_SEMIsobre] = ACTIONS(137),
    [anon_sym_interaktivesRebaseimGange_SEMIauf] = ACTIONS(137),
    [anon_sym_rebase_COMMA] = ACTIONS(137),
    [anon_sym_rebaseinteractivoenprogreso_SEMIsobre] = ACTIONS(137),
    [anon_sym_sedangmendasarkanulanginteraktif_SEMIke] = ACTIONS(137),
    [anon_sym_rebaseinterattivoincorsosu] = ACTIONS(137),
    [anon_sym_DOT15] = ACTIONS(137),
    [anon_sym_trwainteraktywneprzestawianiena] = ACTIONS(137),
    [anon_sym_rebaseinterativoemcurso_SEMIsobre] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_interaktivombaseringpgr_SEMIovanp] = ACTIONS(137),
    [anon_sym_ununzerineetkileimliyenidentemellendirmesrmekte_COLON] = ACTIONS(137),
    [anon_sym_rebasechtngtcangcthchin_SEMIlntrn] = ACTIONS(137),
    [anon_sym_26] = ACTIONS(137),
    [anon_sym_27] = ACTIONS(137),
    [sym__comment_title] = ACTIONS(139),
  },
  [3] = {
    [sym_comment] = STATE(3),
    [sym__change] = STATE(90),
    [sym__date] = STATE(90),
    [sym__onbranch] = STATE(90),
    [sym__uptodate] = STATE(90),
    [sym__behind] = STATE(90),
    [sym__ahead] = STATE(90),
    [sym__rebasing] = STATE(90),
    [sym__interactive_rebasing] = STATE(90),
    [aux_sym_source_token1] = ACTIONS(141),
    [anon_sym_POUND] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(143),
    [aux_sym__change_token1] = ACTIONS(21),
    [anon_sym_Date_COLON] = ACTIONS(23),
    [anon_sym_Date_COLON2] = ACTIONS(23),
    [anon_sym_] = ACTIONS(23),
    [anon_sym_Ngythng_COLON] = ACTIONS(23),
    [anon_sym_Tarih_COLON] = ACTIONS(23),
    [anon_sym_Datum_COLON] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_Data_COLON] = ACTIONS(23),
    [anon_sym_COLON2] = ACTIONS(23),
    [anon_sym_Tanggal_COLON] = ACTIONS(23),
    [anon_sym_Fecha_COLON] = ACTIONS(23),
    [anon_sym_COLON3] = ACTIONS(23),
    [anon_sym_Onbranch] = ACTIONS(25),
    [anon_sym_Surlabranche] = ACTIONS(25),
    [anon_sym_COLON4] = ACTIONS(25),
    [anon_sym_Pgrenen] = ACTIONS(25),
    [anon_sym_zerindebulunulandal_COLON] = ACTIONS(25),
    [anon_sym_Trnnhnh] = ACTIONS(25),
    [anon_sym_2] = ACTIONS(25),
    [anon_sym_Emramo] = ACTIONS(25),
    [anon_sym_Nagazi] = ACTIONS(25),
    [anon_sym_3] = ACTIONS(25),
    [anon_sym_Sulbranch] = ACTIONS(25),
    [anon_sym_Padacabang] = ACTIONS(25),
    [anon_sym_Enlarama] = ACTIONS(25),
    [anon_sym_4] = ACTIONS(25),
    [anon_sym_AufBranch] = ACTIONS(25),
    [anon_sym_Enlabranca] = ACTIONS(25),
    [anon_sym_5] = ACTIONS(25),
    [anon_sym_Yourbranchisuptodatewith_SQUOTE] = ACTIONS(27),
    [anon_sym_Votrebrancheestjouravec_SQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE3] = ACTIONS(29),
    [anon_sym_Nhnhcabncpnhtvi] = ACTIONS(31),
    [anon_sym_Dalnz_SQUOTE] = ACTIONS(33),
    [anon_sym_Dingrenrjourmed_DQUOTE] = ACTIONS(35),
    [anon_sym_6] = ACTIONS(37),
    [anon_sym_Teuramoestatualizadocom_SQUOTE] = ACTIONS(27),
    [anon_sym_Twojagajestnabiecoz] = ACTIONS(31),
    [anon_sym_SQUOTE4] = ACTIONS(39),
    [anon_sym_Iltuobranchaggiornatorispettoa_SQUOTE] = ACTIONS(27),
    [anon_sym_CabangAndamutakhirdengan_SQUOTE] = ACTIONS(27),
    [anon_sym_Turamaestactualizadacon_SQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE5] = ACTIONS(27),
    [anon_sym_IhrBranchistaufdemselbenStandwie_SQUOTE] = ACTIONS(27),
    [anon_sym_Lavostrabrancaestaldiaamb] = ACTIONS(37),
    [anon_sym_7] = ACTIONS(41),
    [anon_sym_Yourbranchisbehind_SQUOTE] = ACTIONS(43),
    [anon_sym_Votrebrancheestenretardsur_SQUOTE] = ACTIONS(45),
    [anon_sym_Lavostrabrancaest] = ACTIONS(47),
    [anon_sym_8] = ACTIONS(49),
    [anon_sym_IhrBranchist] = ACTIONS(51),
    [anon_sym_SQUOTE6] = ACTIONS(53),
    [anon_sym_Turamaestdetrsde_SQUOTE] = ACTIONS(55),
    [anon_sym_CabangAndadibelakang_SQUOTE] = ACTIONS(57),
    [anon_sym_CabangAndadibelakan_SQUOTE] = ACTIONS(57),
    [anon_sym_Iltuobranch_COMMArispettoa_SQUOTE] = ACTIONS(59),
    [anon_sym_Nhnhcabnngngsau] = ACTIONS(61),
    [anon_sym_Dingrenliggerefter_DQUOTE] = ACTIONS(63),
    [anon_sym_12] = ACTIONS(65),
    [anon_sym_Teuramoestatrsde_SQUOTE] = ACTIONS(67),
    [anon_sym_Twojagajestza] = ACTIONS(69),
    [anon_sym_SQUOTE9] = ACTIONS(71),
    [anon_sym_SQUOTE11] = ACTIONS(73),
    [anon_sym_Yourbranchisaheadof_SQUOTE] = ACTIONS(75),
    [anon_sym_Votrebrancheestenavancesur_SQUOTE] = ACTIONS(77),
    [anon_sym_SQUOTE12] = ACTIONS(79),
    [anon_sym_SQUOTE13] = ACTIONS(81),
    [anon_sym_Nhnhcabnngtrc] = ACTIONS(83),
    [anon_sym_Dingrenliggerfre_DQUOTE] = ACTIONS(85),
    [anon_sym_18] = ACTIONS(87),
    [anon_sym_Teuramoestfrentede_SQUOTE] = ACTIONS(89),
    [anon_sym_Twojagajestdoprzoduwzgldem] = ACTIONS(91),
    [anon_sym_Iltuobranchavantirispettoa_SQUOTE] = ACTIONS(93),
    [anon_sym_CabangAndamendahului_SQUOTE] = ACTIONS(95),
    [anon_sym_Turamaestadelantadaa_SQUOTE] = ACTIONS(97),
    [anon_sym_SQUOTE14] = ACTIONS(99),
    [anon_sym_Youarecurrentlyrebasingbranch_SQUOTE] = ACTIONS(101),
    [anon_sym_Voustesentrainderebaserlabranche_SQUOTE] = ACTIONS(103),
    [anon_sym_SQUOTE15] = ACTIONS(105),
    [anon_sym_SQUOTE17] = ACTIONS(107),
    [anon_sym_Bnhinnayangthchinvicrebasenhnh] = ACTIONS(109),
    [anon_sym_uanda_SQUOTE] = ACTIONS(111),
    [anon_sym_Duhllerpattombaseragrenen_DQUOTE] = ACTIONS(113),
    [anon_sym_21] = ACTIONS(115),
    [anon_sym_Estsrebaseandoramo_SQUOTE] = ACTIONS(117),
    [anon_sym_Przestawiaszwaniega] = ACTIONS(119),
    [anon_sym_SQUOTE19] = ACTIONS(121),
    [anon_sym_Attualmentestaieseguendoilrebasedelbranch_SQUOTE] = ACTIONS(123),
    [anon_sym_Andasedangmendasarkanulangcabang_SQUOTE] = ACTIONS(125),
    [anon_sym_Estsaplicandounrebasedelarama_SQUOTE] = ACTIONS(127),
    [anon_sym_rebase_SQUOTE] = ACTIONS(129),
    [anon_sym_SiesindgeradebeimRebasevonBranch_SQUOTE] = ACTIONS(131),
    [anon_sym_Actualmentesteufentrebasedelabranca] = ACTIONS(133),
    [anon_sym_23] = ACTIONS(135),
    [anon_sym_interactiverebaseinprogress_SEMIonto] = ACTIONS(137),
    [anon_sym_rebasageinteractifencours_SEMIsur] = ACTIONS(137),
    [anon_sym_25] = ACTIONS(137),
    [anon_sym_rebaseinteractiuencurs_SEMIsobre] = ACTIONS(137),
    [anon_sym_interaktivesRebaseimGange_SEMIauf] = ACTIONS(137),
    [anon_sym_rebase_COMMA] = ACTIONS(137),
    [anon_sym_rebaseinteractivoenprogreso_SEMIsobre] = ACTIONS(137),
    [anon_sym_sedangmendasarkanulanginteraktif_SEMIke] = ACTIONS(137),
    [anon_sym_rebaseinterattivoincorsosu] = ACTIONS(137),
    [anon_sym_DOT15] = ACTIONS(137),
    [anon_sym_trwainteraktywneprzestawianiena] = ACTIONS(137),
    [anon_sym_rebaseinterativoemcurso_SEMIsobre] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_interaktivombaseringpgr_SEMIovanp] = ACTIONS(137),
    [anon_sym_ununzerineetkileimliyenidentemellendirmesrmekte_COLON] = ACTIONS(137),
    [anon_sym_rebasechtngtcangcthchin_SEMIlntrn] = ACTIONS(137),
    [anon_sym_26] = ACTIONS(137),
    [anon_sym_27] = ACTIONS(137),
    [sym__comment_title] = ACTIONS(145),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      aux_sym__scissor_token1,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 1,
      aux_sym_source_token1,
    ACTIONS(151), 1,
      aux_sym_subject_token1,
    ACTIONS(153), 1,
      sym__trailer_token,
    STATE(4), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_source_repeat1,
    STATE(12), 1,
      sym__body_line,
    STATE(87), 1,
      sym__scissor,
    STATE(11), 2,
      sym_message,
      sym_trailer,
  [35] = 11,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      aux_sym__scissor_token1,
    ACTIONS(149), 1,
      aux_sym_source_token1,
    ACTIONS(151), 1,
      aux_sym_subject_token1,
    ACTIONS(153), 1,
      sym__trailer_token,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_source_repeat1,
    STATE(12), 1,
      sym__body_line,
    STATE(200), 1,
      sym__scissor,
    STATE(11), 2,
      sym_message,
      sym_trailer,
  [70] = 11,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      aux_sym__scissor_token1,
    ACTIONS(149), 1,
      aux_sym_source_token1,
    ACTIONS(151), 1,
      aux_sym_subject_token1,
    ACTIONS(153), 1,
      sym__trailer_token,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_source_repeat1,
    STATE(12), 1,
      sym__body_line,
    STATE(246), 1,
      sym__scissor,
    STATE(11), 2,
      sym_message,
      sym_trailer,
  [105] = 11,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      aux_sym__scissor_token1,
    ACTIONS(149), 1,
      aux_sym_source_token1,
    ACTIONS(151), 1,
      aux_sym_subject_token1,
    ACTIONS(153), 1,
      sym__trailer_token,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_source_repeat1,
    STATE(12), 1,
      sym__body_line,
    STATE(147), 1,
      sym__scissor,
    STATE(11), 2,
      sym_message,
      sym_trailer,
  [140] = 8,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      aux_sym_source_token1,
    ACTIONS(166), 1,
      aux_sym_subject_token1,
    ACTIONS(169), 1,
      sym__trailer_token,
    STATE(12), 1,
      sym__body_line,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      aux_sym__scissor_token1,
    STATE(8), 2,
      sym_comment,
      aux_sym_source_repeat1,
    STATE(11), 2,
      sym_message,
      sym_trailer,
  [168] = 5,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(174), 1,
      aux_sym_subject_token1,
    ACTIONS(176), 1,
      aux_sym_subject_token3,
    STATE(9), 1,
      sym_comment,
    ACTIONS(172), 4,
      sym__trailer_token,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__scissor_token1,
  [187] = 7,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(178), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      aux_sym_comment_token2,
    ACTIONS(182), 1,
      aux_sym__change_token2,
    ACTIONS(184), 1,
      aux_sym__filepath_token1,
    STATE(10), 1,
      sym_comment,
    STATE(91), 1,
      sym__filepath,
  [209] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    STATE(11), 1,
      sym_comment,
    ACTIONS(186), 5,
      sym__trailer_token,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_subject_token1,
      aux_sym__scissor_token1,
  [223] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    STATE(12), 1,
      sym_comment,
    ACTIONS(188), 5,
      sym__trailer_token,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_subject_token1,
      aux_sym__scissor_token1,
  [237] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    STATE(13), 1,
      sym_comment,
    ACTIONS(190), 5,
      sym__trailer_token,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_subject_token1,
      aux_sym__scissor_token1,
  [251] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    STATE(14), 1,
      sym_comment,
    ACTIONS(192), 5,
      sym__trailer_token,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_subject_token1,
      aux_sym__scissor_token1,
  [265] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(15), 1,
      sym_comment,
    ACTIONS(194), 2,
      anon_sym_comissiperdarrerede,
      anon_sym_comissionsperdarrerede,
    ACTIONS(196), 2,
      anon_sym_comissiperdavantde,
      anon_sym_comissionsperdavantde,
  [280] = 6,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    ACTIONS(200), 1,
      aux_sym_source_token1,
    ACTIONS(202), 1,
      aux_sym_subject_token3,
    STATE(16), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym__scissor_repeat1,
  [299] = 6,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(200), 1,
      aux_sym_source_token1,
    ACTIONS(202), 1,
      aux_sym_subject_token3,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      aux_sym__scissor_repeat1,
    STATE(17), 1,
      sym_comment,
  [318] = 6,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      aux_sym__scissor_token1,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 1,
      aux_sym_source_token1,
    STATE(18), 1,
      sym_comment,
    STATE(147), 1,
      sym__scissor,
  [337] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(19), 1,
      sym_comment,
    ACTIONS(208), 2,
      anon_sym_9,
      anon_sym_10,
    ACTIONS(210), 2,
      anon_sym_19,
      anon_sym_20,
  [352] = 5,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    ACTIONS(214), 1,
      aux_sym_source_token1,
    ACTIONS(217), 1,
      aux_sym_subject_token3,
    STATE(20), 2,
      sym_comment,
      aux_sym__scissor_repeat1,
  [369] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(21), 1,
      sym_comment,
    ACTIONS(220), 2,
      anon_sym_Commithinter_SQUOTE,
      anon_sym_Commitshinter_SQUOTE,
    ACTIONS(222), 2,
      anon_sym_Commitvor_SQUOTE,
      anon_sym_Commitsvor_SQUOTE,
  [384] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(22), 1,
      sym_comment,
    ACTIONS(224), 3,
      anon_sym_zapis_DOT,
      anon_sym_zapisy_DOT,
      anon_sym_zapisw_DOT,
  [396] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_comment,
    ACTIONS(226), 3,
      anon_sym_DOT5,
      anon_sym_DOT6,
      anon_sym_DOT7,
  [408] = 5,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(184), 1,
      aux_sym__filepath_token1,
    ACTIONS(228), 1,
      aux_sym_comment_token1,
    STATE(24), 1,
      sym_comment,
    STATE(153), 1,
      sym__filepath,
  [424] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(25), 1,
      sym_comment,
    ACTIONS(224), 3,
      anon_sym_DOT8,
      anon_sym_DOT9,
      anon_sym_DOT10,
  [436] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(26), 1,
      sym_comment,
    ACTIONS(226), 3,
      anon_sym_zapisimoezostaprzewinita_DOT,
      anon_sym_zapisyimoezostaprzewinita_DOT,
      anon_sym_zapiswimoezostaprzewinita_DOT,
  [448] = 4,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      aux_sym_subject_token3,
    STATE(27), 1,
      sym_comment,
    ACTIONS(230), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [462] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(28), 1,
      sym_comment,
    ACTIONS(226), 2,
      anon_sym_COMMA_DOT,
      anon_sym_COMMA_DOT2,
  [473] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(29), 1,
      sym_comment,
    ACTIONS(226), 2,
      anon_sym_commit_COMMAetpeuttremisejourenavancerapide_DOT,
      anon_sym_commits_COMMAetpeuttremisejourenavancerapide_DOT,
  [484] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(30), 1,
      sym_comment,
    ACTIONS(226), 2,
      anon_sym_commit_COMMAandcanbefast_DASHforwarded_DOT,
      anon_sym_commits_COMMAandcanbefast_DASHforwarded_DOT,
  [495] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(31), 1,
      sym_comment,
    ACTIONS(226), 2,
      anon_sym_commit_COMMAypuedeseravanzadarpido_DOT,
      anon_sym_commits_COMMAypuedeseravanzadarpido_DOT,
  [506] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(32), 1,
      sym_comment,
    ACTIONS(226), 2,
      anon_sym_incheckning_COMMAochkansnabbspolas_DOT,
      anon_sym_incheckningar_COMMAochkansnabbspolas_DOT,
  [517] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(33), 1,
      sym_comment,
    ACTIONS(226), 2,
      anon_sym_memria_COMMAepodeseravanado_DOT,
      anon_sym_memrias_COMMAepodeseravanado_DOT,
  [528] = 4,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(234), 1,
      aux_sym_source_token1,
    ACTIONS(236), 1,
      aux_sym_subject_token3,
    STATE(34), 1,
      sym_comment,
  [541] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_DOT11,
    ACTIONS(226), 1,
      anon_sym_COMMA_DOT3,
    STATE(35), 1,
      sym_comment,
  [554] = 4,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(184), 1,
      aux_sym__filepath_token1,
    STATE(36), 1,
      sym_comment,
    STATE(202), 1,
      sym__filepath,
  [567] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(37), 1,
      sym_comment,
    ACTIONS(224), 2,
      anon_sym_commit_DOT,
      anon_sym_commits_DOT,
  [578] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_comment,
    ACTIONS(224), 2,
      anon_sym_incheckning_DOT,
      anon_sym_incheckningar_DOT,
  [589] = 4,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(238), 1,
      aux_sym_source_token1,
    ACTIONS(240), 1,
      aux_sym_subject_token2,
    STATE(39), 1,
      sym_comment,
  [602] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(242), 1,
      anon_sym_SQUOTE_DOT2,
    ACTIONS(244), 1,
      anon_sym_SQUOTE8,
    STATE(40), 1,
      sym_comment,
  [615] = 4,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(184), 1,
      aux_sym__filepath_token1,
    STATE(41), 1,
      sym_comment,
    STATE(153), 1,
      sym__filepath,
  [628] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(42), 1,
      sym_comment,
    ACTIONS(224), 2,
      anon_sym_memria_DOT,
      anon_sym_memrias_DOT,
  [639] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(43), 1,
      sym_comment,
    ACTIONS(224), 2,
      anon_sym_DOT12,
      anon_sym_DOT13,
  [650] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_ilemeileride_DOT,
    ACTIONS(226), 1,
      anon_sym_ilemegerideveilerisarlabilir_DOT,
    STATE(44), 1,
      sym_comment,
  [663] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(246), 1,
      aux_sym_source_token1,
    ACTIONS(248), 1,
      aux_sym_comment_token1,
    STATE(45), 1,
      sym_comment,
  [676] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(242), 1,
      anon_sym_SQUOTEilegncel_DOT,
    ACTIONS(250), 1,
      anon_sym_SQUOTEdalndan,
    STATE(46), 1,
      sym_comment,
  [689] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(252), 1,
      anon_sym_SQUOTEon_SQUOTE,
    STATE(47), 1,
      sym_comment,
  [699] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(254), 1,
      sym_branch,
    STATE(48), 1,
      sym_comment,
  [709] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(256), 1,
      sym_branch,
    STATE(49), 1,
      sym_comment,
  [719] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(258), 1,
      sym_branch,
    STATE(50), 1,
      sym_comment,
  [729] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(260), 1,
      sym_branch,
    STATE(51), 1,
      sym_comment,
  [739] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(262), 1,
      sym_branch,
    STATE(52), 1,
      sym_comment,
  [749] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      sym_branch,
    STATE(53), 1,
      sym_comment,
  [759] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(266), 1,
      sym_branch,
    STATE(54), 1,
      sym_comment,
  [769] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(268), 1,
      sym_branch,
    STATE(55), 1,
      sym_comment,
  [779] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(270), 1,
      sym_branch,
    STATE(56), 1,
      sym_comment,
  [789] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(272), 1,
      sym_branch,
    STATE(57), 1,
      sym_comment,
  [799] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(274), 1,
      sym_branch,
    STATE(58), 1,
      sym_comment,
  [809] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(276), 1,
      sym_branch,
    STATE(59), 1,
      sym_comment,
  [819] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(278), 1,
      sym_branch,
    STATE(60), 1,
      sym_comment,
  [829] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(280), 1,
      sym_branch,
    STATE(61), 1,
      sym_comment,
  [839] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(282), 1,
      sym_branch,
    STATE(62), 1,
      sym_comment,
  [849] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(284), 1,
      sym_branch,
    STATE(63), 1,
      sym_comment,
  [859] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      sym_branch,
    STATE(64), 1,
      sym_comment,
  [869] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(288), 1,
      sym_branch,
    STATE(65), 1,
      sym_comment,
  [879] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(290), 1,
      sym_branch,
    STATE(66), 1,
      sym_comment,
  [889] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(292), 1,
      sym_branch,
    STATE(67), 1,
      sym_comment,
  [899] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(294), 1,
      sym_branch,
    STATE(68), 1,
      sym_comment,
  [909] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(296), 1,
      sym_branch,
    STATE(69), 1,
      sym_comment,
  [919] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(298), 1,
      sym_branch,
    STATE(70), 1,
      sym_comment,
  [929] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(300), 1,
      sym_branch,
    STATE(71), 1,
      sym_comment,
  [939] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(302), 1,
      sym_branch,
    STATE(72), 1,
      sym_comment,
  [949] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(304), 1,
      sym_branch,
    STATE(73), 1,
      sym_comment,
  [959] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(306), 1,
      sym_branch,
    STATE(74), 1,
      sym_comment,
  [969] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(308), 1,
      sym_branch,
    STATE(75), 1,
      sym_comment,
  [979] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(310), 1,
      sym_branch,
    STATE(76), 1,
      sym_comment,
  [989] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(312), 1,
      sym_branch,
    STATE(77), 1,
      sym_comment,
  [999] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(314), 1,
      sym_branch,
    STATE(78), 1,
      sym_comment,
  [1009] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(316), 1,
      sym_branch,
    STATE(79), 1,
      sym_comment,
  [1019] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(318), 1,
      sym_branch,
    STATE(80), 1,
      sym_comment,
  [1029] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(320), 1,
      sym_branch,
    STATE(81), 1,
      sym_comment,
  [1039] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(322), 1,
      sym_branch,
    STATE(82), 1,
      sym_comment,
  [1049] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(324), 1,
      sym_branch,
    STATE(83), 1,
      sym_comment,
  [1059] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(326), 1,
      sym_branch,
    STATE(84), 1,
      sym_comment,
  [1069] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(328), 1,
      sym_branch,
    STATE(85), 1,
      sym_comment,
  [1079] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(330), 1,
      aux_sym_subject_token3,
    STATE(86), 1,
      sym_comment,
  [1089] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    STATE(87), 1,
      sym_comment,
  [1099] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(332), 1,
      aux_sym_source_token1,
    STATE(88), 1,
      sym_comment,
  [1109] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(334), 1,
      aux_sym_source_token1,
    STATE(89), 1,
      sym_comment,
  [1119] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      aux_sym_source_token1,
    STATE(90), 1,
      sym_comment,
  [1129] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(338), 1,
      aux_sym_source_token1,
    STATE(91), 1,
      sym_comment,
  [1139] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(340), 1,
      aux_sym_subject_token3,
    STATE(92), 1,
      sym_comment,
  [1149] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(342), 1,
      aux_sym_source_token1,
    STATE(93), 1,
      sym_comment,
  [1159] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(242), 1,
      anon_sym_SQUOTE_DOT,
    STATE(94), 1,
      sym_comment,
  [1169] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(242), 1,
      anon_sym_SQUOTE2,
    STATE(95), 1,
      sym_comment,
  [1179] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(242), 1,
      anon_sym_DOT,
    STATE(96), 1,
      sym_comment,
  [1189] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(242), 1,
      anon_sym_DQUOTE_DOT,
    STATE(97), 1,
      sym_comment,
  [1199] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(242), 1,
      anon_sym_DOT2,
    STATE(98), 1,
      sym_comment,
  [1209] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(242), 1,
      anon_sym_DOT3,
    STATE(99), 1,
      sym_comment,
  [1219] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(344), 1,
      anon_sym_SQUOTEby,
    STATE(100), 1,
      sym_comment,
  [1229] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(346), 1,
      anon_sym_SQUOTEde,
    STATE(101), 1,
      sym_comment,
  [1239] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(348), 1,
      anon_sym_SQUOTE7,
    STATE(102), 1,
      sym_comment,
  [1249] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(350), 1,
      anon_sym_SQUOTEpor,
    STATE(103), 1,
      sym_comment,
  [1259] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(352), 1,
      anon_sym_SQUOTEoleh,
    STATE(104), 1,
      sym_comment,
  [1269] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      anon_sym_SQUOTE_COMMAindietrodi,
    STATE(105), 1,
      sym_comment,
  [1279] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(356), 1,
      anon_sym_11,
    STATE(106), 1,
      sym_comment,
  [1289] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_DQUOTEmed,
    STATE(107), 1,
      sym_comment,
  [1299] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(360), 1,
      anon_sym_13,
    STATE(108), 1,
      sym_comment,
  [1309] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(362), 1,
      anon_sym_SQUOTEpor,
    STATE(109), 1,
      sym_comment,
  [1319] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(364), 1,
      anon_sym_o,
    STATE(110), 1,
      sym_comment,
  [1329] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(366), 1,
      anon_sym_SQUOTE10,
    STATE(111), 1,
      sym_comment,
  [1339] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(368), 1,
      anon_sym_SQUOTE10,
    STATE(112), 1,
      sym_comment,
  [1349] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(370), 1,
      anon_sym_SQUOTEby,
    STATE(113), 1,
      sym_comment,
  [1359] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(370), 1,
      anon_sym_SQUOTEde,
    STATE(114), 1,
      sym_comment,
  [1369] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(372), 1,
      anon_sym_SQUOTE10,
    STATE(115), 1,
      sym_comment,
  [1379] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(374), 1,
      anon_sym_SQUOTE10,
    STATE(116), 1,
      sym_comment,
  [1389] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(376), 1,
      anon_sym_11,
    STATE(117), 1,
      sym_comment,
  [1399] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(378), 1,
      anon_sym_DQUOTEmed,
    STATE(118), 1,
      sym_comment,
  [1409] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(380), 1,
      anon_sym_13,
    STATE(119), 1,
      sym_comment,
  [1419] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(382), 1,
      anon_sym_SQUOTEpor,
    STATE(120), 1,
      sym_comment,
  [1429] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(384), 1,
      anon_sym_o,
    STATE(121), 1,
      sym_comment,
  [1439] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(386), 1,
      anon_sym_SQUOTEdi,
    STATE(122), 1,
      sym_comment,
  [1449] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(388), 1,
      anon_sym_SQUOTEoleh,
    STATE(123), 1,
      sym_comment,
  [1459] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(370), 1,
      anon_sym_SQUOTEpor,
    STATE(124), 1,
      sym_comment,
  [1469] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(390), 1,
      anon_sym_SQUOTE7,
    STATE(125), 1,
      sym_comment,
  [1479] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
    STATE(126), 1,
      sym_comment,
  [1489] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(252), 1,
      anon_sym_SQUOTEsur_SQUOTE,
    STATE(127), 1,
      sym_comment,
  [1499] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(394), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(128), 1,
      sym_comment,
  [1509] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(396), 1,
      anon_sym_SQUOTE_SQUOTE2,
    STATE(129), 1,
      sym_comment,
  [1519] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(398), 1,
      anon_sym_trn,
    STATE(130), 1,
      sym_comment,
  [1529] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(400), 1,
      anon_sym_SQUOTEdaln_SQUOTE,
    STATE(131), 1,
      sym_comment,
  [1539] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(402), 1,
      anon_sym_DQUOTEovanp_DQUOTE,
    STATE(132), 1,
      sym_comment,
  [1549] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(404), 1,
      anon_sym_22,
    STATE(133), 1,
      sym_comment,
  [1559] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(252), 1,
      anon_sym_SQUOTEsobre_SQUOTE,
    STATE(134), 1,
      sym_comment,
  [1569] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(398), 1,
      anon_sym_na,
    STATE(135), 1,
      sym_comment,
  [1579] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(406), 1,
      anon_sym_SQUOTE_SQUOTE3,
    STATE(136), 1,
      sym_comment,
  [1589] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(252), 1,
      anon_sym_SQUOTEsu_SQUOTE,
    STATE(137), 1,
      sym_comment,
  [1599] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(252), 1,
      anon_sym_SQUOTEpada_SQUOTE,
    STATE(138), 1,
      sym_comment,
  [1609] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(408), 1,
      anon_sym_SQUOTEsobre_SQUOTE,
    STATE(139), 1,
      sym_comment,
  [1619] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(252), 1,
      anon_sym_SQUOTE_SQUOTE4,
    STATE(140), 1,
      sym_comment,
  [1629] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(252), 1,
      anon_sym_SQUOTEauf_SQUOTE,
    STATE(141), 1,
      sym_comment,
  [1639] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(404), 1,
      anon_sym_en,
    STATE(142), 1,
      sym_comment,
  [1649] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(410), 1,
      anon_sym_24,
    STATE(143), 1,
      sym_comment,
  [1659] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(412), 1,
      aux_sym_source_token1,
    STATE(144), 1,
      sym_comment,
  [1669] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(414), 1,
      sym_branch,
    STATE(145), 1,
      sym_comment,
  [1679] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(416), 1,
      sym_branch,
    STATE(146), 1,
      sym_comment,
  [1689] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    STATE(147), 1,
      sym_comment,
  [1699] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(418), 1,
      sym_branch,
    STATE(148), 1,
      sym_comment,
  [1709] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(420), 1,
      aux_sym_source_token1,
    STATE(149), 1,
      sym_comment,
  [1719] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(422), 1,
      sym_branch,
    STATE(150), 1,
      sym_comment,
  [1729] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(424), 1,
      sym_branch,
    STATE(151), 1,
      sym_comment,
  [1739] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(426), 1,
      aux_sym_source_token1,
    STATE(152), 1,
      sym_comment,
  [1749] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(428), 1,
      aux_sym_source_token1,
    STATE(153), 1,
      sym_comment,
  [1759] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(430), 1,
      sym_number,
    STATE(154), 1,
      sym_comment,
  [1769] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(432), 1,
      anon_sym_DASH_GT,
    STATE(155), 1,
      sym_comment,
  [1779] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(434), 1,
      aux_sym_source_token1,
    STATE(156), 1,
      sym_comment,
  [1789] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(436), 1,
      aux_sym_source_token1,
    STATE(157), 1,
      sym_comment,
  [1799] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(438), 1,
      sym_number,
    STATE(158), 1,
      sym_comment,
  [1809] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(440), 1,
      sym_number,
    STATE(159), 1,
      sym_comment,
  [1819] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(442), 1,
      sym_number,
    STATE(160), 1,
      sym_comment,
  [1829] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(444), 1,
      sym_number,
    STATE(161), 1,
      sym_comment,
  [1839] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(446), 1,
      sym_branch,
    STATE(162), 1,
      sym_comment,
  [1849] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(448), 1,
      sym_branch,
    STATE(163), 1,
      sym_comment,
  [1859] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(450), 1,
      sym_branch,
    STATE(164), 1,
      sym_comment,
  [1869] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym_branch,
    STATE(165), 1,
      sym_comment,
  [1879] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(454), 1,
      sym_branch,
    STATE(166), 1,
      sym_comment,
  [1889] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(456), 1,
      sym_branch,
    STATE(167), 1,
      sym_comment,
  [1899] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(458), 1,
      sym_number,
    STATE(168), 1,
      sym_comment,
  [1909] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(460), 1,
      sym_number,
    STATE(169), 1,
      sym_comment,
  [1919] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(462), 1,
      sym_number,
    STATE(170), 1,
      sym_comment,
  [1929] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(464), 1,
      sym_number,
    STATE(171), 1,
      sym_comment,
  [1939] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(466), 1,
      sym_number,
    STATE(172), 1,
      sym_comment,
  [1949] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(468), 1,
      sym_number,
    STATE(173), 1,
      sym_comment,
  [1959] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(470), 1,
      sym_number,
    STATE(174), 1,
      sym_comment,
  [1969] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(472), 1,
      sym_number,
    STATE(175), 1,
      sym_comment,
  [1979] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(474), 1,
      sym_number,
    STATE(176), 1,
      sym_comment,
  [1989] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(476), 1,
      sym_number,
    STATE(177), 1,
      sym_comment,
  [1999] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(478), 1,
      sym_number,
    STATE(178), 1,
      sym_comment,
  [2009] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(480), 1,
      sym_number,
    STATE(179), 1,
      sym_comment,
  [2019] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(482), 1,
      sym_number,
    STATE(180), 1,
      sym_comment,
  [2029] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(484), 1,
      sym_number,
    STATE(181), 1,
      sym_comment,
  [2039] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(486), 1,
      sym_number,
    STATE(182), 1,
      sym_comment,
  [2049] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(488), 1,
      sym_number,
    STATE(183), 1,
      sym_comment,
  [2059] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(490), 1,
      sym_number,
    STATE(184), 1,
      sym_comment,
  [2069] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(492), 1,
      sym_number,
    STATE(185), 1,
      sym_comment,
  [2079] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(494), 1,
      sym_number,
    STATE(186), 1,
      sym_comment,
  [2089] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(496), 1,
      sym_number,
    STATE(187), 1,
      sym_comment,
  [2099] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(498), 1,
      sym_number,
    STATE(188), 1,
      sym_comment,
  [2109] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(500), 1,
      sym_number,
    STATE(189), 1,
      sym_comment,
  [2119] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(502), 1,
      sym_branch,
    STATE(190), 1,
      sym_comment,
  [2129] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(504), 1,
      sym_branch,
    STATE(191), 1,
      sym_comment,
  [2139] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(506), 1,
      sym_branch,
    STATE(192), 1,
      sym_comment,
  [2149] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(508), 1,
      sym_branch,
    STATE(193), 1,
      sym_comment,
  [2159] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(510), 1,
      sym_branch,
    STATE(194), 1,
      sym_comment,
  [2169] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(512), 1,
      sym_branch,
    STATE(195), 1,
      sym_comment,
  [2179] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(514), 1,
      sym_branch,
    STATE(196), 1,
      sym_comment,
  [2189] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      sym_branch,
    STATE(197), 1,
      sym_comment,
  [2199] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(518), 1,
      sym_branch,
    STATE(198), 1,
      sym_comment,
  [2209] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(520), 1,
      sym_branch,
    STATE(199), 1,
      sym_comment,
  [2219] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    STATE(200), 1,
      sym_comment,
  [2229] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(522), 1,
      sym_number,
    STATE(201), 1,
      sym_comment,
  [2239] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(524), 1,
      aux_sym_source_token1,
    STATE(202), 1,
      sym_comment,
  [2249] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(526), 1,
      aux_sym_comment_token1,
    STATE(203), 1,
      sym_comment,
  [2259] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(528), 1,
      sym_number,
    STATE(204), 1,
      sym_comment,
  [2269] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(530), 1,
      sym_branch,
    STATE(205), 1,
      sym_comment,
  [2279] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(532), 1,
      sym_branch,
    STATE(206), 1,
      sym_comment,
  [2289] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(534), 1,
      sym_branch,
    STATE(207), 1,
      sym_comment,
  [2299] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(226), 1,
      anon_sym_COMMAipotavanar_DASHserpidament_DOT,
    STATE(208), 1,
      sym_comment,
  [2309] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_DOT2,
    STATE(209), 1,
      sym_comment,
  [2319] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(226), 1,
      anon_sym_DOT4,
    STATE(210), 1,
      sym_comment,
  [2329] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_DOT3,
    STATE(211), 1,
      sym_comment,
  [2339] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(226), 1,
      anon_sym_SQUOTE_COMMAundkannvorgespultwerden_DOT,
    STATE(212), 1,
      sym_comment,
  [2349] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_SQUOTE_DOT,
    STATE(213), 1,
      sym_comment,
  [2359] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(536), 1,
      sym_branch,
    STATE(214), 1,
      sym_comment,
  [2369] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(538), 1,
      sym_branch,
    STATE(215), 1,
      sym_comment,
  [2379] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(226), 1,
      anon_sym_komit_COMMAdanbisadimaju_DASHcepatkan_DOT,
    STATE(216), 1,
      sym_comment,
  [2389] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(226), 1,
      anon_sym_commitenepossoeseguireilfastforward_DOT,
    STATE(217), 1,
      sym_comment,
  [2399] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(226), 1,
      anon_sym_lnchuyngiao_COMMAvcthcchuyn_DASHtip_DASHnhanh_DOT,
    STATE(218), 1,
      sym_comment,
  [2409] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(540), 1,
      sym_branch,
    STATE(219), 1,
      sym_comment,
  [2419] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(542), 1,
      sym_branch,
    STATE(220), 1,
      sym_comment,
  [2429] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(544), 1,
      sym_branch,
    STATE(221), 1,
      sym_comment,
  [2439] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(546), 1,
      sym_branch,
    STATE(222), 1,
      sym_comment,
  [2449] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(226), 1,
      anon_sym_14,
    STATE(223), 1,
      sym_comment,
  [2459] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(226), 1,
      anon_sym_15,
    STATE(224), 1,
      sym_comment,
  [2469] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(548), 1,
      sym_branch,
    STATE(225), 1,
      sym_comment,
  [2479] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_16,
    STATE(226), 1,
      sym_comment,
  [2489] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_17,
    STATE(227), 1,
      sym_comment,
  [2499] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_lnchuyngiao_DOT,
    STATE(228), 1,
      sym_comment,
  [2509] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(550), 1,
      sym_branch,
    STATE(229), 1,
      sym_comment,
  [2519] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(552), 1,
      aux_sym_comment_token1,
    STATE(230), 1,
      sym_comment,
  [2529] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(141), 1,
      aux_sym_source_token1,
    STATE(231), 1,
      sym_comment,
  [2539] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    STATE(232), 1,
      sym_comment,
  [2549] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_commit_DOT,
    STATE(233), 1,
      sym_comment,
  [2559] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_komit_DOT,
    STATE(234), 1,
      sym_comment,
  [2569] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(554), 1,
      aux_sym_source_token1,
    STATE(235), 1,
      sym_comment,
  [2579] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(556), 1,
      anon_sym_SQUOTE_DOT,
    STATE(236), 1,
      sym_comment,
  [2589] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(556), 1,
      anon_sym_SQUOTE16,
    STATE(237), 1,
      sym_comment,
  [2599] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(556), 1,
      anon_sym_SQUOTE18,
    STATE(238), 1,
      sym_comment,
  [2609] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(556), 1,
      anon_sym_DOT,
    STATE(239), 1,
      sym_comment,
  [2619] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(556), 1,
      anon_sym_SQUOTEzerineyenidentemellendiriyorsunuz_DOT,
    STATE(240), 1,
      sym_comment,
  [2629] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(556), 1,
      anon_sym_DQUOTE_DOT,
    STATE(241), 1,
      sym_comment,
  [2639] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(556), 1,
      anon_sym_DOT2,
    STATE(242), 1,
      sym_comment,
  [2649] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(556), 1,
      anon_sym_SQUOTE_DOT3,
    STATE(243), 1,
      sym_comment,
  [2659] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(556), 1,
      anon_sym_DOT14,
    STATE(244), 1,
      sym_comment,
  [2669] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(556), 1,
      anon_sym_DOT3,
    STATE(245), 1,
      sym_comment,
  [2679] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(558), 1,
      ts_builtin_sym_end,
    STATE(246), 1,
      sym_comment,
  [2689] = 3,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(560), 1,
      aux_sym__filepath_token1,
    STATE(247), 1,
      sym_comment,
  [2699] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(562), 1,
      aux_sym_source_token1,
    STATE(248), 1,
      sym_comment,
  [2709] = 1,
    ACTIONS(564), 1,
      ts_builtin_sym_end,
  [2713] = 1,
    ACTIONS(566), 1,
      ts_builtin_sym_end,
  [2717] = 1,
    ACTIONS(568), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 35,
  [SMALL_STATE(6)] = 70,
  [SMALL_STATE(7)] = 105,
  [SMALL_STATE(8)] = 140,
  [SMALL_STATE(9)] = 168,
  [SMALL_STATE(10)] = 187,
  [SMALL_STATE(11)] = 209,
  [SMALL_STATE(12)] = 223,
  [SMALL_STATE(13)] = 237,
  [SMALL_STATE(14)] = 251,
  [SMALL_STATE(15)] = 265,
  [SMALL_STATE(16)] = 280,
  [SMALL_STATE(17)] = 299,
  [SMALL_STATE(18)] = 318,
  [SMALL_STATE(19)] = 337,
  [SMALL_STATE(20)] = 352,
  [SMALL_STATE(21)] = 369,
  [SMALL_STATE(22)] = 384,
  [SMALL_STATE(23)] = 396,
  [SMALL_STATE(24)] = 408,
  [SMALL_STATE(25)] = 424,
  [SMALL_STATE(26)] = 436,
  [SMALL_STATE(27)] = 448,
  [SMALL_STATE(28)] = 462,
  [SMALL_STATE(29)] = 473,
  [SMALL_STATE(30)] = 484,
  [SMALL_STATE(31)] = 495,
  [SMALL_STATE(32)] = 506,
  [SMALL_STATE(33)] = 517,
  [SMALL_STATE(34)] = 528,
  [SMALL_STATE(35)] = 541,
  [SMALL_STATE(36)] = 554,
  [SMALL_STATE(37)] = 567,
  [SMALL_STATE(38)] = 578,
  [SMALL_STATE(39)] = 589,
  [SMALL_STATE(40)] = 602,
  [SMALL_STATE(41)] = 615,
  [SMALL_STATE(42)] = 628,
  [SMALL_STATE(43)] = 639,
  [SMALL_STATE(44)] = 650,
  [SMALL_STATE(45)] = 663,
  [SMALL_STATE(46)] = 676,
  [SMALL_STATE(47)] = 689,
  [SMALL_STATE(48)] = 699,
  [SMALL_STATE(49)] = 709,
  [SMALL_STATE(50)] = 719,
  [SMALL_STATE(51)] = 729,
  [SMALL_STATE(52)] = 739,
  [SMALL_STATE(53)] = 749,
  [SMALL_STATE(54)] = 759,
  [SMALL_STATE(55)] = 769,
  [SMALL_STATE(56)] = 779,
  [SMALL_STATE(57)] = 789,
  [SMALL_STATE(58)] = 799,
  [SMALL_STATE(59)] = 809,
  [SMALL_STATE(60)] = 819,
  [SMALL_STATE(61)] = 829,
  [SMALL_STATE(62)] = 839,
  [SMALL_STATE(63)] = 849,
  [SMALL_STATE(64)] = 859,
  [SMALL_STATE(65)] = 869,
  [SMALL_STATE(66)] = 879,
  [SMALL_STATE(67)] = 889,
  [SMALL_STATE(68)] = 899,
  [SMALL_STATE(69)] = 909,
  [SMALL_STATE(70)] = 919,
  [SMALL_STATE(71)] = 929,
  [SMALL_STATE(72)] = 939,
  [SMALL_STATE(73)] = 949,
  [SMALL_STATE(74)] = 959,
  [SMALL_STATE(75)] = 969,
  [SMALL_STATE(76)] = 979,
  [SMALL_STATE(77)] = 989,
  [SMALL_STATE(78)] = 999,
  [SMALL_STATE(79)] = 1009,
  [SMALL_STATE(80)] = 1019,
  [SMALL_STATE(81)] = 1029,
  [SMALL_STATE(82)] = 1039,
  [SMALL_STATE(83)] = 1049,
  [SMALL_STATE(84)] = 1059,
  [SMALL_STATE(85)] = 1069,
  [SMALL_STATE(86)] = 1079,
  [SMALL_STATE(87)] = 1089,
  [SMALL_STATE(88)] = 1099,
  [SMALL_STATE(89)] = 1109,
  [SMALL_STATE(90)] = 1119,
  [SMALL_STATE(91)] = 1129,
  [SMALL_STATE(92)] = 1139,
  [SMALL_STATE(93)] = 1149,
  [SMALL_STATE(94)] = 1159,
  [SMALL_STATE(95)] = 1169,
  [SMALL_STATE(96)] = 1179,
  [SMALL_STATE(97)] = 1189,
  [SMALL_STATE(98)] = 1199,
  [SMALL_STATE(99)] = 1209,
  [SMALL_STATE(100)] = 1219,
  [SMALL_STATE(101)] = 1229,
  [SMALL_STATE(102)] = 1239,
  [SMALL_STATE(103)] = 1249,
  [SMALL_STATE(104)] = 1259,
  [SMALL_STATE(105)] = 1269,
  [SMALL_STATE(106)] = 1279,
  [SMALL_STATE(107)] = 1289,
  [SMALL_STATE(108)] = 1299,
  [SMALL_STATE(109)] = 1309,
  [SMALL_STATE(110)] = 1319,
  [SMALL_STATE(111)] = 1329,
  [SMALL_STATE(112)] = 1339,
  [SMALL_STATE(113)] = 1349,
  [SMALL_STATE(114)] = 1359,
  [SMALL_STATE(115)] = 1369,
  [SMALL_STATE(116)] = 1379,
  [SMALL_STATE(117)] = 1389,
  [SMALL_STATE(118)] = 1399,
  [SMALL_STATE(119)] = 1409,
  [SMALL_STATE(120)] = 1419,
  [SMALL_STATE(121)] = 1429,
  [SMALL_STATE(122)] = 1439,
  [SMALL_STATE(123)] = 1449,
  [SMALL_STATE(124)] = 1459,
  [SMALL_STATE(125)] = 1469,
  [SMALL_STATE(126)] = 1479,
  [SMALL_STATE(127)] = 1489,
  [SMALL_STATE(128)] = 1499,
  [SMALL_STATE(129)] = 1509,
  [SMALL_STATE(130)] = 1519,
  [SMALL_STATE(131)] = 1529,
  [SMALL_STATE(132)] = 1539,
  [SMALL_STATE(133)] = 1549,
  [SMALL_STATE(134)] = 1559,
  [SMALL_STATE(135)] = 1569,
  [SMALL_STATE(136)] = 1579,
  [SMALL_STATE(137)] = 1589,
  [SMALL_STATE(138)] = 1599,
  [SMALL_STATE(139)] = 1609,
  [SMALL_STATE(140)] = 1619,
  [SMALL_STATE(141)] = 1629,
  [SMALL_STATE(142)] = 1639,
  [SMALL_STATE(143)] = 1649,
  [SMALL_STATE(144)] = 1659,
  [SMALL_STATE(145)] = 1669,
  [SMALL_STATE(146)] = 1679,
  [SMALL_STATE(147)] = 1689,
  [SMALL_STATE(148)] = 1699,
  [SMALL_STATE(149)] = 1709,
  [SMALL_STATE(150)] = 1719,
  [SMALL_STATE(151)] = 1729,
  [SMALL_STATE(152)] = 1739,
  [SMALL_STATE(153)] = 1749,
  [SMALL_STATE(154)] = 1759,
  [SMALL_STATE(155)] = 1769,
  [SMALL_STATE(156)] = 1779,
  [SMALL_STATE(157)] = 1789,
  [SMALL_STATE(158)] = 1799,
  [SMALL_STATE(159)] = 1809,
  [SMALL_STATE(160)] = 1819,
  [SMALL_STATE(161)] = 1829,
  [SMALL_STATE(162)] = 1839,
  [SMALL_STATE(163)] = 1849,
  [SMALL_STATE(164)] = 1859,
  [SMALL_STATE(165)] = 1869,
  [SMALL_STATE(166)] = 1879,
  [SMALL_STATE(167)] = 1889,
  [SMALL_STATE(168)] = 1899,
  [SMALL_STATE(169)] = 1909,
  [SMALL_STATE(170)] = 1919,
  [SMALL_STATE(171)] = 1929,
  [SMALL_STATE(172)] = 1939,
  [SMALL_STATE(173)] = 1949,
  [SMALL_STATE(174)] = 1959,
  [SMALL_STATE(175)] = 1969,
  [SMALL_STATE(176)] = 1979,
  [SMALL_STATE(177)] = 1989,
  [SMALL_STATE(178)] = 1999,
  [SMALL_STATE(179)] = 2009,
  [SMALL_STATE(180)] = 2019,
  [SMALL_STATE(181)] = 2029,
  [SMALL_STATE(182)] = 2039,
  [SMALL_STATE(183)] = 2049,
  [SMALL_STATE(184)] = 2059,
  [SMALL_STATE(185)] = 2069,
  [SMALL_STATE(186)] = 2079,
  [SMALL_STATE(187)] = 2089,
  [SMALL_STATE(188)] = 2099,
  [SMALL_STATE(189)] = 2109,
  [SMALL_STATE(190)] = 2119,
  [SMALL_STATE(191)] = 2129,
  [SMALL_STATE(192)] = 2139,
  [SMALL_STATE(193)] = 2149,
  [SMALL_STATE(194)] = 2159,
  [SMALL_STATE(195)] = 2169,
  [SMALL_STATE(196)] = 2179,
  [SMALL_STATE(197)] = 2189,
  [SMALL_STATE(198)] = 2199,
  [SMALL_STATE(199)] = 2209,
  [SMALL_STATE(200)] = 2219,
  [SMALL_STATE(201)] = 2229,
  [SMALL_STATE(202)] = 2239,
  [SMALL_STATE(203)] = 2249,
  [SMALL_STATE(204)] = 2259,
  [SMALL_STATE(205)] = 2269,
  [SMALL_STATE(206)] = 2279,
  [SMALL_STATE(207)] = 2289,
  [SMALL_STATE(208)] = 2299,
  [SMALL_STATE(209)] = 2309,
  [SMALL_STATE(210)] = 2319,
  [SMALL_STATE(211)] = 2329,
  [SMALL_STATE(212)] = 2339,
  [SMALL_STATE(213)] = 2349,
  [SMALL_STATE(214)] = 2359,
  [SMALL_STATE(215)] = 2369,
  [SMALL_STATE(216)] = 2379,
  [SMALL_STATE(217)] = 2389,
  [SMALL_STATE(218)] = 2399,
  [SMALL_STATE(219)] = 2409,
  [SMALL_STATE(220)] = 2419,
  [SMALL_STATE(221)] = 2429,
  [SMALL_STATE(222)] = 2439,
  [SMALL_STATE(223)] = 2449,
  [SMALL_STATE(224)] = 2459,
  [SMALL_STATE(225)] = 2469,
  [SMALL_STATE(226)] = 2479,
  [SMALL_STATE(227)] = 2489,
  [SMALL_STATE(228)] = 2499,
  [SMALL_STATE(229)] = 2509,
  [SMALL_STATE(230)] = 2519,
  [SMALL_STATE(231)] = 2529,
  [SMALL_STATE(232)] = 2539,
  [SMALL_STATE(233)] = 2549,
  [SMALL_STATE(234)] = 2559,
  [SMALL_STATE(235)] = 2569,
  [SMALL_STATE(236)] = 2579,
  [SMALL_STATE(237)] = 2589,
  [SMALL_STATE(238)] = 2599,
  [SMALL_STATE(239)] = 2609,
  [SMALL_STATE(240)] = 2619,
  [SMALL_STATE(241)] = 2629,
  [SMALL_STATE(242)] = 2639,
  [SMALL_STATE(243)] = 2649,
  [SMALL_STATE(244)] = 2659,
  [SMALL_STATE(245)] = 2669,
  [SMALL_STATE(246)] = 2679,
  [SMALL_STATE(247)] = 2689,
  [SMALL_STATE(248)] = 2699,
  [SMALL_STATE(249)] = 2709,
  [SMALL_STATE(250)] = 2713,
  [SMALL_STATE(251)] = 2717,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(11),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(9),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(86),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_line, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trailer, 2, .production_id = 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scissor, 2, .production_id = 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__scissor, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__scissor_repeat1, 2),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__scissor_repeat1, 2), SHIFT_REPEAT(27),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__scissor_repeat1, 2), SHIFT_REPEAT(27),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__scissor_repeat1, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__scissor_repeat1, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filepath, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filepath, 5),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebasing, 5),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__change, 2),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__onbranch, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [392] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interactive_rebasing, 2),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 3, .production_id = 3),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ahead, 5),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__change, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date, 3, .production_id = 4),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uptodate, 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__change, 4),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 5),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__behind, 5),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
