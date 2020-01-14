#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// BoardManager
struct BoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C;
// BoardManager/Count
struct Count_t91F44A3D5C9CEC856F088B529D031317D189FD8D;
// Completed.BoardManager
struct BoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2;
// Completed.BoardManager/Count
struct Count_tB84B2499DA3FA3890C90C2C192265D4EC2BBB32F;
// Completed.Enemy
struct Enemy_t6720AD1364BE03542EAD44A8102C7C1DE8CAD7BD;
// Completed.Enemy[]
struct EnemyU5BU5D_t118D9ABC020EFA0DC8F19C96CA354A487B30AF65;
// Completed.GameManager
struct GameManager_tE812C2D494AD9E4526B863676B915462C462677A;
// Completed.GameManager/<MoveEnemies>d__21
struct U3CMoveEnemiesU3Ed__21_t1A0445B35A0ADEB7FEEDD612CCF2EDBB72439A77;
// Completed.Loader
struct Loader_t1D09864ADBE15ED497B70C083FE3578E97478ADE;
// Completed.MovingObject
struct MovingObject_t0AD4E0F568C409511445781F40355FF97164B1F2;
// Completed.MovingObject/<SmoothMovement>d__7
struct U3CSmoothMovementU3Ed__7_t79593E23282E01A5F99AA0494B2962202901E617;
// Completed.Player
struct Player_tAFCC8AE0CDA5F35211606A022B981B2A8A655FB3;
// Completed.SoundManager
struct SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E;
// Completed.Wall
struct Wall_t67DD401885ADE3E30586FB7A43629B3AA85E08CD;
// Enemy
struct Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6;
// Enemy[]
struct EnemyU5BU5D_t062459143EC5B464AA6ACC259C3344E81A2858F7;
// GameManager
struct GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89;
// GameManager/<MoveEnemies>d__19
struct U3CMoveEnemiesU3Ed__19_tE457B5209025BEEC2BE40C81BC4D0DCD4A7F6810;
// Loader
struct Loader_tC39B68C6E54EA735AB7561201ECFA248531172AB;
// MovingObject
struct MovingObject_tF36E398D30B1800D05ED5DD9017F575347F36556;
// MovingObject/<SmoothMovement>d__7
struct U3CSmoothMovementU3Ed__7_t893A1D53CE8CA776A15678CDE30322EC7AA52327;
// Player
struct Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873;
// Readme
struct Readme_t3B6022BA9CBD2C56BD12C781DB20C5B34B6C4E46;
// Readme/Section
struct Section_tDCE8FED365051651AC2BFB27F2230DDC5603C985;
// Readme/Section[]
struct SectionU5BU5D_t3EF1EA79AB7297D95C599BBA1E7D1DF5D69B5364;
// SoundManager
struct SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<Completed.Enemy>
struct List_1_t848E0F848A816B961D26FF49DC956621FD44D33C;
// System.Collections.Generic.List`1<Enemy>
struct List_1_t4BC8A38307CF15CA0AD142EDE954C83F258D776A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t053DAB6E2110E276A0339D73497193F464BC1F82;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// TutorialInfo
struct TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6;
// UnityEngine.Animator
struct Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A;
// UnityEngine.AudioClip
struct AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2;
// UnityEngine.AudioListener
struct AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099;
// UnityEngine.AudioSource
struct AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Collider2D
struct Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t34FACA3D608984EE7CF1EE51BBFA450D2DB62305;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE;
// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Touch[]
struct TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Selectable
struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.Toggle
struct Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t50D925F8E220FB47DA738411CEF9C57FF7E1DC43;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t11E2B254D3C968C7D0DA11C606CC06D7D7F0D786;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8;
// Wall
struct Wall_t482816FBEA1E55072FF113F443689BCC831EA97B;

IL2CPP_EXTERN_C RuntimeClass* AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Count_t91F44A3D5C9CEC856F088B529D031317D189FD8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Count_tB84B2499DA3FA3890C90C2C192265D4EC2BBB32F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tE812C2D494AD9E4526B863676B915462C462677A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4BC8A38307CF15CA0AD142EDE954C83F258D776A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t848E0F848A816B961D26FF49DC956621FD44D33C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_tB21970F986016656D66D2922594F336E1EE7D5C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMoveEnemiesU3Ed__19_tE457B5209025BEEC2BE40C81BC4D0DCD4A7F6810_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMoveEnemiesU3Ed__21_t1A0445B35A0ADEB7FEEDD612CCF2EDBB72439A77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSmoothMovementU3Ed__7_t79593E23282E01A5F99AA0494B2962202901E617_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSmoothMovementU3Ed__7_t893A1D53CE8CA776A15678CDE30322EC7AA52327_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_t34FACA3D608984EE7CF1EE51BBFA450D2DB62305_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0CBCF371510A724DB9CCDC0D286192948942BA69;
IL2CPP_EXTERN_C String_t* _stringLiteral19FCC1A5A92B80E89A17B2E4EAF33F0D83BD1EAE;
IL2CPP_EXTERN_C String_t* _stringLiteral211C9DDEC5E2382DED02420AC9E99A08B0B8A0C0;
IL2CPP_EXTERN_C String_t* _stringLiteral2A580A00758CA1E44BCA280244A4EAC8AAFBEBBB;
IL2CPP_EXTERN_C String_t* _stringLiteral31BB69B1D8895A98792336582F22ABC49E669B7D;
IL2CPP_EXTERN_C String_t* _stringLiteral35B259290EC3ACBB839D14CD18752DFB010F79EC;
IL2CPP_EXTERN_C String_t* _stringLiteral3BC15C8AAE3E4124DD409035F32EA2FD6835EFC9;
IL2CPP_EXTERN_C String_t* _stringLiteral3CC9E36AFCFE241F3B632198603A3AD8F20A738C;
IL2CPP_EXTERN_C String_t* _stringLiteral3EDEEA9488A4389FBA8A55E17755277F95002505;
IL2CPP_EXTERN_C String_t* _stringLiteral5C0DBFAF382FEAEFB83A95328F9D93C2580484A9;
IL2CPP_EXTERN_C String_t* _stringLiteral76D58561A55786B285C077DF9D586A6413095D47;
IL2CPP_EXTERN_C String_t* _stringLiteral80E8C0BDFFC4F6BAC693702C251569667B2C8997;
IL2CPP_EXTERN_C String_t* _stringLiteral8DF2CB347A4A176DFD8B62D8A3A3CFC8F3E1B955;
IL2CPP_EXTERN_C String_t* _stringLiteralA958DA44913CE39C445BC4527A8268560EC4C789;
IL2CPP_EXTERN_C String_t* _stringLiteralA979EF10CC6F6A36DF6B8A323307EE3BB2E2DB9C;
IL2CPP_EXTERN_C String_t* _stringLiteralB134BD555A2F6EC5313C1B2A225B2C17F3409351;
IL2CPP_EXTERN_C String_t* _stringLiteralE3D5FFA2C193AD3DAEC986D93BB248FB0482231D;
IL2CPP_EXTERN_C String_t* _stringLiteralE53407CFE1A5156B9F0D1EED3BAB5EF3AE75CFD8;
IL2CPP_EXTERN_C String_t* _stringLiteralE879B0BE0190766AF9D315ADBC46DCD7314F0B3F;
IL2CPP_EXTERN_C String_t* _stringLiteralEDE36EE66AD94463124E95C321234115DEC3D701;
IL2CPP_EXTERN_C String_t* _stringLiteralF83B6FE3AEBF13744E866019556D9129CD7A55BE;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C_m7225E0B4D5DD74E086CB4A2A5BDE6EFA7F8550B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2_m00566171A0CD5271BA261680D9A6FDAAD2CB546C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87_mD4BABFD1DC7C524ACC853125D82D011DC1CC5E5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_OnSceneLoaded_m0E8230AD35C45E889A7DE25F573DBE9F00E382B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m16C18F3B5C042F6455A1600206AE571715D81A21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4CD46ABB82104512DE2FE9FBB7896203B6CE38C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6ED0FB3ABA16A3A8AF0D48619D15B4B947333F5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m0B6A7366C5386991AB01BAFF1FACE2DC5BAC410A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m6A7990E0F43B646E2A83BAF6F77D4F88F5CE5F71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m8A26E14705D2C80E80034715B731977B8A910DF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m1D72CA0DC5CBE0C10AFCE2B5BCA18DD3CE3B1B35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4DBD7BFCF2ABB429466D1A3CA5ECA1D15C1FEEC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6AD3571BD600340778E25ED197E5BDFCCA2D716A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCC5725F457443FAD87084A0E3681D3DD3B914166_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2EA40FDD7BE2FB22B8227B533BAA8D316CC4BE3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mAB6EE67E39362720B586400A159908534FF5F87D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m12CEF330FD58AF171685278302252308F86E529E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2F68DB121B5F724D192190680B43E14E7FF0AFFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MovingObject_AttemptMove_TisPlayer_t8321F4671F549F5A7793BB8BA33D32CCCD538873_mD010F31A2A639746D630926A93D1A3EFF5F763BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MovingObject_AttemptMove_TisPlayer_tAFCC8AE0CDA5F35211606A022B981B2A8A655FB3_m09DDAC2D0A32A81B73F0A18E3C98692A76AF2FBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MovingObject_AttemptMove_TisWall_t482816FBEA1E55072FF113F443689BCC831EA97B_m96DE3D3EBED585CBD2AE562C1A5A5195832BE05F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MovingObject_AttemptMove_TisWall_t67DD401885ADE3E30586FB7A43629B3AA85E08CD_mF93624F785234BC9B5E257D2EAB8FBE4BB1A7D19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveEnemiesU3Ed__19_System_Collections_IEnumerator_Reset_m9B921F7529467162F3BD635FC11AF7F64D05A395_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveEnemiesU3Ed__21_System_Collections_IEnumerator_Reset_mCDFA5CA0D7610CB9A3DEDD2B13095A2F06AF58EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSmoothMovementU3Ed__7_System_Collections_IEnumerator_Reset_m0D541486828F50616892622A99873DC76D104F0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSmoothMovementU3Ed__7_System_Collections_IEnumerator_Reset_m7CE8C721A11606F2DECD46147A194C090A17A056_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_2__ctor_m316A335F2911B92084C8B8F9A27D28D7F2C0F407_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t BoardManager_BoardSetup_m542D9297FD7AAACF9C725AB1013F11196E18D5C2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoardManager_BoardSetup_mD03688A91E27E0C66DDCF434856D94505049067C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoardManager_InitialiseList_m02C69C971D2A1B40D92DD4CE0B42A350959EACF6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoardManager_InitialiseList_m91C622D724A56B0D1F6BBB99E4C0941293777B4C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoardManager_LayoutObjectAtRandom_m545C39A6FE34EBE5A55F1B4107B20BC5C9B4E79C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoardManager_LayoutObjectAtRandom_m8B28BDA9997EB85300A76D9B29A818B01F040BE8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoardManager_RandomPosition_m8B020FDBB56A4DD2BD768B5097A3C6DA390F0349_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoardManager_RandomPosition_m9DB457B2BBFD644138DA5E69B5578C4157A41D53_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoardManager_SetupScene_m4B858E0B41F5A4C66710EF473331C1236BE621F0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoardManager_SetupScene_m670C8D73B288F0C43F79418DF7F99A5D84D46165_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoardManager__ctor_m8F23067BFFF752546D47F9E936A8D74D1AF975A0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoardManager__ctor_mA5E1F47F94482B5A7B26CEE058119935B7183F8B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enemy_MoveEnemy_m90470C09BA59768F31AEBA4915905649B7733E1B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enemy_MoveEnemy_mAECC68D19B5F72C8797A66452D6F7C8AD63C1602_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enemy_Start_m0681B66D4522F045EB7A33A21467994960D1E435_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enemy_Start_mB3336B58AEEB35492C63A1D51089B1E72F0141A9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_AddEnemyToList_mB31091B916B4F91CBA9260AF106556CAAF66D9B1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_AddEnemyToList_mD24432C18512E85EC6381309D7966F5992CDE03E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_Awake_mE55CF63B55E9ABBA0D8D2FCCE3EF7492A3B401B4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_Awake_mE60F41F3186E80B2BAB293918745366D18508C0F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_GameOver_m6567A78046F939A5443115BAF94E5EB408B0C6B1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_GameOver_m658E745BE197CC36CFAE422F8037F41A1B7FFFD3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_InitGame_m654E7512B9AE3DE5106AF16F0D8C3D39670C2E75_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_InitGame_m8E6173BA608D275A9B7564E61FFB5F7C2DC09A20_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_MoveEnemies_m0E7BBFAA21D4B2EF635E8B36EC3C20F350CC72B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_MoveEnemies_mED371A44C407C93DF33A71F433692A009F6E1BA0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_OnDisable_m2A9C743CC7F92B33AAB9D522A2C040020BF81EF1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_OnEnable_m4F8C4F64B0178D68D341F37F8F4968434A48512A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Loader_Awake_m2AC7851103C995091FB014CB1D51B22406A8CB30_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Loader_Awake_m2E926C562F1DC55B732AD3B9730A0031819C4630_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MovingObject_Move_m12B8B780C755ECBD96247CC6A54B5D3914CC2E11_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MovingObject_Move_mD09FDB666D1B1CCFE9C2F03000805FBB358428B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MovingObject_SmoothMovement_m093F359AF7B8831EBF2E73E5D374D15F139B18EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MovingObject_SmoothMovement_mDBD59619EFEFDE465C88CA11CBCDE4E993424077_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MovingObject_Start_m8F7B64E0413B84E1D1D3F0B544F9A8311244C12B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MovingObject_Start_mCD183186A234E50CB19E172F47EC71DBBD5773BA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_CheckIfGameOver_m3FB711225593A5D63BE1914EACCF58F9ECCB6C76_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_CheckIfGameOver_mF3154A74627A9A6C981ED6D2CDD585C76C9E8681_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_LoseFood_m0B4449432D23766124FB273ADD3836D38AEFEFDD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_LoseFood_m1C4BD9BDC9822128963FC50AE9DFC74900630CE9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_OnDisable_m987E038809EB4749FB07887B0A94AFFD42083F5B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_OnDisable_mEC6F3E9E880583C5484DC36B6DE478DA64F5006B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_OnTriggerEnter2D_m5062A5F9DF9D6561C8BDE2032DAEECE6BAA91DB5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_OnTriggerEnter2D_m68C090E273A7ECE5102E765E7DBA96C55A8A65D1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_Start_mBE67245178ACC7B50451FB7E2D719C25152DFC9D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_Start_mE9ACCAA7FEBF4020693FFB73C0839CF3AAD0B0C4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_Update_m6F977BAE3756AB7073D64042B766B442E4EC6FD2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_Update_mAF41C6B6E723360B1E2580FCB16DE15580DD64E2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player__ctor_m0116372BE13E89178D501A5B3F652B5CE7C41128_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player__ctor_m8F4AB650C5E2DE406B3C65EA8F662013458D85E2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SoundManager_Awake_mF1206AB238C10E834613ED76167ED5700CE7B776_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SoundManager_Awake_mFAD1AEBF8B8957E85CE445F65107AC6A5DDDFEEC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TutorialInfo_Awake_mD8C804FAD3A0680AAAE189C04D25AFA626623FE4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TutorialInfo_ToggleShowAtLaunch_m3632B30A9CA1D2147A5A71C32AA605C54EBA1E37_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TutorialInfo__cctor_mA9ED5E3524C7571EA69A0B3C4744610E3BBAB1FC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CMoveEnemiesU3Ed__19_MoveNext_m0C9165A5DB60FD9015DFEEA2FFCDB00B9797E6D5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CMoveEnemiesU3Ed__19_System_Collections_IEnumerator_Reset_m9B921F7529467162F3BD635FC11AF7F64D05A395_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CMoveEnemiesU3Ed__21_MoveNext_m9975547A93BB9DAAC42C4A2C3DFD5E172283C7B1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CMoveEnemiesU3Ed__21_System_Collections_IEnumerator_Reset_mCDFA5CA0D7610CB9A3DEDD2B13095A2F06AF58EB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSmoothMovementU3Ed__7_MoveNext_m50232F421AF0030F3A0487B75AB2623EF380A841_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSmoothMovementU3Ed__7_MoveNext_mC8B2C13034A16EB0C88EA1430285C62339CC67EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSmoothMovementU3Ed__7_System_Collections_IEnumerator_Reset_m0D541486828F50616892622A99873DC76D104F0E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSmoothMovementU3Ed__7_System_Collections_IEnumerator_Reset_m7CE8C721A11606F2DECD46147A194C090A17A056_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Wall_Awake_mD2F06404D388F876289F4E0E89BE1F5E06027A65_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Wall_Awake_mDCE42E98C11B012A13ED246083F25BCC9BB02458_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Wall_DamageWall_m28CB3DFD2159B0AF6F577D5E27EE4957B72DE26B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Wall_DamageWall_m80EF3FD0A4E9C5A5EB6E6BA78DFE90E417F72B63_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2;
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
struct TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};


// System.Object


// BoardManager_Count
struct  Count_t91F44A3D5C9CEC856F088B529D031317D189FD8D  : public RuntimeObject
{
public:
	// System.Int32 BoardManager_Count::minimum
	int32_t ___minimum_0;
	// System.Int32 BoardManager_Count::maximum
	int32_t ___maximum_1;

public:
	inline static int32_t get_offset_of_minimum_0() { return static_cast<int32_t>(offsetof(Count_t91F44A3D5C9CEC856F088B529D031317D189FD8D, ___minimum_0)); }
	inline int32_t get_minimum_0() const { return ___minimum_0; }
	inline int32_t* get_address_of_minimum_0() { return &___minimum_0; }
	inline void set_minimum_0(int32_t value)
	{
		___minimum_0 = value;
	}

	inline static int32_t get_offset_of_maximum_1() { return static_cast<int32_t>(offsetof(Count_t91F44A3D5C9CEC856F088B529D031317D189FD8D, ___maximum_1)); }
	inline int32_t get_maximum_1() const { return ___maximum_1; }
	inline int32_t* get_address_of_maximum_1() { return &___maximum_1; }
	inline void set_maximum_1(int32_t value)
	{
		___maximum_1 = value;
	}
};


// Completed.BoardManager_Count
struct  Count_tB84B2499DA3FA3890C90C2C192265D4EC2BBB32F  : public RuntimeObject
{
public:
	// System.Int32 Completed.BoardManager_Count::minimum
	int32_t ___minimum_0;
	// System.Int32 Completed.BoardManager_Count::maximum
	int32_t ___maximum_1;

public:
	inline static int32_t get_offset_of_minimum_0() { return static_cast<int32_t>(offsetof(Count_tB84B2499DA3FA3890C90C2C192265D4EC2BBB32F, ___minimum_0)); }
	inline int32_t get_minimum_0() const { return ___minimum_0; }
	inline int32_t* get_address_of_minimum_0() { return &___minimum_0; }
	inline void set_minimum_0(int32_t value)
	{
		___minimum_0 = value;
	}

	inline static int32_t get_offset_of_maximum_1() { return static_cast<int32_t>(offsetof(Count_tB84B2499DA3FA3890C90C2C192265D4EC2BBB32F, ___maximum_1)); }
	inline int32_t get_maximum_1() const { return ___maximum_1; }
	inline int32_t* get_address_of_maximum_1() { return &___maximum_1; }
	inline void set_maximum_1(int32_t value)
	{
		___maximum_1 = value;
	}
};


// Completed.GameManager_<MoveEnemies>d__21
struct  U3CMoveEnemiesU3Ed__21_t1A0445B35A0ADEB7FEEDD612CCF2EDBB72439A77  : public RuntimeObject
{
public:
	// System.Int32 Completed.GameManager_<MoveEnemies>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Completed.GameManager_<MoveEnemies>d__21::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Completed.GameManager Completed.GameManager_<MoveEnemies>d__21::<>4__this
	GameManager_tE812C2D494AD9E4526B863676B915462C462677A * ___U3CU3E4__this_2;
	// System.Int32 Completed.GameManager_<MoveEnemies>d__21::<i>5__2
	int32_t ___U3CiU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMoveEnemiesU3Ed__21_t1A0445B35A0ADEB7FEEDD612CCF2EDBB72439A77, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMoveEnemiesU3Ed__21_t1A0445B35A0ADEB7FEEDD612CCF2EDBB72439A77, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CMoveEnemiesU3Ed__21_t1A0445B35A0ADEB7FEEDD612CCF2EDBB72439A77, ___U3CU3E4__this_2)); }
	inline GameManager_tE812C2D494AD9E4526B863676B915462C462677A * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameManager_tE812C2D494AD9E4526B863676B915462C462677A ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameManager_tE812C2D494AD9E4526B863676B915462C462677A * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CMoveEnemiesU3Ed__21_t1A0445B35A0ADEB7FEEDD612CCF2EDBB72439A77, ___U3CiU3E5__2_3)); }
	inline int32_t get_U3CiU3E5__2_3() const { return ___U3CiU3E5__2_3; }
	inline int32_t* get_address_of_U3CiU3E5__2_3() { return &___U3CiU3E5__2_3; }
	inline void set_U3CiU3E5__2_3(int32_t value)
	{
		___U3CiU3E5__2_3 = value;
	}
};


// GameManager_<MoveEnemies>d__19
struct  U3CMoveEnemiesU3Ed__19_tE457B5209025BEEC2BE40C81BC4D0DCD4A7F6810  : public RuntimeObject
{
public:
	// System.Int32 GameManager_<MoveEnemies>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager_<MoveEnemies>d__19::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameManager GameManager_<MoveEnemies>d__19::<>4__this
	GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * ___U3CU3E4__this_2;
	// System.Int32 GameManager_<MoveEnemies>d__19::<i>5__2
	int32_t ___U3CiU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMoveEnemiesU3Ed__19_tE457B5209025BEEC2BE40C81BC4D0DCD4A7F6810, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMoveEnemiesU3Ed__19_tE457B5209025BEEC2BE40C81BC4D0DCD4A7F6810, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CMoveEnemiesU3Ed__19_tE457B5209025BEEC2BE40C81BC4D0DCD4A7F6810, ___U3CU3E4__this_2)); }
	inline GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CMoveEnemiesU3Ed__19_tE457B5209025BEEC2BE40C81BC4D0DCD4A7F6810, ___U3CiU3E5__2_3)); }
	inline int32_t get_U3CiU3E5__2_3() const { return ___U3CiU3E5__2_3; }
	inline int32_t* get_address_of_U3CiU3E5__2_3() { return &___U3CiU3E5__2_3; }
	inline void set_U3CiU3E5__2_3(int32_t value)
	{
		___U3CiU3E5__2_3 = value;
	}
};


// Readme_Section
struct  Section_tDCE8FED365051651AC2BFB27F2230DDC5603C985  : public RuntimeObject
{
public:
	// System.String Readme_Section::heading
	String_t* ___heading_0;
	// System.String Readme_Section::text
	String_t* ___text_1;
	// System.String Readme_Section::linkText
	String_t* ___linkText_2;
	// System.String Readme_Section::url
	String_t* ___url_3;

public:
	inline static int32_t get_offset_of_heading_0() { return static_cast<int32_t>(offsetof(Section_tDCE8FED365051651AC2BFB27F2230DDC5603C985, ___heading_0)); }
	inline String_t* get_heading_0() const { return ___heading_0; }
	inline String_t** get_address_of_heading_0() { return &___heading_0; }
	inline void set_heading_0(String_t* value)
	{
		___heading_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heading_0), (void*)value);
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(Section_tDCE8FED365051651AC2BFB27F2230DDC5603C985, ___text_1)); }
	inline String_t* get_text_1() const { return ___text_1; }
	inline String_t** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(String_t* value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_1), (void*)value);
	}

	inline static int32_t get_offset_of_linkText_2() { return static_cast<int32_t>(offsetof(Section_tDCE8FED365051651AC2BFB27F2230DDC5603C985, ___linkText_2)); }
	inline String_t* get_linkText_2() const { return ___linkText_2; }
	inline String_t** get_address_of_linkText_2() { return &___linkText_2; }
	inline void set_linkText_2(String_t* value)
	{
		___linkText_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linkText_2), (void*)value);
	}

	inline static int32_t get_offset_of_url_3() { return static_cast<int32_t>(offsetof(Section_tDCE8FED365051651AC2BFB27F2230DDC5603C985, ___url_3)); }
	inline String_t* get_url_3() const { return ___url_3; }
	inline String_t** get_address_of_url_3() { return &___url_3; }
	inline void set_url_3(String_t* value)
	{
		___url_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_3), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<Completed.Enemy>
struct  List_1_t848E0F848A816B961D26FF49DC956621FD44D33C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	EnemyU5BU5D_t118D9ABC020EFA0DC8F19C96CA354A487B30AF65* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t848E0F848A816B961D26FF49DC956621FD44D33C, ____items_1)); }
	inline EnemyU5BU5D_t118D9ABC020EFA0DC8F19C96CA354A487B30AF65* get__items_1() const { return ____items_1; }
	inline EnemyU5BU5D_t118D9ABC020EFA0DC8F19C96CA354A487B30AF65** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(EnemyU5BU5D_t118D9ABC020EFA0DC8F19C96CA354A487B30AF65* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t848E0F848A816B961D26FF49DC956621FD44D33C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t848E0F848A816B961D26FF49DC956621FD44D33C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t848E0F848A816B961D26FF49DC956621FD44D33C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t848E0F848A816B961D26FF49DC956621FD44D33C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	EnemyU5BU5D_t118D9ABC020EFA0DC8F19C96CA354A487B30AF65* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t848E0F848A816B961D26FF49DC956621FD44D33C_StaticFields, ____emptyArray_5)); }
	inline EnemyU5BU5D_t118D9ABC020EFA0DC8F19C96CA354A487B30AF65* get__emptyArray_5() const { return ____emptyArray_5; }
	inline EnemyU5BU5D_t118D9ABC020EFA0DC8F19C96CA354A487B30AF65** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(EnemyU5BU5D_t118D9ABC020EFA0DC8F19C96CA354A487B30AF65* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Enemy>
struct  List_1_t4BC8A38307CF15CA0AD142EDE954C83F258D776A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	EnemyU5BU5D_t062459143EC5B464AA6ACC259C3344E81A2858F7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4BC8A38307CF15CA0AD142EDE954C83F258D776A, ____items_1)); }
	inline EnemyU5BU5D_t062459143EC5B464AA6ACC259C3344E81A2858F7* get__items_1() const { return ____items_1; }
	inline EnemyU5BU5D_t062459143EC5B464AA6ACC259C3344E81A2858F7** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(EnemyU5BU5D_t062459143EC5B464AA6ACC259C3344E81A2858F7* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4BC8A38307CF15CA0AD142EDE954C83F258D776A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4BC8A38307CF15CA0AD142EDE954C83F258D776A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4BC8A38307CF15CA0AD142EDE954C83F258D776A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4BC8A38307CF15CA0AD142EDE954C83F258D776A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	EnemyU5BU5D_t062459143EC5B464AA6ACC259C3344E81A2858F7* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4BC8A38307CF15CA0AD142EDE954C83F258D776A_StaticFields, ____emptyArray_5)); }
	inline EnemyU5BU5D_t062459143EC5B464AA6ACC259C3344E81A2858F7* get__emptyArray_5() const { return ____emptyArray_5; }
	inline EnemyU5BU5D_t062459143EC5B464AA6ACC259C3344E81A2858F7** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(EnemyU5BU5D_t062459143EC5B464AA6ACC259C3344E81A2858F7* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____items_1)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.LayerMask
struct  LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct  Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_HighlightedSprite_0)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_PressedSprite_1)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_SelectedSprite_2)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_DisabledSprite_3)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_pinvoke
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_com
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	float ___m_Seconds_0;
};

// Completed.MovingObject_<SmoothMovement>d__7
struct  U3CSmoothMovementU3Ed__7_t79593E23282E01A5F99AA0494B2962202901E617  : public RuntimeObject
{
public:
	// System.Int32 Completed.MovingObject_<SmoothMovement>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Completed.MovingObject_<SmoothMovement>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Completed.MovingObject Completed.MovingObject_<SmoothMovement>d__7::<>4__this
	MovingObject_t0AD4E0F568C409511445781F40355FF97164B1F2 * ___U3CU3E4__this_2;
	// UnityEngine.Vector3 Completed.MovingObject_<SmoothMovement>d__7::end
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___end_3;
	// System.Single Completed.MovingObject_<SmoothMovement>d__7::<sqrRemainingDistance>5__2
	float ___U3CsqrRemainingDistanceU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ed__7_t79593E23282E01A5F99AA0494B2962202901E617, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ed__7_t79593E23282E01A5F99AA0494B2962202901E617, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ed__7_t79593E23282E01A5F99AA0494B2962202901E617, ___U3CU3E4__this_2)); }
	inline MovingObject_t0AD4E0F568C409511445781F40355FF97164B1F2 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MovingObject_t0AD4E0F568C409511445781F40355FF97164B1F2 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MovingObject_t0AD4E0F568C409511445781F40355FF97164B1F2 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_end_3() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ed__7_t79593E23282E01A5F99AA0494B2962202901E617, ___end_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_end_3() const { return ___end_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_end_3() { return &___end_3; }
	inline void set_end_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___end_3 = value;
	}

	inline static int32_t get_offset_of_U3CsqrRemainingDistanceU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ed__7_t79593E23282E01A5F99AA0494B2962202901E617, ___U3CsqrRemainingDistanceU3E5__2_4)); }
	inline float get_U3CsqrRemainingDistanceU3E5__2_4() const { return ___U3CsqrRemainingDistanceU3E5__2_4; }
	inline float* get_address_of_U3CsqrRemainingDistanceU3E5__2_4() { return &___U3CsqrRemainingDistanceU3E5__2_4; }
	inline void set_U3CsqrRemainingDistanceU3E5__2_4(float value)
	{
		___U3CsqrRemainingDistanceU3E5__2_4 = value;
	}
};


