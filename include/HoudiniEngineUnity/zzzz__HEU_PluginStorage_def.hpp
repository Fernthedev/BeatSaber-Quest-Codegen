#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_PluginStorage)
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
class HEU_SessionData;
}
namespace HoudiniEngineUnity {
struct __HEU_PluginStorage__DataType;
}
namespace HoudiniEngineUnity {
class __HEU_PluginStorage__StoreData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
template<typename T>
class __HEU_PluginStorage__StoreDataArray_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
template<typename T>
class __HEU_PluginStorage__StoreDataArray_1;
}
namespace HoudiniEngineUnity {
struct __HEU_PluginStorage__DataType;
}
namespace HoudiniEngineUnity {
class HEU_PluginStorage;
}
namespace HoudiniEngineUnity {
class __HEU_PluginStorage__StoreData;
}
namespace HoudiniEngineUnity {
template<::il2cpp_utils::il2cpp_reference_type T>
class __HEU_PluginStorage__StoreDataArray_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::HoudiniEngineUnity::__HEU_PluginStorage__StoreDataArray_1);
MARK_VAL_T(::HoudiniEngineUnity::__HEU_PluginStorage__DataType);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_PluginStorage);
MARK_REF_PTR_T(::HoudiniEngineUnity::__HEU_PluginStorage__StoreData);
// Type: ::DataType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9677))
// CS Name: ::HEU_PluginStorage::DataType
struct CORDL_TYPE __HEU_PluginStorage__DataType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____HEU_PluginStorage__DataType_Unwrapped
enum struct ____HEU_PluginStorage__DataType_Unwrapped : int32_t {
__E_BOOL = static_cast<int32_t>(0x0),
__E_INT = static_cast<int32_t>(0x1),
__E_LONG = static_cast<int32_t>(0x2),
__E_FLOAT = static_cast<int32_t>(0x3),
__E_STRING = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field BOOL value: static_cast<int32_t>(0x0)
static ::HoudiniEngineUnity::__HEU_PluginStorage__DataType const BOOL;

/// @brief Field INT value: static_cast<int32_t>(0x1)
static ::HoudiniEngineUnity::__HEU_PluginStorage__DataType const INT;

/// @brief Field LONG value: static_cast<int32_t>(0x2)
static ::HoudiniEngineUnity::__HEU_PluginStorage__DataType const LONG;

/// @brief Field FLOAT value: static_cast<int32_t>(0x3)
static ::HoudiniEngineUnity::__HEU_PluginStorage__DataType const FLOAT;

/// @brief Field STRING value: static_cast<int32_t>(0x4)
static ::HoudiniEngineUnity::__HEU_PluginStorage__DataType const STRING;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____HEU_PluginStorage__DataType_Unwrapped () const noexcept {
return std::bit_cast<____HEU_PluginStorage__DataType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __HEU_PluginStorage__DataType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __HEU_PluginStorage__DataType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __HEU_PluginStorage__DataType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_PluginStorage__DataType, 0x4>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
// Type: ::StoreData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9678))
// CS Name: ::HEU_PluginStorage::StoreData*
class CORDL_TYPE __HEU_PluginStorage__StoreData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _type offset 0x10
 __declspec(property(get=__get__type, put=__set__type)) ::HoudiniEngineUnity::__HEU_PluginStorage__DataType  _type;

/// @brief Field _valueStr offset 0x18
 __declspec(property(get=__get__valueStr, put=__set__valueStr)) ::StringW  _valueStr;

constexpr void __set__type(::HoudiniEngineUnity::__HEU_PluginStorage__DataType  value) ;

constexpr ::HoudiniEngineUnity::__HEU_PluginStorage__DataType& __get__type() ;

constexpr ::HoudiniEngineUnity::__HEU_PluginStorage__DataType const& __get__type() const;

constexpr void __set__valueStr(::StringW  value) ;

constexpr ::StringW& __get__valueStr() ;

constexpr ::StringW const& __get__valueStr() const;

static inline ::HoudiniEngineUnity::__HEU_PluginStorage__StoreData* New_ctor() ;

/// @brief Method .ctor addr 0x218f270 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_PluginStorage__StoreData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_PluginStorage__StoreData(__HEU_PluginStorage__StoreData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_PluginStorage__StoreData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_PluginStorage__StoreData(__HEU_PluginStorage__StoreData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_PluginStorage__StoreData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_PluginStorage__StoreData, 0x20>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
// Type: ::StoreDataArray`1
// Type: HoudiniEngineUnity::HEU_PluginStorage
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9680))
// CS Name: ::HoudiniEngineUnity::HEU_PluginStorage*
class CORDL_TYPE HEU_PluginStorage : public ::System::Object {
public:
// Declarations
template<typename T>
using StoreDataArray_1 = ::HoudiniEngineUnity::__HEU_PluginStorage__StoreDataArray_1<T>;

using StoreData = ::HoudiniEngineUnity::__HEU_PluginStorage__StoreData;

using DataType = ::HoudiniEngineUnity::__HEU_PluginStorage__DataType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field PluginSettingsLine1 offset 0x0
static constexpr ::ConstString  PluginSettingsLine1{u"Houdini Engine for Unity Plugin Settings"};

/// @brief Field PluginSettingsLine2 offset 0x0
static constexpr ::ConstString  PluginSettingsLine2{u"Version="};

/// @brief Field PluginSettingsVersion offset 0x0
static constexpr ::ConstString  PluginSettingsVersion{u"1.0"};

/// @brief Field _dataMap offset 0x10
 __declspec(property(get=__get__dataMap, put=__set__dataMap)) ::System::Collections::Generic::Dictionary_2<::StringW,::HoudiniEngineUnity::__HEU_PluginStorage__StoreData*>*  _dataMap;

/// @brief Field _envPathMap offset 0x18
 __declspec(property(get=__get__envPathMap, put=__set__envPathMap)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _envPathMap;

/// @brief Field _requiresSave offset 0x20
 __declspec(property(get=__get__requiresSave, put=__set__requiresSave)) bool  _requiresSave;

 __declspec(property(get=get_RequiresSave)) bool  RequiresSave;

constexpr void __set__dataMap(::System::Collections::Generic::Dictionary_2<::StringW,::HoudiniEngineUnity::__HEU_PluginStorage__StoreData*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::HoudiniEngineUnity::__HEU_PluginStorage__StoreData*>* __get__dataMap() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::HoudiniEngineUnity::__HEU_PluginStorage__StoreData*>*> __get__dataMap() const;

constexpr void __set__envPathMap(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* __get__envPathMap() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*> __get__envPathMap() const;

constexpr void __set__requiresSave(bool  value) ;

constexpr bool& __get__requiresSave() ;

constexpr bool const& __get__requiresSave() const;

static inline void setStaticF__instance(::HoudiniEngineUnity::HEU_PluginStorage*  value) ;

static inline ::HoudiniEngineUnity::HEU_PluginStorage* getStaticF__instance() ;

/// @brief Method GetEnvironmentPathMap addr 0x218e6dc size 0x8 virtual false final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* GetEnvironmentPathMap() ;

/// @brief Method get_RequiresSave addr 0x218e6e4 size 0x8 virtual false final false
inline bool get_RequiresSave() ;

/// @brief Method get_Instance addr 0x2185b3c size 0x5c virtual false final false
static inline ::HoudiniEngineUnity::HEU_PluginStorage* get_Instance() ;

/// @brief Method InstantiateAndLoad addr 0x218e6ec size 0xd4 virtual false final false
static inline void InstantiateAndLoad() ;

/// @brief Method SetCurrentCulture addr 0x218dc48 size 0x10c virtual false final false
static inline void SetCurrentCulture(bool  useInvariant) ;

/// @brief Method GetJSONArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline ::ArrayW<T,::Array<T>*> GetJSONArray(::StringW  jsonArray) ;

/// @brief Method Set addr 0x218adb0 size 0xcc virtual false final false
inline void Set(::StringW  key, bool  value) ;

/// @brief Method Set addr 0x218c4d4 size 0xd0 virtual false final false
inline void Set(::StringW  key, int32_t  value) ;

/// @brief Method Set addr 0x218f27c size 0xd0 virtual false final false
inline void Set(::StringW  key, int64_t  value) ;

/// @brief Method Set addr 0x218bb48 size 0xd8 virtual false final false
inline void Set(::StringW  key, float_t  value) ;

/// @brief Method Set addr 0x218a794 size 0xa0 virtual false final false
inline void Set(::StringW  key, ::StringW  value) ;

/// @brief Method Set addr 0x218ce2c size 0x154 virtual false final false
inline void Set(::StringW  key, ::System::Collections::Generic::List_1<::StringW>*  values, char16_t  delimiter) ;

/// @brief Method Get addr 0x218ac68 size 0xf4 virtual false final false
inline bool Get(::StringW  key, ByRef<bool>  value, bool  defaultValue) ;

/// @brief Method Get addr 0x218c38c size 0xf4 virtual false final false
inline bool Get(::StringW  key, ByRef<int32_t>  value, int32_t  defaultValue) ;

/// @brief Method Get addr 0x218f34c size 0xf4 virtual false final false
inline bool Get(::StringW  key, ByRef<int64_t>  value, int64_t  defaultValue) ;

/// @brief Method Get addr 0x218b9c0 size 0x134 virtual false final false
inline bool Get(::StringW  key, ByRef<float_t>  value, float_t  defaultValue) ;

/// @brief Method Get addr 0x218a674 size 0xc0 virtual false final false
inline bool Get(::StringW  key, ByRef<::StringW>  value, ::StringW  defaultValue) ;

/// @brief Method Get addr 0x218cc08 size 0x1cc virtual false final false
inline bool Get(::StringW  key, ByRef<::System::Collections::Generic::List_1<::StringW>*>  values, char16_t  delimiter) ;

/// @brief Method MarkDirtyForSave addr 0x218f278 size 0x4 virtual false final false
inline void MarkDirtyForSave() ;

/// @brief Method SaveIfRequired addr 0x218f440 size 0x60 virtual false final false
static inline void SaveIfRequired() ;

/// @brief Method SettingsFilePath addr 0x218f968 size 0xd4 virtual false final false
static inline ::StringW SettingsFilePath() ;

/// @brief Method SavePluginData addr 0x218f4a0 size 0x4c8 virtual false final false
inline bool SavePluginData() ;

/// @brief Method LoadPluginData addr 0x218e83c size 0xa34 virtual false final false
inline bool LoadPluginData() ;

/// @brief Method ReadFromEditorPrefs addr 0x218fa3c size 0x8 virtual false final false
inline bool ReadFromEditorPrefs() ;

/// @brief Method ClearPluginData addr 0x218fa44 size 0xb0 virtual false final false
static inline void ClearPluginData() ;

/// @brief Method LoadFromSavedFile addr 0x218faf4 size 0x58 virtual false final false
static inline void LoadFromSavedFile() ;

/// @brief Method SessionFilePath addr 0x218fb4c size 0xd4 virtual false final false
static inline ::StringW SessionFilePath() ;

/// @brief Method SaveAllSessionData addr 0x218fc20 size 0x4 virtual false final false
static inline void SaveAllSessionData(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_SessionBase*>*  allSessions) ;

/// @brief Method LoadAllSessionData addr 0x218fc24 size 0x70 virtual false final false
static inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_SessionData*>* LoadAllSessionData() ;

/// @brief Method DeleteAllSavedSessionData addr 0x218fc94 size 0x4 virtual false final false
static inline void DeleteAllSavedSessionData() ;

/// @brief Method LoadAssetEnvironmentPaths addr 0x218a834 size 0x3d0 virtual false final false
inline void LoadAssetEnvironmentPaths() ;

/// @brief Method ConvertRealPathToEnvKeyedPath addr 0x218fc98 size 0x1e8 virtual false final false
inline ::StringW ConvertRealPathToEnvKeyedPath(::StringW  inPath) ;

/// @brief Method ConvertEnvKeyedPathToReal addr 0x2185b98 size 0x230 virtual false final false
inline ::StringW ConvertEnvKeyedPathToReal(::StringW  inPath) ;

static inline ::HoudiniEngineUnity::HEU_PluginStorage* New_ctor() ;

/// @brief Method .ctor addr 0x218e7c0 size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_PluginStorage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_PluginStorage(HEU_PluginStorage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_PluginStorage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_PluginStorage(HEU_PluginStorage const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_PluginStorage()  = default;
public:


// Fields

// Static field _instance


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_PluginStorage, 0x28>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
// Type: ::StoreDataArray`1
namespace HoudiniEngineUnity {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9679)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9679), inst: 2 })
// CS Name: ::HEU_PluginStorage::StoreDataArray`1<T>*
class CORDL_TYPE __HEU_PluginStorage__StoreDataArray_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _array offset 0x10
 __declspec(property(get=__get__array, put=__set__array)) ::ArrayW<T,::Array<T>*>  _array;

constexpr void __set__array(::ArrayW<T,::Array<T>*>  value) ;

constexpr ::ArrayW<T,::Array<T>*>& __get__array() ;

constexpr ::ArrayW<T,::Array<T>*> const& __get__array() const;

static inline ::HoudiniEngineUnity::__HEU_PluginStorage__StoreDataArray_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_PluginStorage__StoreDataArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HEU_PluginStorage__StoreDataArray_1(__HEU_PluginStorage__StoreDataArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HEU_PluginStorage__StoreDataArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HEU_PluginStorage__StoreDataArray_1(__HEU_PluginStorage__StoreDataArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HEU_PluginStorage__StoreDataArray_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HoudiniEngineUnity::__HEU_PluginStorage__StoreDataArray_1, "HoudiniEngineUnity", "HEU_PluginStorage/StoreDataArray`1");
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_PluginStorage__DataType, "HoudiniEngineUnity", "HEU_PluginStorage/DataType");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_PluginStorage);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_PluginStorage*, "HoudiniEngineUnity", "HEU_PluginStorage");
NEED_NO_BOX(::HoudiniEngineUnity::__HEU_PluginStorage__StoreData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_PluginStorage__StoreData*, "HoudiniEngineUnity", "HEU_PluginStorage/StoreData");
