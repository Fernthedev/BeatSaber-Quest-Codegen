#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_GeneralUtility)
namespace System {
class Type;
}
namespace UnityEngine {
class Texture2D;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
template<typename T>
class __HEU_GeneralUtility__SetAttributeArrayFunc_1;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeOwner;
}
namespace HoudiniEngineUnity {
struct HAPI_AssetInfo;
}
namespace UnityEngine {
struct Rect;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAssetRoot;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Transform;
}
namespace HoudiniEngineUnity {
class HEU_Handle;
}
namespace HoudiniEngineUnity {
struct TransformData;
}
namespace UnityEngine {
class Texture;
}
namespace HoudiniEngineUnity {
template<typename ARG2,typename T>
class __HEU_GeneralUtility__GetArray2ArgDel_2;
}
namespace HoudiniEngineUnity {
class HEU_Parameters;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeInfo;
}
namespace HoudiniEngineUnity {
template<typename T>
class __HEU_GeneralUtility__GetArray1ArgDel_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Object;
}
namespace HoudiniEngineUnity {
class HEU_OutputAttribute;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshCollider;
}
namespace UnityEngine {
class Camera;
}
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
namespace HoudiniEngineUnity {
template<typename ARG3,typename ARG2,typename T>
class __HEU_GeneralUtility__GetArray3ArgDel_3;
}
namespace HoudiniEngineUnity {
template<typename T>
class __HEU_GeneralUtility__GetAttributeArrayInputFunc_1;
}
namespace UnityEngine {
struct Vector2;
}
namespace System {
class AsyncCallback;
}
namespace HoudiniEngineUnity {
struct HAPI_HandleInfo;
}
namespace System {
class Object;
}
namespace System {
class IAsyncResult;
}
namespace HoudiniEngineUnity {
struct HAPI_ObjectInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_ParmChoiceInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_ParmInfo;
}
// Forward declare root types
namespace HoudiniEngineUnity {
template<typename T>
class __HEU_GeneralUtility__GetArray1ArgDel_1;
}
namespace HoudiniEngineUnity {
template<typename ARG2,typename T>
class __HEU_GeneralUtility__GetArray2ArgDel_2;
}
namespace HoudiniEngineUnity {
template<typename ARG3,typename ARG2,typename T>
class __HEU_GeneralUtility__GetArray3ArgDel_3;
}
namespace HoudiniEngineUnity {
template<typename T>
class __HEU_GeneralUtility__GetAttributeArrayInputFunc_1;
}
namespace HoudiniEngineUnity {
template<typename T>
class __HEU_GeneralUtility__SetAttributeArrayFunc_1;
}
namespace HoudiniEngineUnity {
class HEU_GeneralUtility;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_GeneralUtility__GetArray1ArgDel_1<::HoudiniEngineUnity::HAPI_HandleInfo>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_GeneralUtility__GetArray1ArgDel_1<::HoudiniEngineUnity::HAPI_ObjectInfo>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_GeneralUtility__GetArray1ArgDel_1<::HoudiniEngineUnity::HAPI_ParmChoiceInfo>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_GeneralUtility__GetArray1ArgDel_1<::HoudiniEngineUnity::HAPI_ParmInfo>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_GeneralUtility__GetArray1ArgDel_1<::HoudiniEngineUnity::HAPI_Transform>;
}
namespace HoudiniEngineUnity {
template<::il2cpp_utils::il2cpp_reference_type T>
class __HEU_GeneralUtility__GetArray1ArgDel_1<T>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_GeneralUtility__GetArray1ArgDel_1<float_t>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_GeneralUtility__GetArray1ArgDel_1<int32_t>;
}
namespace HoudiniEngineUnity {
template<::cordl_internals::is_or_is_backed_by<int32_t> ARG2>
class __HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,::HoudiniEngineUnity::HAPI_Transform>;
}
namespace HoudiniEngineUnity {
template<::il2cpp_utils::il2cpp_reference_type ARG2,::il2cpp_utils::il2cpp_reference_type T>
class __HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,::HoudiniEngineUnity::HAPI_HandleInfo>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,::HoudiniEngineUnity::HAPI_ObjectInfo>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,::HoudiniEngineUnity::HAPI_ParmChoiceInfo>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,::HoudiniEngineUnity::HAPI_ParmInfo>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,::HoudiniEngineUnity::HAPI_Transform>;
}
namespace HoudiniEngineUnity {
template<::il2cpp_utils::il2cpp_reference_type T>
class __HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,T>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,float_t>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,int32_t>;
}
namespace HoudiniEngineUnity {
template<::il2cpp_utils::il2cpp_reference_type ARG3,::il2cpp_utils::il2cpp_reference_type ARG2,::il2cpp_utils::il2cpp_reference_type T>
class __HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>;
}
namespace HoudiniEngineUnity {
template<::cordl_internals::is_or_is_backed_by<int32_t> ARG3>
class __HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,int32_t,::HoudiniEngineUnity::HAPI_Transform>;
}
namespace HoudiniEngineUnity {
template<::cordl_internals::is_or_is_backed_by<int32_t> ARG2>
class __HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,ARG2,::HoudiniEngineUnity::HAPI_Transform>;
}
namespace HoudiniEngineUnity {
template<::il2cpp_utils::il2cpp_reference_type ARG2,::il2cpp_utils::il2cpp_reference_type T>
class __HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,ARG2,T>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,::HoudiniEngineUnity::HAPI_HandleInfo>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,::HoudiniEngineUnity::HAPI_ObjectInfo>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,::HoudiniEngineUnity::HAPI_ParmChoiceInfo>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,::HoudiniEngineUnity::HAPI_ParmInfo>;
}
namespace HoudiniEngineUnity {
template<::il2cpp_utils::il2cpp_reference_type T>
class __HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,T>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,float_t>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,int32_t>;
}
namespace HoudiniEngineUnity {
template<::il2cpp_utils::il2cpp_reference_type T>
class __HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_GeneralUtility__GetAttributeArrayInputFunc_1<double_t>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_GeneralUtility__GetAttributeArrayInputFunc_1<float_t>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_GeneralUtility__GetAttributeArrayInputFunc_1<int16_t>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_GeneralUtility__GetAttributeArrayInputFunc_1<int32_t>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_GeneralUtility__GetAttributeArrayInputFunc_1<int64_t>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_GeneralUtility__GetAttributeArrayInputFunc_1<int8_t>;
}
namespace HoudiniEngineUnity {
template<::il2cpp_utils::il2cpp_reference_type T>
class __HEU_GeneralUtility__SetAttributeArrayFunc_1<T>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_GeneralUtility__SetAttributeArrayFunc_1<float_t>;
}
namespace HoudiniEngineUnity {
template<>
class __HEU_GeneralUtility__SetAttributeArrayFunc_1<int32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray1ArgDel_1);
MARK_GEN_REF_PTR_T(::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray2ArgDel_2);
MARK_GEN_REF_PTR_T(::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray3ArgDel_3);
MARK_GEN_REF_PTR_T(::HoudiniEngineUnity::__HEU_GeneralUtility__GetAttributeArrayInputFunc_1);
MARK_GEN_REF_PTR_T(::HoudiniEngineUnity::__HEU_GeneralUtility__SetAttributeArrayFunc_1);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_GeneralUtility);
// Type: ::GetArray1ArgDel`1
// Type: ::GetArray2ArgDel`2
// Type: ::GetArray3ArgDel`3
// Type: ::GetAttributeArrayInputFunc`1
// Type: ::SetAttributeArrayFunc`1
// Type: HoudiniEngineUnity::HEU_GeneralUtility
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9829))
// CS Name: ::HoudiniEngineUnity::HEU_GeneralUtility*
class CORDL_TYPE HEU_GeneralUtility : public ::System::Object {
public:
// Declarations
template<typename T>
using SetAttributeArrayFunc_1 = ::HoudiniEngineUnity::__HEU_GeneralUtility__SetAttributeArrayFunc_1<T>;

template<typename T>
using GetAttributeArrayInputFunc_1 = ::HoudiniEngineUnity::__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>;

template<typename ARG3,typename ARG2,typename T>
using GetArray3ArgDel_3 = ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3, ARG2, T>;

template<typename ARG2,typename T>
using GetArray2ArgDel_2 = ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2, T>;

template<typename T>
using GetArray1ArgDel_1 = ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray1ArgDel_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method GetArray1Arg addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool GetArray1Arg(int32_t  arg1, ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray1ArgDel_1<T>*  func, ByRef<::ArrayW<T,::Array<T>*>>  data, int32_t  start, int32_t  count) ;

/// @brief Method GetArray2Arg addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ARG2,typename T>
static inline bool GetArray2Arg(int32_t  arg1, ARG2  arg2, ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>*  func, ByRef<::ArrayW<T,::Array<T>*>>  data, int32_t  start, int32_t  count) ;

/// @brief Method GetArray3Arg addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ARG3,typename ARG2,typename T>
static inline bool GetArray3Arg(int32_t  arg1, ARG2  arg2, ARG3  arg3, ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>*  func, ByRef<::ArrayW<T,::Array<T>*>>  data, int32_t  start, int32_t  count) ;

/// @brief Method GetArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ARG3,typename ARG2,typename T>
static inline bool GetArray(int32_t  arg1, ARG2  arg2, ARG3  arg3, ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray1ArgDel_1<T>*  func1, ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>*  func2, ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>*  func3, ByRef<::ArrayW<T,::Array<T>*>>  data, int32_t  start, int32_t  count, int32_t  tupleSize) ;

/// @brief Method SetArray1Arg addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool SetArray1Arg(int32_t  arg1, ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray1ArgDel_1<T>*  func, ByRef<::ArrayW<T,::Array<T>*>>  data, int32_t  start, int32_t  count) ;

/// @brief Method SetArray2Arg addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ARG2,typename T>
static inline bool SetArray2Arg(int32_t  arg1, ARG2  arg2, ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>*  func, ByRef<::ArrayW<T,::Array<T>*>>  data, int32_t  start, int32_t  count) ;

/// @brief Method SetArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename ARG2,typename T>
static inline bool SetArray(int32_t  arg1, ARG2  arg2, ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray1ArgDel_1<T>*  func1, ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>*  func2, ByRef<::ArrayW<T,::Array<T>*>>  data, int32_t  start, int32_t  count, int32_t  tupleSize) ;

/// @brief Method DoArrayElementsMatch addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool DoArrayElementsMatch(::ArrayW<T,::Array<T>*>  array1, ::ArrayW<T,::Array<T>*>  array2) ;

/// @brief Method DoArrayElementsMatch addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool DoArrayElementsMatch(::ArrayW<T,::Array<T>*>  array1, int32_t  startOffset1, ::ArrayW<T,::Array<T>*>  array2, int32_t  startOffset2, int32_t  length) ;

/// @brief Method GetAttributeArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool GetAttributeArray(int32_t  geoID, int32_t  partID, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  info, ::ArrayW<T,::Array<T>*>  items, ::HoudiniEngineUnity::__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>*  getFunc, int32_t  count) ;

/// @brief Method GetAttribute addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool GetAttribute(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  geoID, int32_t  partID, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  info, ByRef<::ArrayW<T,::Array<T>*>>  data, ::HoudiniEngineUnity::__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>*  getFunc) ;

/// @brief Method GetAttributeStrict addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool GetAttributeStrict(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  geoID, int32_t  partID, ::HoudiniEngineUnity::HAPI_AttributeOwner  attrOwner, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  info, ByRef<::ArrayW<T,::Array<T>*>>  data, ::HoudiniEngineUnity::__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>*  getFunc) ;

/// @brief Method GetAttributeStringDataHelper addr 0x21b3508 size 0x1d4 virtual false final false
static inline void GetAttributeStringDataHelper(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  geoID, int32_t  partID, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  info, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>  data) ;

/// @brief Method GetAttributeStringData addr 0x21b36dc size 0x134 virtual false final false
static inline ::ArrayW<::StringW,::Array<::StringW>*> GetAttributeStringData(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  geoID, int32_t  partID, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  attrInfo) ;

/// @brief Method SetAttributeArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool SetAttributeArray(int32_t  geoID, int32_t  partID, ::StringW  attrName, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  attrInfo, ::ArrayW<T,::Array<T>*>  items, ::HoudiniEngineUnity::__HEU_GeneralUtility__SetAttributeArrayFunc_1<T>*  setFunc, int32_t  count) ;

/// @brief Method SetAttribute addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline bool SetAttribute(int32_t  geoID, int32_t  partID, ::StringW  attrName, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  attrInfo, ::ArrayW<T,::Array<T>*>  items, ::HoudiniEngineUnity::__HEU_GeneralUtility__SetAttributeArrayFunc_1<T>*  setFunc) ;

/// @brief Method CheckAttributeExists addr 0x21b3810 size 0x50 virtual false final false
static inline bool CheckAttributeExists(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  geoID, int32_t  partID, ::StringW  attribName, ::HoudiniEngineUnity::HAPI_AttributeOwner  attribOwner) ;

/// @brief Method GetAttributeInfo addr 0x21b3860 size 0x94 virtual false final false
static inline bool GetAttributeInfo(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  geoID, int32_t  partID, ::StringW  attribName, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  attribInfo) ;

/// @brief Method HasValidInstanceAttribute addr 0x21b38f4 size 0x3c virtual false final false
static inline bool HasValidInstanceAttribute(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  geoID, int32_t  partID, ::StringW  attribName) ;

/// @brief Method UpdateGeneratedAttributeStore addr 0x21b3930 size 0x1d4 virtual false final false
static inline void UpdateGeneratedAttributeStore(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  geoID, int32_t  partID, ::UnityEngine::GameObject*  go) ;

/// @brief Method CreateOutputAttributeHelper addr 0x21b3de8 size 0x80 virtual false final false
static inline ::HoudiniEngineUnity::HEU_OutputAttribute* CreateOutputAttributeHelper(::StringW  attrName, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  attrInfo) ;

/// @brief Method CreateOutputAttribute addr 0x21b3b04 size 0x2e4 virtual false final false
static inline ::HoudiniEngineUnity::HEU_OutputAttribute* CreateOutputAttribute(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  geoID, int32_t  partID, ::StringW  attrName, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  attrInfo) ;

/// @brief Method CopyWorldTransformValues addr 0x21b3e68 size 0x68 virtual false final false
static inline void CopyWorldTransformValues(::UnityEngine::Transform*  src, ::UnityEngine::Transform*  dest) ;

/// @brief Method ApplyTransformTo addr 0x21b3ed0 size 0xd4 virtual false final false
static inline void ApplyTransformTo(::UnityEngine::Transform*  src, ::UnityEngine::Transform*  target) ;

/// @brief Method CopyLocalTransformValues addr 0x21b3fa4 size 0x68 virtual false final false
static inline void CopyLocalTransformValues(::UnityEngine::Transform*  src, ::UnityEngine::Transform*  dest) ;

/// @brief Method GetChildGameObjects addr 0x21b400c size 0x3a0 virtual false final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetChildGameObjects(::UnityEngine::GameObject*  parentGO) ;

/// @brief Method GetChildGameObjectsWithNamePattern addr 0x21b43ac size 0x420 virtual false final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetChildGameObjectsWithNamePattern(::UnityEngine::GameObject*  parentGO, ::StringW  pattern, bool  bExclude) ;

/// @brief Method GetInstanceChildObjects addr 0x21b47cc size 0x4c virtual false final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetInstanceChildObjects(::UnityEngine::GameObject*  parentGO) ;

/// @brief Method GetNonInstanceChildObjects addr 0x21b4818 size 0x4c virtual false final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetNonInstanceChildObjects(::UnityEngine::GameObject*  parentGO) ;

/// @brief Method GetGameObjectByName addr 0x21b4864 size 0x188 virtual false final false
static inline ::UnityEngine::GameObject* GetGameObjectByName(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  goList, ::StringW  name) ;

/// @brief Method GetGameObjectByNameInProjectOnly addr 0x21b49ec size 0xd0 virtual false final false
static inline ::UnityEngine::GameObject* GetGameObjectByNameInProjectOnly(::StringW  name) ;

/// @brief Method IsGameObjectInProject addr 0x21b4abc size 0x8 virtual false final false
static inline bool IsGameObjectInProject(::UnityEngine::GameObject*  go) ;

/// @brief Method GetGameObjectByNameInScene addr 0x21b4ac4 size 0x4c virtual false final false
static inline ::UnityEngine::GameObject* GetGameObjectByNameInScene(::StringW  name) ;

/// @brief Method GetHDAByGameObjectNameInScene addr 0x21b4b10 size 0x4c virtual false final false
static inline ::HoudiniEngineUnity::HEU_HoudiniAssetRoot* GetHDAByGameObjectNameInScene(::StringW  name) ;

/// @brief Method GetOrCreateComponent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline T GetOrCreateComponent(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method DestroyGeneratedComponents addr 0x21b4b5c size 0x120 virtual false final false
static inline void DestroyGeneratedComponents(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method DestroyGeneratedMeshComponents addr 0x21b4c7c size 0xb8 virtual false final false
static inline void DestroyGeneratedMeshComponents(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method DestroyTerrainComponents addr 0x21b4d34 size 0x1b4 virtual false final false
static inline void DestroyTerrainComponents(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method DestroyComponent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline void DestroyComponent(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method DestroyImmediate addr 0x21b4ee8 size 0x44 virtual false final false
static inline void DestroyImmediate(::UnityEngine::Object*  obj, bool  bAllowDestroyingAssets, bool  bRegisterUndo) ;

/// @brief Method DestroyBakedGameObjects addr 0x21b4f2c size 0x8 virtual false final false
static inline void DestroyBakedGameObjects(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  gameObjectsToDestroy) ;

/// @brief Method DestroyBakedGameObjectsWithEndName addr 0x21b4f34 size 0x140 virtual false final false
static inline void DestroyBakedGameObjectsWithEndName(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  gameObjectsToDestroy, ::StringW  endName) ;

/// @brief Method DestroyLODGroup addr 0x21b52e0 size 0x1ec virtual false final false
static inline void DestroyLODGroup(::UnityEngine::GameObject*  targetGO, bool  bDontDeletePersistantResources) ;

/// @brief Method GetLODTransforms addr 0x21b54cc size 0x1b8 virtual false final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* GetLODTransforms(::UnityEngine::GameObject*  targetGO) ;

/// @brief Method SetLODTransformValues addr 0x21b5684 size 0x144 virtual false final false
static inline void SetLODTransformValues(::UnityEngine::GameObject*  targetGO, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*  transformData) ;

/// @brief Method DestroyGeneratedMeshMaterialsLODGroups addr 0x21b5074 size 0x26c virtual false final false
static inline void DestroyGeneratedMeshMaterialsLODGroups(::UnityEngine::GameObject*  targetGO, bool  bDontDeletePersistantResources) ;

/// @brief Method DestroyGeneratedMaterial addr 0x21b57c8 size 0x134 virtual false final false
static inline void DestroyGeneratedMaterial(::UnityEngine::Material*  material) ;

/// @brief Method DestroyMeshCollider addr 0x21b58fc size 0x134 virtual false final false
static inline void DestroyMeshCollider(::UnityEngine::MeshCollider*  meshCollider, bool  bDontDeletePersistantResources) ;

/// @brief Method SetGameObjectRenderVisiblity addr 0x21b5a30 size 0xe4 virtual false final false
static inline void SetGameObjectRenderVisiblity(::UnityEngine::GameObject*  gameObject, bool  bVisible) ;

/// @brief Method SetGameObjectChildrenRenderVisibility addr 0x21b5b14 size 0xe8 virtual false final false
static inline void SetGameObjectChildrenRenderVisibility(::UnityEngine::GameObject*  gameObject, bool  bVisible) ;

/// @brief Method SetGameObjectColliderState addr 0x21b5bfc size 0xe4 virtual false final false
static inline void SetGameObjectColliderState(::UnityEngine::GameObject*  gameObject, bool  bEnabled) ;

/// @brief Method SetGameObjectChildrenColliderState addr 0x21b5ce0 size 0xe8 virtual false final false
static inline void SetGameObjectChildrenColliderState(::UnityEngine::GameObject*  gameObject, bool  bVisible) ;

/// @brief Method ColorToString addr 0x21b5dc8 size 0x1f0 virtual false final false
static inline ::StringW ColorToString(::UnityEngine::Color  c) ;

/// @brief Method StringToColor addr 0x21b5fb8 size 0x224 virtual false final false
static inline ::UnityEngine::Color StringToColor(::StringW  colorString) ;

/// @brief Method DoesUnityTagExist addr 0x21b61dc size 0x8 virtual false final false
static inline bool DoesUnityTagExist(::StringW  tagName) ;

/// @brief Method SetLayer addr 0x21b61e4 size 0xe0 virtual false final false
static inline void SetLayer(::UnityEngine::GameObject*  rootGO, int32_t  layer, bool  bIncludeChildren) ;

/// @brief Method SetTag addr 0x21b62c4 size 0xe0 virtual false final false
static inline void SetTag(::UnityEngine::GameObject*  rootGO, ::StringW  tag, bool  bIncludeChildren) ;

/// @brief Method CopyFlags addr 0x21b63a4 size 0x68 virtual false final false
static inline void CopyFlags(::UnityEngine::GameObject*  srcGO, ::UnityEngine::GameObject*  dstGO, bool  bIncludeChildren) ;

/// @brief Method IsMouseWithinSceneView addr 0x21b640c size 0x70 virtual false final false
static inline bool IsMouseWithinSceneView(::UnityEngine::Camera*  camera, ::UnityEngine::Vector2  mousePosition) ;

/// @brief Method IsMouseOverRect addr 0x21b647c size 0x44 virtual false final false
static inline bool IsMouseOverRect(::UnityEngine::Camera*  camera, ::UnityEngine::Vector2  mousePosition, ByRef<::UnityEngine::Rect>  rect) ;

/// @brief Method GetSystemTypeByName addr 0x21b64c0 size 0x4c virtual false final false
static inline ::System::Type* GetSystemTypeByName(::StringW  typeName) ;

/// @brief Method AssignUnityTag addr 0x21b650c size 0x2d8 virtual false final false
static inline void AssignUnityTag(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  geoID, int32_t  partID, ::UnityEngine::GameObject*  gameObject) ;

/// @brief Method AssignUnityLayer addr 0x21b67e4 size 0x258 virtual false final false
static inline void AssignUnityLayer(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  geoID, int32_t  partID, ::UnityEngine::GameObject*  gameObject) ;

/// @brief Method MakeStaticIfHasAttribute addr 0x21b6a3c size 0x170 virtual false final false
static inline void MakeStaticIfHasAttribute(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  geoID, int32_t  partID, ::UnityEngine::GameObject*  gameObject) ;

/// @brief Method GetUnityScriptAttributeValue addr 0x21b6bac size 0x168 virtual false final false
static inline ::StringW GetUnityScriptAttributeValue(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  geoID, int32_t  partID) ;

/// @brief Method GetAttributeStringValueSingle addr 0x21b6d14 size 0x2a4 virtual false final false
static inline ::StringW GetAttributeStringValueSingle(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  geoID, int32_t  partID, ::StringW  attrName, ::HoudiniEngineUnity::HAPI_AttributeOwner  attrOwner) ;

/// @brief Method GetAttributeStringValueSingleStrict addr 0x21b6fb8 size 0x380 virtual false final false
static inline ::StringW GetAttributeStringValueSingleStrict(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  geoID, int32_t  partID, ::StringW  attrName, ::HoudiniEngineUnity::HAPI_AttributeOwner  attrOwner) ;

/// @brief Method GetAttributeFloatSingle addr 0x21b7338 size 0x160 virtual false final false
static inline bool GetAttributeFloatSingle(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  geoID, int32_t  partID, ::StringW  attrName, ByRef<float_t>  value) ;

/// @brief Method GetAttributeIntSingle addr 0x21b7498 size 0x160 virtual false final false
static inline bool GetAttributeIntSingle(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  geoID, int32_t  partID, ::StringW  attrName, ByRef<int32_t>  value) ;

/// @brief Method GetAttributeColorSingle addr 0x21b75f8 size 0x1cc virtual false final false
static inline bool GetAttributeColorSingle(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  geoID, int32_t  partID, ::StringW  attrName, ByRef<::UnityEngine::Color>  value) ;

/// @brief Method HasAttribute addr 0x21b77c4 size 0xa4 virtual false final false
static inline bool HasAttribute(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  geoID, int32_t  partID, ::StringW  attrName, ::HoudiniEngineUnity::HAPI_AttributeOwner  attrOwner) ;

/// @brief Method AttachScriptWithInvokeFunction addr 0x21b7868 size 0x550 virtual false final false
static inline void AttachScriptWithInvokeFunction(::StringW  scriptSet, ::UnityEngine::GameObject*  gameObject) ;

/// @brief Method IsInCameraView addr 0x21b7db8 size 0x98 virtual false final false
static inline bool IsInCameraView(::UnityEngine::Camera*  camera, ::UnityEngine::Vector3  point) ;

/// @brief Method FindOrGenerateHandles addr 0x21b7e50 size 0x464 virtual false final false
static inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Handle*>* FindOrGenerateHandles(::HoudiniEngineUnity::HEU_SessionBase*  session, ByRef<::HoudiniEngineUnity::HAPI_AssetInfo>  assetInfo, int32_t  assetID, ::StringW  assetName, ::HoudiniEngineUnity::HEU_Parameters*  parameters, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Handle*>*  currentHandles) ;

/// @brief Method CopyComponents addr 0x21b82b4 size 0x4 virtual false final false
static inline void CopyComponents(::UnityEngine::GameObject*  srcGO, ::UnityEngine::GameObject*  destGO) ;

/// @brief Method LoadTextureFromFile addr 0x21b82b8 size 0x1f4 virtual false final false
static inline ::UnityEngine::Texture* LoadTextureFromFile(::StringW  filePath) ;

/// @brief Method MakeTexture addr 0x21b84ac size 0x134 virtual false final false
static inline ::UnityEngine::Texture2D* MakeTexture(int32_t  width, int32_t  height, ::UnityEngine::Color  color) ;

/// @brief Method ReplaceFirstOccurrence addr 0x21b85e0 size 0x94 virtual false final false
static inline ::StringW ReplaceFirstOccurrence(::StringW  srcStr, ::StringW  searchStr, ::StringW  replaceStr) ;

/// @brief Method SetParentWithCleanTransform addr 0x21b8674 size 0xf0 virtual false final false
static inline void SetParentWithCleanTransform(::UnityEngine::Transform*  parentTransform, ::UnityEngine::Transform*  childTransform) ;

/// @brief Method CopyHAPITransform addr 0x21b8764 size 0x94 virtual false final false
static inline void CopyHAPITransform(ByRef<::HoudiniEngineUnity::HAPI_Transform>  src, ByRef<::HoudiniEngineUnity::HAPI_Transform>  dest) ;

/// @brief Method GetMaterialAttributeValueFromPart addr 0x21b87f8 size 0x178 virtual false final false
static inline ::StringW GetMaterialAttributeValueFromPart(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  geoID, int32_t  partID) ;

/// @brief Method ReplaceColliderMeshFromMeshFilter addr 0x21b8970 size 0x158 virtual false final false
static inline void ReplaceColliderMeshFromMeshFilter(::UnityEngine::GameObject*  targetGO, ::UnityEngine::GameObject*  sourceColliderGO) ;

/// @brief Method ReplaceColliderMeshFromMeshCollider addr 0x21b8ac8 size 0x150 virtual false final false
static inline void ReplaceColliderMeshFromMeshCollider(::UnityEngine::GameObject*  targetGO, ::UnityEngine::GameObject*  sourceColliderGO) ;

/// @brief Method BiLerpf addr 0x21b8c18 size 0x48 virtual false final false
static inline float_t BiLerpf(float_t  p00, float_t  p10, float_t  p01, float_t  p11, float_t  fracX, float_t  fracY) ;

/// @brief Method Fractionalf addr 0x21b8c60 size 0xc virtual false final false
static inline float_t Fractionalf(float_t  value) ;

/// @brief Method LongestCommonPrefix addr 0x21b8c6c size 0x18c virtual false final false
static inline ::StringW LongestCommonPrefix(::System::Collections::Generic::List_1<::StringW>*  list) ;

/// @brief Method GetRawOperatorName addr 0x21b8df8 size 0x58 virtual false final false
static inline ::StringW GetRawOperatorName(::StringW  assetOpName) ;

/// @brief Method GetPrefabFromPath addr 0x21b8e50 size 0x250 virtual false final false
static inline ::UnityEngine::GameObject* GetPrefabFromPath(::StringW  path) ;

static inline ::HoudiniEngineUnity::HEU_GeneralUtility* New_ctor() ;

/// @brief Method .ctor addr 0x21b90a0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_GeneralUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_GeneralUtility(HEU_GeneralUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_GeneralUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_GeneralUtility(HEU_GeneralUtility const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_GeneralUtility()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_GeneralUtility, 0x10>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
// Type: ::GetArray1ArgDel`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(9824))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9824), inst: 7260 })
// CS Name: ::HEU_GeneralUtility::GetArray1ArgDel`1<T>*
class CORDL_TYPE __HEU_GeneralUtility__GetArray1ArgDel_1<::HoudiniEngineUnity::HAPI_Transform> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray1ArgDel_1<::HoudiniEngineUnity::HAPI_Transform>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  arg1, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_Transform,::Array<::HoudiniEngineUnity::HAPI_Transform>*>>  data, int32_t  start, int32_t  length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  arg1, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_Transform,::Array<::HoudiniEngineUnity::HAPI_Transform>*>>  data, int32_t  start, int32_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetArray1ArgDel_1(__HEU_GeneralUtility__GetArray1ArgDel_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetArray1ArgDel_1(__HEU_GeneralUtility__GetArray1ArgDel_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetArray1ArgDel_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray1ArgDel`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(9824))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9824), inst: 5897 })
// CS Name: ::HEU_GeneralUtility::GetArray1ArgDel`1<T>*
class CORDL_TYPE __HEU_GeneralUtility__GetArray1ArgDel_1<::HoudiniEngineUnity::HAPI_ParmChoiceInfo> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray1ArgDel_1<::HoudiniEngineUnity::HAPI_ParmChoiceInfo>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  arg1, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ParmChoiceInfo,::Array<::HoudiniEngineUnity::HAPI_ParmChoiceInfo>*>>  data, int32_t  start, int32_t  length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  arg1, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ParmChoiceInfo,::Array<::HoudiniEngineUnity::HAPI_ParmChoiceInfo>*>>  data, int32_t  start, int32_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetArray1ArgDel_1(__HEU_GeneralUtility__GetArray1ArgDel_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetArray1ArgDel_1(__HEU_GeneralUtility__GetArray1ArgDel_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetArray1ArgDel_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray1ArgDel`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9824)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9824), inst: 5896 })
// CS Name: ::HEU_GeneralUtility::GetArray1ArgDel`1<T>*
class CORDL_TYPE __HEU_GeneralUtility__GetArray1ArgDel_1<::HoudiniEngineUnity::HAPI_ObjectInfo> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray1ArgDel_1<::HoudiniEngineUnity::HAPI_ObjectInfo>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  arg1, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ObjectInfo,::Array<::HoudiniEngineUnity::HAPI_ObjectInfo>*>>  data, int32_t  start, int32_t  length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  arg1, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ObjectInfo,::Array<::HoudiniEngineUnity::HAPI_ObjectInfo>*>>  data, int32_t  start, int32_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetArray1ArgDel_1(__HEU_GeneralUtility__GetArray1ArgDel_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetArray1ArgDel_1(__HEU_GeneralUtility__GetArray1ArgDel_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetArray1ArgDel_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray1ArgDel`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(9824))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9824), inst: 5895 })
// CS Name: ::HEU_GeneralUtility::GetArray1ArgDel`1<T>*
class CORDL_TYPE __HEU_GeneralUtility__GetArray1ArgDel_1<::HoudiniEngineUnity::HAPI_HandleInfo> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray1ArgDel_1<::HoudiniEngineUnity::HAPI_HandleInfo>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  arg1, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_HandleInfo,::Array<::HoudiniEngineUnity::HAPI_HandleInfo>*>>  data, int32_t  start, int32_t  length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  arg1, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_HandleInfo,::Array<::HoudiniEngineUnity::HAPI_HandleInfo>*>>  data, int32_t  start, int32_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetArray1ArgDel_1(__HEU_GeneralUtility__GetArray1ArgDel_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetArray1ArgDel_1(__HEU_GeneralUtility__GetArray1ArgDel_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetArray1ArgDel_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray1ArgDel`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(9824))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9824), inst: 4868 })
// CS Name: ::HEU_GeneralUtility::GetArray1ArgDel`1<T>*
class CORDL_TYPE __HEU_GeneralUtility__GetArray1ArgDel_1<::HoudiniEngineUnity::HAPI_ParmInfo> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray1ArgDel_1<::HoudiniEngineUnity::HAPI_ParmInfo>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  arg1, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo,::Array<::HoudiniEngineUnity::HAPI_ParmInfo>*>>  data, int32_t  start, int32_t  length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  arg1, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo,::Array<::HoudiniEngineUnity::HAPI_ParmInfo>*>>  data, int32_t  start, int32_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetArray1ArgDel_1(__HEU_GeneralUtility__GetArray1ArgDel_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetArray1ArgDel_1(__HEU_GeneralUtility__GetArray1ArgDel_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetArray1ArgDel_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray1ArgDel`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9824)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9824), inst: 391 })
// CS Name: ::HEU_GeneralUtility::GetArray1ArgDel`1<T>*
class CORDL_TYPE __HEU_GeneralUtility__GetArray1ArgDel_1<float_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray1ArgDel_1<float_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  arg1, ByRef<::ArrayW<float_t,::Array<float_t>*>>  data, int32_t  start, int32_t  length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  arg1, ByRef<::ArrayW<float_t,::Array<float_t>*>>  data, int32_t  start, int32_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetArray1ArgDel_1(__HEU_GeneralUtility__GetArray1ArgDel_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetArray1ArgDel_1(__HEU_GeneralUtility__GetArray1ArgDel_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetArray1ArgDel_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray1ArgDel`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(9824))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9824), inst: 98 })
// CS Name: ::HEU_GeneralUtility::GetArray1ArgDel`1<T>*
class CORDL_TYPE __HEU_GeneralUtility__GetArray1ArgDel_1<int32_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray1ArgDel_1<int32_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  arg1, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>  data, int32_t  start, int32_t  length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  arg1, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>  data, int32_t  start, int32_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetArray1ArgDel_1(__HEU_GeneralUtility__GetArray1ArgDel_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetArray1ArgDel_1(__HEU_GeneralUtility__GetArray1ArgDel_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetArray1ArgDel_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray1ArgDel`1
namespace HoudiniEngineUnity {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9824)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9824), inst: 2 })
// CS Name: ::HEU_GeneralUtility::GetArray1ArgDel`1<T>*
class CORDL_TYPE __HEU_GeneralUtility__GetArray1ArgDel_1<T> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray1ArgDel_1<T>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  arg1, ByRef<::ArrayW<T,::Array<T>*>>  data, int32_t  start, int32_t  length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  arg1, ByRef<::ArrayW<T,::Array<T>*>>  data, int32_t  start, int32_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetArray1ArgDel_1(__HEU_GeneralUtility__GetArray1ArgDel_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray1ArgDel_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetArray1ArgDel_1(__HEU_GeneralUtility__GetArray1ArgDel_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetArray1ArgDel_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray2ArgDel`2
namespace HoudiniEngineUnity {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> ARG2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(9825))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9825), inst: 7740 })
// CS Name: ::HEU_GeneralUtility::GetArray2ArgDel`2<ARG2,T>*
class CORDL_TYPE __HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,::HoudiniEngineUnity::HAPI_Transform> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,::HoudiniEngineUnity::HAPI_Transform>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  arg1, ARG2  arg2, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_Transform,::Array<::HoudiniEngineUnity::HAPI_Transform>*>>  data, int32_t  start, int32_t  length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  arg1, ARG2  arg2, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_Transform,::Array<::HoudiniEngineUnity::HAPI_Transform>*>>  data, int32_t  start, int32_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetArray2ArgDel_2(__HEU_GeneralUtility__GetArray2ArgDel_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetArray2ArgDel_2(__HEU_GeneralUtility__GetArray2ArgDel_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetArray2ArgDel_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray2ArgDel`2
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9825)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9825), inst: 7739 })
// CS Name: ::HEU_GeneralUtility::GetArray2ArgDel`2<ARG2,T>*
class CORDL_TYPE __HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,::HoudiniEngineUnity::HAPI_Transform> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,::HoudiniEngineUnity::HAPI_Transform>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  arg1, int32_t  arg2, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_Transform,::Array<::HoudiniEngineUnity::HAPI_Transform>*>>  data, int32_t  start, int32_t  length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  arg1, int32_t  arg2, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_Transform,::Array<::HoudiniEngineUnity::HAPI_Transform>*>>  data, int32_t  start, int32_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetArray2ArgDel_2(__HEU_GeneralUtility__GetArray2ArgDel_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetArray2ArgDel_2(__HEU_GeneralUtility__GetArray2ArgDel_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetArray2ArgDel_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray2ArgDel`2
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(9825))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9825), inst: 7738 })
// CS Name: ::HEU_GeneralUtility::GetArray2ArgDel`2<ARG2,T>*
class CORDL_TYPE __HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,::HoudiniEngineUnity::HAPI_ParmInfo> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,::HoudiniEngineUnity::HAPI_ParmInfo>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  arg1, int32_t  arg2, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo,::Array<::HoudiniEngineUnity::HAPI_ParmInfo>*>>  data, int32_t  start, int32_t  length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  arg1, int32_t  arg2, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo,::Array<::HoudiniEngineUnity::HAPI_ParmInfo>*>>  data, int32_t  start, int32_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetArray2ArgDel_2(__HEU_GeneralUtility__GetArray2ArgDel_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetArray2ArgDel_2(__HEU_GeneralUtility__GetArray2ArgDel_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetArray2ArgDel_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray2ArgDel`2
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9825)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9825), inst: 7737 })
// CS Name: ::HEU_GeneralUtility::GetArray2ArgDel`2<ARG2,T>*
class CORDL_TYPE __HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,::HoudiniEngineUnity::HAPI_ParmChoiceInfo> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,::HoudiniEngineUnity::HAPI_ParmChoiceInfo>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  arg1, int32_t  arg2, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ParmChoiceInfo,::Array<::HoudiniEngineUnity::HAPI_ParmChoiceInfo>*>>  data, int32_t  start, int32_t  length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  arg1, int32_t  arg2, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ParmChoiceInfo,::Array<::HoudiniEngineUnity::HAPI_ParmChoiceInfo>*>>  data, int32_t  start, int32_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetArray2ArgDel_2(__HEU_GeneralUtility__GetArray2ArgDel_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetArray2ArgDel_2(__HEU_GeneralUtility__GetArray2ArgDel_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetArray2ArgDel_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray2ArgDel`2
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9825)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9825), inst: 7736 })
// CS Name: ::HEU_GeneralUtility::GetArray2ArgDel`2<ARG2,T>*
class CORDL_TYPE __HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,::HoudiniEngineUnity::HAPI_ObjectInfo> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,::HoudiniEngineUnity::HAPI_ObjectInfo>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  arg1, int32_t  arg2, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ObjectInfo,::Array<::HoudiniEngineUnity::HAPI_ObjectInfo>*>>  data, int32_t  start, int32_t  length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  arg1, int32_t  arg2, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ObjectInfo,::Array<::HoudiniEngineUnity::HAPI_ObjectInfo>*>>  data, int32_t  start, int32_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetArray2ArgDel_2(__HEU_GeneralUtility__GetArray2ArgDel_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetArray2ArgDel_2(__HEU_GeneralUtility__GetArray2ArgDel_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetArray2ArgDel_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray2ArgDel`2
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(9825))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9825), inst: 7735 })
// CS Name: ::HEU_GeneralUtility::GetArray2ArgDel`2<ARG2,T>*
class CORDL_TYPE __HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,::HoudiniEngineUnity::HAPI_HandleInfo> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,::HoudiniEngineUnity::HAPI_HandleInfo>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  arg1, int32_t  arg2, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_HandleInfo,::Array<::HoudiniEngineUnity::HAPI_HandleInfo>*>>  data, int32_t  start, int32_t  length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  arg1, int32_t  arg2, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_HandleInfo,::Array<::HoudiniEngineUnity::HAPI_HandleInfo>*>>  data, int32_t  start, int32_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetArray2ArgDel_2(__HEU_GeneralUtility__GetArray2ArgDel_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetArray2ArgDel_2(__HEU_GeneralUtility__GetArray2ArgDel_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetArray2ArgDel_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray2ArgDel`2
namespace HoudiniEngineUnity {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9825)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9825), inst: 1610 })
// CS Name: ::HEU_GeneralUtility::GetArray2ArgDel`2<ARG2,T>*
class CORDL_TYPE __HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,T> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,T>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  arg1, int32_t  arg2, ByRef<::ArrayW<T,::Array<T>*>>  data, int32_t  start, int32_t  length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  arg1, int32_t  arg2, ByRef<::ArrayW<T,::Array<T>*>>  data, int32_t  start, int32_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetArray2ArgDel_2(__HEU_GeneralUtility__GetArray2ArgDel_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetArray2ArgDel_2(__HEU_GeneralUtility__GetArray2ArgDel_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetArray2ArgDel_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray2ArgDel`2
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9825)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9825), inst: 534 })
// CS Name: ::HEU_GeneralUtility::GetArray2ArgDel`2<ARG2,T>*
class CORDL_TYPE __HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,float_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,float_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  arg1, int32_t  arg2, ByRef<::ArrayW<float_t,::Array<float_t>*>>  data, int32_t  start, int32_t  length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  arg1, int32_t  arg2, ByRef<::ArrayW<float_t,::Array<float_t>*>>  data, int32_t  start, int32_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetArray2ArgDel_2(__HEU_GeneralUtility__GetArray2ArgDel_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetArray2ArgDel_2(__HEU_GeneralUtility__GetArray2ArgDel_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetArray2ArgDel_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray2ArgDel`2
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9825)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9825), inst: 533 })
// CS Name: ::HEU_GeneralUtility::GetArray2ArgDel`2<ARG2,T>*
class CORDL_TYPE __HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,int32_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray2ArgDel_2<int32_t,int32_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  arg1, int32_t  arg2, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>  data, int32_t  start, int32_t  length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  arg1, int32_t  arg2, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>  data, int32_t  start, int32_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetArray2ArgDel_2(__HEU_GeneralUtility__GetArray2ArgDel_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetArray2ArgDel_2(__HEU_GeneralUtility__GetArray2ArgDel_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetArray2ArgDel_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray2ArgDel`2
namespace HoudiniEngineUnity {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type ARG2,::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9825)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9825), inst: 81 })
// CS Name: ::HEU_GeneralUtility::GetArray2ArgDel`2<ARG2,T>*
class CORDL_TYPE __HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray2ArgDel_2<ARG2,T>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  arg1, ARG2  arg2, ByRef<::ArrayW<T,::Array<T>*>>  data, int32_t  start, int32_t  length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  arg1, ARG2  arg2, ByRef<::ArrayW<T,::Array<T>*>>  data, int32_t  start, int32_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetArray2ArgDel_2(__HEU_GeneralUtility__GetArray2ArgDel_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray2ArgDel_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetArray2ArgDel_2(__HEU_GeneralUtility__GetArray2ArgDel_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetArray2ArgDel_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray3ArgDel`3
namespace HoudiniEngineUnity {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> ARG3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(9826))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9826), inst: 7747 })
// CS Name: ::HEU_GeneralUtility::GetArray3ArgDel`3<ARG3,ARG2,T>*
class CORDL_TYPE __HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,int32_t,::HoudiniEngineUnity::HAPI_Transform> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,int32_t,::HoudiniEngineUnity::HAPI_Transform>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  arg1, int32_t  arg2, ARG3  arg3, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_Transform,::Array<::HoudiniEngineUnity::HAPI_Transform>*>>  data, int32_t  start, int32_t  length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  arg1, int32_t  arg2, ARG3  arg3, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_Transform,::Array<::HoudiniEngineUnity::HAPI_Transform>*>>  data, int32_t  start, int32_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetArray3ArgDel_3(__HEU_GeneralUtility__GetArray3ArgDel_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetArray3ArgDel_3(__HEU_GeneralUtility__GetArray3ArgDel_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetArray3ArgDel_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray3ArgDel`3
namespace HoudiniEngineUnity {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> ARG2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(9826))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9826), inst: 7746 })
// CS Name: ::HEU_GeneralUtility::GetArray3ArgDel`3<ARG3,ARG2,T>*
class CORDL_TYPE __HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,ARG2,::HoudiniEngineUnity::HAPI_Transform> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,ARG2,::HoudiniEngineUnity::HAPI_Transform>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  arg1, ARG2  arg2, int32_t  arg3, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_Transform,::Array<::HoudiniEngineUnity::HAPI_Transform>*>>  data, int32_t  start, int32_t  length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  arg1, ARG2  arg2, int32_t  arg3, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_Transform,::Array<::HoudiniEngineUnity::HAPI_Transform>*>>  data, int32_t  start, int32_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetArray3ArgDel_3(__HEU_GeneralUtility__GetArray3ArgDel_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetArray3ArgDel_3(__HEU_GeneralUtility__GetArray3ArgDel_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetArray3ArgDel_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray3ArgDel`3
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9826)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9826), inst: 7745 })
// CS Name: ::HEU_GeneralUtility::GetArray3ArgDel`3<ARG3,ARG2,T>*
class CORDL_TYPE __HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,float_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,float_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  arg1, int32_t  arg2, int32_t  arg3, ByRef<::ArrayW<float_t,::Array<float_t>*>>  data, int32_t  start, int32_t  length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  arg1, int32_t  arg2, int32_t  arg3, ByRef<::ArrayW<float_t,::Array<float_t>*>>  data, int32_t  start, int32_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetArray3ArgDel_3(__HEU_GeneralUtility__GetArray3ArgDel_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetArray3ArgDel_3(__HEU_GeneralUtility__GetArray3ArgDel_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetArray3ArgDel_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray3ArgDel`3
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(9826))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9826), inst: 7744 })
// CS Name: ::HEU_GeneralUtility::GetArray3ArgDel`3<ARG3,ARG2,T>*
class CORDL_TYPE __HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,::HoudiniEngineUnity::HAPI_ParmInfo> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,::HoudiniEngineUnity::HAPI_ParmInfo>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  arg1, int32_t  arg2, int32_t  arg3, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo,::Array<::HoudiniEngineUnity::HAPI_ParmInfo>*>>  data, int32_t  start, int32_t  length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  arg1, int32_t  arg2, int32_t  arg3, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo,::Array<::HoudiniEngineUnity::HAPI_ParmInfo>*>>  data, int32_t  start, int32_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetArray3ArgDel_3(__HEU_GeneralUtility__GetArray3ArgDel_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetArray3ArgDel_3(__HEU_GeneralUtility__GetArray3ArgDel_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetArray3ArgDel_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray3ArgDel`3
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9826)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9826), inst: 7743 })
// CS Name: ::HEU_GeneralUtility::GetArray3ArgDel`3<ARG3,ARG2,T>*
class CORDL_TYPE __HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,::HoudiniEngineUnity::HAPI_ParmChoiceInfo> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,::HoudiniEngineUnity::HAPI_ParmChoiceInfo>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  arg1, int32_t  arg2, int32_t  arg3, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ParmChoiceInfo,::Array<::HoudiniEngineUnity::HAPI_ParmChoiceInfo>*>>  data, int32_t  start, int32_t  length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  arg1, int32_t  arg2, int32_t  arg3, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ParmChoiceInfo,::Array<::HoudiniEngineUnity::HAPI_ParmChoiceInfo>*>>  data, int32_t  start, int32_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetArray3ArgDel_3(__HEU_GeneralUtility__GetArray3ArgDel_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetArray3ArgDel_3(__HEU_GeneralUtility__GetArray3ArgDel_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetArray3ArgDel_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray3ArgDel`3
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9826)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9826), inst: 7742 })
// CS Name: ::HEU_GeneralUtility::GetArray3ArgDel`3<ARG3,ARG2,T>*
class CORDL_TYPE __HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,::HoudiniEngineUnity::HAPI_ObjectInfo> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,::HoudiniEngineUnity::HAPI_ObjectInfo>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  arg1, int32_t  arg2, int32_t  arg3, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ObjectInfo,::Array<::HoudiniEngineUnity::HAPI_ObjectInfo>*>>  data, int32_t  start, int32_t  length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  arg1, int32_t  arg2, int32_t  arg3, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ObjectInfo,::Array<::HoudiniEngineUnity::HAPI_ObjectInfo>*>>  data, int32_t  start, int32_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetArray3ArgDel_3(__HEU_GeneralUtility__GetArray3ArgDel_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetArray3ArgDel_3(__HEU_GeneralUtility__GetArray3ArgDel_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetArray3ArgDel_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray3ArgDel`3
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(9826))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9826), inst: 7741 })
// CS Name: ::HEU_GeneralUtility::GetArray3ArgDel`3<ARG3,ARG2,T>*
class CORDL_TYPE __HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,::HoudiniEngineUnity::HAPI_HandleInfo> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,::HoudiniEngineUnity::HAPI_HandleInfo>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  arg1, int32_t  arg2, int32_t  arg3, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_HandleInfo,::Array<::HoudiniEngineUnity::HAPI_HandleInfo>*>>  data, int32_t  start, int32_t  length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  arg1, int32_t  arg2, int32_t  arg3, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_HandleInfo,::Array<::HoudiniEngineUnity::HAPI_HandleInfo>*>>  data, int32_t  start, int32_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetArray3ArgDel_3(__HEU_GeneralUtility__GetArray3ArgDel_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetArray3ArgDel_3(__HEU_GeneralUtility__GetArray3ArgDel_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetArray3ArgDel_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray3ArgDel`3
namespace HoudiniEngineUnity {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type ARG2,::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9826)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9826), inst: 6234 })
// CS Name: ::HEU_GeneralUtility::GetArray3ArgDel`3<ARG3,ARG2,T>*
class CORDL_TYPE __HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,ARG2,T> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,ARG2,T>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  arg1, ARG2  arg2, int32_t  arg3, ByRef<::ArrayW<T,::Array<T>*>>  data, int32_t  start, int32_t  length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  arg1, ARG2  arg2, int32_t  arg3, ByRef<::ArrayW<T,::Array<T>*>>  data, int32_t  start, int32_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetArray3ArgDel_3(__HEU_GeneralUtility__GetArray3ArgDel_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetArray3ArgDel_3(__HEU_GeneralUtility__GetArray3ArgDel_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetArray3ArgDel_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray3ArgDel`3
namespace HoudiniEngineUnity {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9826)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9826), inst: 6228 })
// CS Name: ::HEU_GeneralUtility::GetArray3ArgDel`3<ARG3,ARG2,T>*
class CORDL_TYPE __HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,T> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,T>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  arg1, int32_t  arg2, int32_t  arg3, ByRef<::ArrayW<T,::Array<T>*>>  data, int32_t  start, int32_t  length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  arg1, int32_t  arg2, int32_t  arg3, ByRef<::ArrayW<T,::Array<T>*>>  data, int32_t  start, int32_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetArray3ArgDel_3(__HEU_GeneralUtility__GetArray3ArgDel_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetArray3ArgDel_3(__HEU_GeneralUtility__GetArray3ArgDel_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetArray3ArgDel_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray3ArgDel`3
namespace HoudiniEngineUnity {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type ARG3,::il2cpp_utils::il2cpp_reference_type ARG2,::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9826)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9826), inst: 5330 })
// CS Name: ::HEU_GeneralUtility::GetArray3ArgDel`3<ARG3,ARG2,T>*
class CORDL_TYPE __HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray3ArgDel_3<ARG3,ARG2,T>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  arg1, ARG2  arg2, ARG3  arg3, ByRef<::ArrayW<T,::Array<T>*>>  data, int32_t  start, int32_t  length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  arg1, ARG2  arg2, ARG3  arg3, ByRef<::ArrayW<T,::Array<T>*>>  data, int32_t  start, int32_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetArray3ArgDel_3(__HEU_GeneralUtility__GetArray3ArgDel_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetArray3ArgDel_3(__HEU_GeneralUtility__GetArray3ArgDel_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetArray3ArgDel_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetArray3ArgDel`3
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9826)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9826), inst: 5323 })
// CS Name: ::HEU_GeneralUtility::GetArray3ArgDel`3<ARG3,ARG2,T>*
class CORDL_TYPE __HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,int32_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray3ArgDel_3<int32_t,int32_t,int32_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  arg1, int32_t  arg2, int32_t  arg3, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>  data, int32_t  start, int32_t  length) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  arg1, int32_t  arg2, int32_t  arg3, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>  data, int32_t  start, int32_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetArray3ArgDel_3(__HEU_GeneralUtility__GetArray3ArgDel_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetArray3ArgDel_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetArray3ArgDel_3(__HEU_GeneralUtility__GetArray3ArgDel_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetArray3ArgDel_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetAttributeArrayInputFunc`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(9827))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9827), inst: 2707 })
// CS Name: ::HEU_GeneralUtility::GetAttributeArrayInputFunc`1<T>*
class CORDL_TYPE __HEU_GeneralUtility__GetAttributeArrayInputFunc_1<int8_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<int8_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  geoID, int32_t  partID, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  info, ByRef<::ArrayW<int8_t,::Array<int8_t>*>>  items, int32_t  start, int32_t  end) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  geoID, int32_t  partID, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  info, ByRef<::ArrayW<int8_t,::Array<int8_t>*>>  items, int32_t  start, int32_t  end, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  info, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetAttributeArrayInputFunc_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(__HEU_GeneralUtility__GetAttributeArrayInputFunc_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetAttributeArrayInputFunc_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(__HEU_GeneralUtility__GetAttributeArrayInputFunc_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetAttributeArrayInputFunc_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetAttributeArrayInputFunc`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(9827))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9827), inst: 2704 })
// CS Name: ::HEU_GeneralUtility::GetAttributeArrayInputFunc`1<T>*
class CORDL_TYPE __HEU_GeneralUtility__GetAttributeArrayInputFunc_1<double_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<double_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  geoID, int32_t  partID, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  info, ByRef<::ArrayW<double_t,::Array<double_t>*>>  items, int32_t  start, int32_t  end) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  geoID, int32_t  partID, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  info, ByRef<::ArrayW<double_t,::Array<double_t>*>>  items, int32_t  start, int32_t  end, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  info, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetAttributeArrayInputFunc_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(__HEU_GeneralUtility__GetAttributeArrayInputFunc_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetAttributeArrayInputFunc_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(__HEU_GeneralUtility__GetAttributeArrayInputFunc_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetAttributeArrayInputFunc_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetAttributeArrayInputFunc`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9827)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9827), inst: 745 })
// CS Name: ::HEU_GeneralUtility::GetAttributeArrayInputFunc`1<T>*
class CORDL_TYPE __HEU_GeneralUtility__GetAttributeArrayInputFunc_1<int16_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<int16_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  geoID, int32_t  partID, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  info, ByRef<::ArrayW<int16_t,::Array<int16_t>*>>  items, int32_t  start, int32_t  end) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  geoID, int32_t  partID, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  info, ByRef<::ArrayW<int16_t,::Array<int16_t>*>>  items, int32_t  start, int32_t  end, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  info, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetAttributeArrayInputFunc_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(__HEU_GeneralUtility__GetAttributeArrayInputFunc_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetAttributeArrayInputFunc_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(__HEU_GeneralUtility__GetAttributeArrayInputFunc_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetAttributeArrayInputFunc_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetAttributeArrayInputFunc`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(9827))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9827), inst: 391 })
// CS Name: ::HEU_GeneralUtility::GetAttributeArrayInputFunc`1<T>*
class CORDL_TYPE __HEU_GeneralUtility__GetAttributeArrayInputFunc_1<float_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<float_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  geoID, int32_t  partID, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  info, ByRef<::ArrayW<float_t,::Array<float_t>*>>  items, int32_t  start, int32_t  end) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  geoID, int32_t  partID, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  info, ByRef<::ArrayW<float_t,::Array<float_t>*>>  items, int32_t  start, int32_t  end, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  info, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetAttributeArrayInputFunc_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(__HEU_GeneralUtility__GetAttributeArrayInputFunc_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetAttributeArrayInputFunc_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(__HEU_GeneralUtility__GetAttributeArrayInputFunc_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetAttributeArrayInputFunc_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetAttributeArrayInputFunc`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9827)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9827), inst: 333 })
// CS Name: ::HEU_GeneralUtility::GetAttributeArrayInputFunc`1<T>*
class CORDL_TYPE __HEU_GeneralUtility__GetAttributeArrayInputFunc_1<int64_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<int64_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  geoID, int32_t  partID, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  info, ByRef<::ArrayW<int64_t,::Array<int64_t>*>>  items, int32_t  start, int32_t  end) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  geoID, int32_t  partID, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  info, ByRef<::ArrayW<int64_t,::Array<int64_t>*>>  items, int32_t  start, int32_t  end, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  info, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetAttributeArrayInputFunc_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(__HEU_GeneralUtility__GetAttributeArrayInputFunc_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetAttributeArrayInputFunc_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(__HEU_GeneralUtility__GetAttributeArrayInputFunc_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetAttributeArrayInputFunc_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetAttributeArrayInputFunc`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(9827))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9827), inst: 98 })
// CS Name: ::HEU_GeneralUtility::GetAttributeArrayInputFunc`1<T>*
class CORDL_TYPE __HEU_GeneralUtility__GetAttributeArrayInputFunc_1<int32_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<int32_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  geoID, int32_t  partID, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  info, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>  items, int32_t  start, int32_t  end) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  geoID, int32_t  partID, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  info, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>  items, int32_t  start, int32_t  end, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  info, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetAttributeArrayInputFunc_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(__HEU_GeneralUtility__GetAttributeArrayInputFunc_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetAttributeArrayInputFunc_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(__HEU_GeneralUtility__GetAttributeArrayInputFunc_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetAttributeArrayInputFunc_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::GetAttributeArrayInputFunc`1
namespace HoudiniEngineUnity {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(9827))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9827), inst: 2 })
// CS Name: ::HEU_GeneralUtility::GetAttributeArrayInputFunc`1<T>*
class CORDL_TYPE __HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__GetAttributeArrayInputFunc_1<T>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  geoID, int32_t  partID, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  info, ByRef<::ArrayW<T,::Array<T>*>>  items, int32_t  start, int32_t  end) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  geoID, int32_t  partID, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  info, ByRef<::ArrayW<T,::Array<T>*>>  items, int32_t  start, int32_t  end, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  info, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetAttributeArrayInputFunc_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(__HEU_GeneralUtility__GetAttributeArrayInputFunc_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__GetAttributeArrayInputFunc_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__GetAttributeArrayInputFunc_1(__HEU_GeneralUtility__GetAttributeArrayInputFunc_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__GetAttributeArrayInputFunc_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::SetAttributeArrayFunc`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(9828))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9828), inst: 391 })
// CS Name: ::HEU_GeneralUtility::SetAttributeArrayFunc`1<T>*
class CORDL_TYPE __HEU_GeneralUtility__SetAttributeArrayFunc_1<float_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__SetAttributeArrayFunc_1<float_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  geoID, int32_t  partID, ::StringW  attrName, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  attrInfo, ::ArrayW<float_t,::Array<float_t>*>  items, int32_t  start, int32_t  end) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  geoID, int32_t  partID, ::StringW  attrName, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  attrInfo, ::ArrayW<float_t,::Array<float_t>*>  items, int32_t  start, int32_t  end, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  attrInfo, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__SetAttributeArrayFunc_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__SetAttributeArrayFunc_1(__HEU_GeneralUtility__SetAttributeArrayFunc_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__SetAttributeArrayFunc_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__SetAttributeArrayFunc_1(__HEU_GeneralUtility__SetAttributeArrayFunc_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__SetAttributeArrayFunc_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::SetAttributeArrayFunc`1
namespace HoudiniEngineUnity {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(9828))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9828), inst: 98 })
// CS Name: ::HEU_GeneralUtility::SetAttributeArrayFunc`1<T>*
class CORDL_TYPE __HEU_GeneralUtility__SetAttributeArrayFunc_1<int32_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__SetAttributeArrayFunc_1<int32_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  geoID, int32_t  partID, ::StringW  attrName, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  attrInfo, ::ArrayW<int32_t,::Array<int32_t>*>  items, int32_t  start, int32_t  end) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  geoID, int32_t  partID, ::StringW  attrName, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  attrInfo, ::ArrayW<int32_t,::Array<int32_t>*>  items, int32_t  start, int32_t  end, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  attrInfo, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__SetAttributeArrayFunc_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__SetAttributeArrayFunc_1(__HEU_GeneralUtility__SetAttributeArrayFunc_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__SetAttributeArrayFunc_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__SetAttributeArrayFunc_1(__HEU_GeneralUtility__SetAttributeArrayFunc_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__SetAttributeArrayFunc_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::SetAttributeArrayFunc`1
namespace HoudiniEngineUnity {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(9828))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9828), inst: 2 })
// CS Name: ::HEU_GeneralUtility::SetAttributeArrayFunc`1<T>*
class CORDL_TYPE __HEU_GeneralUtility__SetAttributeArrayFunc_1<T> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_GeneralUtility__SetAttributeArrayFunc_1<T>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  geoID, int32_t  partID, ::StringW  attrName, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  attrInfo, ::ArrayW<T,::Array<T>*>  items, int32_t  start, int32_t  end) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  geoID, int32_t  partID, ::StringW  attrName, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  attrInfo, ::ArrayW<T,::Array<T>*>  items, int32_t  start, int32_t  end, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  attrInfo, ::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__SetAttributeArrayFunc_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_GeneralUtility__SetAttributeArrayFunc_1(__HEU_GeneralUtility__SetAttributeArrayFunc_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_GeneralUtility__SetAttributeArrayFunc_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_GeneralUtility__SetAttributeArrayFunc_1(__HEU_GeneralUtility__SetAttributeArrayFunc_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_GeneralUtility__SetAttributeArrayFunc_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray1ArgDel_1, "HoudiniEngineUnity", "HEU_GeneralUtility/GetArray1ArgDel`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray2ArgDel_2, "HoudiniEngineUnity", "HEU_GeneralUtility/GetArray2ArgDel`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HoudiniEngineUnity::__HEU_GeneralUtility__GetArray3ArgDel_3, "HoudiniEngineUnity", "HEU_GeneralUtility/GetArray3ArgDel`3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HoudiniEngineUnity::__HEU_GeneralUtility__GetAttributeArrayInputFunc_1, "HoudiniEngineUnity", "HEU_GeneralUtility/GetAttributeArrayInputFunc`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HoudiniEngineUnity::__HEU_GeneralUtility__SetAttributeArrayFunc_1, "HoudiniEngineUnity", "HEU_GeneralUtility/SetAttributeArrayFunc`1");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_GeneralUtility);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_GeneralUtility*, "HoudiniEngineUnity", "HEU_GeneralUtility");