// MovingObject_<SmoothMovement>d__7
struct  U3CSmoothMovementU3Ed__7_t893A1D53CE8CA776A15678CDE30322EC7AA52327  : public RuntimeObject
{
public:
	// System.Int32 MovingObject_<SmoothMovement>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MovingObject_<SmoothMovement>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// MovingObject MovingObject_<SmoothMovement>d__7::<>4__this
	MovingObject_tF36E398D30B1800D05ED5DD9017F575347F36556 * ___U3CU3E4__this_2;
	// UnityEngine.Vector3 MovingObject_<SmoothMovement>d__7::end
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___end_3;
	// System.Single MovingObject_<SmoothMovement>d__7::<sqrRemainingDistance>5__2
	float ___U3CsqrRemainingDistanceU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ed__7_t893A1D53CE8CA776A15678CDE30322EC7AA52327, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ed__7_t893A1D53CE8CA776A15678CDE30322EC7AA52327, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ed__7_t893A1D53CE8CA776A15678CDE30322EC7AA52327, ___U3CU3E4__this_2)); }
	inline MovingObject_tF36E398D30B1800D05ED5DD9017F575347F36556 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MovingObject_tF36E398D30B1800D05ED5DD9017F575347F36556 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MovingObject_tF36E398D30B1800D05ED5DD9017F575347F36556 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_end_3() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ed__7_t893A1D53CE8CA776A15678CDE30322EC7AA52327, ___end_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_end_3() const { return ___end_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_end_3() { return &___end_3; }
	inline void set_end_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___end_3 = value;
	}

	inline static int32_t get_offset_of_U3CsqrRemainingDistanceU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ed__7_t893A1D53CE8CA776A15678CDE30322EC7AA52327, ___U3CsqrRemainingDistanceU3E5__2_4)); }
	inline float get_U3CsqrRemainingDistanceU3E5__2_4() const { return ___U3CsqrRemainingDistanceU3E5__2_4; }
	inline float* get_address_of_U3CsqrRemainingDistanceU3E5__2_4() { return &___U3CsqrRemainingDistanceU3E5__2_4; }
	inline void set_U3CsqrRemainingDistanceU3E5__2_4(float value)
	{
		___U3CsqrRemainingDistanceU3E5__2_4 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RaycastHit2D
struct  RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE, ___m_Centroid_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE, ___m_Point_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE, ___m_Normal_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.SceneManagement.LoadSceneMode
struct  LoadSceneMode_t75F0B96794398942671B8315D2A9AC25C40A22D5 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadSceneMode_t75F0B96794398942671B8315D2A9AC25C40A22D5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchPhase
struct  TouchPhase_t7E9CEC3DD059E32F847242513BD6CE30866AB2A6 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_t7E9CEC3DD059E32F847242513BD6CE30866AB2A6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct  TouchType_tBBD83025576FC017B10484014B5C396613A02B8E 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_tBBD83025576FC017B10484014B5C396613A02B8E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct  ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_NormalColor_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_HighlightedColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_PressedColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_SelectedColor_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_DisabledColor_4)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};


// UnityEngine.UI.Navigation_Mode
struct  Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26 
{
public:
	// System.Int32 UnityEngine.UI.Navigation_Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable_Transition
struct  Transition_tA9261C608B54C52324084A0B080E7A3E0548A181 
{
public:
	// System.Int32 UnityEngine.UI.Selectable_Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_tA9261C608B54C52324084A0B080E7A3E0548A181, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Toggle_ToggleTransition
struct  ToggleTransition_t45980EB1352FF47B2D8D8EBC90385AB68939046D 
{
public:
	// System.Int32 UnityEngine.UI.Toggle_ToggleTransition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ToggleTransition_t45980EB1352FF47B2D8D8EBC90385AB68939046D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// UnityEngine.AudioClip
struct  AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:
	// UnityEngine.AudioClip_PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip_PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// UnityEngine.Sprite
struct  Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Touch
struct  Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Position_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_RawPosition_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_PositionDelta_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// UnityEngine.UI.Navigation
struct  Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 
{
public:
	// UnityEngine.UI.Navigation_Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnUp_1)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnDown_2)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnLeft_3)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnRight_4)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};

// Readme
struct  Readme_t3B6022BA9CBD2C56BD12C781DB20C5B34B6C4E46  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// UnityEngine.Texture2D Readme::icon
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme_Section[] Readme::sections
	SectionU5BU5D_t3EF1EA79AB7297D95C599BBA1E7D1DF5D69B5364* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;

public:
	inline static int32_t get_offset_of_icon_4() { return static_cast<int32_t>(offsetof(Readme_t3B6022BA9CBD2C56BD12C781DB20C5B34B6C4E46, ___icon_4)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_icon_4() const { return ___icon_4; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_icon_4() { return &___icon_4; }
	inline void set_icon_4(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___icon_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___icon_4), (void*)value);
	}

	inline static int32_t get_offset_of_title_5() { return static_cast<int32_t>(offsetof(Readme_t3B6022BA9CBD2C56BD12C781DB20C5B34B6C4E46, ___title_5)); }
	inline String_t* get_title_5() const { return ___title_5; }
	inline String_t** get_address_of_title_5() { return &___title_5; }
	inline void set_title_5(String_t* value)
	{
		___title_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___title_5), (void*)value);
	}

	inline static int32_t get_offset_of_sections_6() { return static_cast<int32_t>(offsetof(Readme_t3B6022BA9CBD2C56BD12C781DB20C5B34B6C4E46, ___sections_6)); }
	inline SectionU5BU5D_t3EF1EA79AB7297D95C599BBA1E7D1DF5D69B5364* get_sections_6() const { return ___sections_6; }
	inline SectionU5BU5D_t3EF1EA79AB7297D95C599BBA1E7D1DF5D69B5364** get_address_of_sections_6() { return &___sections_6; }
	inline void set_sections_6(SectionU5BU5D_t3EF1EA79AB7297D95C599BBA1E7D1DF5D69B5364* value)
	{
		___sections_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sections_6), (void*)value);
	}

	inline static int32_t get_offset_of_loadedLayout_7() { return static_cast<int32_t>(offsetof(Readme_t3B6022BA9CBD2C56BD12C781DB20C5B34B6C4E46, ___loadedLayout_7)); }
	inline bool get_loadedLayout_7() const { return ___loadedLayout_7; }
	inline bool* get_address_of_loadedLayout_7() { return &___loadedLayout_7; }
	inline void set_loadedLayout_7(bool value)
	{
		___loadedLayout_7 = value;
	}
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct  UnityAction_2_t34FACA3D608984EE7CF1EE51BBFA450D2DB62305  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct  Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Animator
struct  Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct  AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Collider2D
struct  Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct  SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};


// BoardManager
struct  BoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 BoardManager::columns
	int32_t ___columns_4;
	// System.Int32 BoardManager::rows
	int32_t ___rows_5;
	// BoardManager_Count BoardManager::wallCount
	Count_t91F44A3D5C9CEC856F088B529D031317D189FD8D * ___wallCount_6;
	// BoardManager_Count BoardManager::foodCount
	Count_t91F44A3D5C9CEC856F088B529D031317D189FD8D * ___foodCount_7;
	// UnityEngine.GameObject BoardManager::exit
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___exit_8;
	// UnityEngine.GameObject[] BoardManager::floorTiles
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___floorTiles_9;
	// UnityEngine.GameObject[] BoardManager::wallTiles
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___wallTiles_10;
	// UnityEngine.GameObject[] BoardManager::foodTiles
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___foodTiles_11;
	// UnityEngine.GameObject[] BoardManager::enemyTiles
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___enemyTiles_12;
	// UnityEngine.GameObject[] BoardManager::outerWallTiles
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___outerWallTiles_13;
	// UnityEngine.Transform BoardManager::boardHolder
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___boardHolder_14;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> BoardManager::gridPositions
	List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___gridPositions_15;

public:
	inline static int32_t get_offset_of_columns_4() { return static_cast<int32_t>(offsetof(BoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C, ___columns_4)); }
	inline int32_t get_columns_4() const { return ___columns_4; }
	inline int32_t* get_address_of_columns_4() { return &___columns_4; }
	inline void set_columns_4(int32_t value)
	{
		___columns_4 = value;
	}

	inline static int32_t get_offset_of_rows_5() { return static_cast<int32_t>(offsetof(BoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C, ___rows_5)); }
	inline int32_t get_rows_5() const { return ___rows_5; }
	inline int32_t* get_address_of_rows_5() { return &___rows_5; }
	inline void set_rows_5(int32_t value)
	{
		___rows_5 = value;
	}

	inline static int32_t get_offset_of_wallCount_6() { return static_cast<int32_t>(offsetof(BoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C, ___wallCount_6)); }
	inline Count_t91F44A3D5C9CEC856F088B529D031317D189FD8D * get_wallCount_6() const { return ___wallCount_6; }
	inline Count_t91F44A3D5C9CEC856F088B529D031317D189FD8D ** get_address_of_wallCount_6() { return &___wallCount_6; }
	inline void set_wallCount_6(Count_t91F44A3D5C9CEC856F088B529D031317D189FD8D * value)
	{
		___wallCount_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wallCount_6), (void*)value);
	}

	inline static int32_t get_offset_of_foodCount_7() { return static_cast<int32_t>(offsetof(BoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C, ___foodCount_7)); }
	inline Count_t91F44A3D5C9CEC856F088B529D031317D189FD8D * get_foodCount_7() const { return ___foodCount_7; }
	inline Count_t91F44A3D5C9CEC856F088B529D031317D189FD8D ** get_address_of_foodCount_7() { return &___foodCount_7; }
	inline void set_foodCount_7(Count_t91F44A3D5C9CEC856F088B529D031317D189FD8D * value)
	{
		___foodCount_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foodCount_7), (void*)value);
	}

	inline static int32_t get_offset_of_exit_8() { return static_cast<int32_t>(offsetof(BoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C, ___exit_8)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_exit_8() const { return ___exit_8; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_exit_8() { return &___exit_8; }
	inline void set_exit_8(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___exit_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exit_8), (void*)value);
	}

	inline static int32_t get_offset_of_floorTiles_9() { return static_cast<int32_t>(offsetof(BoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C, ___floorTiles_9)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_floorTiles_9() const { return ___floorTiles_9; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_floorTiles_9() { return &___floorTiles_9; }
	inline void set_floorTiles_9(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___floorTiles_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___floorTiles_9), (void*)value);
	}

	inline static int32_t get_offset_of_wallTiles_10() { return static_cast<int32_t>(offsetof(BoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C, ___wallTiles_10)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_wallTiles_10() const { return ___wallTiles_10; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_wallTiles_10() { return &___wallTiles_10; }
	inline void set_wallTiles_10(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___wallTiles_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wallTiles_10), (void*)value);
	}

	inline static int32_t get_offset_of_foodTiles_11() { return static_cast<int32_t>(offsetof(BoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C, ___foodTiles_11)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_foodTiles_11() const { return ___foodTiles_11; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_foodTiles_11() { return &___foodTiles_11; }
	inline void set_foodTiles_11(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___foodTiles_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foodTiles_11), (void*)value);
	}

	inline static int32_t get_offset_of_enemyTiles_12() { return static_cast<int32_t>(offsetof(BoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C, ___enemyTiles_12)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_enemyTiles_12() const { return ___enemyTiles_12; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_enemyTiles_12() { return &___enemyTiles_12; }
	inline void set_enemyTiles_12(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___enemyTiles_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyTiles_12), (void*)value);
	}

	inline static int32_t get_offset_of_outerWallTiles_13() { return static_cast<int32_t>(offsetof(BoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C, ___outerWallTiles_13)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_outerWallTiles_13() const { return ___outerWallTiles_13; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_outerWallTiles_13() { return &___outerWallTiles_13; }
	inline void set_outerWallTiles_13(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___outerWallTiles_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outerWallTiles_13), (void*)value);
	}

	inline static int32_t get_offset_of_boardHolder_14() { return static_cast<int32_t>(offsetof(BoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C, ___boardHolder_14)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_boardHolder_14() const { return ___boardHolder_14; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_boardHolder_14() { return &___boardHolder_14; }
	inline void set_boardHolder_14(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___boardHolder_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boardHolder_14), (void*)value);
	}

	inline static int32_t get_offset_of_gridPositions_15() { return static_cast<int32_t>(offsetof(BoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C, ___gridPositions_15)); }
	inline List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * get_gridPositions_15() const { return ___gridPositions_15; }
	inline List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 ** get_address_of_gridPositions_15() { return &___gridPositions_15; }
	inline void set_gridPositions_15(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * value)
	{
		___gridPositions_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gridPositions_15), (void*)value);
	}
};


// Completed.BoardManager
struct  BoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 Completed.BoardManager::columns
	int32_t ___columns_4;
	// System.Int32 Completed.BoardManager::rows
	int32_t ___rows_5;
	// Completed.BoardManager_Count Completed.BoardManager::wallCount
	Count_tB84B2499DA3FA3890C90C2C192265D4EC2BBB32F * ___wallCount_6;
	// Completed.BoardManager_Count Completed.BoardManager::foodCount
	Count_tB84B2499DA3FA3890C90C2C192265D4EC2BBB32F * ___foodCount_7;
	// UnityEngine.GameObject Completed.BoardManager::exit
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___exit_8;
	// UnityEngine.GameObject[] Completed.BoardManager::floorTiles
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___floorTiles_9;
	// UnityEngine.GameObject[] Completed.BoardManager::wallTiles
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___wallTiles_10;
	// UnityEngine.GameObject[] Completed.BoardManager::foodTiles
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___foodTiles_11;
	// UnityEngine.GameObject[] Completed.BoardManager::enemyTiles
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___enemyTiles_12;
	// UnityEngine.GameObject[] Completed.BoardManager::outerWallTiles
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___outerWallTiles_13;
	// UnityEngine.Transform Completed.BoardManager::boardHolder
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___boardHolder_14;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Completed.BoardManager::gridPositions
	List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___gridPositions_15;

public:
	inline static int32_t get_offset_of_columns_4() { return static_cast<int32_t>(offsetof(BoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2, ___columns_4)); }
	inline int32_t get_columns_4() const { return ___columns_4; }
	inline int32_t* get_address_of_columns_4() { return &___columns_4; }
	inline void set_columns_4(int32_t value)
	{
		___columns_4 = value;
	}

	inline static int32_t get_offset_of_rows_5() { return static_cast<int32_t>(offsetof(BoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2, ___rows_5)); }
	inline int32_t get_rows_5() const { return ___rows_5; }
	inline int32_t* get_address_of_rows_5() { return &___rows_5; }
	inline void set_rows_5(int32_t value)
	{
		___rows_5 = value;
	}

	inline static int32_t get_offset_of_wallCount_6() { return static_cast<int32_t>(offsetof(BoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2, ___wallCount_6)); }
	inline Count_tB84B2499DA3FA3890C90C2C192265D4EC2BBB32F * get_wallCount_6() const { return ___wallCount_6; }
	inline Count_tB84B2499DA3FA3890C90C2C192265D4EC2BBB32F ** get_address_of_wallCount_6() { return &___wallCount_6; }
	inline void set_wallCount_6(Count_tB84B2499DA3FA3890C90C2C192265D4EC2BBB32F * value)
	{
		___wallCount_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wallCount_6), (void*)value);
	}

	inline static int32_t get_offset_of_foodCount_7() { return static_cast<int32_t>(offsetof(BoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2, ___foodCount_7)); }
	inline Count_tB84B2499DA3FA3890C90C2C192265D4EC2BBB32F * get_foodCount_7() const { return ___foodCount_7; }
	inline Count_tB84B2499DA3FA3890C90C2C192265D4EC2BBB32F ** get_address_of_foodCount_7() { return &___foodCount_7; }
	inline void set_foodCount_7(Count_tB84B2499DA3FA3890C90C2C192265D4EC2BBB32F * value)
	{
		___foodCount_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foodCount_7), (void*)value);
	}

	inline static int32_t get_offset_of_exit_8() { return static_cast<int32_t>(offsetof(BoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2, ___exit_8)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_exit_8() const { return ___exit_8; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_exit_8() { return &___exit_8; }
	inline void set_exit_8(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___exit_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exit_8), (void*)value);
	}

	inline static int32_t get_offset_of_floorTiles_9() { return static_cast<int32_t>(offsetof(BoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2, ___floorTiles_9)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_floorTiles_9() const { return ___floorTiles_9; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_floorTiles_9() { return &___floorTiles_9; }
	inline void set_floorTiles_9(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___floorTiles_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___floorTiles_9), (void*)value);
	}

	inline static int32_t get_offset_of_wallTiles_10() { return static_cast<int32_t>(offsetof(BoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2, ___wallTiles_10)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_wallTiles_10() const { return ___wallTiles_10; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_wallTiles_10() { return &___wallTiles_10; }
	inline void set_wallTiles_10(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___wallTiles_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wallTiles_10), (void*)value);
	}

	inline static int32_t get_offset_of_foodTiles_11() { return static_cast<int32_t>(offsetof(BoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2, ___foodTiles_11)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_foodTiles_11() const { return ___foodTiles_11; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_foodTiles_11() { return &___foodTiles_11; }
	inline void set_foodTiles_11(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___foodTiles_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foodTiles_11), (void*)value);
	}

	inline static int32_t get_offset_of_enemyTiles_12() { return static_cast<int32_t>(offsetof(BoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2, ___enemyTiles_12)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_enemyTiles_12() const { return ___enemyTiles_12; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_enemyTiles_12() { return &___enemyTiles_12; }
	inline void set_enemyTiles_12(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___enemyTiles_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyTiles_12), (void*)value);
	}

	inline static int32_t get_offset_of_outerWallTiles_13() { return static_cast<int32_t>(offsetof(BoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2, ___outerWallTiles_13)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_outerWallTiles_13() const { return ___outerWallTiles_13; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_outerWallTiles_13() { return &___outerWallTiles_13; }
	inline void set_outerWallTiles_13(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___outerWallTiles_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outerWallTiles_13), (void*)value);
	}

	inline static int32_t get_offset_of_boardHolder_14() { return static_cast<int32_t>(offsetof(BoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2, ___boardHolder_14)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_boardHolder_14() const { return ___boardHolder_14; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_boardHolder_14() { return &___boardHolder_14; }
	inline void set_boardHolder_14(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___boardHolder_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boardHolder_14), (void*)value);
	}

	inline static int32_t get_offset_of_gridPositions_15() { return static_cast<int32_t>(offsetof(BoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2, ___gridPositions_15)); }
	inline List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * get_gridPositions_15() const { return ___gridPositions_15; }
	inline List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 ** get_address_of_gridPositions_15() { return &___gridPositions_15; }
	inline void set_gridPositions_15(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * value)
	{
		___gridPositions_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gridPositions_15), (void*)value);
	}
};


// Completed.GameManager
struct  GameManager_tE812C2D494AD9E4526B863676B915462C462677A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single Completed.GameManager::levelStartDelay
	float ___levelStartDelay_4;
	// System.Single Completed.GameManager::turnDelay
	float ___turnDelay_5;
	// System.Int32 Completed.GameManager::playerFoodPoints
	int32_t ___playerFoodPoints_6;
	// System.Boolean Completed.GameManager::playersTurn
	bool ___playersTurn_8;
	// UnityEngine.UI.Text Completed.GameManager::levelText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___levelText_9;
	// UnityEngine.GameObject Completed.GameManager::levelImage
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___levelImage_10;
	// Completed.BoardManager Completed.GameManager::boardScript
	BoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2 * ___boardScript_11;
	// System.Int32 Completed.GameManager::level
	int32_t ___level_12;
	// System.Collections.Generic.List`1<Completed.Enemy> Completed.GameManager::enemies
	List_1_t848E0F848A816B961D26FF49DC956621FD44D33C * ___enemies_13;
	// System.Boolean Completed.GameManager::enemiesMoving
	bool ___enemiesMoving_14;
	// System.Boolean Completed.GameManager::doingSetup
	bool ___doingSetup_15;

public:
	inline static int32_t get_offset_of_levelStartDelay_4() { return static_cast<int32_t>(offsetof(GameManager_tE812C2D494AD9E4526B863676B915462C462677A, ___levelStartDelay_4)); }
	inline float get_levelStartDelay_4() const { return ___levelStartDelay_4; }
	inline float* get_address_of_levelStartDelay_4() { return &___levelStartDelay_4; }
	inline void set_levelStartDelay_4(float value)
	{
		___levelStartDelay_4 = value;
	}

	inline static int32_t get_offset_of_turnDelay_5() { return static_cast<int32_t>(offsetof(GameManager_tE812C2D494AD9E4526B863676B915462C462677A, ___turnDelay_5)); }
	inline float get_turnDelay_5() const { return ___turnDelay_5; }
	inline float* get_address_of_turnDelay_5() { return &___turnDelay_5; }
	inline void set_turnDelay_5(float value)
	{
		___turnDelay_5 = value;
	}

	inline static int32_t get_offset_of_playerFoodPoints_6() { return static_cast<int32_t>(offsetof(GameManager_tE812C2D494AD9E4526B863676B915462C462677A, ___playerFoodPoints_6)); }
	inline int32_t get_playerFoodPoints_6() const { return ___playerFoodPoints_6; }
	inline int32_t* get_address_of_playerFoodPoints_6() { return &___playerFoodPoints_6; }
	inline void set_playerFoodPoints_6(int32_t value)
	{
		___playerFoodPoints_6 = value;
	}

	inline static int32_t get_offset_of_playersTurn_8() { return static_cast<int32_t>(offsetof(GameManager_tE812C2D494AD9E4526B863676B915462C462677A, ___playersTurn_8)); }
	inline bool get_playersTurn_8() const { return ___playersTurn_8; }
	inline bool* get_address_of_playersTurn_8() { return &___playersTurn_8; }
	inline void set_playersTurn_8(bool value)
	{
		___playersTurn_8 = value;
	}

	inline static int32_t get_offset_of_levelText_9() { return static_cast<int32_t>(offsetof(GameManager_tE812C2D494AD9E4526B863676B915462C462677A, ___levelText_9)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_levelText_9() const { return ___levelText_9; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_levelText_9() { return &___levelText_9; }
	inline void set_levelText_9(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___levelText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelText_9), (void*)value);
	}

	inline static int32_t get_offset_of_levelImage_10() { return static_cast<int32_t>(offsetof(GameManager_tE812C2D494AD9E4526B863676B915462C462677A, ___levelImage_10)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_levelImage_10() const { return ___levelImage_10; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_levelImage_10() { return &___levelImage_10; }
	inline void set_levelImage_10(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___levelImage_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelImage_10), (void*)value);
	}

	inline static int32_t get_offset_of_boardScript_11() { return static_cast<int32_t>(offsetof(GameManager_tE812C2D494AD9E4526B863676B915462C462677A, ___boardScript_11)); }
	inline BoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2 * get_boardScript_11() const { return ___boardScript_11; }
	inline BoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2 ** get_address_of_boardScript_11() { return &___boardScript_11; }
	inline void set_boardScript_11(BoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2 * value)
	{
		___boardScript_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boardScript_11), (void*)value);
	}

	inline static int32_t get_offset_of_level_12() { return static_cast<int32_t>(offsetof(GameManager_tE812C2D494AD9E4526B863676B915462C462677A, ___level_12)); }
	inline int32_t get_level_12() const { return ___level_12; }
	inline int32_t* get_address_of_level_12() { return &___level_12; }
	inline void set_level_12(int32_t value)
	{
		___level_12 = value;
	}

	inline static int32_t get_offset_of_enemies_13() { return static_cast<int32_t>(offsetof(GameManager_tE812C2D494AD9E4526B863676B915462C462677A, ___enemies_13)); }
	inline List_1_t848E0F848A816B961D26FF49DC956621FD44D33C * get_enemies_13() const { return ___enemies_13; }
	inline List_1_t848E0F848A816B961D26FF49DC956621FD44D33C ** get_address_of_enemies_13() { return &___enemies_13; }
	inline void set_enemies_13(List_1_t848E0F848A816B961D26FF49DC956621FD44D33C * value)
	{
		___enemies_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemies_13), (void*)value);
	}

	inline static int32_t get_offset_of_enemiesMoving_14() { return static_cast<int32_t>(offsetof(GameManager_tE812C2D494AD9E4526B863676B915462C462677A, ___enemiesMoving_14)); }
	inline bool get_enemiesMoving_14() const { return ___enemiesMoving_14; }
	inline bool* get_address_of_enemiesMoving_14() { return &___enemiesMoving_14; }
	inline void set_enemiesMoving_14(bool value)
	{
		___enemiesMoving_14 = value;
	}

	inline static int32_t get_offset_of_doingSetup_15() { return static_cast<int32_t>(offsetof(GameManager_tE812C2D494AD9E4526B863676B915462C462677A, ___doingSetup_15)); }
	inline bool get_doingSetup_15() const { return ___doingSetup_15; }
	inline bool* get_address_of_doingSetup_15() { return &___doingSetup_15; }
	inline void set_doingSetup_15(bool value)
	{
		___doingSetup_15 = value;
	}
};

struct GameManager_tE812C2D494AD9E4526B863676B915462C462677A_StaticFields
{
public:
	// Completed.GameManager Completed.GameManager::instance
	GameManager_tE812C2D494AD9E4526B863676B915462C462677A * ___instance_7;

public:
	inline static int32_t get_offset_of_instance_7() { return static_cast<int32_t>(offsetof(GameManager_tE812C2D494AD9E4526B863676B915462C462677A_StaticFields, ___instance_7)); }
	inline GameManager_tE812C2D494AD9E4526B863676B915462C462677A * get_instance_7() const { return ___instance_7; }
	inline GameManager_tE812C2D494AD9E4526B863676B915462C462677A ** get_address_of_instance_7() { return &___instance_7; }
	inline void set_instance_7(GameManager_tE812C2D494AD9E4526B863676B915462C462677A * value)
	{
		___instance_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_7), (void*)value);
	}
};


// Completed.Loader
struct  Loader_t1D09864ADBE15ED497B70C083FE3578E97478ADE  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject Completed.Loader::gameManager
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameManager_4;
	// UnityEngine.GameObject Completed.Loader::soundManager
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___soundManager_5;

public:
	inline static int32_t get_offset_of_gameManager_4() { return static_cast<int32_t>(offsetof(Loader_t1D09864ADBE15ED497B70C083FE3578E97478ADE, ___gameManager_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_gameManager_4() const { return ___gameManager_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_gameManager_4() { return &___gameManager_4; }
	inline void set_gameManager_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___gameManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_soundManager_5() { return static_cast<int32_t>(offsetof(Loader_t1D09864ADBE15ED497B70C083FE3578E97478ADE, ___soundManager_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_soundManager_5() const { return ___soundManager_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_soundManager_5() { return &___soundManager_5; }
	inline void set_soundManager_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___soundManager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundManager_5), (void*)value);
	}
};


// Completed.MovingObject
struct  MovingObject_t0AD4E0F568C409511445781F40355FF97164B1F2  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single Completed.MovingObject::moveTime
	float ___moveTime_4;
	// UnityEngine.LayerMask Completed.MovingObject::blockingLayer
	LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___blockingLayer_5;
	// UnityEngine.BoxCollider2D Completed.MovingObject::boxCollider
	BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * ___boxCollider_6;
	// UnityEngine.Rigidbody2D Completed.MovingObject::rb2D
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * ___rb2D_7;
	// System.Single Completed.MovingObject::inverseMoveTime
	float ___inverseMoveTime_8;

public:
	inline static int32_t get_offset_of_moveTime_4() { return static_cast<int32_t>(offsetof(MovingObject_t0AD4E0F568C409511445781F40355FF97164B1F2, ___moveTime_4)); }
	inline float get_moveTime_4() const { return ___moveTime_4; }
	inline float* get_address_of_moveTime_4() { return &___moveTime_4; }
	inline void set_moveTime_4(float value)
	{
		___moveTime_4 = value;
	}

	inline static int32_t get_offset_of_blockingLayer_5() { return static_cast<int32_t>(offsetof(MovingObject_t0AD4E0F568C409511445781F40355FF97164B1F2, ___blockingLayer_5)); }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  get_blockingLayer_5() const { return ___blockingLayer_5; }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * get_address_of_blockingLayer_5() { return &___blockingLayer_5; }
	inline void set_blockingLayer_5(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  value)
	{
		___blockingLayer_5 = value;
	}

	inline static int32_t get_offset_of_boxCollider_6() { return static_cast<int32_t>(offsetof(MovingObject_t0AD4E0F568C409511445781F40355FF97164B1F2, ___boxCollider_6)); }
	inline BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * get_boxCollider_6() const { return ___boxCollider_6; }
	inline BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 ** get_address_of_boxCollider_6() { return &___boxCollider_6; }
	inline void set_boxCollider_6(BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * value)
	{
		___boxCollider_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boxCollider_6), (void*)value);
	}

	inline static int32_t get_offset_of_rb2D_7() { return static_cast<int32_t>(offsetof(MovingObject_t0AD4E0F568C409511445781F40355FF97164B1F2, ___rb2D_7)); }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * get_rb2D_7() const { return ___rb2D_7; }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE ** get_address_of_rb2D_7() { return &___rb2D_7; }
	inline void set_rb2D_7(Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * value)
	{
		___rb2D_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb2D_7), (void*)value);
	}

	inline static int32_t get_offset_of_inverseMoveTime_8() { return static_cast<int32_t>(offsetof(MovingObject_t0AD4E0F568C409511445781F40355FF97164B1F2, ___inverseMoveTime_8)); }
	inline float get_inverseMoveTime_8() const { return ___inverseMoveTime_8; }
	inline float* get_address_of_inverseMoveTime_8() { return &___inverseMoveTime_8; }
	inline void set_inverseMoveTime_8(float value)
	{
		___inverseMoveTime_8 = value;
	}
};


// Completed.SoundManager
struct  SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.AudioSource Completed.SoundManager::efxSource
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___efxSource_4;
	// UnityEngine.AudioSource Completed.SoundManager::musicSource
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___musicSource_5;
	// System.Single Completed.SoundManager::lowPitchRange
	float ___lowPitchRange_7;
	// System.Single Completed.SoundManager::highPitchRange
	float ___highPitchRange_8;

public:
	inline static int32_t get_offset_of_efxSource_4() { return static_cast<int32_t>(offsetof(SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E, ___efxSource_4)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get_efxSource_4() const { return ___efxSource_4; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of_efxSource_4() { return &___efxSource_4; }
	inline void set_efxSource_4(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		___efxSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___efxSource_4), (void*)value);
	}

	inline static int32_t get_offset_of_musicSource_5() { return static_cast<int32_t>(offsetof(SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E, ___musicSource_5)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get_musicSource_5() const { return ___musicSource_5; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of_musicSource_5() { return &___musicSource_5; }
	inline void set_musicSource_5(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		___musicSource_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___musicSource_5), (void*)value);
	}

	inline static int32_t get_offset_of_lowPitchRange_7() { return static_cast<int32_t>(offsetof(SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E, ___lowPitchRange_7)); }
	inline float get_lowPitchRange_7() const { return ___lowPitchRange_7; }
	inline float* get_address_of_lowPitchRange_7() { return &___lowPitchRange_7; }
	inline void set_lowPitchRange_7(float value)
	{
		___lowPitchRange_7 = value;
	}

	inline static int32_t get_offset_of_highPitchRange_8() { return static_cast<int32_t>(offsetof(SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E, ___highPitchRange_8)); }
	inline float get_highPitchRange_8() const { return ___highPitchRange_8; }
	inline float* get_address_of_highPitchRange_8() { return &___highPitchRange_8; }
	inline void set_highPitchRange_8(float value)
	{
		___highPitchRange_8 = value;
	}
};

struct SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E_StaticFields
{
public:
	// Completed.SoundManager Completed.SoundManager::instance
	SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E * ___instance_6;

public:
	inline static int32_t get_offset_of_instance_6() { return static_cast<int32_t>(offsetof(SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E_StaticFields, ___instance_6)); }
	inline SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E * get_instance_6() const { return ___instance_6; }
	inline SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E ** get_address_of_instance_6() { return &___instance_6; }
	inline void set_instance_6(SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E * value)
	{
		___instance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_6), (void*)value);
	}
};


