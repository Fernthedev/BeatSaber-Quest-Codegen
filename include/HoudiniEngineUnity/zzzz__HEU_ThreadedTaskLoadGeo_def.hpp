#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_ThreadedTask_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_ThreadedTaskLoadGeo)
namespace HoudiniEngineUnity {
struct HAPI_ObjectInfo;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
class HEU_LoadBufferMesh;
}
namespace HoudiniEngineUnity {
struct __HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType;
}
namespace HoudiniEngineUnity {
class __HEU_ThreadedTaskLoadGeo__HEU_LoadCallback;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Color;
}
namespace HoudiniEngineUnity {
struct HEU_GenerateOptions;
}
namespace HoudiniEngineUnity {
class HEU_BaseSync;
}
namespace HoudiniEngineUnity {
class __HEU_ThreadedTaskLoadGeo__HEU_LoadData;
}
namespace HoudiniEngineUnity {
class HEU_LoadBufferVolume;
}
namespace HoudiniEngineUnity {
struct __HEU_ThreadedTaskLoadGeo__LoadType;
}
namespace HoudiniEngineUnity {
class __HEU_ThreadedTaskLoadGeo__HEU_LoadObject;
}
namespace HoudiniEngineUnity {
class HEU_LoadBufferInstancer;
}
namespace HoudiniEngineUnity {
struct HAPI_PartInfo;
}
namespace UnityEngine {
struct Vector2;
}
namespace System {
class Object;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace HoudiniEngineUnity {
class HEU_LoadBufferBase;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
struct __HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
struct __HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus;
}
namespace HoudiniEngineUnity {
struct __HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType;
}
namespace HoudiniEngineUnity {
struct __HEU_ThreadedTaskLoadGeo__LoadType;
}
namespace HoudiniEngineUnity {
class HEU_ThreadedTaskLoadGeo;
}
namespace HoudiniEngineUnity {
class __HEU_ThreadedTaskLoadGeo__HEU_LoadCallback;
}
namespace HoudiniEngineUnity {
class __HEU_ThreadedTaskLoadGeo__HEU_LoadData;
}
namespace HoudiniEngineUnity {
class __HEU_ThreadedTaskLoadGeo__HEU_LoadObject;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus);
MARK_VAL_T(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType);
MARK_VAL_T(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__LoadType);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo);
MARK_REF_PTR_T(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback);
MARK_REF_PTR_T(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData);
MARK_REF_PTR_T(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject);
// Type: ::LoadType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9810))
// CS Name: ::HEU_ThreadedTaskLoadGeo::LoadType
struct CORDL_TYPE __HEU_ThreadedTaskLoadGeo__LoadType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____HEU_ThreadedTaskLoadGeo__LoadType_Unwrapped
enum struct ____HEU_ThreadedTaskLoadGeo__LoadType_Unwrapped : int32_t {
__E_FILE = static_cast<int32_t>(0x0),
__E_NODE = static_cast<int32_t>(0x1),
__E_ASSET = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field FILE value: static_cast<int32_t>(0x0)
static ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__LoadType const FILE;

/// @brief Field NODE value: static_cast<int32_t>(0x1)
static ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__LoadType const NODE;

/// @brief Field ASSET value: static_cast<int32_t>(0x2)
static ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__LoadType const ASSET;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____HEU_ThreadedTaskLoadGeo__LoadType_Unwrapped () const noexcept {
return std::bit_cast<____HEU_ThreadedTaskLoadGeo__LoadType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __HEU_ThreadedTaskLoadGeo__LoadType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __HEU_ThreadedTaskLoadGeo__LoadType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __HEU_ThreadedTaskLoadGeo__LoadType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__LoadType, 0x4>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
// Type: ::LoadStatus
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9811))
// CS Name: ::HEU_ThreadedTaskLoadGeo::HEU_LoadData::LoadStatus
struct CORDL_TYPE __HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus_Unwrapped
enum struct ____HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus_Unwrapped : int32_t {
__E_NONE = static_cast<int32_t>(0x0),
__E_STARTED = static_cast<int32_t>(0x1),
__E_SUCCESS = static_cast<int32_t>(0x2),
__E_ERROR = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field NONE value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus const NONE;

/// @brief Field STARTED value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus const STARTED;

/// @brief Field SUCCESS value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus const SUCCESS;

/// @brief Field ERROR value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus const ERROR;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus_Unwrapped () const noexcept {
return std::bit_cast<____HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::HEU_LoadData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9812))
// CS Name: ::HEU_ThreadedTaskLoadGeo::HEU_LoadData*
class CORDL_TYPE __HEU_ThreadedTaskLoadGeo__HEU_LoadData : public ::System::Object {
public:
// Declarations
using LoadStatus = ::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field _cookNodeID offset 0x10
 __declspec(property(get=__get__cookNodeID, put=__set__cookNodeID)) int32_t  _cookNodeID;

/// @brief Field _loadStatus offset 0x14
 __declspec(property(get=__get__loadStatus, put=__set__loadStatus)) ::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus  _loadStatus;

/// @brief Field _logStr offset 0x18
 __declspec(property(get=__get__logStr, put=__set__logStr)) ::System::Text::StringBuilder*  _logStr;

/// @brief Field _session offset 0x20
 __declspec(property(get=__get__session, put=__set__session)) ::HoudiniEngineUnity::HEU_SessionBase*  _session;

/// @brief Field _loadedObjects offset 0x28
 __declspec(property(get=__get__loadedObjects, put=__set__loadedObjects)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject*>*  _loadedObjects;

/// @brief Field _idBuffersMap offset 0x30
 __declspec(property(get=__get__idBuffersMap, put=__set__idBuffersMap)) ::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_LoadBufferBase*>*  _idBuffersMap;

constexpr void __set__cookNodeID(int32_t  value) ;

constexpr int32_t& __get__cookNodeID() ;

constexpr int32_t const& __get__cookNodeID() const;

constexpr void __set__loadStatus(::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus  value) ;

constexpr ::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus& __get__loadStatus() ;

constexpr ::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus const& __get__loadStatus() const;

constexpr void __set__logStr(::System::Text::StringBuilder*  value) ;

constexpr ::System::Text::StringBuilder* __get__logStr() ;

constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> __get__logStr() const;

constexpr void __set__session(::HoudiniEngineUnity::HEU_SessionBase*  value) ;

constexpr ::HoudiniEngineUnity::HEU_SessionBase* __get__session() ;

constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_SessionBase*> __get__session() const;

constexpr void __set__loadedObjects(::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject*>* __get__loadedObjects() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject*>*> __get__loadedObjects() const;

constexpr void __set__idBuffersMap(::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_LoadBufferBase*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_LoadBufferBase*>* __get__idBuffersMap() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_LoadBufferBase*>*> __get__idBuffersMap() const;

static inline ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData* New_ctor() ;

/// @brief Method .ctor addr 0x21b0e20 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_ThreadedTaskLoadGeo__HEU_LoadData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_ThreadedTaskLoadGeo__HEU_LoadData(__HEU_ThreadedTaskLoadGeo__HEU_LoadData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_ThreadedTaskLoadGeo__HEU_LoadData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_ThreadedTaskLoadGeo__HEU_LoadData(__HEU_ThreadedTaskLoadGeo__HEU_LoadData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_ThreadedTaskLoadGeo__HEU_LoadData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData, 0x38>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
// Type: ::HEU_LoadObject
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9813))
// CS Name: ::HEU_ThreadedTaskLoadGeo::HEU_LoadObject*
class CORDL_TYPE __HEU_ThreadedTaskLoadGeo__HEU_LoadObject : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _objectNodeID offset 0x10
 __declspec(property(get=__get__objectNodeID, put=__set__objectNodeID)) int32_t  _objectNodeID;

/// @brief Field _displayNodeID offset 0x14
 __declspec(property(get=__get__displayNodeID, put=__set__displayNodeID)) int32_t  _displayNodeID;

/// @brief Field _terrainBuffers offset 0x18
 __declspec(property(get=__get__terrainBuffers, put=__set__terrainBuffers)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>*  _terrainBuffers;

/// @brief Field _meshBuffers offset 0x20
 __declspec(property(get=__get__meshBuffers, put=__set__meshBuffers)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh*>*  _meshBuffers;

/// @brief Field _instancerBuffers offset 0x28
 __declspec(property(get=__get__instancerBuffers, put=__set__instancerBuffers)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>*  _instancerBuffers;

constexpr void __set__objectNodeID(int32_t  value) ;

constexpr int32_t& __get__objectNodeID() ;

constexpr int32_t const& __get__objectNodeID() const;

constexpr void __set__displayNodeID(int32_t  value) ;

constexpr int32_t& __get__displayNodeID() ;

constexpr int32_t const& __get__displayNodeID() const;

constexpr void __set__terrainBuffers(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>* __get__terrainBuffers() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>*> __get__terrainBuffers() const;

constexpr void __set__meshBuffers(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh*>* __get__meshBuffers() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh*>*> __get__meshBuffers() const;

constexpr void __set__instancerBuffers(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>* __get__instancerBuffers() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>*> __get__instancerBuffers() const;

static inline ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject* New_ctor() ;

/// @brief Method .ctor addr 0x21b0e28 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_ThreadedTaskLoadGeo__HEU_LoadObject", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_ThreadedTaskLoadGeo__HEU_LoadObject(__HEU_ThreadedTaskLoadGeo__HEU_LoadObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_ThreadedTaskLoadGeo__HEU_LoadObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_ThreadedTaskLoadGeo__HEU_LoadObject(__HEU_ThreadedTaskLoadGeo__HEU_LoadObject const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_ThreadedTaskLoadGeo__HEU_LoadObject()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject, 0x30>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
// Type: ::HEU_LoadCallbackType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9814))
// CS Name: ::HEU_ThreadedTaskLoadGeo::HEU_LoadCallbackType
struct CORDL_TYPE __HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType_Unwrapped
enum struct ____HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType_Unwrapped : int32_t {
__E_PRECOOK = static_cast<int32_t>(0x0),
__E_POSTCOOK = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field PRECOOK value: static_cast<int32_t>(0x0)
static ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType const PRECOOK;

/// @brief Field POSTCOOK value: static_cast<int32_t>(0x1)
static ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType const POSTCOOK;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType_Unwrapped () const noexcept {
return std::bit_cast<____HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType, 0x4>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
// Type: ::HEU_LoadCallback
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9815))
// CS Name: ::HEU_ThreadedTaskLoadGeo::HEU_LoadCallback*
class CORDL_TYPE __HEU_ThreadedTaskLoadGeo__HEU_LoadCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x21b0e30 size 0x130 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x21b0f60 size 0x14 virtual true final false
inline void Invoke(::HoudiniEngineUnity::HEU_SessionBase*  session, ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData*  loadData, ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType  callbackType) ;

/// @brief Method BeginInvoke addr 0x21b0f74 size 0x98 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::HoudiniEngineUnity::HEU_SessionBase*  session, ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData*  loadData, ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType  callbackType, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x21b100c size 0xc virtual true final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback(__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback(__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_ThreadedTaskLoadGeo__HEU_LoadCallback()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback, 0x80>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9809))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9816))
// CS Name: ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*
class CORDL_TYPE HEU_ThreadedTaskLoadGeo : public ::HoudiniEngineUnity::HEU_ThreadedTask {
public:
// Declarations
using HEU_LoadCallback = ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback;

using HEU_LoadCallbackType = ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType;

using HEU_LoadObject = ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject;

using HEU_LoadData = ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData;

using LoadType = ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__LoadType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::HoudiniEngineUnity::HEU_ThreadedTask)]{};

/// @brief Field _ownerSync offset 0x38
 __declspec(property(get=__get__ownerSync, put=__set__ownerSync)) ::HoudiniEngineUnity::HEU_BaseSync*  _ownerSync;

/// @brief Field _session offset 0x40
 __declspec(property(get=__get__session, put=__set__session)) ::HoudiniEngineUnity::HEU_SessionBase*  _session;

/// @brief Field _generateOptions offset 0x48
 __declspec(property(get=__get__generateOptions, put=__set__generateOptions)) ::HoudiniEngineUnity::HEU_GenerateOptions  _generateOptions;

/// @brief Field _loadType offset 0x50
 __declspec(property(get=__get__loadType, put=__set__loadType)) ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__LoadType  _loadType;

/// @brief Field _filePath offset 0x58
 __declspec(property(get=__get__filePath, put=__set__filePath)) ::StringW  _filePath;

/// @brief Field _loadData offset 0x60
 __declspec(property(get=__get__loadData, put=__set__loadData)) ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData*  _loadData;

/// @brief Field _loadCallback offset 0x68
 __declspec(property(get=__get__loadCallback, put=__set__loadCallback)) ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback*  _loadCallback;

constexpr void __set__ownerSync(::HoudiniEngineUnity::HEU_BaseSync*  value) ;

constexpr ::HoudiniEngineUnity::HEU_BaseSync* __get__ownerSync() ;

constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_BaseSync*> __get__ownerSync() const;

constexpr void __set__session(::HoudiniEngineUnity::HEU_SessionBase*  value) ;

constexpr ::HoudiniEngineUnity::HEU_SessionBase* __get__session() ;

constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_SessionBase*> __get__session() const;

constexpr void __set__generateOptions(::HoudiniEngineUnity::HEU_GenerateOptions  value) ;

constexpr ::HoudiniEngineUnity::HEU_GenerateOptions& __get__generateOptions() ;

constexpr ::HoudiniEngineUnity::HEU_GenerateOptions const& __get__generateOptions() const;

constexpr void __set__loadType(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__LoadType  value) ;

constexpr ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__LoadType& __get__loadType() ;

constexpr ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__LoadType const& __get__loadType() const;

constexpr void __set__filePath(::StringW  value) ;

constexpr ::StringW& __get__filePath() ;

constexpr ::StringW const& __get__filePath() const;

constexpr void __set__loadData(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData*  value) ;

constexpr ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData* __get__loadData() ;

constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData*> __get__loadData() const;

constexpr void __set__loadCallback(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback*  value) ;

constexpr ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback* __get__loadCallback() ;

constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback*> __get__loadCallback() const;

/// @brief Method SetupLoad addr 0x21ac590 size 0xe8 virtual false final false
inline void SetupLoad(::HoudiniEngineUnity::HEU_SessionBase*  session, ::HoudiniEngineUnity::HEU_BaseSync*  ownerSync, ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__LoadType  loadType, int32_t  cookNodeID, ::StringW  name, ::StringW  filePath) ;

/// @brief Method SetupLoadNode addr 0x21aa1b4 size 0x14 virtual false final false
inline void SetupLoadNode(::HoudiniEngineUnity::HEU_SessionBase*  session, ::HoudiniEngineUnity::HEU_BaseSync*  ownerSync, int32_t  cookNodeID, ::StringW  name) ;

/// @brief Method SetupLoadFile addr 0x21aa000 size 0x14 virtual false final false
inline void SetupLoadFile(::HoudiniEngineUnity::HEU_SessionBase*  session, ::HoudiniEngineUnity::HEU_BaseSync*  ownerSync, int32_t  cookNodeID, ::StringW  filePath) ;

/// @brief Method SetupLoadAsset addr 0x21a55fc size 0x14 virtual false final false
inline void SetupLoadAsset(::HoudiniEngineUnity::HEU_SessionBase*  session, ::HoudiniEngineUnity::HEU_BaseSync*  ownerSync, ::StringW  assetPath, ::StringW  name) ;

/// @brief Method SetLoadCallback addr 0x21ac678 size 0x8 virtual false final false
inline void SetLoadCallback(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback*  loadCallback) ;

/// @brief Method DoWork addr 0x21ac680 size 0x338 virtual true final false
inline void DoWork() ;

/// @brief Method CookNode addr 0x21acad0 size 0x190 virtual true final false
inline bool CookNode(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  cookNodeID) ;

/// @brief Method LoadObjectBuffers addr 0x21acc6c size 0x1cc virtual true final false
inline bool LoadObjectBuffers(::HoudiniEngineUnity::HEU_SessionBase*  session, ByRef<::HoudiniEngineUnity::HAPI_ObjectInfo>  objectInfo) ;

/// @brief Method LoadNodeBuffer addr 0x21ace38 size 0x2a0 virtual true final false
inline bool LoadNodeBuffer(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  nodeID, ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject*  loadObject) ;

/// @brief Method BuildBufferIDsMap addr 0x21af33c size 0x4c8 virtual true final false
inline void BuildBufferIDsMap(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData*  loadData) ;

/// @brief Method DoFileLoad addr 0x21af804 size 0x20c virtual true final false
inline bool DoFileLoad() ;

/// @brief Method DoAssetLoad addr 0x21afba4 size 0x32c virtual true final false
inline bool DoAssetLoad() ;

/// @brief Method QueryParts addr 0x21ad0d8 size 0x484 virtual false final false
inline bool QueryParts(int32_t  nodeID, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*>  meshParts, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*>  volumeParts, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*>  instancerParts, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*>  curveParts, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*>  scatterInstancerParts) ;

/// @brief Method OnComplete addr 0x21afed0 size 0x90 virtual true final false
inline void OnComplete() ;

/// @brief Method OnStopped addr 0x21aff60 size 0x84 virtual true final false
inline void OnStopped() ;

/// @brief Method CleanUp addr 0x21affe4 size 0x8 virtual true final false
inline void CleanUp() ;

/// @brief Method CreateLogString addr 0x21affec size 0xa4 virtual false final false
inline ::StringW CreateLogString(::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus  status, ::StringW  logStr) ;

/// @brief Method AppendLog addr 0x21ac9b8 size 0x118 virtual false final false
inline void AppendLog(::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus  status, ::StringW  logStr) ;

/// @brief Method SetLog addr 0x21b0090 size 0x150 virtual false final false
inline void SetLog(::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus  status, ::StringW  logStr) ;

/// @brief Method CreateFileNode addr 0x21afa10 size 0x8c virtual false final false
inline bool CreateFileNode(ByRef<int32_t>  fileNodeID) ;

/// @brief Method GetCookNodeID addr 0x21b01e0 size 0x1c virtual true final false
inline int32_t GetCookNodeID() ;

/// @brief Method GetDisplayNodeID addr 0x21afa9c size 0x50 virtual false final false
inline int32_t GetDisplayNodeID(int32_t  objNodeID) ;

/// @brief Method SetFileParm addr 0x21afaec size 0xb8 virtual false final false
inline bool SetFileParm(int32_t  fileNodeID, ::StringW  filePath) ;

/// @brief Method Sleep addr 0x21acc60 size 0xc virtual false final false
inline void Sleep() ;

/// @brief Method GenerateTerrainBuffers addr 0x21ada70 size 0x14a0 virtual false final false
inline bool GenerateTerrainBuffers(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  nodeID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*  volumeParts, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*  scatterInstancerParts, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>*>  volumeBuffers) ;

/// @brief Method LoadStringFromAttribute addr 0x21b01fc size 0x84 virtual false final false
inline void LoadStringFromAttribute(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  geoID, int32_t  partID, ::StringW  attrName, ByRef<::StringW>  strValue) ;

/// @brief Method LoadFloatFromAttribute addr 0x21b0280 size 0x128 virtual false final false
inline void LoadFloatFromAttribute(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  geoID, int32_t  partID, ::StringW  attrName, ByRef<float_t>  floatValue) ;

/// @brief Method LoadLayerColorFromAttribute addr 0x21b03a8 size 0x160 virtual false final false
inline void LoadLayerColorFromAttribute(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  geoID, int32_t  partID, ::StringW  attrName, ByRef<::UnityEngine::Color>  colorValue) ;

/// @brief Method LoadLayerVector2FromAttribute addr 0x21b0508 size 0x138 virtual false final false
inline void LoadLayerVector2FromAttribute(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  geoID, int32_t  partID, ::StringW  attrName, ByRef<::UnityEngine::Vector2>  vectorValue) ;

/// @brief Method GenerateMeshBuffers addr 0x21ad55c size 0x514 virtual false final false
inline bool GenerateMeshBuffers(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  nodeID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*  meshParts, bool  bSplitPoints, bool  bUseLODGroups, bool  bGenerateUVs, bool  bGenerateTangents, bool  bGenerateNormals, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh*>*>  meshBuffers) ;

/// @brief Method GenerateInstancerBuffers addr 0x21aef10 size 0x42c virtual false final false
inline bool GenerateInstancerBuffers(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  nodeID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HAPI_PartInfo>*  instancerParts, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>*>  instancerBuffers) ;

/// @brief Method GeneratePartsInstancerBuffer addr 0x21b07a4 size 0x2c0 virtual false final false
inline ::HoudiniEngineUnity::HEU_LoadBufferInstancer* GeneratePartsInstancerBuffer(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  geoID, int32_t  partID, ::StringW  partName, ::HoudiniEngineUnity::HAPI_PartInfo  partInfo) ;

/// @brief Method GeneratePointAttributeInstancerBuffer addr 0x21b0a64 size 0x3bc virtual false final false
inline ::HoudiniEngineUnity::HEU_LoadBufferInstancer* GeneratePointAttributeInstancerBuffer(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  geoID, int32_t  partID, ::StringW  partName, ::HoudiniEngineUnity::HAPI_PartInfo  partInfo) ;

/// @brief Method GetLoadBufferVolumeFromTileIndex addr 0x21b0640 size 0x164 virtual false final false
static inline ::HoudiniEngineUnity::HEU_LoadBufferVolume* GetLoadBufferVolumeFromTileIndex(int32_t  tileIndex, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>*  buffers) ;

static inline ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo* New_ctor() ;

/// @brief Method .ctor addr 0x21a5560 size 0x4 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ThreadedTaskLoadGeo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_ThreadedTaskLoadGeo(HEU_ThreadedTaskLoadGeo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ThreadedTaskLoadGeo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_ThreadedTaskLoadGeo(HEU_ThreadedTaskLoadGeo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_ThreadedTaskLoadGeo()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo, 0x70>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HEU_ThreadedTaskLoadGeo__HEU_LoadData__LoadStatus, "HoudiniEngineUnity", "HEU_ThreadedTaskLoadGeo/HEU_LoadData/LoadStatus");
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallbackType, "HoudiniEngineUnity", "HEU_ThreadedTaskLoadGeo/HEU_LoadCallbackType");
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__LoadType, "HoudiniEngineUnity", "HEU_ThreadedTaskLoadGeo/LoadType");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*, "HoudiniEngineUnity", "HEU_ThreadedTaskLoadGeo");
NEED_NO_BOX(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadCallback*, "HoudiniEngineUnity", "HEU_ThreadedTaskLoadGeo/HEU_LoadCallback");
NEED_NO_BOX(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData*, "HoudiniEngineUnity", "HEU_ThreadedTaskLoadGeo/HEU_LoadData");
NEED_NO_BOX(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadObject*, "HoudiniEngineUnity", "HEU_ThreadedTaskLoadGeo/HEU_LoadObject");