// Completed.Wall
struct  Wall_t67DD401885ADE3E30586FB7A43629B3AA85E08CD  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.AudioClip Completed.Wall::chopSound1
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___chopSound1_4;
	// UnityEngine.AudioClip Completed.Wall::chopSound2
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___chopSound2_5;
	// UnityEngine.Sprite Completed.Wall::dmgSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___dmgSprite_6;
	// System.Int32 Completed.Wall::hp
	int32_t ___hp_7;
	// UnityEngine.SpriteRenderer Completed.Wall::spriteRenderer
	SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * ___spriteRenderer_8;

public:
	inline static int32_t get_offset_of_chopSound1_4() { return static_cast<int32_t>(offsetof(Wall_t67DD401885ADE3E30586FB7A43629B3AA85E08CD, ___chopSound1_4)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_chopSound1_4() const { return ___chopSound1_4; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_chopSound1_4() { return &___chopSound1_4; }
	inline void set_chopSound1_4(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___chopSound1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chopSound1_4), (void*)value);
	}

	inline static int32_t get_offset_of_chopSound2_5() { return static_cast<int32_t>(offsetof(Wall_t67DD401885ADE3E30586FB7A43629B3AA85E08CD, ___chopSound2_5)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_chopSound2_5() const { return ___chopSound2_5; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_chopSound2_5() { return &___chopSound2_5; }
	inline void set_chopSound2_5(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___chopSound2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chopSound2_5), (void*)value);
	}

	inline static int32_t get_offset_of_dmgSprite_6() { return static_cast<int32_t>(offsetof(Wall_t67DD401885ADE3E30586FB7A43629B3AA85E08CD, ___dmgSprite_6)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_dmgSprite_6() const { return ___dmgSprite_6; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_dmgSprite_6() { return &___dmgSprite_6; }
	inline void set_dmgSprite_6(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___dmgSprite_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dmgSprite_6), (void*)value);
	}

	inline static int32_t get_offset_of_hp_7() { return static_cast<int32_t>(offsetof(Wall_t67DD401885ADE3E30586FB7A43629B3AA85E08CD, ___hp_7)); }
	inline int32_t get_hp_7() const { return ___hp_7; }
	inline int32_t* get_address_of_hp_7() { return &___hp_7; }
	inline void set_hp_7(int32_t value)
	{
		___hp_7 = value;
	}

	inline static int32_t get_offset_of_spriteRenderer_8() { return static_cast<int32_t>(offsetof(Wall_t67DD401885ADE3E30586FB7A43629B3AA85E08CD, ___spriteRenderer_8)); }
	inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * get_spriteRenderer_8() const { return ___spriteRenderer_8; }
	inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F ** get_address_of_spriteRenderer_8() { return &___spriteRenderer_8; }
	inline void set_spriteRenderer_8(SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * value)
	{
		___spriteRenderer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteRenderer_8), (void*)value);
	}
};


// GameManager
struct  GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single GameManager::levelStartDelay
	float ___levelStartDelay_4;
	// System.Single GameManager::turnDelay
	float ___turnDelay_5;
	// BoardManager GameManager::boardScript
	BoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C * ___boardScript_7;
	// System.Int32 GameManager::playerFoodPoints
	int32_t ___playerFoodPoints_8;
	// System.Boolean GameManager::playersTurn
	bool ___playersTurn_9;
	// System.Int32 GameManager::level
	int32_t ___level_10;
	// System.Collections.Generic.List`1<Enemy> GameManager::enemies
	List_1_t4BC8A38307CF15CA0AD142EDE954C83F258D776A * ___enemies_11;
	// System.Boolean GameManager::enemiesMoving
	bool ___enemiesMoving_12;
	// UnityEngine.UI.Text GameManager::levelText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___levelText_13;
	// UnityEngine.GameObject GameManager::levelImage
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___levelImage_14;
	// System.Boolean GameManager::doingSetup
	bool ___doingSetup_15;

public:
	inline static int32_t get_offset_of_levelStartDelay_4() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___levelStartDelay_4)); }
	inline float get_levelStartDelay_4() const { return ___levelStartDelay_4; }
	inline float* get_address_of_levelStartDelay_4() { return &___levelStartDelay_4; }
	inline void set_levelStartDelay_4(float value)
	{
		___levelStartDelay_4 = value;
	}

	inline static int32_t get_offset_of_turnDelay_5() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___turnDelay_5)); }
	inline float get_turnDelay_5() const { return ___turnDelay_5; }
	inline float* get_address_of_turnDelay_5() { return &___turnDelay_5; }
	inline void set_turnDelay_5(float value)
	{
		___turnDelay_5 = value;
	}

	inline static int32_t get_offset_of_boardScript_7() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___boardScript_7)); }
	inline BoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C * get_boardScript_7() const { return ___boardScript_7; }
	inline BoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C ** get_address_of_boardScript_7() { return &___boardScript_7; }
	inline void set_boardScript_7(BoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C * value)
	{
		___boardScript_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boardScript_7), (void*)value);
	}

	inline static int32_t get_offset_of_playerFoodPoints_8() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___playerFoodPoints_8)); }
	inline int32_t get_playerFoodPoints_8() const { return ___playerFoodPoints_8; }
	inline int32_t* get_address_of_playerFoodPoints_8() { return &___playerFoodPoints_8; }
	inline void set_playerFoodPoints_8(int32_t value)
	{
		___playerFoodPoints_8 = value;
	}

	inline static int32_t get_offset_of_playersTurn_9() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___playersTurn_9)); }
	inline bool get_playersTurn_9() const { return ___playersTurn_9; }
	inline bool* get_address_of_playersTurn_9() { return &___playersTurn_9; }
	inline void set_playersTurn_9(bool value)
	{
		___playersTurn_9 = value;
	}

	inline static int32_t get_offset_of_level_10() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___level_10)); }
	inline int32_t get_level_10() const { return ___level_10; }
	inline int32_t* get_address_of_level_10() { return &___level_10; }
	inline void set_level_10(int32_t value)
	{
		___level_10 = value;
	}

	inline static int32_t get_offset_of_enemies_11() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___enemies_11)); }
	inline List_1_t4BC8A38307CF15CA0AD142EDE954C83F258D776A * get_enemies_11() const { return ___enemies_11; }
	inline List_1_t4BC8A38307CF15CA0AD142EDE954C83F258D776A ** get_address_of_enemies_11() { return &___enemies_11; }
	inline void set_enemies_11(List_1_t4BC8A38307CF15CA0AD142EDE954C83F258D776A * value)
	{
		___enemies_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemies_11), (void*)value);
	}

	inline static int32_t get_offset_of_enemiesMoving_12() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___enemiesMoving_12)); }
	inline bool get_enemiesMoving_12() const { return ___enemiesMoving_12; }
	inline bool* get_address_of_enemiesMoving_12() { return &___enemiesMoving_12; }
	inline void set_enemiesMoving_12(bool value)
	{
		___enemiesMoving_12 = value;
	}

	inline static int32_t get_offset_of_levelText_13() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___levelText_13)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_levelText_13() const { return ___levelText_13; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_levelText_13() { return &___levelText_13; }
	inline void set_levelText_13(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___levelText_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelText_13), (void*)value);
	}

	inline static int32_t get_offset_of_levelImage_14() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___levelImage_14)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_levelImage_14() const { return ___levelImage_14; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_levelImage_14() { return &___levelImage_14; }
	inline void set_levelImage_14(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___levelImage_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelImage_14), (void*)value);
	}

	inline static int32_t get_offset_of_doingSetup_15() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___doingSetup_15)); }
	inline bool get_doingSetup_15() const { return ___doingSetup_15; }
	inline bool* get_address_of_doingSetup_15() { return &___doingSetup_15; }
	inline void set_doingSetup_15(bool value)
	{
		___doingSetup_15 = value;
	}
};

struct GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields
{
public:
	// GameManager GameManager::instance
	GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * ___instance_6;

public:
	inline static int32_t get_offset_of_instance_6() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields, ___instance_6)); }
	inline GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * get_instance_6() const { return ___instance_6; }
	inline GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 ** get_address_of_instance_6() { return &___instance_6; }
	inline void set_instance_6(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * value)
	{
		___instance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_6), (void*)value);
	}
};


// Loader
struct  Loader_tC39B68C6E54EA735AB7561201ECFA248531172AB  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject Loader::gameManager
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameManager_4;

public:
	inline static int32_t get_offset_of_gameManager_4() { return static_cast<int32_t>(offsetof(Loader_tC39B68C6E54EA735AB7561201ECFA248531172AB, ___gameManager_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_gameManager_4() const { return ___gameManager_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_gameManager_4() { return &___gameManager_4; }
	inline void set_gameManager_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___gameManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameManager_4), (void*)value);
	}
};


// MovingObject
struct  MovingObject_tF36E398D30B1800D05ED5DD9017F575347F36556  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single MovingObject::moveTime
	float ___moveTime_4;
	// UnityEngine.LayerMask MovingObject::blockingLayer
	LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___blockingLayer_5;
	// UnityEngine.BoxCollider2D MovingObject::boxCollider
	BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * ___boxCollider_6;
	// UnityEngine.Rigidbody2D MovingObject::rb2D
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * ___rb2D_7;
	// System.Single MovingObject::inverseMoveTime
	float ___inverseMoveTime_8;

public:
	inline static int32_t get_offset_of_moveTime_4() { return static_cast<int32_t>(offsetof(MovingObject_tF36E398D30B1800D05ED5DD9017F575347F36556, ___moveTime_4)); }
	inline float get_moveTime_4() const { return ___moveTime_4; }
	inline float* get_address_of_moveTime_4() { return &___moveTime_4; }
	inline void set_moveTime_4(float value)
	{
		___moveTime_4 = value;
	}

	inline static int32_t get_offset_of_blockingLayer_5() { return static_cast<int32_t>(offsetof(MovingObject_tF36E398D30B1800D05ED5DD9017F575347F36556, ___blockingLayer_5)); }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  get_blockingLayer_5() const { return ___blockingLayer_5; }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * get_address_of_blockingLayer_5() { return &___blockingLayer_5; }
	inline void set_blockingLayer_5(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  value)
	{
		___blockingLayer_5 = value;
	}

	inline static int32_t get_offset_of_boxCollider_6() { return static_cast<int32_t>(offsetof(MovingObject_tF36E398D30B1800D05ED5DD9017F575347F36556, ___boxCollider_6)); }
	inline BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * get_boxCollider_6() const { return ___boxCollider_6; }
	inline BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 ** get_address_of_boxCollider_6() { return &___boxCollider_6; }
	inline void set_boxCollider_6(BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * value)
	{
		___boxCollider_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boxCollider_6), (void*)value);
	}

	inline static int32_t get_offset_of_rb2D_7() { return static_cast<int32_t>(offsetof(MovingObject_tF36E398D30B1800D05ED5DD9017F575347F36556, ___rb2D_7)); }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * get_rb2D_7() const { return ___rb2D_7; }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE ** get_address_of_rb2D_7() { return &___rb2D_7; }
	inline void set_rb2D_7(Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * value)
	{
		___rb2D_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb2D_7), (void*)value);
	}

	inline static int32_t get_offset_of_inverseMoveTime_8() { return static_cast<int32_t>(offsetof(MovingObject_tF36E398D30B1800D05ED5DD9017F575347F36556, ___inverseMoveTime_8)); }
	inline float get_inverseMoveTime_8() const { return ___inverseMoveTime_8; }
	inline float* get_address_of_inverseMoveTime_8() { return &___inverseMoveTime_8; }
	inline void set_inverseMoveTime_8(float value)
	{
		___inverseMoveTime_8 = value;
	}
};


// SoundManager
struct  SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.AudioSource SoundManager::efxSource
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___efxSource_4;
	// UnityEngine.AudioSource SoundManager::musicSource
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___musicSource_5;
	// System.Single SoundManager::lowPitchRange
	float ___lowPitchRange_7;
	// System.Single SoundManager::highPitchRange
	float ___highPitchRange_8;

public:
	inline static int32_t get_offset_of_efxSource_4() { return static_cast<int32_t>(offsetof(SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6, ___efxSource_4)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get_efxSource_4() const { return ___efxSource_4; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of_efxSource_4() { return &___efxSource_4; }
	inline void set_efxSource_4(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		___efxSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___efxSource_4), (void*)value);
	}

	inline static int32_t get_offset_of_musicSource_5() { return static_cast<int32_t>(offsetof(SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6, ___musicSource_5)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get_musicSource_5() const { return ___musicSource_5; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of_musicSource_5() { return &___musicSource_5; }
	inline void set_musicSource_5(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		___musicSource_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___musicSource_5), (void*)value);
	}

	inline static int32_t get_offset_of_lowPitchRange_7() { return static_cast<int32_t>(offsetof(SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6, ___lowPitchRange_7)); }
	inline float get_lowPitchRange_7() const { return ___lowPitchRange_7; }
	inline float* get_address_of_lowPitchRange_7() { return &___lowPitchRange_7; }
	inline void set_lowPitchRange_7(float value)
	{
		___lowPitchRange_7 = value;
	}

	inline static int32_t get_offset_of_highPitchRange_8() { return static_cast<int32_t>(offsetof(SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6, ___highPitchRange_8)); }
	inline float get_highPitchRange_8() const { return ___highPitchRange_8; }
	inline float* get_address_of_highPitchRange_8() { return &___highPitchRange_8; }
	inline void set_highPitchRange_8(float value)
	{
		___highPitchRange_8 = value;
	}
};

struct SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6_StaticFields
{
public:
	// SoundManager SoundManager::instance
	SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6 * ___instance_6;

public:
	inline static int32_t get_offset_of_instance_6() { return static_cast<int32_t>(offsetof(SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6_StaticFields, ___instance_6)); }
	inline SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6 * get_instance_6() const { return ___instance_6; }
	inline SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6 ** get_address_of_instance_6() { return &___instance_6; }
	inline void set_instance_6(SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6 * value)
	{
		___instance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_6), (void*)value);
	}
};


// TutorialInfo
struct  TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean TutorialInfo::showAtStart
	bool ___showAtStart_4;
	// System.String TutorialInfo::url
	String_t* ___url_5;
	// UnityEngine.GameObject TutorialInfo::overlay
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___overlay_6;
	// UnityEngine.AudioListener TutorialInfo::mainListener
	AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * ___mainListener_7;
	// UnityEngine.UI.Toggle TutorialInfo::showAtStartToggle
	Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106 * ___showAtStartToggle_8;

public:
	inline static int32_t get_offset_of_showAtStart_4() { return static_cast<int32_t>(offsetof(TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6, ___showAtStart_4)); }
	inline bool get_showAtStart_4() const { return ___showAtStart_4; }
	inline bool* get_address_of_showAtStart_4() { return &___showAtStart_4; }
	inline void set_showAtStart_4(bool value)
	{
		___showAtStart_4 = value;
	}

	inline static int32_t get_offset_of_url_5() { return static_cast<int32_t>(offsetof(TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6, ___url_5)); }
	inline String_t* get_url_5() const { return ___url_5; }
	inline String_t** get_address_of_url_5() { return &___url_5; }
	inline void set_url_5(String_t* value)
	{
		___url_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_5), (void*)value);
	}

	inline static int32_t get_offset_of_overlay_6() { return static_cast<int32_t>(offsetof(TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6, ___overlay_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_overlay_6() const { return ___overlay_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_overlay_6() { return &___overlay_6; }
	inline void set_overlay_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___overlay_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overlay_6), (void*)value);
	}

	inline static int32_t get_offset_of_mainListener_7() { return static_cast<int32_t>(offsetof(TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6, ___mainListener_7)); }
	inline AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * get_mainListener_7() const { return ___mainListener_7; }
	inline AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 ** get_address_of_mainListener_7() { return &___mainListener_7; }
	inline void set_mainListener_7(AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * value)
	{
		___mainListener_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainListener_7), (void*)value);
	}

	inline static int32_t get_offset_of_showAtStartToggle_8() { return static_cast<int32_t>(offsetof(TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6, ___showAtStartToggle_8)); }
	inline Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106 * get_showAtStartToggle_8() const { return ___showAtStartToggle_8; }
	inline Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106 ** get_address_of_showAtStartToggle_8() { return &___showAtStartToggle_8; }
	inline void set_showAtStartToggle_8(Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106 * value)
	{
		___showAtStartToggle_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___showAtStartToggle_8), (void*)value);
	}
};

struct TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6_StaticFields
{
public:
	// System.String TutorialInfo::showAtStartPrefsKey
	String_t* ___showAtStartPrefsKey_9;
	// System.Boolean TutorialInfo::alreadyShownThisSession
	bool ___alreadyShownThisSession_10;

public:
	inline static int32_t get_offset_of_showAtStartPrefsKey_9() { return static_cast<int32_t>(offsetof(TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6_StaticFields, ___showAtStartPrefsKey_9)); }
	inline String_t* get_showAtStartPrefsKey_9() const { return ___showAtStartPrefsKey_9; }
	inline String_t** get_address_of_showAtStartPrefsKey_9() { return &___showAtStartPrefsKey_9; }
	inline void set_showAtStartPrefsKey_9(String_t* value)
	{
		___showAtStartPrefsKey_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___showAtStartPrefsKey_9), (void*)value);
	}

	inline static int32_t get_offset_of_alreadyShownThisSession_10() { return static_cast<int32_t>(offsetof(TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6_StaticFields, ___alreadyShownThisSession_10)); }
	inline bool get_alreadyShownThisSession_10() const { return ___alreadyShownThisSession_10; }
	inline bool* get_address_of_alreadyShownThisSession_10() { return &___alreadyShownThisSession_10; }
	inline void set_alreadyShownThisSession_10(bool value)
	{
		___alreadyShownThisSession_10 = value;
	}
};


// UnityEngine.AudioListener
struct  AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099  : public AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7
{
public:

public:
};


// UnityEngine.AudioSource
struct  AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C  : public AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7
{
public:

public:
};


// UnityEngine.BoxCollider2D
struct  BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87  : public Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// Wall
struct  Wall_t482816FBEA1E55072FF113F443689BCC831EA97B  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Sprite Wall::dmgSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___dmgSprite_4;
	// System.Int32 Wall::hp
	int32_t ___hp_5;
	// UnityEngine.AudioClip Wall::chopSound1
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___chopSound1_6;
	// UnityEngine.AudioClip Wall::chopSound2
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___chopSound2_7;
	// UnityEngine.SpriteRenderer Wall::spriteRenderer
	SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * ___spriteRenderer_8;

public:
	inline static int32_t get_offset_of_dmgSprite_4() { return static_cast<int32_t>(offsetof(Wall_t482816FBEA1E55072FF113F443689BCC831EA97B, ___dmgSprite_4)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_dmgSprite_4() const { return ___dmgSprite_4; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_dmgSprite_4() { return &___dmgSprite_4; }
	inline void set_dmgSprite_4(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___dmgSprite_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dmgSprite_4), (void*)value);
	}

	inline static int32_t get_offset_of_hp_5() { return static_cast<int32_t>(offsetof(Wall_t482816FBEA1E55072FF113F443689BCC831EA97B, ___hp_5)); }
	inline int32_t get_hp_5() const { return ___hp_5; }
	inline int32_t* get_address_of_hp_5() { return &___hp_5; }
	inline void set_hp_5(int32_t value)
	{
		___hp_5 = value;
	}

	inline static int32_t get_offset_of_chopSound1_6() { return static_cast<int32_t>(offsetof(Wall_t482816FBEA1E55072FF113F443689BCC831EA97B, ___chopSound1_6)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_chopSound1_6() const { return ___chopSound1_6; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_chopSound1_6() { return &___chopSound1_6; }
	inline void set_chopSound1_6(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___chopSound1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chopSound1_6), (void*)value);
	}

	inline static int32_t get_offset_of_chopSound2_7() { return static_cast<int32_t>(offsetof(Wall_t482816FBEA1E55072FF113F443689BCC831EA97B, ___chopSound2_7)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_chopSound2_7() const { return ___chopSound2_7; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_chopSound2_7() { return &___chopSound2_7; }
	inline void set_chopSound2_7(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___chopSound2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chopSound2_7), (void*)value);
	}

	inline static int32_t get_offset_of_spriteRenderer_8() { return static_cast<int32_t>(offsetof(Wall_t482816FBEA1E55072FF113F443689BCC831EA97B, ___spriteRenderer_8)); }
	inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * get_spriteRenderer_8() const { return ___spriteRenderer_8; }
	inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F ** get_address_of_spriteRenderer_8() { return &___spriteRenderer_8; }
	inline void set_spriteRenderer_8(SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * value)
	{
		___spriteRenderer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteRenderer_8), (void*)value);
	}
};


// Completed.Enemy
struct  Enemy_t6720AD1364BE03542EAD44A8102C7C1DE8CAD7BD  : public MovingObject_t0AD4E0F568C409511445781F40355FF97164B1F2
{
public:
	// System.Int32 Completed.Enemy::playerDamage
	int32_t ___playerDamage_9;
	// UnityEngine.AudioClip Completed.Enemy::attackSound1
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___attackSound1_10;
	// UnityEngine.AudioClip Completed.Enemy::attackSound2
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___attackSound2_11;
	// UnityEngine.Animator Completed.Enemy::animator
	Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator_12;
	// UnityEngine.Transform Completed.Enemy::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_13;
	// System.Boolean Completed.Enemy::skipMove
	bool ___skipMove_14;

public:
	inline static int32_t get_offset_of_playerDamage_9() { return static_cast<int32_t>(offsetof(Enemy_t6720AD1364BE03542EAD44A8102C7C1DE8CAD7BD, ___playerDamage_9)); }
	inline int32_t get_playerDamage_9() const { return ___playerDamage_9; }
	inline int32_t* get_address_of_playerDamage_9() { return &___playerDamage_9; }
	inline void set_playerDamage_9(int32_t value)
	{
		___playerDamage_9 = value;
	}

	inline static int32_t get_offset_of_attackSound1_10() { return static_cast<int32_t>(offsetof(Enemy_t6720AD1364BE03542EAD44A8102C7C1DE8CAD7BD, ___attackSound1_10)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_attackSound1_10() const { return ___attackSound1_10; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_attackSound1_10() { return &___attackSound1_10; }
	inline void set_attackSound1_10(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___attackSound1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attackSound1_10), (void*)value);
	}

	inline static int32_t get_offset_of_attackSound2_11() { return static_cast<int32_t>(offsetof(Enemy_t6720AD1364BE03542EAD44A8102C7C1DE8CAD7BD, ___attackSound2_11)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_attackSound2_11() const { return ___attackSound2_11; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_attackSound2_11() { return &___attackSound2_11; }
	inline void set_attackSound2_11(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___attackSound2_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attackSound2_11), (void*)value);
	}

	inline static int32_t get_offset_of_animator_12() { return static_cast<int32_t>(offsetof(Enemy_t6720AD1364BE03542EAD44A8102C7C1DE8CAD7BD, ___animator_12)); }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * get_animator_12() const { return ___animator_12; }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A ** get_address_of_animator_12() { return &___animator_12; }
	inline void set_animator_12(Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * value)
	{
		___animator_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_12), (void*)value);
	}

	inline static int32_t get_offset_of_target_13() { return static_cast<int32_t>(offsetof(Enemy_t6720AD1364BE03542EAD44A8102C7C1DE8CAD7BD, ___target_13)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_13() const { return ___target_13; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_13() { return &___target_13; }
	inline void set_target_13(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_13), (void*)value);
	}

	inline static int32_t get_offset_of_skipMove_14() { return static_cast<int32_t>(offsetof(Enemy_t6720AD1364BE03542EAD44A8102C7C1DE8CAD7BD, ___skipMove_14)); }
	inline bool get_skipMove_14() const { return ___skipMove_14; }
	inline bool* get_address_of_skipMove_14() { return &___skipMove_14; }
	inline void set_skipMove_14(bool value)
	{
		___skipMove_14 = value;
	}
};


// Completed.Player
struct  Player_tAFCC8AE0CDA5F35211606A022B981B2A8A655FB3  : public MovingObject_t0AD4E0F568C409511445781F40355FF97164B1F2
{
public:
	// System.Single Completed.Player::restartLevelDelay
	float ___restartLevelDelay_9;
	// System.Int32 Completed.Player::pointsPerFood
	int32_t ___pointsPerFood_10;
	// System.Int32 Completed.Player::pointsPerSoda
	int32_t ___pointsPerSoda_11;
	// System.Int32 Completed.Player::wallDamage
	int32_t ___wallDamage_12;
	// UnityEngine.UI.Text Completed.Player::foodText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___foodText_13;
	// UnityEngine.AudioClip Completed.Player::moveSound1
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___moveSound1_14;
	// UnityEngine.AudioClip Completed.Player::moveSound2
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___moveSound2_15;
	// UnityEngine.AudioClip Completed.Player::eatSound1
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___eatSound1_16;
	// UnityEngine.AudioClip Completed.Player::eatSound2
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___eatSound2_17;
	// UnityEngine.AudioClip Completed.Player::drinkSound1
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___drinkSound1_18;
	// UnityEngine.AudioClip Completed.Player::drinkSound2
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___drinkSound2_19;
	// UnityEngine.AudioClip Completed.Player::gameOverSound
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___gameOverSound_20;
	// UnityEngine.Animator Completed.Player::animator
	Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator_21;
	// System.Int32 Completed.Player::food
	int32_t ___food_22;
	// UnityEngine.Vector2 Completed.Player::touchOrigin
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___touchOrigin_23;

public:
	inline static int32_t get_offset_of_restartLevelDelay_9() { return static_cast<int32_t>(offsetof(Player_tAFCC8AE0CDA5F35211606A022B981B2A8A655FB3, ___restartLevelDelay_9)); }
	inline float get_restartLevelDelay_9() const { return ___restartLevelDelay_9; }
	inline float* get_address_of_restartLevelDelay_9() { return &___restartLevelDelay_9; }
	inline void set_restartLevelDelay_9(float value)
	{
		___restartLevelDelay_9 = value;
	}

	inline static int32_t get_offset_of_pointsPerFood_10() { return static_cast<int32_t>(offsetof(Player_tAFCC8AE0CDA5F35211606A022B981B2A8A655FB3, ___pointsPerFood_10)); }
	inline int32_t get_pointsPerFood_10() const { return ___pointsPerFood_10; }
	inline int32_t* get_address_of_pointsPerFood_10() { return &___pointsPerFood_10; }
	inline void set_pointsPerFood_10(int32_t value)
	{
		___pointsPerFood_10 = value;
	}

	inline static int32_t get_offset_of_pointsPerSoda_11() { return static_cast<int32_t>(offsetof(Player_tAFCC8AE0CDA5F35211606A022B981B2A8A655FB3, ___pointsPerSoda_11)); }
	inline int32_t get_pointsPerSoda_11() const { return ___pointsPerSoda_11; }
	inline int32_t* get_address_of_pointsPerSoda_11() { return &___pointsPerSoda_11; }
	inline void set_pointsPerSoda_11(int32_t value)
	{
		___pointsPerSoda_11 = value;
	}

	inline static int32_t get_offset_of_wallDamage_12() { return static_cast<int32_t>(offsetof(Player_tAFCC8AE0CDA5F35211606A022B981B2A8A655FB3, ___wallDamage_12)); }
	inline int32_t get_wallDamage_12() const { return ___wallDamage_12; }
	inline int32_t* get_address_of_wallDamage_12() { return &___wallDamage_12; }
	inline void set_wallDamage_12(int32_t value)
	{
		___wallDamage_12 = value;
	}

	inline static int32_t get_offset_of_foodText_13() { return static_cast<int32_t>(offsetof(Player_tAFCC8AE0CDA5F35211606A022B981B2A8A655FB3, ___foodText_13)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_foodText_13() const { return ___foodText_13; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_foodText_13() { return &___foodText_13; }
	inline void set_foodText_13(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___foodText_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foodText_13), (void*)value);
	}

	inline static int32_t get_offset_of_moveSound1_14() { return static_cast<int32_t>(offsetof(Player_tAFCC8AE0CDA5F35211606A022B981B2A8A655FB3, ___moveSound1_14)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_moveSound1_14() const { return ___moveSound1_14; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_moveSound1_14() { return &___moveSound1_14; }
	inline void set_moveSound1_14(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___moveSound1_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moveSound1_14), (void*)value);
	}

	inline static int32_t get_offset_of_moveSound2_15() { return static_cast<int32_t>(offsetof(Player_tAFCC8AE0CDA5F35211606A022B981B2A8A655FB3, ___moveSound2_15)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_moveSound2_15() const { return ___moveSound2_15; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_moveSound2_15() { return &___moveSound2_15; }
	inline void set_moveSound2_15(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___moveSound2_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moveSound2_15), (void*)value);
	}

	inline static int32_t get_offset_of_eatSound1_16() { return static_cast<int32_t>(offsetof(Player_tAFCC8AE0CDA5F35211606A022B981B2A8A655FB3, ___eatSound1_16)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_eatSound1_16() const { return ___eatSound1_16; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_eatSound1_16() { return &___eatSound1_16; }
	inline void set_eatSound1_16(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___eatSound1_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eatSound1_16), (void*)value);
	}

	inline static int32_t get_offset_of_eatSound2_17() { return static_cast<int32_t>(offsetof(Player_tAFCC8AE0CDA5F35211606A022B981B2A8A655FB3, ___eatSound2_17)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_eatSound2_17() const { return ___eatSound2_17; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_eatSound2_17() { return &___eatSound2_17; }
	inline void set_eatSound2_17(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___eatSound2_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eatSound2_17), (void*)value);
	}

	inline static int32_t get_offset_of_drinkSound1_18() { return static_cast<int32_t>(offsetof(Player_tAFCC8AE0CDA5F35211606A022B981B2A8A655FB3, ___drinkSound1_18)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_drinkSound1_18() const { return ___drinkSound1_18; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_drinkSound1_18() { return &___drinkSound1_18; }
	inline void set_drinkSound1_18(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___drinkSound1_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___drinkSound1_18), (void*)value);
	}

	inline static int32_t get_offset_of_drinkSound2_19() { return static_cast<int32_t>(offsetof(Player_tAFCC8AE0CDA5F35211606A022B981B2A8A655FB3, ___drinkSound2_19)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_drinkSound2_19() const { return ___drinkSound2_19; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_drinkSound2_19() { return &___drinkSound2_19; }
	inline void set_drinkSound2_19(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___drinkSound2_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___drinkSound2_19), (void*)value);
	}

	inline static int32_t get_offset_of_gameOverSound_20() { return static_cast<int32_t>(offsetof(Player_tAFCC8AE0CDA5F35211606A022B981B2A8A655FB3, ___gameOverSound_20)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_gameOverSound_20() const { return ___gameOverSound_20; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_gameOverSound_20() { return &___gameOverSound_20; }
	inline void set_gameOverSound_20(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___gameOverSound_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverSound_20), (void*)value);
	}

	inline static int32_t get_offset_of_animator_21() { return static_cast<int32_t>(offsetof(Player_tAFCC8AE0CDA5F35211606A022B981B2A8A655FB3, ___animator_21)); }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * get_animator_21() const { return ___animator_21; }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A ** get_address_of_animator_21() { return &___animator_21; }
	inline void set_animator_21(Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * value)
	{
		___animator_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_21), (void*)value);
	}

	inline static int32_t get_offset_of_food_22() { return static_cast<int32_t>(offsetof(Player_tAFCC8AE0CDA5F35211606A022B981B2A8A655FB3, ___food_22)); }
	inline int32_t get_food_22() const { return ___food_22; }
	inline int32_t* get_address_of_food_22() { return &___food_22; }
	inline void set_food_22(int32_t value)
	{
		___food_22 = value;
	}

	inline static int32_t get_offset_of_touchOrigin_23() { return static_cast<int32_t>(offsetof(Player_tAFCC8AE0CDA5F35211606A022B981B2A8A655FB3, ___touchOrigin_23)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_touchOrigin_23() const { return ___touchOrigin_23; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_touchOrigin_23() { return &___touchOrigin_23; }
	inline void set_touchOrigin_23(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___touchOrigin_23 = value;
	}
};


// Enemy
struct  Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6  : public MovingObject_tF36E398D30B1800D05ED5DD9017F575347F36556
{
public:
	// System.Int32 Enemy::playerDamage
	int32_t ___playerDamage_9;
	// UnityEngine.Animator Enemy::animator
	Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator_10;
	// UnityEngine.Transform Enemy::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_11;
	// System.Boolean Enemy::skipMove
	bool ___skipMove_12;
	// UnityEngine.AudioClip Enemy::enemyAttack1
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___enemyAttack1_13;
	// UnityEngine.AudioClip Enemy::enemyAttack2
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___enemyAttack2_14;

public:
	inline static int32_t get_offset_of_playerDamage_9() { return static_cast<int32_t>(offsetof(Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6, ___playerDamage_9)); }
	inline int32_t get_playerDamage_9() const { return ___playerDamage_9; }
	inline int32_t* get_address_of_playerDamage_9() { return &___playerDamage_9; }
	inline void set_playerDamage_9(int32_t value)
	{
		___playerDamage_9 = value;
	}

	inline static int32_t get_offset_of_animator_10() { return static_cast<int32_t>(offsetof(Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6, ___animator_10)); }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * get_animator_10() const { return ___animator_10; }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A ** get_address_of_animator_10() { return &___animator_10; }
	inline void set_animator_10(Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * value)
	{
		___animator_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_10), (void*)value);
	}

	inline static int32_t get_offset_of_target_11() { return static_cast<int32_t>(offsetof(Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6, ___target_11)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_11() const { return ___target_11; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_11() { return &___target_11; }
	inline void set_target_11(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_11), (void*)value);
	}

	inline static int32_t get_offset_of_skipMove_12() { return static_cast<int32_t>(offsetof(Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6, ___skipMove_12)); }
	inline bool get_skipMove_12() const { return ___skipMove_12; }
	inline bool* get_address_of_skipMove_12() { return &___skipMove_12; }
	inline void set_skipMove_12(bool value)
	{
		___skipMove_12 = value;
	}

	inline static int32_t get_offset_of_enemyAttack1_13() { return static_cast<int32_t>(offsetof(Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6, ___enemyAttack1_13)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_enemyAttack1_13() const { return ___enemyAttack1_13; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_enemyAttack1_13() { return &___enemyAttack1_13; }
	inline void set_enemyAttack1_13(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___enemyAttack1_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyAttack1_13), (void*)value);
	}

	inline static int32_t get_offset_of_enemyAttack2_14() { return static_cast<int32_t>(offsetof(Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6, ___enemyAttack2_14)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_enemyAttack2_14() const { return ___enemyAttack2_14; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_enemyAttack2_14() { return &___enemyAttack2_14; }
	inline void set_enemyAttack2_14(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___enemyAttack2_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyAttack2_14), (void*)value);
	}
};


// Player
struct  Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873  : public MovingObject_tF36E398D30B1800D05ED5DD9017F575347F36556
{
public:
	// System.Int32 Player::wallDamage
	int32_t ___wallDamage_9;
	// System.Int32 Player::pointsPerFood
	int32_t ___pointsPerFood_10;
	// System.Int32 Player::pointsPerSoda
	int32_t ___pointsPerSoda_11;
	// System.Single Player::restartLevelDelay
	float ___restartLevelDelay_12;
	// UnityEngine.UI.Text Player::foodText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___foodText_13;
	// UnityEngine.AudioClip Player::moveSound1
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___moveSound1_14;
	// UnityEngine.AudioClip Player::moveSound2
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___moveSound2_15;
	// UnityEngine.AudioClip Player::eatSound1
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___eatSound1_16;
	// UnityEngine.AudioClip Player::eatSound2
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___eatSound2_17;
	// UnityEngine.AudioClip Player::drinkSound1
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___drinkSound1_18;
	// UnityEngine.AudioClip Player::drinkSound2
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___drinkSound2_19;
	// UnityEngine.AudioClip Player::gameOverSound
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___gameOverSound_20;
	// UnityEngine.Animator Player::animator
	Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator_21;
	// System.Int32 Player::food
	int32_t ___food_22;
	// UnityEngine.Vector2 Player::touchOrigin
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___touchOrigin_23;

public:
	inline static int32_t get_offset_of_wallDamage_9() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___wallDamage_9)); }
	inline int32_t get_wallDamage_9() const { return ___wallDamage_9; }
	inline int32_t* get_address_of_wallDamage_9() { return &___wallDamage_9; }
	inline void set_wallDamage_9(int32_t value)
	{
		___wallDamage_9 = value;
	}

	inline static int32_t get_offset_of_pointsPerFood_10() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___pointsPerFood_10)); }
	inline int32_t get_pointsPerFood_10() const { return ___pointsPerFood_10; }
	inline int32_t* get_address_of_pointsPerFood_10() { return &___pointsPerFood_10; }
	inline void set_pointsPerFood_10(int32_t value)
	{
		___pointsPerFood_10 = value;
	}

	inline static int32_t get_offset_of_pointsPerSoda_11() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___pointsPerSoda_11)); }
	inline int32_t get_pointsPerSoda_11() const { return ___pointsPerSoda_11; }
	inline int32_t* get_address_of_pointsPerSoda_11() { return &___pointsPerSoda_11; }
	inline void set_pointsPerSoda_11(int32_t value)
	{
		___pointsPerSoda_11 = value;
	}

	inline static int32_t get_offset_of_restartLevelDelay_12() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___restartLevelDelay_12)); }
	inline float get_restartLevelDelay_12() const { return ___restartLevelDelay_12; }
	inline float* get_address_of_restartLevelDelay_12() { return &___restartLevelDelay_12; }
	inline void set_restartLevelDelay_12(float value)
	{
		___restartLevelDelay_12 = value;
	}

	inline static int32_t get_offset_of_foodText_13() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___foodText_13)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_foodText_13() const { return ___foodText_13; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_foodText_13() { return &___foodText_13; }
	inline void set_foodText_13(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___foodText_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foodText_13), (void*)value);
	}

	inline static int32_t get_offset_of_moveSound1_14() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___moveSound1_14)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_moveSound1_14() const { return ___moveSound1_14; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_moveSound1_14() { return &___moveSound1_14; }
	inline void set_moveSound1_14(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___moveSound1_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moveSound1_14), (void*)value);
	}

	inline static int32_t get_offset_of_moveSound2_15() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___moveSound2_15)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_moveSound2_15() const { return ___moveSound2_15; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_moveSound2_15() { return &___moveSound2_15; }
	inline void set_moveSound2_15(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___moveSound2_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moveSound2_15), (void*)value);
	}

	inline static int32_t get_offset_of_eatSound1_16() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___eatSound1_16)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_eatSound1_16() const { return ___eatSound1_16; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_eatSound1_16() { return &___eatSound1_16; }
	inline void set_eatSound1_16(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___eatSound1_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eatSound1_16), (void*)value);
	}

	inline static int32_t get_offset_of_eatSound2_17() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___eatSound2_17)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_eatSound2_17() const { return ___eatSound2_17; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_eatSound2_17() { return &___eatSound2_17; }
	inline void set_eatSound2_17(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___eatSound2_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eatSound2_17), (void*)value);
	}

	inline static int32_t get_offset_of_drinkSound1_18() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___drinkSound1_18)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_drinkSound1_18() const { return ___drinkSound1_18; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_drinkSound1_18() { return &___drinkSound1_18; }
	inline void set_drinkSound1_18(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___drinkSound1_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___drinkSound1_18), (void*)value);
	}

	inline static int32_t get_offset_of_drinkSound2_19() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___drinkSound2_19)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_drinkSound2_19() const { return ___drinkSound2_19; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_drinkSound2_19() { return &___drinkSound2_19; }
	inline void set_drinkSound2_19(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___drinkSound2_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___drinkSound2_19), (void*)value);
	}

	inline static int32_t get_offset_of_gameOverSound_20() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___gameOverSound_20)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_gameOverSound_20() const { return ___gameOverSound_20; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_gameOverSound_20() { return &___gameOverSound_20; }
	inline void set_gameOverSound_20(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___gameOverSound_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverSound_20), (void*)value);
	}

	inline static int32_t get_offset_of_animator_21() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___animator_21)); }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * get_animator_21() const { return ___animator_21; }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A ** get_address_of_animator_21() { return &___animator_21; }
	inline void set_animator_21(Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * value)
	{
		___animator_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_21), (void*)value);
	}

	inline static int32_t get_offset_of_food_22() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___food_22)); }
	inline int32_t get_food_22() const { return ___food_22; }
	inline int32_t* get_address_of_food_22() { return &___food_22; }
	inline void set_food_22(int32_t value)
	{
		___food_22 = value;
	}

	inline static int32_t get_offset_of_touchOrigin_23() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___touchOrigin_23)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_touchOrigin_23() const { return ___touchOrigin_23; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_touchOrigin_23() { return &___touchOrigin_23; }
	inline void set_touchOrigin_23(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___touchOrigin_23 = value;
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  ___m_Navigation_7;
	// UnityEngine.UI.Selectable_Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Boolean UnityEngine.UI.Selectable::m_WillRemove
	bool ___m_WillRemove_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t053DAB6E2110E276A0339D73497193F464BC1F82 * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Navigation_7)); }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Colors_9)); }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_SpriteState_10)); }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_TargetGraphic_13)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_WillRemove_15() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_WillRemove_15)); }
	inline bool get_m_WillRemove_15() const { return ___m_WillRemove_15; }
	inline bool* get_address_of_m_WillRemove_15() { return &___m_WillRemove_15; }
	inline void set_m_WillRemove_15(bool value)
	{
		___m_WillRemove_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CanvasGroupCache_19)); }
	inline List_1_t053DAB6E2110E276A0339D73497193F464BC1F82 * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t053DAB6E2110E276A0339D73497193F464BC1F82 ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t053DAB6E2110E276A0339D73497193F464BC1F82 * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
	// System.Boolean UnityEngine.UI.Selectable::s_IsDirty
	bool ___s_IsDirty_6;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}

	inline static int32_t get_offset_of_s_IsDirty_6() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_IsDirty_6)); }
	inline bool get_s_IsDirty_6() const { return ___s_IsDirty_6; }
	inline bool* get_address_of_s_IsDirty_6() { return &___s_IsDirty_6; }
	inline void set_s_IsDirty_6(bool value)
	{
		___s_IsDirty_6 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_29;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_31;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_32;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_33;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_29)); }
	inline bool get_m_IncludeForMasking_29() const { return ___m_IncludeForMasking_29; }
	inline bool* get_address_of_m_IncludeForMasking_29() { return &___m_IncludeForMasking_29; }
	inline void set_m_IncludeForMasking_29(bool value)
	{
		___m_IncludeForMasking_29 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_30)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_30() const { return ___m_OnCullStateChanged_30; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_30() { return &___m_OnCullStateChanged_30; }
	inline void set_m_OnCullStateChanged_30(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_31)); }
	inline bool get_m_ShouldRecalculate_31() const { return ___m_ShouldRecalculate_31; }
	inline bool* get_address_of_m_ShouldRecalculate_31() { return &___m_ShouldRecalculate_31; }
	inline void set_m_ShouldRecalculate_31(bool value)
	{
		___m_ShouldRecalculate_31 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_32)); }
	inline int32_t get_m_StencilValue_32() const { return ___m_StencilValue_32; }
	inline int32_t* get_address_of_m_StencilValue_32() { return &___m_StencilValue_32; }
	inline void set_m_StencilValue_32(int32_t value)
	{
		___m_StencilValue_32 = value;
	}

	inline static int32_t get_offset_of_m_Corners_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_33)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_33() const { return ___m_Corners_33; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_33() { return &___m_Corners_33; }
	inline void set_m_Corners_33(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_33), (void*)value);
	}
};


// UnityEngine.UI.Toggle
struct  Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.UI.Toggle_ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t11E2B254D3C968C7D0DA11C606CC06D7D7F0D786 * ___m_Group_22;
	// UnityEngine.UI.Toggle_ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t50D925F8E220FB47DA738411CEF9C57FF7E1DC43 * ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;

public:
	inline static int32_t get_offset_of_toggleTransition_20() { return static_cast<int32_t>(offsetof(Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106, ___toggleTransition_20)); }
	inline int32_t get_toggleTransition_20() const { return ___toggleTransition_20; }
	inline int32_t* get_address_of_toggleTransition_20() { return &___toggleTransition_20; }
	inline void set_toggleTransition_20(int32_t value)
	{
		___toggleTransition_20 = value;
	}

	inline static int32_t get_offset_of_graphic_21() { return static_cast<int32_t>(offsetof(Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106, ___graphic_21)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_graphic_21() const { return ___graphic_21; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_graphic_21() { return &___graphic_21; }
	inline void set_graphic_21(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___graphic_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphic_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Group_22() { return static_cast<int32_t>(offsetof(Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106, ___m_Group_22)); }
	inline ToggleGroup_t11E2B254D3C968C7D0DA11C606CC06D7D7F0D786 * get_m_Group_22() const { return ___m_Group_22; }
	inline ToggleGroup_t11E2B254D3C968C7D0DA11C606CC06D7D7F0D786 ** get_address_of_m_Group_22() { return &___m_Group_22; }
	inline void set_m_Group_22(ToggleGroup_t11E2B254D3C968C7D0DA11C606CC06D7D7F0D786 * value)
	{
		___m_Group_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Group_22), (void*)value);
	}

	inline static int32_t get_offset_of_onValueChanged_23() { return static_cast<int32_t>(offsetof(Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106, ___onValueChanged_23)); }
	inline ToggleEvent_t50D925F8E220FB47DA738411CEF9C57FF7E1DC43 * get_onValueChanged_23() const { return ___onValueChanged_23; }
	inline ToggleEvent_t50D925F8E220FB47DA738411CEF9C57FF7E1DC43 ** get_address_of_onValueChanged_23() { return &___onValueChanged_23; }
	inline void set_onValueChanged_23(ToggleEvent_t50D925F8E220FB47DA738411CEF9C57FF7E1DC43 * value)
	{
		___onValueChanged_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onValueChanged_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsOn_24() { return static_cast<int32_t>(offsetof(Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106, ___m_IsOn_24)); }
	inline bool get_m_IsOn_24() const { return ___m_IsOn_24; }
	inline bool* get_address_of_m_IsOn_24() { return &___m_IsOn_24; }
	inline void set_m_IsOn_24(bool value)
	{
		___m_IsOn_24 = value;
	}
};


// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_34;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_35;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_36;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_37;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_39;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_40;

public:
	inline static int32_t get_offset_of_m_FontData_34() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_34)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_34() const { return ___m_FontData_34; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_34() { return &___m_FontData_34; }
	inline void set_m_FontData_34(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_35)); }
	inline String_t* get_m_Text_35() const { return ___m_Text_35; }
	inline String_t** get_address_of_m_Text_35() { return &___m_Text_35; }
	inline void set_m_Text_35(String_t* value)
	{
		___m_Text_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_36)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_36() const { return ___m_TextCache_36; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_36() { return &___m_TextCache_36; }
	inline void set_m_TextCache_36(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_37() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_37)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_37() const { return ___m_TextCacheForLayout_37; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_37() { return &___m_TextCacheForLayout_37; }
	inline void set_m_TextCacheForLayout_37(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_39() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_39)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_39() const { return ___m_DisableFontTextureRebuiltCallback_39; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_39() { return &___m_DisableFontTextureRebuiltCallback_39; }
	inline void set_m_DisableFontTextureRebuiltCallback_39(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_39 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_40() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_40)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_40() const { return ___m_TempVerts_40; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_40() { return &___m_TempVerts_40; }
	inline void set_m_TempVerts_40(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_40), (void*)value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_38;

public:
	inline static int32_t get_offset_of_s_DefaultText_38() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_38)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_38() const { return ___s_DefaultText_38; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_38() { return &___s_DefaultText_38; }
	inline void set_s_DefaultText_38(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_38), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * m_Items[1];

public:
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Touch[]
struct TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  m_Items[1];

public:
	inline Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * m_Items[1];

public:
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m0B6A7366C5386991AB01BAFF1FACE2DC5BAC410A_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m16C18F3B5C042F6455A1600206AE571715D81A21_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m352D452C728667C9C76C942525CDE26444568ECD_gshared (RuntimeObject * ___original0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_gshared_inline (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_gshared_inline (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m1D72CA0DC5CBE0C10AFCE2B5BCA18DD3CE3B1B35_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6AD3571BD600340778E25ED197E5BDFCCA2D716A_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m7A6442C74537CB34212426734073E9DBE87E7FE5_gshared (UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mFBEB99FAFA7C81868D18C2A17C94AF512CD872EC_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);

// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_m0B6A7366C5386991AB01BAFF1FACE2DC5BAC410A (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))List_1_Clear_m0B6A7366C5386991AB01BAFF1FACE2DC5BAC410A_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
inline void List_1_Add_m16C18F3B5C042F6455A1600206AE571715D81A21 (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))List_1_Add_m16C18F3B5C042F6455A1600206AE571715D81A21_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780 (int32_t ___min0, int32_t ___max1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m352D452C728667C9C76C942525CDE26444568ECD_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_mFAF9209CAB6A864552074BA065D740924A4BF979 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_inline (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_inline (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m1D72CA0DC5CBE0C10AFCE2B5BCA18DD3CE3B1B35 (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m1D72CA0DC5CBE0C10AFCE2B5BCA18DD3CE3B1B35_gshared)(__this, ___index0, method);
}
// UnityEngine.Vector3 BoardManager::RandomPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BoardManager_RandomPosition_m8B020FDBB56A4DD2BD768B5097A3C6DA390F0349 (BoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C * __this, const RuntimeMethod* method);
// System.Void BoardManager::BoardSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_BoardSetup_m542D9297FD7AAACF9C725AB1013F11196E18D5C2 (BoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C * __this, const RuntimeMethod* method);
// System.Void BoardManager::InitialiseList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_InitialiseList_m91C622D724A56B0D1F6BBB99E4C0941293777B4C (BoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C * __this, const RuntimeMethod* method);
// System.Void BoardManager::LayoutObjectAtRandom(UnityEngine.GameObject[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_LayoutObjectAtRandom_m8B28BDA9997EB85300A76D9B29A818B01F040BE8 (BoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C * __this, GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___tileArray0, int32_t ___minimum1, int32_t ___maximum2, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Log(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Log_mD0CFD1242805BD697B5156AA46FBB43E7636A19B (float ___f0, float ___p1, const RuntimeMethod* method);
// System.Void BoardManager/Count::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Count__ctor_m9A2A0C5CEBE882A1D883F7C7328E53CBC08B3596 (Count_t91F44A3D5C9CEC856F088B529D031317D189FD8D * __this, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_m6AD3571BD600340778E25ED197E5BDFCCA2D716A (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))List_1__ctor_m6AD3571BD600340778E25ED197E5BDFCCA2D716A_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Completed.BoardManager::RandomPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BoardManager_RandomPosition_m9DB457B2BBFD644138DA5E69B5578C4157A41D53 (BoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2 * __this, const RuntimeMethod* method);
// System.Void Completed.BoardManager::BoardSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_BoardSetup_mD03688A91E27E0C66DDCF434856D94505049067C (BoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2 * __this, const RuntimeMethod* method);
// System.Void Completed.BoardManager::InitialiseList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_InitialiseList_m02C69C971D2A1B40D92DD4CE0B42A350959EACF6 (BoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2 * __this, const RuntimeMethod* method);
// System.Void Completed.BoardManager::LayoutObjectAtRandom(UnityEngine.GameObject[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_LayoutObjectAtRandom_m545C39A6FE34EBE5A55F1B4107B20BC5C9B4E79C (BoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2 * __this, GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___tileArray0, int32_t ___minimum1, int32_t ___maximum2, const RuntimeMethod* method);
// System.Void Completed.BoardManager/Count::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Count__ctor_m366382E936C4BC647EB8BF915765E96E18B565FF (Count_tB84B2499DA3FA3890C90C2C192265D4EC2BBB32F * __this, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method);
// System.Void Completed.GameManager::AddEnemyToList(Completed.Enemy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_AddEnemyToList_mD24432C18512E85EC6381309D7966F5992CDE03E (GameManager_tE812C2D494AD9E4526B863676B915462C462677A * __this, Enemy_t6720AD1364BE03542EAD44A8102C7C1DE8CAD7BD * ___script0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_FindGameObjectWithTag_m9F2877F52346B973DE3023209D73852E96ECC10D (String_t* ___tag0, const RuntimeMethod* method);
// System.Void Completed.MovingObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingObject_Start_mCD183186A234E50CB19E172F47EC71DBBD5773BA (MovingObject_t0AD4E0F568C409511445781F40355FF97164B1F2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void Completed.MovingObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingObject__ctor_mFD90AECAED7CF07D86378DCF5D239C1DB089DA58 (MovingObject_t0AD4E0F568C409511445781F40355FF97164B1F2 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___target0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Completed.Enemy>::.ctor()
inline void List_1__ctor_mCC5725F457443FAD87084A0E3681D3DD3B914166 (List_1_t848E0F848A816B961D26FF49DC956621FD44D33C * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t848E0F848A816B961D26FF49DC956621FD44D33C *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<Completed.BoardManager>()
inline BoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2 * Component_GetComponent_TisBoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2_m00566171A0CD5271BA261680D9A6FDAAD2CB546C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  BoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// System.Void Completed.GameManager::InitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_InitGame_m8E6173BA608D275A9B7564E61FFB5F7C2DC09A20 (GameManager_tE812C2D494AD9E4526B863676B915462C462677A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m316A335F2911B92084C8B8F9A27D28D7F2C0F407 (UnityAction_2_t34FACA3D608984EE7CF1EE51BBFA450D2DB62305 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t34FACA3D608984EE7CF1EE51BBFA450D2DB62305 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m7A6442C74537CB34212426734073E9DBE87E7FE5_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_sceneLoaded_mB72463B21F0D89F168C58E994356298D0E38A4F7 (UnityAction_2_t34FACA3D608984EE7CF1EE51BBFA450D2DB62305 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::remove_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_remove_sceneLoaded_m894CC4AE20DC49FF43CF6B2A614877F50D707C92 (UnityAction_2_t34FACA3D608984EE7CF1EE51BBFA450D2DB62305 * ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m979EDEF812D4630882E2E8346776B6CA5A9176BF (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Completed.Enemy>::Clear()
inline void List_1_Clear_m6A7990E0F43B646E2A83BAF6F77D4F88F5CE5F71 (List_1_t848E0F848A816B961D26FF49DC956621FD44D33C * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t848E0F848A816B961D26FF49DC956621FD44D33C *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void Completed.BoardManager::SetupScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_SetupScene_m4B858E0B41F5A4C66710EF473331C1236BE621F0 (BoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2 * __this, int32_t ___level0, const RuntimeMethod* method);
// System.Collections.IEnumerator Completed.GameManager::MoveEnemies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_MoveEnemies_m0E7BBFAA21D4B2EF635E8B36EC3C20F350CC72B8 (GameManager_tE812C2D494AD9E4526B863676B915462C462677A * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Completed.Enemy>::Add(!0)
inline void List_1_Add_m4CD46ABB82104512DE2FE9FBB7896203B6CE38C7 (List_1_t848E0F848A816B961D26FF49DC956621FD44D33C * __this, Enemy_t6720AD1364BE03542EAD44A8102C7C1DE8CAD7BD * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t848E0F848A816B961D26FF49DC956621FD44D33C *, Enemy_t6720AD1364BE03542EAD44A8102C7C1DE8CAD7BD *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC (RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Completed.GameManager/<MoveEnemies>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveEnemiesU3Ed__21__ctor_m0CC21139055B36A99F7241F51EF3516CBA530989 (U3CMoveEnemiesU3Ed__21_t1A0445B35A0ADEB7FEEDD612CCF2EDBB72439A77 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559 (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Completed.Enemy>::get_Count()
inline int32_t List_1_get_Count_mAB6EE67E39362720B586400A159908534FF5F87D_inline (List_1_t848E0F848A816B961D26FF49DC956621FD44D33C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t848E0F848A816B961D26FF49DC956621FD44D33C *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<Completed.Enemy>::get_Item(System.Int32)
inline Enemy_t6720AD1364BE03542EAD44A8102C7C1DE8CAD7BD * List_1_get_Item_m12CEF330FD58AF171685278302252308F86E529E_inline (List_1_t848E0F848A816B961D26FF49DC956621FD44D33C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Enemy_t6720AD1364BE03542EAD44A8102C7C1DE8CAD7BD * (*) (List_1_t848E0F848A816B961D26FF49DC956621FD44D33C *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Void Completed.Enemy::MoveEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_MoveEnemy_mAECC68D19B5F72C8797A66452D6F7C8AD63C1602 (Enemy_t6720AD1364BE03542EAD44A8102C7C1DE8CAD7BD * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mFBEB99FAFA7C81868D18C2A17C94AF512CD872EC_gshared)(___original0, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * Component_GetComponent_TisBoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87_mD4BABFD1DC7C524ACC853125D82D011DC1CC5E5B (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___b1, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m2AFFC7F931005437E8F356C953F439829AF4CFA5 (LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___mask0, const RuntimeMethod* method);
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Linecast(UnityEngine.Vector2,UnityEngine.Vector2,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE  Physics2D_Linecast_m720F975685497285E077F5FE20480ED441528AEA (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___start0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___end1, int32_t ___layerMask2, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * RaycastHit2D_get_transform_m9AD59D59FC4F85128F139C0DE9B0A2AE27D75DAC (RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v0, const RuntimeMethod* method);
// System.Collections.IEnumerator Completed.MovingObject::SmoothMovement(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MovingObject_SmoothMovement_mDBD59619EFEFDE465C88CA11CBCDE4E993424077 (MovingObject_t0AD4E0F568C409511445781F40355FF97164B1F2 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___end0, const RuntimeMethod* method);
// System.Void Completed.MovingObject/<SmoothMovement>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMovementU3Ed__7__ctor_m51AEE4DBC59BC0690EF414E9BF49B4D5C9B913AE (U3CSmoothMovementU3Ed__7_t79593E23282E01A5F99AA0494B2962202901E617 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Rigidbody2D_get_position_m68CB3236D19D7472ABDE1F5A5A9BD924595361B8 (Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_MoveTowards_mA288BB5AA73DDA9CA76EDC11F339BAFDA1E4FF45 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___current0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::MovePosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_MovePosition_mD0572DDD77FD07D4D03B0A44CF8AD050AE9C42E5 (Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___position0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m497E19AA4FA22DB659F631B20FAEF65572D1B44E (const RuntimeMethod* method);
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* Input_get_touches_mD31418E8B2487DBC9641A15677B41B459859011A (const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m759A61477ECBBD90A57E36F1166EB9340A0FE349 (Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Touch_get_position_m2E60676112DA3628CF2DC76418A275C7FE521D8F (Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.Void Completed.SoundManager::RandomizeSfx(UnityEngine.AudioClip[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_RandomizeSfx_m01BD0A4C44A0B0F05EACE172744912505E3827E9 (SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E * __this, AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* ___clips0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  SceneManager_GetActiveScene_mD583193D329EBF540D8AB8A062681B1C2AB5EA51 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m764659943B7357F5D6C9165F68EDCFBBDDD6C3C2 (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m84E39F1210BA4482CF2D8A2F068198760DE4B4C5 (int32_t ___sceneBuildIndex0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m68D29B7FA54C2F230F5AD780D462612B18E74245 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Completed.Player::CheckIfGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_CheckIfGameOver_mF3154A74627A9A6C981ED6D2CDD585C76C9E8681 (Player_tAFCC8AE0CDA5F35211606A022B981B2A8A655FB3 * __this, const RuntimeMethod* method);
// System.Void Completed.SoundManager::PlaySingle(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySingle_m1B91BEE9CEB978735D0A24C7249C17E6A9E4B467 (SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m488F7AA7F7067DE3EC92CEE3413E86C2E5940200 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method);
// System.Void Completed.GameManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_m6567A78046F939A5443115BAF94E5EB408B0C6B1 (GameManager_tE812C2D494AD9E4526B863676B915462C462677A * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_one_m6E01BE09CEA40781CB12CCB6AF33BBDA0F60CEED (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_UnaryNegation(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_UnaryNegation_m3FA0AE2F9B031765EFA566B25F5453C3B001FF4D (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mF574231E0B749E0167CAF9E4FCBA06BAA0F9ED9B (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384 (float ___min0, float ___max1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_mAB8F8CDB21A3139D3471784FEE9DBFA4CEDEE2E0 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, float ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m9F5C8B2007AA03FAB66F0CB61260349DF1E28611 (SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * __this, Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___value0, const RuntimeMethod* method);
// System.Void GameManager::AddEnemyToList(Enemy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_AddEnemyToList_mB31091B916B4F91CBA9260AF106556CAAF66D9B1 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * ___script0, const RuntimeMethod* method);
// System.Void MovingObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingObject_Start_m8F7B64E0413B84E1D1D3F0B544F9A8311244C12B (MovingObject_tF36E398D30B1800D05ED5DD9017F575347F36556 * __this, const RuntimeMethod* method);
// System.Void MovingObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingObject__ctor_m7FC409A56D252DAD1586C71DD49E7814127A56EE (MovingObject_tF36E398D30B1800D05ED5DD9017F575347F36556 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Enemy>::.ctor()
inline void List_1__ctor_m4DBD7BFCF2ABB429466D1A3CA5ECA1D15C1FEEC6 (List_1_t4BC8A38307CF15CA0AD142EDE954C83F258D776A * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4BC8A38307CF15CA0AD142EDE954C83F258D776A *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<BoardManager>()
inline BoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C * Component_GetComponent_TisBoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C_m7225E0B4D5DD74E086CB4A2A5BDE6EFA7F8550B5 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  BoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// System.Void GameManager::InitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_InitGame_m654E7512B9AE3DE5106AF16F0D8C3D39670C2E75 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Enemy>::Clear()
inline void List_1_Clear_m8A26E14705D2C80E80034715B731977B8A910DF1 (List_1_t4BC8A38307CF15CA0AD142EDE954C83F258D776A * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4BC8A38307CF15CA0AD142EDE954C83F258D776A *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void BoardManager::SetupScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_SetupScene_m670C8D73B288F0C43F79418DF7F99A5D84D46165 (BoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C * __this, int32_t ___level0, const RuntimeMethod* method);
// System.Collections.IEnumerator GameManager::MoveEnemies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_MoveEnemies_mED371A44C407C93DF33A71F433692A009F6E1BA0 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Enemy>::Add(!0)
inline void List_1_Add_m6ED0FB3ABA16A3A8AF0D48619D15B4B947333F5B (List_1_t4BC8A38307CF15CA0AD142EDE954C83F258D776A * __this, Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4BC8A38307CF15CA0AD142EDE954C83F258D776A *, Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void GameManager/<MoveEnemies>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveEnemiesU3Ed__19__ctor_m2DBF02FCFCA5B9679E17CE772610E167BD97D211 (U3CMoveEnemiesU3Ed__19_tE457B5209025BEEC2BE40C81BC4D0DCD4A7F6810 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Enemy>::get_Count()
inline int32_t List_1_get_Count_m2EA40FDD7BE2FB22B8227B533BAA8D316CC4BE3E_inline (List_1_t4BC8A38307CF15CA0AD142EDE954C83F258D776A * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4BC8A38307CF15CA0AD142EDE954C83F258D776A *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<Enemy>::get_Item(System.Int32)
inline Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * List_1_get_Item_m2F68DB121B5F724D192190680B43E14E7FF0AFFE_inline (List_1_t4BC8A38307CF15CA0AD142EDE954C83F258D776A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * (*) (List_1_t4BC8A38307CF15CA0AD142EDE954C83F258D776A *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Void Enemy::MoveEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_MoveEnemy_m90470C09BA59768F31AEBA4915905649B7733E1B (Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator MovingObject::SmoothMovement(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MovingObject_SmoothMovement_m093F359AF7B8831EBF2E73E5D374D15F139B18EF (MovingObject_tF36E398D30B1800D05ED5DD9017F575347F36556 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___end0, const RuntimeMethod* method);
// System.Void MovingObject/<SmoothMovement>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMovementU3Ed__7__ctor_m393135AD46D8B285DC1D1B122F7C836896D00198 (U3CSmoothMovementU3Ed__7_t893A1D53CE8CA776A15678CDE30322EC7AA52327 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void SoundManager::RandomizeSfx(UnityEngine.AudioClip[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_RandomizeSfx_m7F4FD20582798470BB6EA378B0ABC0FB0772024A (SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6 * __this, AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* ___clips0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void Player::CheckIfGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_CheckIfGameOver_m3FB711225593A5D63BE1914EACCF58F9ECCB6C76 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method);
// System.Void SoundManager::PlaySingle(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySingle_m353DAE58C96FA892BC67D429AE527C048E48BFEB (SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6 * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip0, const RuntimeMethod* method);
// System.Void GameManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_m658E745BE197CC36CFAE422F8037F41A1B7FFFD3 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B (ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * __this, const RuntimeMethod* method);
// System.Void TutorialInfo::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialInfo_StartGame_m3FD434DD3FC15135C3BD73987759E536175745C3 (TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_mD87D3051ACE7EC6F5B54F4FC9E18572C917CA0D1 (String_t* ___key0, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m318D2B42E0FCAF179BF86D6C2353B38A58089BAD (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_mCAA660F49688DBA29E896B961E0054154C42EA2B (Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void TutorialInfo::ShowLaunchScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialInfo_ShowLaunchScreen_mF075F6A833585693F1D43B39F55F4DE8D40BDF39 (TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mAB89C3BB5DEE81934159C23F103397A77AC3F4AF (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_m2888DA5BDF68B1BC23E983469157783F390D7BC8 (String_t* ___url0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Toggle_get_isOn_mA34B03BED48C7189F0AB8498F986485B4CD6B44A_inline (Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mBF4101DF829B4738CCC293E1C2D173AEE45EFE62 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BoardManager::InitialiseList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_InitialiseList_m91C622D724A56B0D1F6BBB99E4C0941293777B4C (BoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoardManager_InitialiseList_m91C622D724A56B0D1F6BBB99E4C0941293777B4C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_0 = __this->get_gridPositions_15();
		NullCheck(L_0);
		List_1_Clear_m0B6A7366C5386991AB01BAFF1FACE2DC5BAC410A(L_0, /*hidden argument*/List_1_Clear_m0B6A7366C5386991AB01BAFF1FACE2DC5BAC410A_RuntimeMethod_var);
		V_0 = 1;
		goto IL_003f;
	}

IL_000f:
	{
		V_1 = 1;
		goto IL_0030;
	}

IL_0013:
	{
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_1 = __this->get_gridPositions_15();
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_4), (((float)((float)L_2))), (((float)((float)L_3))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_Add_m16C18F3B5C042F6455A1600206AE571715D81A21(L_1, L_4, /*hidden argument*/List_1_Add_m16C18F3B5C042F6455A1600206AE571715D81A21_RuntimeMethod_var);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0030:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = __this->get_rows_5();
		if ((((int32_t)L_6) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_003f:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = __this->get_columns_4();
		if ((((int32_t)L_9) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)))))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
// System.Void BoardManager::BoardSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_BoardSetup_m542D9297FD7AAACF9C725AB1013F11196E18D5C2 (BoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoardManager_BoardSetup_m542D9297FD7AAACF9C725AB1013F11196E18D5C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_2 = NULL;
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_0, _stringLiteralE879B0BE0190766AF9D315ADBC46DCD7314F0B3F, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_0, /*hidden argument*/NULL);
		__this->set_boardHolder_14(L_1);
		V_0 = (-1);
		goto IL_00a2;
	}

IL_001c:
	{
		V_1 = (-1);
		goto IL_0093;
	}

IL_0020:
	{
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_2 = __this->get_floorTiles_9();
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_3 = __this->get_floorTiles_9();
		NullCheck(L_3);
		int32_t L_4 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(0, (((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))), /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_5 = L_4;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9 = __this->get_columns_4();
		if ((((int32_t)L_8) == ((int32_t)L_9)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = __this->get_rows_5();
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0066;
		}
	}

IL_0050:
	{
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_13 = __this->get_outerWallTiles_13();
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_14 = __this->get_outerWallTiles_13();
		NullCheck(L_14);
		int32_t L_15 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(0, (((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))), /*hidden argument*/NULL);
		NullCheck(L_13);
		int32_t L_16 = L_15;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_2 = L_17;
	}

IL_0066:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = V_2;
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_21), (((float)((float)L_19))), (((float)((float)L_20))), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_22 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_23 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_18, L_21, L_22, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		NullCheck(L_23);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_24 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_23, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = __this->get_boardHolder_14();
		NullCheck(L_24);
		Transform_SetParent_mFAF9209CAB6A864552074BA065D740924A4BF979(L_24, L_25, /*hidden argument*/NULL);
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0093:
	{
		int32_t L_27 = V_1;
		int32_t L_28 = __this->get_rows_5();
		if ((((int32_t)L_27) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_00a2:
	{
		int32_t L_30 = V_0;
		int32_t L_31 = __this->get_columns_4();
		if ((((int32_t)L_30) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1)))))
		{
			goto IL_001c;
		}
	}
	{
		return;
	}
}
// UnityEngine.Vector3 BoardManager::RandomPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BoardManager_RandomPosition_m8B020FDBB56A4DD2BD768B5097A3C6DA390F0349 (BoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoardManager_RandomPosition_m8B020FDBB56A4DD2BD768B5097A3C6DA390F0349_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_0 = __this->get_gridPositions_15();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_inline(L_0, /*hidden argument*/List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_RuntimeMethod_var);
		int32_t L_2 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_3 = __this->get_gridPositions_15();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_RuntimeMethod_var);
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_6 = __this->get_gridPositions_15();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		List_1_RemoveAt_m1D72CA0DC5CBE0C10AFCE2B5BCA18DD3CE3B1B35(L_6, L_7, /*hidden argument*/List_1_RemoveAt_m1D72CA0DC5CBE0C10AFCE2B5BCA18DD3CE3B1B35_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void BoardManager::LayoutObjectAtRandom(UnityEngine.GameObject[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_LayoutObjectAtRandom_m8B28BDA9997EB85300A76D9B29A818B01F040BE8 (BoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C * __this, GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___tileArray0, int32_t ___minimum1, int32_t ___maximum2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoardManager_LayoutObjectAtRandom_m8B28BDA9997EB85300A76D9B29A818B01F040BE8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = ___minimum1;
		int32_t L_1 = ___maximum2;
		int32_t L_2 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(L_0, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0030;
	}

IL_000e:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = BoardManager_RandomPosition_m8B020FDBB56A4DD2BD768B5097A3C6DA390F0349(__this, /*hidden argument*/NULL);
		V_2 = L_3;
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_4 = ___tileArray0;
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_5 = ___tileArray0;
		NullCheck(L_5);
		int32_t L_6 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(0, (((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))), /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_7 = L_6;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_8, L_9, L_10, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0030:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Void BoardManager::SetupScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_SetupScene_m670C8D73B288F0C43F79418DF7F99A5D84D46165 (BoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C * __this, int32_t ___level0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoardManager_SetupScene_m670C8D73B288F0C43F79418DF7F99A5D84D46165_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		BoardManager_BoardSetup_m542D9297FD7AAACF9C725AB1013F11196E18D5C2(__this, /*hidden argument*/NULL);
		BoardManager_InitialiseList_m91C622D724A56B0D1F6BBB99E4C0941293777B4C(__this, /*hidden argument*/NULL);
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_0 = __this->get_wallTiles_10();
		Count_t91F44A3D5C9CEC856F088B529D031317D189FD8D * L_1 = __this->get_wallCount_6();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_minimum_0();
		Count_t91F44A3D5C9CEC856F088B529D031317D189FD8D * L_3 = __this->get_wallCount_6();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_maximum_1();
		BoardManager_LayoutObjectAtRandom_m8B28BDA9997EB85300A76D9B29A818B01F040BE8(__this, L_0, L_2, L_4, /*hidden argument*/NULL);
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_5 = __this->get_foodTiles_11();
		Count_t91F44A3D5C9CEC856F088B529D031317D189FD8D * L_6 = __this->get_foodCount_7();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_minimum_0();
		Count_t91F44A3D5C9CEC856F088B529D031317D189FD8D * L_8 = __this->get_foodCount_7();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_maximum_1();
		BoardManager_LayoutObjectAtRandom_m8B28BDA9997EB85300A76D9B29A818B01F040BE8(__this, L_5, L_7, L_9, /*hidden argument*/NULL);
		int32_t L_10 = ___level0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_11 = Mathf_Log_mD0CFD1242805BD697B5156AA46FBB43E7636A19B((((float)((float)L_10))), (2.0f), /*hidden argument*/NULL);
		V_0 = (((int32_t)((int32_t)L_11)));
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_12 = __this->get_enemyTiles_12();
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		BoardManager_LayoutObjectAtRandom_m8B28BDA9997EB85300A76D9B29A818B01F040BE8(__this, L_12, L_13, L_14, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = __this->get_exit_8();
		int32_t L_16 = __this->get_columns_4();
		int32_t L_17 = __this->get_rows_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_18), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1))))), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1))))), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_15, L_18, L_19, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		return;
	}
}
// System.Void BoardManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager__ctor_mA5E1F47F94482B5A7B26CEE058119935B7183F8B (BoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoardManager__ctor_mA5E1F47F94482B5A7B26CEE058119935B7183F8B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_columns_4(8);
		__this->set_rows_5(8);
		Count_t91F44A3D5C9CEC856F088B529D031317D189FD8D * L_0 = (Count_t91F44A3D5C9CEC856F088B529D031317D189FD8D *)il2cpp_codegen_object_new(Count_t91F44A3D5C9CEC856F088B529D031317D189FD8D_il2cpp_TypeInfo_var);
		Count__ctor_m9A2A0C5CEBE882A1D883F7C7328E53CBC08B3596(L_0, 5, ((int32_t)9), /*hidden argument*/NULL);
		__this->set_wallCount_6(L_0);
		Count_t91F44A3D5C9CEC856F088B529D031317D189FD8D * L_1 = (Count_t91F44A3D5C9CEC856F088B529D031317D189FD8D *)il2cpp_codegen_object_new(Count_t91F44A3D5C9CEC856F088B529D031317D189FD8D_il2cpp_TypeInfo_var);
		Count__ctor_m9A2A0C5CEBE882A1D883F7C7328E53CBC08B3596(L_1, 1, 5, /*hidden argument*/NULL);
		__this->set_foodCount_7(L_1);
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_2 = (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)il2cpp_codegen_object_new(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_il2cpp_TypeInfo_var);
		List_1__ctor_m6AD3571BD600340778E25ED197E5BDFCCA2D716A(L_2, /*hidden argument*/List_1__ctor_m6AD3571BD600340778E25ED197E5BDFCCA2D716A_RuntimeMethod_var);
		__this->set_gridPositions_15(L_2);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BoardManager_Count::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Count__ctor_m9A2A0C5CEBE882A1D883F7C7328E53CBC08B3596 (Count_t91F44A3D5C9CEC856F088B529D031317D189FD8D * __this, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___min0;
		__this->set_minimum_0(L_0);
		int32_t L_1 = ___max1;
		__this->set_maximum_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Completed.BoardManager::InitialiseList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_InitialiseList_m02C69C971D2A1B40D92DD4CE0B42A350959EACF6 (BoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoardManager_InitialiseList_m02C69C971D2A1B40D92DD4CE0B42A350959EACF6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_0 = __this->get_gridPositions_15();
		NullCheck(L_0);
		List_1_Clear_m0B6A7366C5386991AB01BAFF1FACE2DC5BAC410A(L_0, /*hidden argument*/List_1_Clear_m0B6A7366C5386991AB01BAFF1FACE2DC5BAC410A_RuntimeMethod_var);
		V_0 = 1;
		goto IL_003f;
	}

IL_000f:
	{
		V_1 = 1;
		goto IL_0030;
	}

IL_0013:
	{
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_1 = __this->get_gridPositions_15();
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_4), (((float)((float)L_2))), (((float)((float)L_3))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_Add_m16C18F3B5C042F6455A1600206AE571715D81A21(L_1, L_4, /*hidden argument*/List_1_Add_m16C18F3B5C042F6455A1600206AE571715D81A21_RuntimeMethod_var);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0030:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = __this->get_rows_5();
		if ((((int32_t)L_6) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_003f:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = __this->get_columns_4();
		if ((((int32_t)L_9) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)))))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
// System.Void Completed.BoardManager::BoardSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_BoardSetup_mD03688A91E27E0C66DDCF434856D94505049067C (BoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoardManager_BoardSetup_mD03688A91E27E0C66DDCF434856D94505049067C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_2 = NULL;
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_0, _stringLiteralE879B0BE0190766AF9D315ADBC46DCD7314F0B3F, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_0, /*hidden argument*/NULL);
		__this->set_boardHolder_14(L_1);
		V_0 = (-1);
		goto IL_00a2;
	}

IL_001c:
	{
		V_1 = (-1);
		goto IL_0093;
	}

IL_0020:
	{
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_2 = __this->get_floorTiles_9();
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_3 = __this->get_floorTiles_9();
		NullCheck(L_3);
		int32_t L_4 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(0, (((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))), /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_5 = L_4;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9 = __this->get_columns_4();
		if ((((int32_t)L_8) == ((int32_t)L_9)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = __this->get_rows_5();
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0066;
		}
	}

IL_0050:
	{
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_13 = __this->get_outerWallTiles_13();
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_14 = __this->get_outerWallTiles_13();
		NullCheck(L_14);
		int32_t L_15 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(0, (((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))), /*hidden argument*/NULL);
		NullCheck(L_13);
		int32_t L_16 = L_15;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_2 = L_17;
	}

IL_0066:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = V_2;
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_21), (((float)((float)L_19))), (((float)((float)L_20))), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_22 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_23 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_18, L_21, L_22, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		NullCheck(L_23);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_24 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_23, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = __this->get_boardHolder_14();
		NullCheck(L_24);
		Transform_SetParent_mFAF9209CAB6A864552074BA065D740924A4BF979(L_24, L_25, /*hidden argument*/NULL);
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0093:
	{
		int32_t L_27 = V_1;
		int32_t L_28 = __this->get_rows_5();
		if ((((int32_t)L_27) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_00a2:
	{
		int32_t L_30 = V_0;
		int32_t L_31 = __this->get_columns_4();
		if ((((int32_t)L_30) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1)))))
		{
			goto IL_001c;
		}
	}
	{
		return;
	}
}
// UnityEngine.Vector3 Completed.BoardManager::RandomPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BoardManager_RandomPosition_m9DB457B2BBFD644138DA5E69B5578C4157A41D53 (BoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoardManager_RandomPosition_m9DB457B2BBFD644138DA5E69B5578C4157A41D53_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_0 = __this->get_gridPositions_15();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_inline(L_0, /*hidden argument*/List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_RuntimeMethod_var);
		int32_t L_2 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_3 = __this->get_gridPositions_15();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_RuntimeMethod_var);
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_6 = __this->get_gridPositions_15();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		List_1_RemoveAt_m1D72CA0DC5CBE0C10AFCE2B5BCA18DD3CE3B1B35(L_6, L_7, /*hidden argument*/List_1_RemoveAt_m1D72CA0DC5CBE0C10AFCE2B5BCA18DD3CE3B1B35_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void Completed.BoardManager::LayoutObjectAtRandom(UnityEngine.GameObject[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_LayoutObjectAtRandom_m545C39A6FE34EBE5A55F1B4107B20BC5C9B4E79C (BoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2 * __this, GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___tileArray0, int32_t ___minimum1, int32_t ___maximum2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoardManager_LayoutObjectAtRandom_m545C39A6FE34EBE5A55F1B4107B20BC5C9B4E79C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = ___minimum1;
		int32_t L_1 = ___maximum2;
		int32_t L_2 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(L_0, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0030;
	}

IL_000e:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = BoardManager_RandomPosition_m9DB457B2BBFD644138DA5E69B5578C4157A41D53(__this, /*hidden argument*/NULL);
		V_2 = L_3;
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_4 = ___tileArray0;
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_5 = ___tileArray0;
		NullCheck(L_5);
		int32_t L_6 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(0, (((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))), /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_7 = L_6;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_8, L_9, L_10, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0030:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Void Completed.BoardManager::SetupScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_SetupScene_m4B858E0B41F5A4C66710EF473331C1236BE621F0 (BoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2 * __this, int32_t ___level0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoardManager_SetupScene_m4B858E0B41F5A4C66710EF473331C1236BE621F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		BoardManager_BoardSetup_mD03688A91E27E0C66DDCF434856D94505049067C(__this, /*hidden argument*/NULL);
		BoardManager_InitialiseList_m02C69C971D2A1B40D92DD4CE0B42A350959EACF6(__this, /*hidden argument*/NULL);
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_0 = __this->get_wallTiles_10();
		Count_tB84B2499DA3FA3890C90C2C192265D4EC2BBB32F * L_1 = __this->get_wallCount_6();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_minimum_0();
		Count_tB84B2499DA3FA3890C90C2C192265D4EC2BBB32F * L_3 = __this->get_wallCount_6();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_maximum_1();
		BoardManager_LayoutObjectAtRandom_m545C39A6FE34EBE5A55F1B4107B20BC5C9B4E79C(__this, L_0, L_2, L_4, /*hidden argument*/NULL);
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_5 = __this->get_foodTiles_11();
		Count_tB84B2499DA3FA3890C90C2C192265D4EC2BBB32F * L_6 = __this->get_foodCount_7();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_minimum_0();
		Count_tB84B2499DA3FA3890C90C2C192265D4EC2BBB32F * L_8 = __this->get_foodCount_7();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_maximum_1();
		BoardManager_LayoutObjectAtRandom_m545C39A6FE34EBE5A55F1B4107B20BC5C9B4E79C(__this, L_5, L_7, L_9, /*hidden argument*/NULL);
		int32_t L_10 = ___level0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_11 = Mathf_Log_mD0CFD1242805BD697B5156AA46FBB43E7636A19B((((float)((float)L_10))), (2.0f), /*hidden argument*/NULL);
		V_0 = (((int32_t)((int32_t)L_11)));
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_12 = __this->get_enemyTiles_12();
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		BoardManager_LayoutObjectAtRandom_m545C39A6FE34EBE5A55F1B4107B20BC5C9B4E79C(__this, L_12, L_13, L_14, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = __this->get_exit_8();
		int32_t L_16 = __this->get_columns_4();
		int32_t L_17 = __this->get_rows_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_18), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1))))), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1))))), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_15, L_18, L_19, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		return;
	}
}
// System.Void Completed.BoardManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager__ctor_m8F23067BFFF752546D47F9E936A8D74D1AF975A0 (BoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoardManager__ctor_m8F23067BFFF752546D47F9E936A8D74D1AF975A0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_columns_4(8);
		__this->set_rows_5(8);
		Count_tB84B2499DA3FA3890C90C2C192265D4EC2BBB32F * L_0 = (Count_tB84B2499DA3FA3890C90C2C192265D4EC2BBB32F *)il2cpp_codegen_object_new(Count_tB84B2499DA3FA3890C90C2C192265D4EC2BBB32F_il2cpp_TypeInfo_var);
		Count__ctor_m366382E936C4BC647EB8BF915765E96E18B565FF(L_0, 5, ((int32_t)9), /*hidden argument*/NULL);
		__this->set_wallCount_6(L_0);
		Count_tB84B2499DA3FA3890C90C2C192265D4EC2BBB32F * L_1 = (Count_tB84B2499DA3FA3890C90C2C192265D4EC2BBB32F *)il2cpp_codegen_object_new(Count_tB84B2499DA3FA3890C90C2C192265D4EC2BBB32F_il2cpp_TypeInfo_var);
		Count__ctor_m366382E936C4BC647EB8BF915765E96E18B565FF(L_1, 1, 5, /*hidden argument*/NULL);
		__this->set_foodCount_7(L_1);
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_2 = (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)il2cpp_codegen_object_new(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_il2cpp_TypeInfo_var);
		List_1__ctor_m6AD3571BD600340778E25ED197E5BDFCCA2D716A(L_2, /*hidden argument*/List_1__ctor_m6AD3571BD600340778E25ED197E5BDFCCA2D716A_RuntimeMethod_var);
		__this->set_gridPositions_15(L_2);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Completed.BoardManager_Count::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Count__ctor_m366382E936C4BC647EB8BF915765E96E18B565FF (Count_tB84B2499DA3FA3890C90C2C192265D4EC2BBB32F * __this, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___min0;
		__this->set_minimum_0(L_0);
		int32_t L_1 = ___max1;
		__this->set_maximum_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Completed.Enemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Start_mB3336B58AEEB35492C63A1D51089B1E72F0141A9 (Enemy_t6720AD1364BE03542EAD44A8102C7C1DE8CAD7BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_Start_mB3336B58AEEB35492C63A1D51089B1E72F0141A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tE812C2D494AD9E4526B863676B915462C462677A_il2cpp_TypeInfo_var);
		GameManager_tE812C2D494AD9E4526B863676B915462C462677A * L_0 = ((GameManager_tE812C2D494AD9E4526B863676B915462C462677A_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tE812C2D494AD9E4526B863676B915462C462677A_il2cpp_TypeInfo_var))->get_instance_7();
		NullCheck(L_0);
		GameManager_AddEnemyToList_mD24432C18512E85EC6381309D7966F5992CDE03E(L_0, __this, /*hidden argument*/NULL);
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_1 = Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719(__this, /*hidden argument*/Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719_RuntimeMethod_var);
		__this->set_animator_12(L_1);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = GameObject_FindGameObjectWithTag_m9F2877F52346B973DE3023209D73852E96ECC10D(_stringLiteralE53407CFE1A5156B9F0D1EED3BAB5EF3AE75CFD8, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		__this->set_target_13(L_3);
		MovingObject_Start_mCD183186A234E50CB19E172F47EC71DBBD5773BA(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Completed.Enemy::MoveEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_MoveEnemy_mAECC68D19B5F72C8797A66452D6F7C8AD63C1602 (Enemy_t6720AD1364BE03542EAD44A8102C7C1DE8CAD7BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_MoveEnemy_mAECC68D19B5F72C8797A66452D6F7C8AD63C1602_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_13();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_6 = fabsf(((float)il2cpp_codegen_subtract((float)L_2, (float)L_5)));
		if ((!(((float)L_6) < ((float)(1.401298E-45f)))))
		{
			goto IL_005a;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = __this->get_target_13();
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_y_3();
		if ((((float)L_9) > ((float)L_12)))
		{
			goto IL_0056;
		}
	}
	{
		G_B4_0 = (-1);
		goto IL_0057;
	}

IL_0056:
	{
		G_B4_0 = 1;
	}

IL_0057:
	{
		V_1 = G_B4_0;
		goto IL_0081;
	}

IL_005a:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = __this->get_target_13();
		NullCheck(L_13);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_x_2();
		if ((((float)L_15) > ((float)L_18)))
		{
			goto IL_007f;
		}
	}
	{
		G_B8_0 = (-1);
		goto IL_0080;
	}

IL_007f:
	{
		G_B8_0 = 1;
	}

IL_0080:
	{
		V_0 = G_B8_0;
	}

IL_0081:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(MovingObject_AttemptMove_TisPlayer_tAFCC8AE0CDA5F35211606A022B981B2A8A655FB3_m09DDAC2D0A32A81B73F0A18E3C98692A76AF2FBA_RuntimeMethod_var, __this, L_19, L_20);
		return;
	}
}
// System.Void Completed.Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_m334ABE83DF7FDCF0D7E1339006B177FD0AF02A35 (Enemy_t6720AD1364BE03542EAD44A8102C7C1DE8CAD7BD * __this, const RuntimeMethod* method)
{
	{
		MovingObject__ctor_mFD90AECAED7CF07D86378DCF5D239C1DB089DA58(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Completed.GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_mE55CF63B55E9ABBA0D8D2FCCE3EF7492A3B401B4 (GameManager_tE812C2D494AD9E4526B863676B915462C462677A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Awake_mE55CF63B55E9ABBA0D8D2FCCE3EF7492A3B401B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tE812C2D494AD9E4526B863676B915462C462677A_il2cpp_TypeInfo_var);
		GameManager_tE812C2D494AD9E4526B863676B915462C462677A * L_0 = ((GameManager_tE812C2D494AD9E4526B863676B915462C462677A_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tE812C2D494AD9E4526B863676B915462C462677A_il2cpp_TypeInfo_var))->get_instance_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tE812C2D494AD9E4526B863676B915462C462677A_il2cpp_TypeInfo_var);
		((GameManager_tE812C2D494AD9E4526B863676B915462C462677A_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tE812C2D494AD9E4526B863676B915462C462677A_il2cpp_TypeInfo_var))->set_instance_7(__this);
		goto IL_002d;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tE812C2D494AD9E4526B863676B915462C462677A_il2cpp_TypeInfo_var);
		GameManager_tE812C2D494AD9E4526B863676B915462C462677A * L_2 = ((GameManager_tE812C2D494AD9E4526B863676B915462C462677A_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tE812C2D494AD9E4526B863676B915462C462677A_il2cpp_TypeInfo_var))->get_instance_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_4, /*hidden argument*/NULL);
	}

IL_002d:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207(L_5, /*hidden argument*/NULL);
		List_1_t848E0F848A816B961D26FF49DC956621FD44D33C * L_6 = (List_1_t848E0F848A816B961D26FF49DC956621FD44D33C *)il2cpp_codegen_object_new(List_1_t848E0F848A816B961D26FF49DC956621FD44D33C_il2cpp_TypeInfo_var);
		List_1__ctor_mCC5725F457443FAD87084A0E3681D3DD3B914166(L_6, /*hidden argument*/List_1__ctor_mCC5725F457443FAD87084A0E3681D3DD3B914166_RuntimeMethod_var);
		__this->set_enemies_13(L_6);
		BoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2 * L_7 = Component_GetComponent_TisBoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2_m00566171A0CD5271BA261680D9A6FDAAD2CB546C(__this, /*hidden argument*/Component_GetComponent_TisBoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2_m00566171A0CD5271BA261680D9A6FDAAD2CB546C_RuntimeMethod_var);
		__this->set_boardScript_11(L_7);
		GameManager_InitGame_m8E6173BA608D275A9B7564E61FFB5F7C2DC09A20(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Completed.GameManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnEnable_m4F8C4F64B0178D68D341F37F8F4968434A48512A (GameManager_tE812C2D494AD9E4526B863676B915462C462677A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_OnEnable_m4F8C4F64B0178D68D341F37F8F4968434A48512A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral3CC9E36AFCFE241F3B632198603A3AD8F20A738C, /*hidden argument*/NULL);
		UnityAction_2_t34FACA3D608984EE7CF1EE51BBFA450D2DB62305 * L_0 = (UnityAction_2_t34FACA3D608984EE7CF1EE51BBFA450D2DB62305 *)il2cpp_codegen_object_new(UnityAction_2_t34FACA3D608984EE7CF1EE51BBFA450D2DB62305_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_m316A335F2911B92084C8B8F9A27D28D7F2C0F407(L_0, __this, (intptr_t)((intptr_t)GameManager_OnSceneLoaded_m0E8230AD35C45E889A7DE25F573DBE9F00E382B5_RuntimeMethod_var), /*hidden argument*/UnityAction_2__ctor_m316A335F2911B92084C8B8F9A27D28D7F2C0F407_RuntimeMethod_var);
		SceneManager_add_sceneLoaded_mB72463B21F0D89F168C58E994356298D0E38A4F7(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Completed.GameManager::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnSceneLoaded_m0E8230AD35C45E889A7DE25F573DBE9F00E382B5 (GameManager_tE812C2D494AD9E4526B863676B915462C462677A * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___scene0, int32_t ___mode1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_level_12();
		__this->set_level_12(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		GameManager_InitGame_m8E6173BA608D275A9B7564E61FFB5F7C2DC09A20(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Completed.GameManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnDisable_m2A9C743CC7F92B33AAB9D522A2C040020BF81EF1 (GameManager_tE812C2D494AD9E4526B863676B915462C462677A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_OnDisable_m2A9C743CC7F92B33AAB9D522A2C040020BF81EF1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral0CBCF371510A724DB9CCDC0D286192948942BA69, /*hidden argument*/NULL);
		UnityAction_2_t34FACA3D608984EE7CF1EE51BBFA450D2DB62305 * L_0 = (UnityAction_2_t34FACA3D608984EE7CF1EE51BBFA450D2DB62305 *)il2cpp_codegen_object_new(UnityAction_2_t34FACA3D608984EE7CF1EE51BBFA450D2DB62305_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_m316A335F2911B92084C8B8F9A27D28D7F2C0F407(L_0, __this, (intptr_t)((intptr_t)GameManager_OnSceneLoaded_m0E8230AD35C45E889A7DE25F573DBE9F00E382B5_RuntimeMethod_var), /*hidden argument*/UnityAction_2__ctor_m316A335F2911B92084C8B8F9A27D28D7F2C0F407_RuntimeMethod_var);
		SceneManager_remove_sceneLoaded_m894CC4AE20DC49FF43CF6B2A614877F50D707C92(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Completed.GameManager::InitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_InitGame_m8E6173BA608D275A9B7564E61FFB5F7C2DC09A20 (GameManager_tE812C2D494AD9E4526B863676B915462C462677A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_InitGame_m8E6173BA608D275A9B7564E61FFB5F7C2DC09A20_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_doingSetup_15((bool)1);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral80E8C0BDFFC4F6BAC693702C251569667B2C8997, /*hidden argument*/NULL);
		__this->set_levelImage_10(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral76D58561A55786B285C077DF9D586A6413095D47, /*hidden argument*/NULL);
		NullCheck(L_1);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_2 = GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A(L_1, /*hidden argument*/GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A_RuntimeMethod_var);
		__this->set_levelText_9(L_2);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_3 = __this->get_levelText_9();
		int32_t L_4 = __this->get_level_12();
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralE3D5FFA2C193AD3DAEC986D93BB248FB0482231D, L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_7);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_levelImage_10();
		NullCheck(L_8);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_8, (bool)1, /*hidden argument*/NULL);
		float L_9 = __this->get_levelStartDelay_4();
		MonoBehaviour_Invoke_m979EDEF812D4630882E2E8346776B6CA5A9176BF(__this, _stringLiteral211C9DDEC5E2382DED02420AC9E99A08B0B8A0C0, L_9, /*hidden argument*/NULL);
		List_1_t848E0F848A816B961D26FF49DC956621FD44D33C * L_10 = __this->get_enemies_13();
		NullCheck(L_10);
		List_1_Clear_m6A7990E0F43B646E2A83BAF6F77D4F88F5CE5F71(L_10, /*hidden argument*/List_1_Clear_m6A7990E0F43B646E2A83BAF6F77D4F88F5CE5F71_RuntimeMethod_var);
		BoardManager_t692A4045507F0C2C8344B230D2554695A55A92E2 * L_11 = __this->get_boardScript_11();
		int32_t L_12 = __this->get_level_12();
		NullCheck(L_11);
		BoardManager_SetupScene_m4B858E0B41F5A4C66710EF473331C1236BE621F0(L_11, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Completed.GameManager::HideLevelImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_HideLevelImage_mEAF0E8D10548767236A7D4D4D4BB01B32DA1BAF4 (GameManager_tE812C2D494AD9E4526B863676B915462C462677A * __this, const RuntimeMethod* method)
{
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_levelImage_10();
		NullCheck(L_0);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_0, (bool)0, /*hidden argument*/NULL);
		__this->set_doingSetup_15((bool)0);
		return;
	}
}
// System.Void Completed.GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_mF3237974669CE008266A1C509209D4E2B3FE2380 (GameManager_tE812C2D494AD9E4526B863676B915462C462677A * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_playersTurn_8();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = __this->get_enemiesMoving_14();
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		bool L_2 = __this->get_doingSetup_15();
		if (!L_2)
		{
			goto IL_0019;
		}
	}

IL_0018:
	{
		return;
	}

IL_0019:
	{
		RuntimeObject* L_3 = GameManager_MoveEnemies_m0E7BBFAA21D4B2EF635E8B36EC3C20F350CC72B8(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Completed.GameManager::AddEnemyToList(Completed.Enemy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_AddEnemyToList_mD24432C18512E85EC6381309D7966F5992CDE03E (GameManager_tE812C2D494AD9E4526B863676B915462C462677A * __this, Enemy_t6720AD1364BE03542EAD44A8102C7C1DE8CAD7BD * ___script0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_AddEnemyToList_mD24432C18512E85EC6381309D7966F5992CDE03E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t848E0F848A816B961D26FF49DC956621FD44D33C * L_0 = __this->get_enemies_13();
		Enemy_t6720AD1364BE03542EAD44A8102C7C1DE8CAD7BD * L_1 = ___script0;
		NullCheck(L_0);
		List_1_Add_m4CD46ABB82104512DE2FE9FBB7896203B6CE38C7(L_0, L_1, /*hidden argument*/List_1_Add_m4CD46ABB82104512DE2FE9FBB7896203B6CE38C7_RuntimeMethod_var);
		return;
	}
}
// System.Void Completed.GameManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_m6567A78046F939A5443115BAF94E5EB408B0C6B1 (GameManager_tE812C2D494AD9E4526B863676B915462C462677A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_GameOver_m6567A78046F939A5443115BAF94E5EB408B0C6B1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_levelText_9();
		int32_t L_1 = __this->get_level_12();
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteral5C0DBFAF382FEAEFB83A95328F9D93C2580484A9, L_3, _stringLiteral8DF2CB347A4A176DFD8B62D8A3A3CFC8F3E1B955, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_levelImage_10();
		NullCheck(L_5);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_5, (bool)1, /*hidden argument*/NULL);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator Completed.GameManager::MoveEnemies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_MoveEnemies_m0E7BBFAA21D4B2EF635E8B36EC3C20F350CC72B8 (GameManager_tE812C2D494AD9E4526B863676B915462C462677A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_MoveEnemies_m0E7BBFAA21D4B2EF635E8B36EC3C20F350CC72B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMoveEnemiesU3Ed__21_t1A0445B35A0ADEB7FEEDD612CCF2EDBB72439A77 * L_0 = (U3CMoveEnemiesU3Ed__21_t1A0445B35A0ADEB7FEEDD612CCF2EDBB72439A77 *)il2cpp_codegen_object_new(U3CMoveEnemiesU3Ed__21_t1A0445B35A0ADEB7FEEDD612CCF2EDBB72439A77_il2cpp_TypeInfo_var);
		U3CMoveEnemiesU3Ed__21__ctor_m0CC21139055B36A99F7241F51EF3516CBA530989(L_0, 0, /*hidden argument*/NULL);
		U3CMoveEnemiesU3Ed__21_t1A0445B35A0ADEB7FEEDD612CCF2EDBB72439A77 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Completed.GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_m311278E06E006A827986F6DB41CFB0C71EA067E5 (GameManager_tE812C2D494AD9E4526B863676B915462C462677A * __this, const RuntimeMethod* method)
{
	{
		__this->set_levelStartDelay_4((2.0f));
		__this->set_turnDelay_5((0.1f));
		__this->set_playerFoodPoints_6(((int32_t)100));
		__this->set_playersTurn_8((bool)1);
		__this->set_level_12(1);
		__this->set_doingSetup_15((bool)1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Completed.GameManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__cctor_m8FD92C471A50E559F8A354CC119E4D6F3A42FEAC (const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Completed.GameManager_<MoveEnemies>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveEnemiesU3Ed__21__ctor_m0CC21139055B36A99F7241F51EF3516CBA530989 (U3CMoveEnemiesU3Ed__21_t1A0445B35A0ADEB7FEEDD612CCF2EDBB72439A77 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Completed.GameManager_<MoveEnemies>d__21::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveEnemiesU3Ed__21_System_IDisposable_Dispose_m12F4FADF43C0493F88783015512C566E0758AAA9 (U3CMoveEnemiesU3Ed__21_t1A0445B35A0ADEB7FEEDD612CCF2EDBB72439A77 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Completed.GameManager_<MoveEnemies>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveEnemiesU3Ed__21_MoveNext_m9975547A93BB9DAAC42C4A2C3DFD5E172283C7B1 (U3CMoveEnemiesU3Ed__21_t1A0445B35A0ADEB7FEEDD612CCF2EDBB72439A77 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CMoveEnemiesU3Ed__21_MoveNext_m9975547A93BB9DAAC42C4A2C3DFD5E172283C7B1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tE812C2D494AD9E4526B863676B915462C462677A * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameManager_tE812C2D494AD9E4526B863676B915462C462677A * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_004e;
			}
			case 2:
			{
				goto IL_007c;
			}
			case 3:
			{
				goto IL_00cc;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		GameManager_tE812C2D494AD9E4526B863676B915462C462677A * L_3 = V_1;
		NullCheck(L_3);
		L_3->set_enemiesMoving_14((bool)1);
		GameManager_tE812C2D494AD9E4526B863676B915462C462677A * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_turnDelay_5();
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_6 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004e:
	{
		__this->set_U3CU3E1__state_0((-1));
		GameManager_tE812C2D494AD9E4526B863676B915462C462677A * L_7 = V_1;
		NullCheck(L_7);
		List_1_t848E0F848A816B961D26FF49DC956621FD44D33C * L_8 = L_7->get_enemies_13();
		NullCheck(L_8);
		int32_t L_9 = List_1_get_Count_mAB6EE67E39362720B586400A159908534FF5F87D_inline(L_8, /*hidden argument*/List_1_get_Count_mAB6EE67E39362720B586400A159908534FF5F87D_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_0083;
		}
	}
	{
		GameManager_tE812C2D494AD9E4526B863676B915462C462677A * L_10 = V_1;
		NullCheck(L_10);
		float L_11 = L_10->get_turnDelay_5();
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_12 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_12, L_11, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_12);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_007c:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0083:
	{
		__this->set_U3CiU3E5__2_3(0);
		goto IL_00e3;
	}

IL_008c:
	{
		GameManager_tE812C2D494AD9E4526B863676B915462C462677A * L_13 = V_1;
		NullCheck(L_13);
		List_1_t848E0F848A816B961D26FF49DC956621FD44D33C * L_14 = L_13->get_enemies_13();
		int32_t L_15 = __this->get_U3CiU3E5__2_3();
		NullCheck(L_14);
		Enemy_t6720AD1364BE03542EAD44A8102C7C1DE8CAD7BD * L_16 = List_1_get_Item_m12CEF330FD58AF171685278302252308F86E529E_inline(L_14, L_15, /*hidden argument*/List_1_get_Item_m12CEF330FD58AF171685278302252308F86E529E_RuntimeMethod_var);
		NullCheck(L_16);
		Enemy_MoveEnemy_mAECC68D19B5F72C8797A66452D6F7C8AD63C1602(L_16, /*hidden argument*/NULL);
		GameManager_tE812C2D494AD9E4526B863676B915462C462677A * L_17 = V_1;
		NullCheck(L_17);
		List_1_t848E0F848A816B961D26FF49DC956621FD44D33C * L_18 = L_17->get_enemies_13();
		int32_t L_19 = __this->get_U3CiU3E5__2_3();
		NullCheck(L_18);
		Enemy_t6720AD1364BE03542EAD44A8102C7C1DE8CAD7BD * L_20 = List_1_get_Item_m12CEF330FD58AF171685278302252308F86E529E_inline(L_18, L_19, /*hidden argument*/List_1_get_Item_m12CEF330FD58AF171685278302252308F86E529E_RuntimeMethod_var);
		NullCheck(L_20);
		float L_21 = ((MovingObject_t0AD4E0F568C409511445781F40355FF97164B1F2 *)L_20)->get_moveTime_4();
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_22 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_22, L_21, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_22);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_00cc:
	{
		__this->set_U3CU3E1__state_0((-1));
		int32_t L_23 = __this->get_U3CiU3E5__2_3();
		V_2 = L_23;
		int32_t L_24 = V_2;
		__this->set_U3CiU3E5__2_3(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)));
	}

IL_00e3:
	{
		int32_t L_25 = __this->get_U3CiU3E5__2_3();
		GameManager_tE812C2D494AD9E4526B863676B915462C462677A * L_26 = V_1;
		NullCheck(L_26);
		List_1_t848E0F848A816B961D26FF49DC956621FD44D33C * L_27 = L_26->get_enemies_13();
		NullCheck(L_27);
		int32_t L_28 = List_1_get_Count_mAB6EE67E39362720B586400A159908534FF5F87D_inline(L_27, /*hidden argument*/List_1_get_Count_mAB6EE67E39362720B586400A159908534FF5F87D_RuntimeMethod_var);
		if ((((int32_t)L_25) < ((int32_t)L_28)))
		{
			goto IL_008c;
		}
	}
	{
		GameManager_tE812C2D494AD9E4526B863676B915462C462677A * L_29 = V_1;
		NullCheck(L_29);
		L_29->set_playersTurn_8((bool)1);
		GameManager_tE812C2D494AD9E4526B863676B915462C462677A * L_30 = V_1;
		NullCheck(L_30);
		L_30->set_enemiesMoving_14((bool)0);
		return (bool)0;
	}
}
// System.Object Completed.GameManager_<MoveEnemies>d__21::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMoveEnemiesU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9EEBCCF44C4FB86B3F5DCA71248981B5020F4087 (U3CMoveEnemiesU3Ed__21_t1A0445B35A0ADEB7FEEDD612CCF2EDBB72439A77 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Completed.GameManager_<MoveEnemies>d__21::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveEnemiesU3Ed__21_System_Collections_IEnumerator_Reset_mCDFA5CA0D7610CB9A3DEDD2B13095A2F06AF58EB (U3CMoveEnemiesU3Ed__21_t1A0445B35A0ADEB7FEEDD612CCF2EDBB72439A77 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CMoveEnemiesU3Ed__21_System_Collections_IEnumerator_Reset_mCDFA5CA0D7610CB9A3DEDD2B13095A2F06AF58EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CMoveEnemiesU3Ed__21_System_Collections_IEnumerator_Reset_mCDFA5CA0D7610CB9A3DEDD2B13095A2F06AF58EB_RuntimeMethod_var);
	}
}
// System.Object Completed.GameManager_<MoveEnemies>d__21::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMoveEnemiesU3Ed__21_System_Collections_IEnumerator_get_Current_m9012D13D4BADD9C2B0BD53E004E3D3BB28B64B28 (U3CMoveEnemiesU3Ed__21_t1A0445B35A0ADEB7FEEDD612CCF2EDBB72439A77 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Completed.Loader::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loader_Awake_m2AC7851103C995091FB014CB1D51B22406A8CB30 (Loader_t1D09864ADBE15ED497B70C083FE3578E97478ADE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Loader_Awake_m2AC7851103C995091FB014CB1D51B22406A8CB30_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tE812C2D494AD9E4526B863676B915462C462677A_il2cpp_TypeInfo_var);
		GameManager_tE812C2D494AD9E4526B863676B915462C462677A * L_0 = ((GameManager_tE812C2D494AD9E4526B863676B915462C462677A_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tE812C2D494AD9E4526B863676B915462C462677A_il2cpp_TypeInfo_var))->get_instance_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_gameManager_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90(L_2, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90_RuntimeMethod_var);
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E_il2cpp_TypeInfo_var);
		SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E * L_3 = ((SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E_il2cpp_TypeInfo_var))->get_instance_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_soundManager_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90(L_5, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90_RuntimeMethod_var);
	}

IL_0032:
	{
		return;
	}
}
// System.Void Completed.Loader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loader__ctor_mC6DC9BBBFC9AB50D918F5D6A4F4641BDE38A29CA (Loader_t1D09864ADBE15ED497B70C083FE3578E97478ADE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Completed.MovingObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingObject_Start_mCD183186A234E50CB19E172F47EC71DBBD5773BA (MovingObject_t0AD4E0F568C409511445781F40355FF97164B1F2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MovingObject_Start_mCD183186A234E50CB19E172F47EC71DBBD5773BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * L_0 = Component_GetComponent_TisBoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87_mD4BABFD1DC7C524ACC853125D82D011DC1CC5E5B(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87_mD4BABFD1DC7C524ACC853125D82D011DC1CC5E5B_RuntimeMethod_var);
		__this->set_boxCollider_6(L_0);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_1 = Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625_RuntimeMethod_var);
		__this->set_rb2D_7(L_1);
		float L_2 = __this->get_moveTime_4();
		__this->set_inverseMoveTime_8(((float)((float)(1.0f)/(float)L_2)));
		return;
	}
}
// System.Boolean Completed.MovingObject::Move(System.Int32,System.Int32,UnityEngine.RaycastHit2D&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MovingObject_Move_mD09FDB666D1B1CCFE9C2F03000805FBB358428B8 (MovingObject_t0AD4E0F568C409511445781F40355FF97164B1F2 * __this, int32_t ___xDir0, int32_t ___yDir1, RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE * ___hit2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MovingObject_Move_mD09FDB666D1B1CCFE9C2F03000805FBB358428B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = V_0;
		int32_t L_4 = ___xDir0;
		int32_t L_5 = ___yDir1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_6), (((float)((float)L_4))), (((float)((float)L_5))), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682(L_3, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * L_8 = __this->get_boxCollider_6();
		NullCheck(L_8);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_8, (bool)0, /*hidden argument*/NULL);
		RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE * L_9 = ___hit2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = V_1;
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_12 = __this->get_blockingLayer_5();
		int32_t L_13 = LayerMask_op_Implicit_m2AFFC7F931005437E8F356C953F439829AF4CFA5(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_tB21970F986016656D66D2922594F336E1EE7D5C7_il2cpp_TypeInfo_var);
		RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE  L_14 = Physics2D_Linecast_m720F975685497285E077F5FE20480ED441528AEA(L_10, L_11, L_13, /*hidden argument*/NULL);
		*(RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE *)L_9 = L_14;
		BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * L_15 = __this->get_boxCollider_6();
		NullCheck(L_15);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_15, (bool)1, /*hidden argument*/NULL);
		RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE * L_16 = ___hit2;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = RaycastHit2D_get_transform_m9AD59D59FC4F85128F139C0DE9B0A2AE27D75DAC((RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE *)L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_17, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0074;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_19, /*hidden argument*/NULL);
		RuntimeObject* L_21 = MovingObject_SmoothMovement_mDBD59619EFEFDE465C88CA11CBCDE4E993424077(__this, L_20, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_21, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.IEnumerator Completed.MovingObject::SmoothMovement(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MovingObject_SmoothMovement_mDBD59619EFEFDE465C88CA11CBCDE4E993424077 (MovingObject_t0AD4E0F568C409511445781F40355FF97164B1F2 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___end0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MovingObject_SmoothMovement_mDBD59619EFEFDE465C88CA11CBCDE4E993424077_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSmoothMovementU3Ed__7_t79593E23282E01A5F99AA0494B2962202901E617 * L_0 = (U3CSmoothMovementU3Ed__7_t79593E23282E01A5F99AA0494B2962202901E617 *)il2cpp_codegen_object_new(U3CSmoothMovementU3Ed__7_t79593E23282E01A5F99AA0494B2962202901E617_il2cpp_TypeInfo_var);
		U3CSmoothMovementU3Ed__7__ctor_m51AEE4DBC59BC0690EF414E9BF49B4D5C9B913AE(L_0, 0, /*hidden argument*/NULL);
		U3CSmoothMovementU3Ed__7_t79593E23282E01A5F99AA0494B2962202901E617 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CSmoothMovementU3Ed__7_t79593E23282E01A5F99AA0494B2962202901E617 * L_2 = L_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___end0;
		NullCheck(L_2);
		L_2->set_end_3(L_3);
		return L_2;
	}
}
// System.Void Completed.MovingObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingObject__ctor_mFD90AECAED7CF07D86378DCF5D239C1DB089DA58 (MovingObject_t0AD4E0F568C409511445781F40355FF97164B1F2 * __this, const RuntimeMethod* method)
{
	{
		__this->set_moveTime_4((0.1f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Completed.MovingObject_<SmoothMovement>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMovementU3Ed__7__ctor_m51AEE4DBC59BC0690EF414E9BF49B4D5C9B913AE (U3CSmoothMovementU3Ed__7_t79593E23282E01A5F99AA0494B2962202901E617 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Completed.MovingObject_<SmoothMovement>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMovementU3Ed__7_System_IDisposable_Dispose_m57F9EB0C617AFF2CE199655784AF014A5B52ADC3 (U3CSmoothMovementU3Ed__7_t79593E23282E01A5F99AA0494B2962202901E617 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Completed.MovingObject_<SmoothMovement>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSmoothMovementU3Ed__7_MoveNext_m50232F421AF0030F3A0487B75AB2623EF380A841 (U3CSmoothMovementU3Ed__7_t79593E23282E01A5F99AA0494B2962202901E617 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSmoothMovementU3Ed__7_MoveNext_m50232F421AF0030F3A0487B75AB2623EF380A841_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MovingObject_t0AD4E0F568C409511445781F40355FF97164B1F2 * V_1 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MovingObject_t0AD4E0F568C409511445781F40355FF97164B1F2 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00b4;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		MovingObject_t0AD4E0F568C409511445781F40355FF97164B1F2 * L_4 = V_1;
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = __this->get_end_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		float L_9 = Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), /*hidden argument*/NULL);
		__this->set_U3CsqrRemainingDistanceU3E5__2_4(L_9);
		goto IL_00bb;
	}

IL_0047:
	{
		MovingObject_t0AD4E0F568C409511445781F40355FF97164B1F2 * L_10 = V_1;
		NullCheck(L_10);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_11 = L_10->get_rb2D_7();
		NullCheck(L_11);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = Rigidbody2D_get_position_m68CB3236D19D7472ABDE1F5A5A9BD924595361B8(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_12, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = __this->get_end_3();
		MovingObject_t0AD4E0F568C409511445781F40355FF97164B1F2 * L_15 = V_1;
		NullCheck(L_15);
		float L_16 = L_15->get_inverseMoveTime_8();
		float L_17 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_MoveTowards_mA288BB5AA73DDA9CA76EDC11F339BAFDA1E4FF45(L_13, L_14, ((float)il2cpp_codegen_multiply((float)L_16, (float)L_17)), /*hidden argument*/NULL);
		V_3 = L_18;
		MovingObject_t0AD4E0F568C409511445781F40355FF97164B1F2 * L_19 = V_1;
		NullCheck(L_19);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_20 = L_19->get_rb2D_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = V_3;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_22 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		Rigidbody2D_MovePosition_mD0572DDD77FD07D4D03B0A44CF8AD050AE9C42E5(L_20, L_22, /*hidden argument*/NULL);
		MovingObject_t0AD4E0F568C409511445781F40355FF97164B1F2 * L_23 = V_1;
		NullCheck(L_23);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_24 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_24, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = __this->get_end_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_25, L_26, /*hidden argument*/NULL);
		V_2 = L_27;
		float L_28 = Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), /*hidden argument*/NULL);
		__this->set_U3CsqrRemainingDistanceU3E5__2_4(L_28);
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00b4:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00bb:
	{
		float L_29 = __this->get_U3CsqrRemainingDistanceU3E5__2_4();
		if ((((float)L_29) > ((float)(1.401298E-45f))))
		{
			goto IL_0047;
		}
	}
	{
		return (bool)0;
	}
}
// System.Object Completed.MovingObject_<SmoothMovement>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSmoothMovementU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA21D8C8A8F76051859191C9AA0F652524385DB7E (U3CSmoothMovementU3Ed__7_t79593E23282E01A5F99AA0494B2962202901E617 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Completed.MovingObject_<SmoothMovement>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMovementU3Ed__7_System_Collections_IEnumerator_Reset_m0D541486828F50616892622A99873DC76D104F0E (U3CSmoothMovementU3Ed__7_t79593E23282E01A5F99AA0494B2962202901E617 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSmoothMovementU3Ed__7_System_Collections_IEnumerator_Reset_m0D541486828F50616892622A99873DC76D104F0E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CSmoothMovementU3Ed__7_System_Collections_IEnumerator_Reset_m0D541486828F50616892622A99873DC76D104F0E_RuntimeMethod_var);
	}
}
// System.Object Completed.MovingObject_<SmoothMovement>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSmoothMovementU3Ed__7_System_Collections_IEnumerator_get_Current_mBBA43027FB23A4B3D9E18937930F591DC3EDA3D8 (U3CSmoothMovementU3Ed__7_t79593E23282E01A5F99AA0494B2962202901E617 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Completed.Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mBE67245178ACC7B50451FB7E2D719C25152DFC9D (Player_tAFCC8AE0CDA5F35211606A022B981B2A8A655FB3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_Start_mBE67245178ACC7B50451FB7E2D719C25152DFC9D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_0 = Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719(__this, /*hidden argument*/Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719_RuntimeMethod_var);
		__this->set_animator_21(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tE812C2D494AD9E4526B863676B915462C462677A_il2cpp_TypeInfo_var);
		GameManager_tE812C2D494AD9E4526B863676B915462C462677A * L_1 = ((GameManager_tE812C2D494AD9E4526B863676B915462C462677A_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tE812C2D494AD9E4526B863676B915462C462677A_il2cpp_TypeInfo_var))->get_instance_7();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_playerFoodPoints_6();
		__this->set_food_22(L_2);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_3 = __this->get_foodText_13();
		int32_t L_4 = __this->get_food_22();
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral19FCC1A5A92B80E89A17B2E4EAF33F0D83BD1EAE, L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_7);
		MovingObject_Start_mCD183186A234E50CB19E172F47EC71DBBD5773BA(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Completed.Player::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnDisable_mEC6F3E9E880583C5484DC36B6DE478DA64F5006B (Player_tAFCC8AE0CDA5F35211606A022B981B2A8A655FB3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_OnDisable_mEC6F3E9E880583C5484DC36B6DE478DA64F5006B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tE812C2D494AD9E4526B863676B915462C462677A_il2cpp_TypeInfo_var);
		GameManager_tE812C2D494AD9E4526B863676B915462C462677A * L_0 = ((GameManager_tE812C2D494AD9E4526B863676B915462C462677A_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tE812C2D494AD9E4526B863676B915462C462677A_il2cpp_TypeInfo_var))->get_instance_7();
		int32_t L_1 = __this->get_food_22();
		NullCheck(L_0);
		L_0->set_playerFoodPoints_6(L_1);
		return;
	}
}
// System.Void Completed.Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_mAF41C6B6E723360B1E2580FCB16DE15580DD64E2 (Player_tAFCC8AE0CDA5F35211606A022B981B2A8A655FB3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_Update_mAF41C6B6E723360B1E2580FCB16DE15580DD64E2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t G_B11_0 = 0;
	int32_t G_B15_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tE812C2D494AD9E4526B863676B915462C462677A_il2cpp_TypeInfo_var);
		GameManager_tE812C2D494AD9E4526B863676B915462C462677A * L_0 = ((GameManager_tE812C2D494AD9E4526B863676B915462C462677A_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tE812C2D494AD9E4526B863676B915462C462677A_il2cpp_TypeInfo_var))->get_instance_7();
		NullCheck(L_0);
		bool L_1 = L_0->get_playersTurn_8();
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		V_0 = 0;
		V_1 = 0;
		int32_t L_2 = Input_get_touchCount_m497E19AA4FA22DB659F631B20FAEF65572D1B44E(/*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_00c8;
		}
	}
	{
		TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* L_3 = Input_get_touches_mD31418E8B2487DBC9641A15677B41B459859011A(/*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = 0;
		Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		int32_t L_6 = Touch_get_phase_m759A61477ECBBD90A57E36F1166EB9340A0FE349((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)(&V_2), /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0043;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = Touch_get_position_m2E60676112DA3628CF2DC76418A275C7FE521D8F((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)(&V_2), /*hidden argument*/NULL);
		__this->set_touchOrigin_23(L_7);
		goto IL_00c8;
	}

IL_0043:
	{
		int32_t L_8 = Touch_get_phase_m759A61477ECBBD90A57E36F1166EB9340A0FE349((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)(&V_2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)3))))
		{
			goto IL_00c8;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_9 = __this->get_address_of_touchOrigin_23();
		float L_10 = L_9->get_x_0();
		if ((!(((float)L_10) >= ((float)(0.0f)))))
		{
			goto IL_00c8;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = Touch_get_position_m2E60676112DA3628CF2DC76418A275C7FE521D8F((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)(&V_2), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = L_11;
		float L_13 = L_12.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_14 = __this->get_address_of_touchOrigin_23();
		float L_15 = L_14->get_x_0();
		V_3 = ((float)il2cpp_codegen_subtract((float)L_13, (float)L_15));
		float L_16 = L_12.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_17 = __this->get_address_of_touchOrigin_23();
		float L_18 = L_17->get_y_1();
		V_4 = ((float)il2cpp_codegen_subtract((float)L_16, (float)L_18));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_19 = __this->get_address_of_touchOrigin_23();
		L_19->set_x_0((-1.0f));
		float L_20 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_21 = fabsf(L_20);
		float L_22 = V_4;
		float L_23 = fabsf(L_22);
		if ((!(((float)L_21) > ((float)L_23))))
		{
			goto IL_00ba;
		}
	}
	{
		float L_24 = V_3;
		if ((((float)L_24) > ((float)(0.0f))))
		{
			goto IL_00b6;
		}
	}
	{
		G_B11_0 = (-1);
		goto IL_00b7;
	}

IL_00b6:
	{
		G_B11_0 = 1;
	}

IL_00b7:
	{
		V_0 = G_B11_0;
		goto IL_00c8;
	}

IL_00ba:
	{
		float L_25 = V_4;
		if ((((float)L_25) > ((float)(0.0f))))
		{
			goto IL_00c6;
		}
	}
	{
		G_B15_0 = (-1);
		goto IL_00c7;
	}

IL_00c6:
	{
		G_B15_0 = 1;
	}

IL_00c7:
	{
		V_1 = G_B15_0;
	}

IL_00c8:
	{
		int32_t L_26 = V_0;
		if (L_26)
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_27 = V_1;
		if (!L_27)
		{
			goto IL_00d6;
		}
	}

IL_00ce:
	{
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(MovingObject_AttemptMove_TisWall_t67DD401885ADE3E30586FB7A43629B3AA85E08CD_mF93624F785234BC9B5E257D2EAB8FBE4BB1A7D19_RuntimeMethod_var, __this, L_28, L_29);
	}

IL_00d6:
	{
		return;
	}
}
// System.Void Completed.Player::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnTriggerEnter2D_m68C090E273A7ECE5102E765E7DBA96C55A8A65D1 (Player_tAFCC8AE0CDA5F35211606A022B981B2A8A655FB3 * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_OnTriggerEnter2D_m68C090E273A7ECE5102E765E7DBA96C55A8A65D1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(L_0, /*hidden argument*/NULL);
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, _stringLiteralF83B6FE3AEBF13744E866019556D9129CD7A55BE, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		float L_3 = __this->get_restartLevelDelay_9();
		MonoBehaviour_Invoke_m979EDEF812D4630882E2E8346776B6CA5A9176BF(__this, _stringLiteralB134BD555A2F6EC5313C1B2A225B2C17F3409351, L_3, /*hidden argument*/NULL);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}

IL_002b:
	{
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_4 = ___other0;
		NullCheck(L_4);
		String_t* L_5 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(L_4, /*hidden argument*/NULL);
		bool L_6 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_5, _stringLiteral35B259290EC3ACBB839D14CD18752DFB010F79EC, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_7 = __this->get_food_22();
		int32_t L_8 = __this->get_pointsPerFood_10();
		__this->set_food_22(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8)));
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_9 = __this->get_foodText_13();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralA979EF10CC6F6A36DF6B8A323307EE3BB2E2DB9C);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralA979EF10CC6F6A36DF6B8A323307EE3BB2E2DB9C);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_11;
		int32_t L_13 = __this->get_pointsPerFood_10();
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_15);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = L_12;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral2A580A00758CA1E44BCA280244A4EAC8AAFBEBBB);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral2A580A00758CA1E44BCA280244A4EAC8AAFBEBBB);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_16;
		int32_t L_18 = __this->get_food_22();
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_20);
		String_t* L_21 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_17, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_21);
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E_il2cpp_TypeInfo_var);
		SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E * L_22 = ((SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E_il2cpp_TypeInfo_var))->get_instance_6();
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_23 = (AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2*)(AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2*)SZArrayNew(AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2_il2cpp_TypeInfo_var, (uint32_t)2);
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_24 = L_23;
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_25 = __this->get_eatSound1_16();
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *)L_25);
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_26 = L_24;
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_27 = __this->get_eatSound2_17();
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *)L_27);
		NullCheck(L_22);
		SoundManager_RandomizeSfx_m01BD0A4C44A0B0F05EACE172744912505E3827E9(L_22, L_26, /*hidden argument*/NULL);
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_28 = ___other0;
		NullCheck(L_28);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_29 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_29, (bool)0, /*hidden argument*/NULL);
		return;
	}

IL_00c4:
	{
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_30 = ___other0;
		NullCheck(L_30);
		String_t* L_31 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(L_30, /*hidden argument*/NULL);
		bool L_32 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_31, _stringLiteralEDE36EE66AD94463124E95C321234115DEC3D701, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_015c;
		}
	}
	{
		int32_t L_33 = __this->get_food_22();
		int32_t L_34 = __this->get_pointsPerSoda_11();
		__this->set_food_22(((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)L_34)));
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_35 = __this->get_foodText_13();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_36 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_37 = L_36;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteralA979EF10CC6F6A36DF6B8A323307EE3BB2E2DB9C);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralA979EF10CC6F6A36DF6B8A323307EE3BB2E2DB9C);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_38 = L_37;
		int32_t L_39 = __this->get_pointsPerSoda_11();
		int32_t L_40 = L_39;
		RuntimeObject * L_41 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_40);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_41);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_41);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_42 = L_38;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, _stringLiteral2A580A00758CA1E44BCA280244A4EAC8AAFBEBBB);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral2A580A00758CA1E44BCA280244A4EAC8AAFBEBBB);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_43 = L_42;
		int32_t L_44 = __this->get_food_22();
		int32_t L_45 = L_44;
		RuntimeObject * L_46 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_45);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_46);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_46);
		String_t* L_47 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_43, /*hidden argument*/NULL);
		NullCheck(L_35);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_35, L_47);
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E_il2cpp_TypeInfo_var);
		SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E * L_48 = ((SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E_il2cpp_TypeInfo_var))->get_instance_6();
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_49 = (AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2*)(AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2*)SZArrayNew(AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2_il2cpp_TypeInfo_var, (uint32_t)2);
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_50 = L_49;
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_51 = __this->get_drinkSound1_18();
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_51);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *)L_51);
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_52 = L_50;
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_53 = __this->get_drinkSound2_19();
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_53);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(1), (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *)L_53);
		NullCheck(L_48);
		SoundManager_RandomizeSfx_m01BD0A4C44A0B0F05EACE172744912505E3827E9(L_48, L_52, /*hidden argument*/NULL);
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_54 = ___other0;
		NullCheck(L_54);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_55 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_54, /*hidden argument*/NULL);
		NullCheck(L_55);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_55, (bool)0, /*hidden argument*/NULL);
	}

IL_015c:
	{
		return;
	}
}
// System.Void Completed.Player::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Restart_m39A83F320D25E62259CC2202253A8FEB0BBCB5AF (Player_tAFCC8AE0CDA5F35211606A022B981B2A8A655FB3 * __this, const RuntimeMethod* method)
{
	Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  L_0 = SceneManager_GetActiveScene_mD583193D329EBF540D8AB8A062681B1C2AB5EA51(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Scene_get_buildIndex_m764659943B7357F5D6C9165F68EDCFBBDDD6C3C2((Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m84E39F1210BA4482CF2D8A2F068198760DE4B4C5(L_1, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Completed.Player::LoseFood(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_LoseFood_m0B4449432D23766124FB273ADD3836D38AEFEFDD (Player_tAFCC8AE0CDA5F35211606A022B981B2A8A655FB3 * __this, int32_t ___loss0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_LoseFood_m0B4449432D23766124FB273ADD3836D38AEFEFDD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_0 = __this->get_animator_21();
		NullCheck(L_0);
		Animator_SetTrigger_m68D29B7FA54C2F230F5AD780D462612B18E74245(L_0, _stringLiteral31BB69B1D8895A98792336582F22ABC49E669B7D, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_food_22();
		int32_t L_2 = ___loss0;
		__this->set_food_22(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2)));
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_3 = __this->get_foodText_13();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral3BC15C8AAE3E4124DD409035F32EA2FD6835EFC9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3BC15C8AAE3E4124DD409035F32EA2FD6835EFC9);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_5;
		int32_t L_7 = ___loss0;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_9);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = L_6;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral2A580A00758CA1E44BCA280244A4EAC8AAFBEBBB);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral2A580A00758CA1E44BCA280244A4EAC8AAFBEBBB);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_10;
		int32_t L_12 = __this->get_food_22();
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_14);
		String_t* L_15 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_11, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_15);
		Player_CheckIfGameOver_mF3154A74627A9A6C981ED6D2CDD585C76C9E8681(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Completed.Player::CheckIfGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_CheckIfGameOver_mF3154A74627A9A6C981ED6D2CDD585C76C9E8681 (Player_tAFCC8AE0CDA5F35211606A022B981B2A8A655FB3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_CheckIfGameOver_mF3154A74627A9A6C981ED6D2CDD585C76C9E8681_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_food_22();
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0032;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E_il2cpp_TypeInfo_var);
		SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E * L_1 = ((SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E_il2cpp_TypeInfo_var))->get_instance_6();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_2 = __this->get_gameOverSound_20();
		NullCheck(L_1);
		SoundManager_PlaySingle_m1B91BEE9CEB978735D0A24C7249C17E6A9E4B467(L_1, L_2, /*hidden argument*/NULL);
		SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E * L_3 = ((SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E_il2cpp_TypeInfo_var))->get_instance_6();
		NullCheck(L_3);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_4 = L_3->get_musicSource_5();
		NullCheck(L_4);
		AudioSource_Stop_m488F7AA7F7067DE3EC92CEE3413E86C2E5940200(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tE812C2D494AD9E4526B863676B915462C462677A_il2cpp_TypeInfo_var);
		GameManager_tE812C2D494AD9E4526B863676B915462C462677A * L_5 = ((GameManager_tE812C2D494AD9E4526B863676B915462C462677A_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tE812C2D494AD9E4526B863676B915462C462677A_il2cpp_TypeInfo_var))->get_instance_7();
		NullCheck(L_5);
		GameManager_GameOver_m6567A78046F939A5443115BAF94E5EB408B0C6B1(L_5, /*hidden argument*/NULL);
	}

IL_0032:
	{
		return;
	}
}
// System.Void Completed.Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m0116372BE13E89178D501A5B3F652B5CE7C41128 (Player_tAFCC8AE0CDA5F35211606A022B981B2A8A655FB3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player__ctor_m0116372BE13E89178D501A5B3F652B5CE7C41128_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_restartLevelDelay_9((1.0f));
		__this->set_pointsPerFood_10(((int32_t)10));
		__this->set_pointsPerSoda_11(((int32_t)20));
		__this->set_wallDamage_12(1);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = Vector2_get_one_m6E01BE09CEA40781CB12CCB6AF33BBDA0F60CEED(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = Vector2_op_UnaryNegation_m3FA0AE2F9B031765EFA566B25F5453C3B001FF4D(L_0, /*hidden argument*/NULL);
		__this->set_touchOrigin_23(L_1);
		MovingObject__ctor_mFD90AECAED7CF07D86378DCF5D239C1DB089DA58(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Completed.SoundManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Awake_mF1206AB238C10E834613ED76167ED5700CE7B776 (SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SoundManager_Awake_mF1206AB238C10E834613ED76167ED5700CE7B776_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E_il2cpp_TypeInfo_var);
		SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E * L_0 = ((SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E_il2cpp_TypeInfo_var))->get_instance_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E_il2cpp_TypeInfo_var);
		((SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E_il2cpp_TypeInfo_var))->set_instance_6(__this);
		goto IL_002d;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E_il2cpp_TypeInfo_var);
		SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E * L_2 = ((SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E_il2cpp_TypeInfo_var))->get_instance_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_4, /*hidden argument*/NULL);
	}

IL_002d:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207(L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Completed.SoundManager::PlaySingle(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySingle_m1B91BEE9CEB978735D0A24C7249C17E6A9E4B467 (SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip0, const RuntimeMethod* method)
{
	{
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_0 = __this->get_efxSource_4();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_1 = ___clip0;
		NullCheck(L_0);
		AudioSource_set_clip_mF574231E0B749E0167CAF9E4FCBA06BAA0F9ED9B(L_0, L_1, /*hidden argument*/NULL);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_2 = __this->get_efxSource_4();
		NullCheck(L_2);
		AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Completed.SoundManager::RandomizeSfx(UnityEngine.AudioClip[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_RandomizeSfx_m01BD0A4C44A0B0F05EACE172744912505E3827E9 (SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E * __this, AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* ___clips0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_0 = ___clips0;
		NullCheck(L_0);
		int32_t L_1 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(0, (((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))), /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = __this->get_lowPitchRange_7();
		float L_3 = __this->get_highPitchRange_8();
		float L_4 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_5 = __this->get_efxSource_4();
		float L_6 = V_1;
		NullCheck(L_5);
		AudioSource_set_pitch_mAB8F8CDB21A3139D3471784FEE9DBFA4CEDEE2E0(L_5, L_6, /*hidden argument*/NULL);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_7 = __this->get_efxSource_4();
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_8 = ___clips0;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_7);
		AudioSource_set_clip_mF574231E0B749E0167CAF9E4FCBA06BAA0F9ED9B(L_7, L_11, /*hidden argument*/NULL);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_12 = __this->get_efxSource_4();
		NullCheck(L_12);
		AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164(L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Completed.SoundManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager__ctor_m45CC1AA55E18C007DE82712F49558578FEB78B76 (SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E * __this, const RuntimeMethod* method)
{
	{
		__this->set_lowPitchRange_7((0.95f));
		__this->set_highPitchRange_8((1.05f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Completed.SoundManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager__cctor_m82A2795F97608FDE7205C269FEBBBEB7F39AD1B5 (const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Completed.Wall::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wall_Awake_mD2F06404D388F876289F4E0E89BE1F5E06027A65 (Wall_t67DD401885ADE3E30586FB7A43629B3AA85E08CD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Wall_Awake_mD2F06404D388F876289F4E0E89BE1F5E06027A65_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_0 = Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693_RuntimeMethod_var);
		__this->set_spriteRenderer_8(L_0);
		return;
	}
}
// System.Void Completed.Wall::DamageWall(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wall_DamageWall_m80EF3FD0A4E9C5A5EB6E6BA78DFE90E417F72B63 (Wall_t67DD401885ADE3E30586FB7A43629B3AA85E08CD * __this, int32_t ___loss0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Wall_DamageWall_m80EF3FD0A4E9C5A5EB6E6BA78DFE90E417F72B63_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E_il2cpp_TypeInfo_var);
		SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E * L_0 = ((SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t26327F8D99F9576CE42BA0A6B1D46AEAF4B2DE0E_il2cpp_TypeInfo_var))->get_instance_6();
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_1 = (AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2*)(AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2*)SZArrayNew(AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2_il2cpp_TypeInfo_var, (uint32_t)2);
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_2 = L_1;
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_3 = __this->get_chopSound1_4();
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *)L_3);
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_4 = L_2;
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_5 = __this->get_chopSound2_5();
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *)L_5);
		NullCheck(L_0);
		SoundManager_RandomizeSfx_m01BD0A4C44A0B0F05EACE172744912505E3827E9(L_0, L_4, /*hidden argument*/NULL);
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_6 = __this->get_spriteRenderer_8();
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_7 = __this->get_dmgSprite_6();
		NullCheck(L_6);
		SpriteRenderer_set_sprite_m9F5C8B2007AA03FAB66F0CB61260349DF1E28611(L_6, L_7, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_hp_7();
		int32_t L_9 = ___loss0;
		__this->set_hp_7(((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9)));
		int32_t L_10 = __this->get_hp_7();
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_11, (bool)0, /*hidden argument*/NULL);
	}

IL_0056:
	{
		return;
	}
}
// System.Void Completed.Wall::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wall__ctor_mFAAEF6AFFE791462A96545A4281D10A79DA38AB8 (Wall_t67DD401885ADE3E30586FB7A43629B3AA85E08CD * __this, const RuntimeMethod* method)
{
	{
		__this->set_hp_7(3);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Enemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Start_m0681B66D4522F045EB7A33A21467994960D1E435 (Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_Start_m0681B66D4522F045EB7A33A21467994960D1E435_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var);
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_0 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_instance_6();
		NullCheck(L_0);
		GameManager_AddEnemyToList_mB31091B916B4F91CBA9260AF106556CAAF66D9B1(L_0, __this, /*hidden argument*/NULL);
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_1 = Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719(__this, /*hidden argument*/Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719_RuntimeMethod_var);
		__this->set_animator_10(L_1);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = GameObject_FindGameObjectWithTag_m9F2877F52346B973DE3023209D73852E96ECC10D(_stringLiteralE53407CFE1A5156B9F0D1EED3BAB5EF3AE75CFD8, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		__this->set_target_11(L_3);
		MovingObject_Start_m8F7B64E0413B84E1D1D3F0B544F9A8311244C12B(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Enemy::MoveEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_MoveEnemy_m90470C09BA59768F31AEBA4915905649B7733E1B (Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_MoveEnemy_m90470C09BA59768F31AEBA4915905649B7733E1B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_11();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_6 = fabsf(((float)il2cpp_codegen_subtract((float)L_2, (float)L_5)));
		if ((!(((float)L_6) < ((float)(1.401298E-45f)))))
		{
			goto IL_005a;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = __this->get_target_11();
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_y_3();
		if ((((float)L_9) > ((float)L_12)))
		{
			goto IL_0056;
		}
	}
	{
		G_B4_0 = (-1);
		goto IL_0057;
	}

IL_0056:
	{
		G_B4_0 = 1;
	}

IL_0057:
	{
		V_1 = G_B4_0;
		goto IL_0081;
	}

IL_005a:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = __this->get_target_11();
		NullCheck(L_13);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_x_2();
		if ((((float)L_15) > ((float)L_18)))
		{
			goto IL_007f;
		}
	}
	{
		G_B8_0 = (-1);
		goto IL_0080;
	}

IL_007f:
	{
		G_B8_0 = 1;
	}

IL_0080:
	{
		V_0 = G_B8_0;
	}

IL_0081:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(MovingObject_AttemptMove_TisPlayer_t8321F4671F549F5A7793BB8BA33D32CCCD538873_mD010F31A2A639746D630926A93D1A3EFF5F763BC_RuntimeMethod_var, __this, L_19, L_20);
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_mCD4E016A02FE662E339AA011EBA74D77B09556C5 (Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * __this, const RuntimeMethod* method)
{
	{
		MovingObject__ctor_m7FC409A56D252DAD1586C71DD49E7814127A56EE(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_mE60F41F3186E80B2BAB293918745366D18508C0F (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Awake_mE60F41F3186E80B2BAB293918745366D18508C0F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var);
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_0 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_instance_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var);
		((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->set_instance_6(__this);
		goto IL_002d;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var);
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_2 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_instance_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_4, /*hidden argument*/NULL);
	}

IL_002d:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207(L_5, /*hidden argument*/NULL);
		List_1_t4BC8A38307CF15CA0AD142EDE954C83F258D776A * L_6 = (List_1_t4BC8A38307CF15CA0AD142EDE954C83F258D776A *)il2cpp_codegen_object_new(List_1_t4BC8A38307CF15CA0AD142EDE954C83F258D776A_il2cpp_TypeInfo_var);
		List_1__ctor_m4DBD7BFCF2ABB429466D1A3CA5ECA1D15C1FEEC6(L_6, /*hidden argument*/List_1__ctor_m4DBD7BFCF2ABB429466D1A3CA5ECA1D15C1FEEC6_RuntimeMethod_var);
		__this->set_enemies_11(L_6);
		BoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C * L_7 = Component_GetComponent_TisBoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C_m7225E0B4D5DD74E086CB4A2A5BDE6EFA7F8550B5(__this, /*hidden argument*/Component_GetComponent_TisBoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C_m7225E0B4D5DD74E086CB4A2A5BDE6EFA7F8550B5_RuntimeMethod_var);
		__this->set_boardScript_7(L_7);
		GameManager_InitGame_m654E7512B9AE3DE5106AF16F0D8C3D39670C2E75(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::OnLevelWasLoaded(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnLevelWasLoaded_m5E465A81988D2F3F99A41B8E5C2D695747693661 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_level_10();
		__this->set_level_10(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		GameManager_InitGame_m654E7512B9AE3DE5106AF16F0D8C3D39670C2E75(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::InitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_InitGame_m654E7512B9AE3DE5106AF16F0D8C3D39670C2E75 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_InitGame_m654E7512B9AE3DE5106AF16F0D8C3D39670C2E75_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_doingSetup_15((bool)1);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral80E8C0BDFFC4F6BAC693702C251569667B2C8997, /*hidden argument*/NULL);
		__this->set_levelImage_14(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral76D58561A55786B285C077DF9D586A6413095D47, /*hidden argument*/NULL);
		NullCheck(L_1);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_2 = GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A(L_1, /*hidden argument*/GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A_RuntimeMethod_var);
		__this->set_levelText_13(L_2);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_3 = __this->get_levelText_13();
		int32_t L_4 = __this->get_level_10();
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralE3D5FFA2C193AD3DAEC986D93BB248FB0482231D, L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_7);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_levelImage_14();
		NullCheck(L_8);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_8, (bool)1, /*hidden argument*/NULL);
		float L_9 = __this->get_levelStartDelay_4();
		MonoBehaviour_Invoke_m979EDEF812D4630882E2E8346776B6CA5A9176BF(__this, _stringLiteral211C9DDEC5E2382DED02420AC9E99A08B0B8A0C0, L_9, /*hidden argument*/NULL);
		List_1_t4BC8A38307CF15CA0AD142EDE954C83F258D776A * L_10 = __this->get_enemies_11();
		NullCheck(L_10);
		List_1_Clear_m8A26E14705D2C80E80034715B731977B8A910DF1(L_10, /*hidden argument*/List_1_Clear_m8A26E14705D2C80E80034715B731977B8A910DF1_RuntimeMethod_var);
		BoardManager_t535FB2BB53839948EF34C5AB9D73B640C33C122C * L_11 = __this->get_boardScript_7();
		int32_t L_12 = __this->get_level_10();
		NullCheck(L_11);
		BoardManager_SetupScene_m670C8D73B288F0C43F79418DF7F99A5D84D46165(L_11, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::HideLevelImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_HideLevelImage_m56FE193CC7675DB7A3D6A11386ECFA8B0E6280C6 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_levelImage_14();
		NullCheck(L_0);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_0, (bool)0, /*hidden argument*/NULL);
		__this->set_doingSetup_15((bool)0);
		return;
	}
}
// System.Void GameManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_m658E745BE197CC36CFAE422F8037F41A1B7FFFD3 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_GameOver_m658E745BE197CC36CFAE422F8037F41A1B7FFFD3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_levelText_13();
		int32_t L_1 = __this->get_level_10();
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteral5C0DBFAF382FEAEFB83A95328F9D93C2580484A9, L_3, _stringLiteralA958DA44913CE39C445BC4527A8268560EC4C789, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_levelImage_14();
		NullCheck(L_5);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_5, (bool)1, /*hidden argument*/NULL);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_m07DC32583BF09EB71183725B7B95FA7B4716988A (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_playersTurn_9();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = __this->get_enemiesMoving_12();
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		bool L_2 = __this->get_doingSetup_15();
		if (!L_2)
		{
			goto IL_0019;
		}
	}

IL_0018:
	{
		return;
	}

IL_0019:
	{
		RuntimeObject* L_3 = GameManager_MoveEnemies_mED371A44C407C93DF33A71F433692A009F6E1BA0(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::AddEnemyToList(Enemy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_AddEnemyToList_mB31091B916B4F91CBA9260AF106556CAAF66D9B1 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * ___script0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_AddEnemyToList_mB31091B916B4F91CBA9260AF106556CAAF66D9B1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t4BC8A38307CF15CA0AD142EDE954C83F258D776A * L_0 = __this->get_enemies_11();
		Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * L_1 = ___script0;
		NullCheck(L_0);
		List_1_Add_m6ED0FB3ABA16A3A8AF0D48619D15B4B947333F5B(L_0, L_1, /*hidden argument*/List_1_Add_m6ED0FB3ABA16A3A8AF0D48619D15B4B947333F5B_RuntimeMethod_var);
		return;
	}
}
// System.Collections.IEnumerator GameManager::MoveEnemies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_MoveEnemies_mED371A44C407C93DF33A71F433692A009F6E1BA0 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_MoveEnemies_mED371A44C407C93DF33A71F433692A009F6E1BA0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMoveEnemiesU3Ed__19_tE457B5209025BEEC2BE40C81BC4D0DCD4A7F6810 * L_0 = (U3CMoveEnemiesU3Ed__19_tE457B5209025BEEC2BE40C81BC4D0DCD4A7F6810 *)il2cpp_codegen_object_new(U3CMoveEnemiesU3Ed__19_tE457B5209025BEEC2BE40C81BC4D0DCD4A7F6810_il2cpp_TypeInfo_var);
		U3CMoveEnemiesU3Ed__19__ctor_m2DBF02FCFCA5B9679E17CE772610E167BD97D211(L_0, 0, /*hidden argument*/NULL);
		U3CMoveEnemiesU3Ed__19_tE457B5209025BEEC2BE40C81BC4D0DCD4A7F6810 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF7F1107D38DE91EB8A57C1C3BB1A932C50CD9693 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	{
		__this->set_levelStartDelay_4((2.0f));
		__this->set_turnDelay_5((0.1f));
		__this->set_playerFoodPoints_8(((int32_t)100));
		__this->set_playersTurn_9((bool)1);
		__this->set_level_10(1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__cctor_m050E3CF18ED59B480951819A6C68DEA9C0EB1D45 (const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager_<MoveEnemies>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveEnemiesU3Ed__19__ctor_m2DBF02FCFCA5B9679E17CE772610E167BD97D211 (U3CMoveEnemiesU3Ed__19_tE457B5209025BEEC2BE40C81BC4D0DCD4A7F6810 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameManager_<MoveEnemies>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveEnemiesU3Ed__19_System_IDisposable_Dispose_m7A50B9A68753C5E0C56918414DAC874AFAF68C6C (U3CMoveEnemiesU3Ed__19_tE457B5209025BEEC2BE40C81BC4D0DCD4A7F6810 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameManager_<MoveEnemies>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveEnemiesU3Ed__19_MoveNext_m0C9165A5DB60FD9015DFEEA2FFCDB00B9797E6D5 (U3CMoveEnemiesU3Ed__19_tE457B5209025BEEC2BE40C81BC4D0DCD4A7F6810 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CMoveEnemiesU3Ed__19_MoveNext_m0C9165A5DB60FD9015DFEEA2FFCDB00B9797E6D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_004e;
			}
			case 2:
			{
				goto IL_007c;
			}
			case 3:
			{
				goto IL_00cc;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_3 = V_1;
		NullCheck(L_3);
		L_3->set_enemiesMoving_12((bool)1);
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_turnDelay_5();
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_6 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004e:
	{
		__this->set_U3CU3E1__state_0((-1));
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_7 = V_1;
		NullCheck(L_7);
		List_1_t4BC8A38307CF15CA0AD142EDE954C83F258D776A * L_8 = L_7->get_enemies_11();
		NullCheck(L_8);
		int32_t L_9 = List_1_get_Count_m2EA40FDD7BE2FB22B8227B533BAA8D316CC4BE3E_inline(L_8, /*hidden argument*/List_1_get_Count_m2EA40FDD7BE2FB22B8227B533BAA8D316CC4BE3E_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_0083;
		}
	}
	{
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_10 = V_1;
		NullCheck(L_10);
		float L_11 = L_10->get_turnDelay_5();
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_12 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_12, L_11, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_12);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_007c:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0083:
	{
		__this->set_U3CiU3E5__2_3(0);
		goto IL_00e3;
	}

IL_008c:
	{
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_13 = V_1;
		NullCheck(L_13);
		List_1_t4BC8A38307CF15CA0AD142EDE954C83F258D776A * L_14 = L_13->get_enemies_11();
		int32_t L_15 = __this->get_U3CiU3E5__2_3();
		NullCheck(L_14);
		Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * L_16 = List_1_get_Item_m2F68DB121B5F724D192190680B43E14E7FF0AFFE_inline(L_14, L_15, /*hidden argument*/List_1_get_Item_m2F68DB121B5F724D192190680B43E14E7FF0AFFE_RuntimeMethod_var);
		NullCheck(L_16);
		Enemy_MoveEnemy_m90470C09BA59768F31AEBA4915905649B7733E1B(L_16, /*hidden argument*/NULL);
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_17 = V_1;
		NullCheck(L_17);
		List_1_t4BC8A38307CF15CA0AD142EDE954C83F258D776A * L_18 = L_17->get_enemies_11();
		int32_t L_19 = __this->get_U3CiU3E5__2_3();
		NullCheck(L_18);
		Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * L_20 = List_1_get_Item_m2F68DB121B5F724D192190680B43E14E7FF0AFFE_inline(L_18, L_19, /*hidden argument*/List_1_get_Item_m2F68DB121B5F724D192190680B43E14E7FF0AFFE_RuntimeMethod_var);
		NullCheck(L_20);
		float L_21 = ((MovingObject_tF36E398D30B1800D05ED5DD9017F575347F36556 *)L_20)->get_moveTime_4();
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_22 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_22, L_21, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_22);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_00cc:
	{
		__this->set_U3CU3E1__state_0((-1));
		int32_t L_23 = __this->get_U3CiU3E5__2_3();
		V_2 = L_23;
		int32_t L_24 = V_2;
		__this->set_U3CiU3E5__2_3(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)));
	}

IL_00e3:
	{
		int32_t L_25 = __this->get_U3CiU3E5__2_3();
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_26 = V_1;
		NullCheck(L_26);
		List_1_t4BC8A38307CF15CA0AD142EDE954C83F258D776A * L_27 = L_26->get_enemies_11();
		NullCheck(L_27);
		int32_t L_28 = List_1_get_Count_m2EA40FDD7BE2FB22B8227B533BAA8D316CC4BE3E_inline(L_27, /*hidden argument*/List_1_get_Count_m2EA40FDD7BE2FB22B8227B533BAA8D316CC4BE3E_RuntimeMethod_var);
		if ((((int32_t)L_25) < ((int32_t)L_28)))
		{
			goto IL_008c;
		}
	}
	{
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_29 = V_1;
		NullCheck(L_29);
		L_29->set_playersTurn_9((bool)1);
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_30 = V_1;
		NullCheck(L_30);
		L_30->set_enemiesMoving_12((bool)0);
		return (bool)0;
	}
}
// System.Object GameManager_<MoveEnemies>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMoveEnemiesU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4EA2DB507BF99136FFCEBFB2345529FDC07FE61D (U3CMoveEnemiesU3Ed__19_tE457B5209025BEEC2BE40C81BC4D0DCD4A7F6810 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameManager_<MoveEnemies>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveEnemiesU3Ed__19_System_Collections_IEnumerator_Reset_m9B921F7529467162F3BD635FC11AF7F64D05A395 (U3CMoveEnemiesU3Ed__19_tE457B5209025BEEC2BE40C81BC4D0DCD4A7F6810 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CMoveEnemiesU3Ed__19_System_Collections_IEnumerator_Reset_m9B921F7529467162F3BD635FC11AF7F64D05A395_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CMoveEnemiesU3Ed__19_System_Collections_IEnumerator_Reset_m9B921F7529467162F3BD635FC11AF7F64D05A395_RuntimeMethod_var);
	}
}
// System.Object GameManager_<MoveEnemies>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMoveEnemiesU3Ed__19_System_Collections_IEnumerator_get_Current_mB828883DA12E62CA6DCE273154D4DC4AC2A3E329 (U3CMoveEnemiesU3Ed__19_tE457B5209025BEEC2BE40C81BC4D0DCD4A7F6810 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Loader::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loader_Awake_m2E926C562F1DC55B732AD3B9730A0031819C4630 (Loader_tC39B68C6E54EA735AB7561201ECFA248531172AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Loader_Awake_m2E926C562F1DC55B732AD3B9730A0031819C4630_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var);
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_0 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_instance_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_gameManager_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90(L_2, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90_RuntimeMethod_var);
	}

IL_0019:
	{
		return;
	}
}
// System.Void Loader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loader__ctor_mAC5C3D0EB7223E8D37D943CB7A7308CF042F90F1 (Loader_tC39B68C6E54EA735AB7561201ECFA248531172AB * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MovingObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingObject_Start_m8F7B64E0413B84E1D1D3F0B544F9A8311244C12B (MovingObject_tF36E398D30B1800D05ED5DD9017F575347F36556 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MovingObject_Start_m8F7B64E0413B84E1D1D3F0B544F9A8311244C12B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * L_0 = Component_GetComponent_TisBoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87_mD4BABFD1DC7C524ACC853125D82D011DC1CC5E5B(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87_mD4BABFD1DC7C524ACC853125D82D011DC1CC5E5B_RuntimeMethod_var);
		__this->set_boxCollider_6(L_0);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_1 = Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625_RuntimeMethod_var);
		__this->set_rb2D_7(L_1);
		float L_2 = __this->get_moveTime_4();
		__this->set_inverseMoveTime_8(((float)((float)(1.0f)/(float)L_2)));
		return;
	}
}
// System.Boolean MovingObject::Move(System.Int32,System.Int32,UnityEngine.RaycastHit2D&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MovingObject_Move_m12B8B780C755ECBD96247CC6A54B5D3914CC2E11 (MovingObject_tF36E398D30B1800D05ED5DD9017F575347F36556 * __this, int32_t ___xDir0, int32_t ___yDir1, RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE * ___hit2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MovingObject_Move_m12B8B780C755ECBD96247CC6A54B5D3914CC2E11_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = V_0;
		int32_t L_4 = ___xDir0;
		int32_t L_5 = ___yDir1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_6), (((float)((float)L_4))), (((float)((float)L_5))), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682(L_3, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * L_8 = __this->get_boxCollider_6();
		NullCheck(L_8);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_8, (bool)0, /*hidden argument*/NULL);
		RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE * L_9 = ___hit2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = V_1;
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_12 = __this->get_blockingLayer_5();
		int32_t L_13 = LayerMask_op_Implicit_m2AFFC7F931005437E8F356C953F439829AF4CFA5(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_tB21970F986016656D66D2922594F336E1EE7D5C7_il2cpp_TypeInfo_var);
		RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE  L_14 = Physics2D_Linecast_m720F975685497285E077F5FE20480ED441528AEA(L_10, L_11, L_13, /*hidden argument*/NULL);
		*(RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE *)L_9 = L_14;
		BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * L_15 = __this->get_boxCollider_6();
		NullCheck(L_15);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_15, (bool)1, /*hidden argument*/NULL);
		RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE * L_16 = ___hit2;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = RaycastHit2D_get_transform_m9AD59D59FC4F85128F139C0DE9B0A2AE27D75DAC((RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE *)L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_17, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0074;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_19, /*hidden argument*/NULL);
		RuntimeObject* L_21 = MovingObject_SmoothMovement_m093F359AF7B8831EBF2E73E5D374D15F139B18EF(__this, L_20, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_21, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.IEnumerator MovingObject::SmoothMovement(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MovingObject_SmoothMovement_m093F359AF7B8831EBF2E73E5D374D15F139B18EF (MovingObject_tF36E398D30B1800D05ED5DD9017F575347F36556 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___end0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MovingObject_SmoothMovement_m093F359AF7B8831EBF2E73E5D374D15F139B18EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSmoothMovementU3Ed__7_t893A1D53CE8CA776A15678CDE30322EC7AA52327 * L_0 = (U3CSmoothMovementU3Ed__7_t893A1D53CE8CA776A15678CDE30322EC7AA52327 *)il2cpp_codegen_object_new(U3CSmoothMovementU3Ed__7_t893A1D53CE8CA776A15678CDE30322EC7AA52327_il2cpp_TypeInfo_var);
		U3CSmoothMovementU3Ed__7__ctor_m393135AD46D8B285DC1D1B122F7C836896D00198(L_0, 0, /*hidden argument*/NULL);
		U3CSmoothMovementU3Ed__7_t893A1D53CE8CA776A15678CDE30322EC7AA52327 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CSmoothMovementU3Ed__7_t893A1D53CE8CA776A15678CDE30322EC7AA52327 * L_2 = L_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___end0;
		NullCheck(L_2);
		L_2->set_end_3(L_3);
		return L_2;
	}
}
// System.Void MovingObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingObject__ctor_m7FC409A56D252DAD1586C71DD49E7814127A56EE (MovingObject_tF36E398D30B1800D05ED5DD9017F575347F36556 * __this, const RuntimeMethod* method)
{
	{
		__this->set_moveTime_4((0.1f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MovingObject_<SmoothMovement>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMovementU3Ed__7__ctor_m393135AD46D8B285DC1D1B122F7C836896D00198 (U3CSmoothMovementU3Ed__7_t893A1D53CE8CA776A15678CDE30322EC7AA52327 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MovingObject_<SmoothMovement>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMovementU3Ed__7_System_IDisposable_Dispose_mF08B019DA0DFBA69E6ACF4BE59923D65CE6933C4 (U3CSmoothMovementU3Ed__7_t893A1D53CE8CA776A15678CDE30322EC7AA52327 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MovingObject_<SmoothMovement>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSmoothMovementU3Ed__7_MoveNext_mC8B2C13034A16EB0C88EA1430285C62339CC67EF (U3CSmoothMovementU3Ed__7_t893A1D53CE8CA776A15678CDE30322EC7AA52327 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSmoothMovementU3Ed__7_MoveNext_mC8B2C13034A16EB0C88EA1430285C62339CC67EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MovingObject_tF36E398D30B1800D05ED5DD9017F575347F36556 * V_1 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MovingObject_tF36E398D30B1800D05ED5DD9017F575347F36556 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00b4;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		MovingObject_tF36E398D30B1800D05ED5DD9017F575347F36556 * L_4 = V_1;
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = __this->get_end_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		float L_9 = Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), /*hidden argument*/NULL);
		__this->set_U3CsqrRemainingDistanceU3E5__2_4(L_9);
		goto IL_00bb;
	}

IL_0047:
	{
		MovingObject_tF36E398D30B1800D05ED5DD9017F575347F36556 * L_10 = V_1;
		NullCheck(L_10);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_11 = L_10->get_rb2D_7();
		NullCheck(L_11);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = Rigidbody2D_get_position_m68CB3236D19D7472ABDE1F5A5A9BD924595361B8(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_12, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = __this->get_end_3();
		MovingObject_tF36E398D30B1800D05ED5DD9017F575347F36556 * L_15 = V_1;
		NullCheck(L_15);
		float L_16 = L_15->get_inverseMoveTime_8();
		float L_17 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_MoveTowards_mA288BB5AA73DDA9CA76EDC11F339BAFDA1E4FF45(L_13, L_14, ((float)il2cpp_codegen_multiply((float)L_16, (float)L_17)), /*hidden argument*/NULL);
		V_3 = L_18;
		MovingObject_tF36E398D30B1800D05ED5DD9017F575347F36556 * L_19 = V_1;
		NullCheck(L_19);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_20 = L_19->get_rb2D_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = V_3;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_22 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		Rigidbody2D_MovePosition_mD0572DDD77FD07D4D03B0A44CF8AD050AE9C42E5(L_20, L_22, /*hidden argument*/NULL);
		MovingObject_tF36E398D30B1800D05ED5DD9017F575347F36556 * L_23 = V_1;
		NullCheck(L_23);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_24 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_24, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = __this->get_end_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_25, L_26, /*hidden argument*/NULL);
		V_2 = L_27;
		float L_28 = Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), /*hidden argument*/NULL);
		__this->set_U3CsqrRemainingDistanceU3E5__2_4(L_28);
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00b4:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00bb:
	{
		float L_29 = __this->get_U3CsqrRemainingDistanceU3E5__2_4();
		if ((((float)L_29) > ((float)(1.401298E-45f))))
		{
			goto IL_0047;
		}
	}
	{
		return (bool)0;
	}
}
// System.Object MovingObject_<SmoothMovement>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSmoothMovementU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mABDA8DE473840604370B63EF95790B4602BD79F2 (U3CSmoothMovementU3Ed__7_t893A1D53CE8CA776A15678CDE30322EC7AA52327 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MovingObject_<SmoothMovement>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMovementU3Ed__7_System_Collections_IEnumerator_Reset_m7CE8C721A11606F2DECD46147A194C090A17A056 (U3CSmoothMovementU3Ed__7_t893A1D53CE8CA776A15678CDE30322EC7AA52327 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSmoothMovementU3Ed__7_System_Collections_IEnumerator_Reset_m7CE8C721A11606F2DECD46147A194C090A17A056_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CSmoothMovementU3Ed__7_System_Collections_IEnumerator_Reset_m7CE8C721A11606F2DECD46147A194C090A17A056_RuntimeMethod_var);
	}
}
// System.Object MovingObject_<SmoothMovement>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSmoothMovementU3Ed__7_System_Collections_IEnumerator_get_Current_m104D919C55D48F51784EDC73C74930229730EBD9 (U3CSmoothMovementU3Ed__7_t893A1D53CE8CA776A15678CDE30322EC7AA52327 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mE9ACCAA7FEBF4020693FFB73C0839CF3AAD0B0C4 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_Start_mE9ACCAA7FEBF4020693FFB73C0839CF3AAD0B0C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_0 = Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719(__this, /*hidden argument*/Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719_RuntimeMethod_var);
		__this->set_animator_21(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var);
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_1 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_instance_6();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_playerFoodPoints_8();
		__this->set_food_22(L_2);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_3 = __this->get_foodText_13();
		int32_t L_4 = __this->get_food_22();
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral19FCC1A5A92B80E89A17B2E4EAF33F0D83BD1EAE, L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_7);
		MovingObject_Start_m8F7B64E0413B84E1D1D3F0B544F9A8311244C12B(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnDisable_m987E038809EB4749FB07887B0A94AFFD42083F5B (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_OnDisable_m987E038809EB4749FB07887B0A94AFFD42083F5B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var);
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_0 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_instance_6();
		int32_t L_1 = __this->get_food_22();
		NullCheck(L_0);
		L_0->set_playerFoodPoints_8(L_1);
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_m6F977BAE3756AB7073D64042B766B442E4EC6FD2 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_Update_m6F977BAE3756AB7073D64042B766B442E4EC6FD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t G_B11_0 = 0;
	int32_t G_B15_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var);
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_0 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_instance_6();
		NullCheck(L_0);
		bool L_1 = L_0->get_playersTurn_9();
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		V_0 = 0;
		V_1 = 0;
		int32_t L_2 = Input_get_touchCount_m497E19AA4FA22DB659F631B20FAEF65572D1B44E(/*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_00c8;
		}
	}
	{
		TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* L_3 = Input_get_touches_mD31418E8B2487DBC9641A15677B41B459859011A(/*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = 0;
		Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		int32_t L_6 = Touch_get_phase_m759A61477ECBBD90A57E36F1166EB9340A0FE349((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)(&V_2), /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0043;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = Touch_get_position_m2E60676112DA3628CF2DC76418A275C7FE521D8F((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)(&V_2), /*hidden argument*/NULL);
		__this->set_touchOrigin_23(L_7);
		goto IL_00c8;
	}

IL_0043:
	{
		int32_t L_8 = Touch_get_phase_m759A61477ECBBD90A57E36F1166EB9340A0FE349((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)(&V_2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)3))))
		{
			goto IL_00c8;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_9 = __this->get_address_of_touchOrigin_23();
		float L_10 = L_9->get_x_0();
		if ((!(((float)L_10) >= ((float)(0.0f)))))
		{
			goto IL_00c8;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = Touch_get_position_m2E60676112DA3628CF2DC76418A275C7FE521D8F((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)(&V_2), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = L_11;
		float L_13 = L_12.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_14 = __this->get_address_of_touchOrigin_23();
		float L_15 = L_14->get_x_0();
		V_3 = ((float)il2cpp_codegen_subtract((float)L_13, (float)L_15));
		float L_16 = L_12.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_17 = __this->get_address_of_touchOrigin_23();
		float L_18 = L_17->get_y_1();
		V_4 = ((float)il2cpp_codegen_subtract((float)L_16, (float)L_18));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_19 = __this->get_address_of_touchOrigin_23();
		L_19->set_x_0((-1.0f));
		float L_20 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_21 = fabsf(L_20);
		float L_22 = V_4;
		float L_23 = fabsf(L_22);
		if ((!(((float)L_21) > ((float)L_23))))
		{
			goto IL_00ba;
		}
	}
	{
		float L_24 = V_3;
		if ((((float)L_24) > ((float)(0.0f))))
		{
			goto IL_00b6;
		}
	}
	{
		G_B11_0 = (-1);
		goto IL_00b7;
	}

IL_00b6:
	{
		G_B11_0 = 1;
	}

IL_00b7:
	{
		V_0 = G_B11_0;
		goto IL_00c8;
	}

IL_00ba:
	{
		float L_25 = V_4;
		if ((((float)L_25) > ((float)(0.0f))))
		{
			goto IL_00c6;
		}
	}
	{
		G_B15_0 = (-1);
		goto IL_00c7;
	}

IL_00c6:
	{
		G_B15_0 = 1;
	}

IL_00c7:
	{
		V_1 = G_B15_0;
	}

IL_00c8:
	{
		int32_t L_26 = V_0;
		if (L_26)
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_27 = V_1;
		if (!L_27)
		{
			goto IL_00d6;
		}
	}

IL_00ce:
	{
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(MovingObject_AttemptMove_TisWall_t482816FBEA1E55072FF113F443689BCC831EA97B_m96DE3D3EBED585CBD2AE562C1A5A5195832BE05F_RuntimeMethod_var, __this, L_28, L_29);
	}

IL_00d6:
	{
		return;
	}
}
// System.Void Player::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnTriggerEnter2D_m5062A5F9DF9D6561C8BDE2032DAEECE6BAA91DB5 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_OnTriggerEnter2D_m5062A5F9DF9D6561C8BDE2032DAEECE6BAA91DB5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(L_0, /*hidden argument*/NULL);
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, _stringLiteralF83B6FE3AEBF13744E866019556D9129CD7A55BE, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		float L_3 = __this->get_restartLevelDelay_12();
		MonoBehaviour_Invoke_m979EDEF812D4630882E2E8346776B6CA5A9176BF(__this, _stringLiteralB134BD555A2F6EC5313C1B2A225B2C17F3409351, L_3, /*hidden argument*/NULL);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}

IL_002b:
	{
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_4 = ___other0;
		NullCheck(L_4);
		String_t* L_5 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(L_4, /*hidden argument*/NULL);
		bool L_6 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_5, _stringLiteral35B259290EC3ACBB839D14CD18752DFB010F79EC, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_7 = __this->get_food_22();
		int32_t L_8 = __this->get_pointsPerFood_10();
		__this->set_food_22(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8)));
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_9 = __this->get_foodText_13();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralA979EF10CC6F6A36DF6B8A323307EE3BB2E2DB9C);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralA979EF10CC6F6A36DF6B8A323307EE3BB2E2DB9C);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_11;
		int32_t L_13 = __this->get_pointsPerFood_10();
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_15);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = L_12;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral2A580A00758CA1E44BCA280244A4EAC8AAFBEBBB);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral2A580A00758CA1E44BCA280244A4EAC8AAFBEBBB);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_16;
		int32_t L_18 = __this->get_food_22();
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_20);
		String_t* L_21 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_17, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_21);
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6_il2cpp_TypeInfo_var);
		SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6 * L_22 = ((SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6_il2cpp_TypeInfo_var))->get_instance_6();
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_23 = (AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2*)(AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2*)SZArrayNew(AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2_il2cpp_TypeInfo_var, (uint32_t)2);
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_24 = L_23;
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_25 = __this->get_eatSound1_16();
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *)L_25);
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_26 = L_24;
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_27 = __this->get_eatSound2_17();
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *)L_27);
		NullCheck(L_22);
		SoundManager_RandomizeSfx_m7F4FD20582798470BB6EA378B0ABC0FB0772024A(L_22, L_26, /*hidden argument*/NULL);
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_28 = ___other0;
		NullCheck(L_28);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_29 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_29, (bool)0, /*hidden argument*/NULL);
		return;
	}

IL_00c4:
	{
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_30 = ___other0;
		NullCheck(L_30);
		String_t* L_31 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(L_30, /*hidden argument*/NULL);
		bool L_32 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_31, _stringLiteralEDE36EE66AD94463124E95C321234115DEC3D701, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_015c;
		}
	}
	{
		int32_t L_33 = __this->get_food_22();
		int32_t L_34 = __this->get_pointsPerSoda_11();
		__this->set_food_22(((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)L_34)));
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_35 = __this->get_foodText_13();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_36 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_37 = L_36;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteralA979EF10CC6F6A36DF6B8A323307EE3BB2E2DB9C);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralA979EF10CC6F6A36DF6B8A323307EE3BB2E2DB9C);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_38 = L_37;
		int32_t L_39 = __this->get_pointsPerFood_10();
		int32_t L_40 = L_39;
		RuntimeObject * L_41 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_40);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_41);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_41);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_42 = L_38;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, _stringLiteral2A580A00758CA1E44BCA280244A4EAC8AAFBEBBB);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral2A580A00758CA1E44BCA280244A4EAC8AAFBEBBB);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_43 = L_42;
		int32_t L_44 = __this->get_food_22();
		int32_t L_45 = L_44;
		RuntimeObject * L_46 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_45);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_46);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_46);
		String_t* L_47 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_43, /*hidden argument*/NULL);
		NullCheck(L_35);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_35, L_47);
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6_il2cpp_TypeInfo_var);
		SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6 * L_48 = ((SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6_il2cpp_TypeInfo_var))->get_instance_6();
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_49 = (AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2*)(AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2*)SZArrayNew(AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2_il2cpp_TypeInfo_var, (uint32_t)2);
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_50 = L_49;
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_51 = __this->get_drinkSound1_18();
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_51);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *)L_51);
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_52 = L_50;
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_53 = __this->get_drinkSound2_19();
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_53);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(1), (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *)L_53);
		NullCheck(L_48);
		SoundManager_RandomizeSfx_m7F4FD20582798470BB6EA378B0ABC0FB0772024A(L_48, L_52, /*hidden argument*/NULL);
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_54 = ___other0;
		NullCheck(L_54);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_55 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_54, /*hidden argument*/NULL);
		NullCheck(L_55);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_55, (bool)0, /*hidden argument*/NULL);
	}

IL_015c:
	{
		return;
	}
}
// System.Void Player::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Restart_m83C4B85958C9F5C7712F090A78E9D259CE6707EF (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	{
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player::LoseFood(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_LoseFood_m1C4BD9BDC9822128963FC50AE9DFC74900630CE9 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, int32_t ___loss0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_LoseFood_m1C4BD9BDC9822128963FC50AE9DFC74900630CE9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_0 = __this->get_animator_21();
		NullCheck(L_0);
		Animator_SetTrigger_m68D29B7FA54C2F230F5AD780D462612B18E74245(L_0, _stringLiteral31BB69B1D8895A98792336582F22ABC49E669B7D, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_food_22();
		int32_t L_2 = ___loss0;
		__this->set_food_22(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2)));
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_3 = __this->get_foodText_13();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral3BC15C8AAE3E4124DD409035F32EA2FD6835EFC9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3BC15C8AAE3E4124DD409035F32EA2FD6835EFC9);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_5;
		int32_t L_7 = ___loss0;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_9);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = L_6;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral2A580A00758CA1E44BCA280244A4EAC8AAFBEBBB);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral2A580A00758CA1E44BCA280244A4EAC8AAFBEBBB);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_10;
		int32_t L_12 = __this->get_food_22();
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_14);
		String_t* L_15 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_11, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_15);
		Player_CheckIfGameOver_m3FB711225593A5D63BE1914EACCF58F9ECCB6C76(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player::CheckIfGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_CheckIfGameOver_m3FB711225593A5D63BE1914EACCF58F9ECCB6C76 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_CheckIfGameOver_m3FB711225593A5D63BE1914EACCF58F9ECCB6C76_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_food_22();
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0032;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6_il2cpp_TypeInfo_var);
		SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6 * L_1 = ((SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6_il2cpp_TypeInfo_var))->get_instance_6();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_2 = __this->get_gameOverSound_20();
		NullCheck(L_1);
		SoundManager_PlaySingle_m353DAE58C96FA892BC67D429AE527C048E48BFEB(L_1, L_2, /*hidden argument*/NULL);
		SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6 * L_3 = ((SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6_il2cpp_TypeInfo_var))->get_instance_6();
		NullCheck(L_3);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_4 = L_3->get_musicSource_5();
		NullCheck(L_4);
		AudioSource_Stop_m488F7AA7F7067DE3EC92CEE3413E86C2E5940200(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var);
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_5 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_instance_6();
		NullCheck(L_5);
		GameManager_GameOver_m658E745BE197CC36CFAE422F8037F41A1B7FFFD3(L_5, /*hidden argument*/NULL);
	}

IL_0032:
	{
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m8F4AB650C5E2DE406B3C65EA8F662013458D85E2 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player__ctor_m8F4AB650C5E2DE406B3C65EA8F662013458D85E2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_wallDamage_9(1);
		__this->set_pointsPerFood_10(((int32_t)10));
		__this->set_pointsPerSoda_11(((int32_t)20));
		__this->set_restartLevelDelay_12((1.0f));
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = Vector2_get_one_m6E01BE09CEA40781CB12CCB6AF33BBDA0F60CEED(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = Vector2_op_UnaryNegation_m3FA0AE2F9B031765EFA566B25F5453C3B001FF4D(L_0, /*hidden argument*/NULL);
		__this->set_touchOrigin_23(L_1);
		MovingObject__ctor_m7FC409A56D252DAD1586C71DD49E7814127A56EE(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Readme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_m3800904C973279A1ECFFFB5CCD112CC2DA71CFDC (Readme_t3B6022BA9CBD2C56BD12C781DB20C5B34B6C4E46 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Readme_Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m2A736CD62A95DEC94D4FB77FE9EB22BF51F2F129 (Section_tDCE8FED365051651AC2BFB27F2230DDC5603C985 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SoundManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Awake_mFAD1AEBF8B8957E85CE445F65107AC6A5DDDFEEC (SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SoundManager_Awake_mFAD1AEBF8B8957E85CE445F65107AC6A5DDDFEEC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6_il2cpp_TypeInfo_var);
		SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6 * L_0 = ((SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6_il2cpp_TypeInfo_var))->get_instance_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6_il2cpp_TypeInfo_var);
		((SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6_il2cpp_TypeInfo_var))->set_instance_6(__this);
		goto IL_002d;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6_il2cpp_TypeInfo_var);
		SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6 * L_2 = ((SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6_il2cpp_TypeInfo_var))->get_instance_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_4, /*hidden argument*/NULL);
	}

IL_002d:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207(L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundManager::PlaySingle(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySingle_m353DAE58C96FA892BC67D429AE527C048E48BFEB (SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6 * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip0, const RuntimeMethod* method)
{
	{
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_0 = __this->get_efxSource_4();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_1 = ___clip0;
		NullCheck(L_0);
		AudioSource_set_clip_mF574231E0B749E0167CAF9E4FCBA06BAA0F9ED9B(L_0, L_1, /*hidden argument*/NULL);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_2 = __this->get_efxSource_4();
		NullCheck(L_2);
		AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundManager::RandomizeSfx(UnityEngine.AudioClip[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_RandomizeSfx_m7F4FD20582798470BB6EA378B0ABC0FB0772024A (SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6 * __this, AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* ___clips0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_0 = ___clips0;
		NullCheck(L_0);
		int32_t L_1 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(0, (((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))), /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = __this->get_lowPitchRange_7();
		float L_3 = __this->get_highPitchRange_8();
		float L_4 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_5 = __this->get_efxSource_4();
		float L_6 = V_1;
		NullCheck(L_5);
		AudioSource_set_pitch_mAB8F8CDB21A3139D3471784FEE9DBFA4CEDEE2E0(L_5, L_6, /*hidden argument*/NULL);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_7 = __this->get_efxSource_4();
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_8 = ___clips0;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_7);
		AudioSource_set_clip_mF574231E0B749E0167CAF9E4FCBA06BAA0F9ED9B(L_7, L_11, /*hidden argument*/NULL);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_12 = __this->get_efxSource_4();
		NullCheck(L_12);
		AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164(L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager__ctor_mFF8C696A5B666ABC1E2344581FE7FB06E038D422 (SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6 * __this, const RuntimeMethod* method)
{
	{
		__this->set_lowPitchRange_7((0.95f));
		__this->set_highPitchRange_8((1.05f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager__cctor_mE6CF7DE6CD959ED3613549D6B023FDAC674327D8 (const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TutorialInfo::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialInfo_Awake_mD8C804FAD3A0680AAAE189C04D25AFA626623FE4 (TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TutorialInfo_Awake_mD8C804FAD3A0680AAAE189C04D25AFA626623FE4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6_il2cpp_TypeInfo_var);
		bool L_0 = ((TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6_StaticFields*)il2cpp_codegen_static_fields_for(TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6_il2cpp_TypeInfo_var))->get_alreadyShownThisSession_10();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		TutorialInfo_StartGame_m3FD434DD3FC15135C3BD73987759E536175745C3(__this, /*hidden argument*/NULL);
		return;
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6_il2cpp_TypeInfo_var);
		((TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6_StaticFields*)il2cpp_codegen_static_fields_for(TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6_il2cpp_TypeInfo_var))->set_alreadyShownThisSession_10((bool)1);
		String_t* L_1 = ((TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6_StaticFields*)il2cpp_codegen_static_fields_for(TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6_il2cpp_TypeInfo_var))->get_showAtStartPrefsKey_9();
		bool L_2 = PlayerPrefs_HasKey_mD87D3051ACE7EC6F5B54F4FC9E18572C917CA0D1(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6_il2cpp_TypeInfo_var);
		String_t* L_3 = ((TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6_StaticFields*)il2cpp_codegen_static_fields_for(TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6_il2cpp_TypeInfo_var))->get_showAtStartPrefsKey_9();
		int32_t L_4 = PlayerPrefs_GetInt_m318D2B42E0FCAF179BF86D6C2353B38A58089BAD(L_3, /*hidden argument*/NULL);
		__this->set_showAtStart_4((bool)((((int32_t)L_4) == ((int32_t)1))? 1 : 0));
	}

IL_0033:
	{
		Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106 * L_5 = __this->get_showAtStartToggle_8();
		bool L_6 = __this->get_showAtStart_4();
		NullCheck(L_5);
		Toggle_set_isOn_mCAA660F49688DBA29E896B961E0054154C42EA2B(L_5, L_6, /*hidden argument*/NULL);
		bool L_7 = __this->get_showAtStart_4();
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		TutorialInfo_ShowLaunchScreen_mF075F6A833585693F1D43B39F55F4DE8D40BDF39(__this, /*hidden argument*/NULL);
		return;
	}

IL_0053:
	{
		TutorialInfo_StartGame_m3FD434DD3FC15135C3BD73987759E536175745C3(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TutorialInfo::ShowLaunchScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialInfo_ShowLaunchScreen_mF075F6A833585693F1D43B39F55F4DE8D40BDF39 (TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6 * __this, const RuntimeMethod* method)
{
	{
		Time_set_timeScale_mAB89C3BB5DEE81934159C23F103397A77AC3F4AF((0.0f), /*hidden argument*/NULL);
		AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * L_0 = __this->get_mainListener_7();
		NullCheck(L_0);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_0, (bool)0, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_overlay_6();
		NullCheck(L_1);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_1, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TutorialInfo::LaunchTutorial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialInfo_LaunchTutorial_m8A9B7B48A4C65E5072B4E500819055C0C4DCE294 (TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_url_5();
		Application_OpenURL_m2888DA5BDF68B1BC23E983469157783F390D7BC8(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TutorialInfo::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialInfo_StartGame_m3FD434DD3FC15135C3BD73987759E536175745C3 (TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6 * __this, const RuntimeMethod* method)
{
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_overlay_6();
		NullCheck(L_0);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_0, (bool)0, /*hidden argument*/NULL);
		AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * L_1 = __this->get_mainListener_7();
		NullCheck(L_1);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_1, (bool)1, /*hidden argument*/NULL);
		Time_set_timeScale_mAB89C3BB5DEE81934159C23F103397A77AC3F4AF((1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void TutorialInfo::ToggleShowAtLaunch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialInfo_ToggleShowAtLaunch_m3632B30A9CA1D2147A5A71C32AA605C54EBA1E37 (TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TutorialInfo_ToggleShowAtLaunch_m3632B30A9CA1D2147A5A71C32AA605C54EBA1E37_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	{
		Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106 * L_0 = __this->get_showAtStartToggle_8();
		NullCheck(L_0);
		bool L_1 = Toggle_get_isOn_mA34B03BED48C7189F0AB8498F986485B4CD6B44A_inline(L_0, /*hidden argument*/NULL);
		__this->set_showAtStart_4(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6_il2cpp_TypeInfo_var);
		String_t* L_2 = ((TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6_StaticFields*)il2cpp_codegen_static_fields_for(TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6_il2cpp_TypeInfo_var))->get_showAtStartPrefsKey_9();
		bool L_3 = __this->get_showAtStart_4();
		G_B1_0 = L_2;
		if (L_3)
		{
			G_B2_0 = L_2;
			goto IL_0021;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0022:
	{
		PlayerPrefs_SetInt_mBF4101DF829B4738CCC293E1C2D173AEE45EFE62(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TutorialInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialInfo__ctor_mC564FE5CE5BAC4931FEAB54F197020AFE7751CA8 (TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6 * __this, const RuntimeMethod* method)
{
	{
		__this->set_showAtStart_4((bool)1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TutorialInfo::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialInfo__cctor_mA9ED5E3524C7571EA69A0B3C4744610E3BBAB1FC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TutorialInfo__cctor_mA9ED5E3524C7571EA69A0B3C4744610E3BBAB1FC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6_StaticFields*)il2cpp_codegen_static_fields_for(TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6_il2cpp_TypeInfo_var))->set_showAtStartPrefsKey_9(_stringLiteral3EDEEA9488A4389FBA8A55E17755277F95002505);
		((TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6_StaticFields*)il2cpp_codegen_static_fields_for(TutorialInfo_t32C32F28F3E107CDDA9A04D4A6B927D7CED565C6_il2cpp_TypeInfo_var))->set_alreadyShownThisSession_10((bool)0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wall::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wall_Awake_mDCE42E98C11B012A13ED246083F25BCC9BB02458 (Wall_t482816FBEA1E55072FF113F443689BCC831EA97B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Wall_Awake_mDCE42E98C11B012A13ED246083F25BCC9BB02458_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_0 = Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693_RuntimeMethod_var);
		__this->set_spriteRenderer_8(L_0);
		return;
	}
}
// System.Void Wall::DamageWall(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wall_DamageWall_m28CB3DFD2159B0AF6F577D5E27EE4957B72DE26B (Wall_t482816FBEA1E55072FF113F443689BCC831EA97B * __this, int32_t ___loss0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Wall_DamageWall_m28CB3DFD2159B0AF6F577D5E27EE4957B72DE26B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6_il2cpp_TypeInfo_var);
		SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6 * L_0 = ((SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tF41BDD7A49CD3CB4E97BDC09250C781C4A0252C6_il2cpp_TypeInfo_var))->get_instance_6();
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_1 = (AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2*)(AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2*)SZArrayNew(AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2_il2cpp_TypeInfo_var, (uint32_t)2);
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_2 = L_1;
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_3 = __this->get_chopSound1_6();
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *)L_3);
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_4 = L_2;
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_5 = __this->get_chopSound2_7();
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 *)L_5);
		NullCheck(L_0);
		SoundManager_RandomizeSfx_m7F4FD20582798470BB6EA378B0ABC0FB0772024A(L_0, L_4, /*hidden argument*/NULL);
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_6 = __this->get_spriteRenderer_8();
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_7 = __this->get_dmgSprite_4();
		NullCheck(L_6);
		SpriteRenderer_set_sprite_m9F5C8B2007AA03FAB66F0CB61260349DF1E28611(L_6, L_7, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_hp_5();
		int32_t L_9 = ___loss0;
		__this->set_hp_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9)));
		int32_t L_10 = __this->get_hp_5();
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_11, (bool)0, /*hidden argument*/NULL);
	}

IL_0056:
	{
		return;
	}
}
// System.Void Wall::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wall__ctor_m7326352016786ED636E8BE7FC8922F9ED82CA0C4 (Wall_t482816FBEA1E55072FF113F443689BCC831EA97B * __this, const RuntimeMethod* method)
{
	{
		__this->set_hp_5(4);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Toggle_get_isOn_mA34B03BED48C7189F0AB8498F986485B4CD6B44A_inline (Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_IsOn_24();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_gshared_inline (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_gshared_inline (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_2 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return L_4;
	}
}
