#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_AttributeData)
namespace HoudiniEngineUnity {
struct HAPI_AttributeInfo;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace HoudiniEngineUnity {
struct __HEU_AttributeData__AttributeState;
}
namespace HoudiniEngineUnity {
struct __HEU_AttributeData__AttributeType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct __HEU_AttributeData__AttributeState;
}
namespace HoudiniEngineUnity {
struct __HEU_AttributeData__AttributeType;
}
namespace HoudiniEngineUnity {
class HEU_AttributeData;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::__HEU_AttributeData__AttributeState);
MARK_VAL_T(::HoudiniEngineUnity::__HEU_AttributeData__AttributeType);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_AttributeData);
// Type: ::AttributeType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9661))
// CS Name: ::HEU_AttributeData::AttributeType
struct CORDL_TYPE __HEU_AttributeData__AttributeType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____HEU_AttributeData__AttributeType_Unwrapped
enum struct ____HEU_AttributeData__AttributeType_Unwrapped : int32_t {
__E_UNDEFINED = static_cast<int32_t>(0xffffffff),
__E_BOOL = static_cast<int32_t>(0x0),
__E_INT = static_cast<int32_t>(0x1),
__E_FLOAT = static_cast<int32_t>(0x2),
__E_STRING = static_cast<int32_t>(0x3),
__E_MAX = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field UNDEFINED value: static_cast<int32_t>(0xffffffff)
static ::HoudiniEngineUnity::__HEU_AttributeData__AttributeType const UNDEFINED;

/// @brief Field BOOL value: static_cast<int32_t>(0x0)
static ::HoudiniEngineUnity::__HEU_AttributeData__AttributeType const BOOL;

/// @brief Field INT value: static_cast<int32_t>(0x1)
static ::HoudiniEngineUnity::__HEU_AttributeData__AttributeType const INT;

/// @brief Field FLOAT value: static_cast<int32_t>(0x2)
static ::HoudiniEngineUnity::__HEU_AttributeData__AttributeType const FLOAT;

/// @brief Field STRING value: static_cast<int32_t>(0x3)
static ::HoudiniEngineUnity::__HEU_AttributeData__AttributeType const STRING;

/// @brief Field MAX value: static_cast<int32_t>(0x4)
static ::HoudiniEngineUnity::__HEU_AttributeData__AttributeType const MAX;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____HEU_AttributeData__AttributeType_Unwrapped () const noexcept {
return std::bit_cast<____HEU_AttributeData__AttributeType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __HEU_AttributeData__AttributeType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __HEU_AttributeData__AttributeType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __HEU_AttributeData__AttributeType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_AttributeData__AttributeType, 0x4>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
// Type: ::AttributeState
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9662))
// CS Name: ::HEU_AttributeData::AttributeState
struct CORDL_TYPE __HEU_AttributeData__AttributeState : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____HEU_AttributeData__AttributeState_Unwrapped
enum struct ____HEU_AttributeData__AttributeState_Unwrapped : int32_t {
__E_INVALID = static_cast<int32_t>(0x0),
__E_SYNCED = static_cast<int32_t>(0x1),
__E_LOCAL_DIRTY = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field INVALID value: static_cast<int32_t>(0x0)
static ::HoudiniEngineUnity::__HEU_AttributeData__AttributeState const INVALID;

/// @brief Field SYNCED value: static_cast<int32_t>(0x1)
static ::HoudiniEngineUnity::__HEU_AttributeData__AttributeState const SYNCED;

/// @brief Field LOCAL_DIRTY value: static_cast<int32_t>(0x2)
static ::HoudiniEngineUnity::__HEU_AttributeData__AttributeState const LOCAL_DIRTY;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____HEU_AttributeData__AttributeState_Unwrapped () const noexcept {
return std::bit_cast<____HEU_AttributeData__AttributeState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __HEU_AttributeData__AttributeState(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __HEU_AttributeData__AttributeState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __HEU_AttributeData__AttributeState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_AttributeData__AttributeState, 0x4>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_AttributeData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9663))
// CS Name: ::HoudiniEngineUnity::HEU_AttributeData*
class CORDL_TYPE HEU_AttributeData : public ::System::Object {
public:
// Declarations
using AttributeState = ::HoudiniEngineUnity::__HEU_AttributeData__AttributeState;

using AttributeType = ::HoudiniEngineUnity::__HEU_AttributeData__AttributeType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::System::Object)]{};

/// @brief Field _attributeInfo offset 0x10
 __declspec(property(get=__get__attributeInfo, put=__set__attributeInfo)) ::HoudiniEngineUnity::HAPI_AttributeInfo  _attributeInfo;

/// @brief Field _name offset 0x38
 __declspec(property(get=__get__name, put=__set__name)) ::StringW  _name;

/// @brief Field _attributeType offset 0x40
 __declspec(property(get=__get__attributeType, put=__set__attributeType)) ::HoudiniEngineUnity::__HEU_AttributeData__AttributeType  _attributeType;

/// @brief Field _intValues offset 0x48
 __declspec(property(get=__get__intValues, put=__set__intValues)) ::ArrayW<int32_t,::Array<int32_t>*>  _intValues;

/// @brief Field _floatValues offset 0x50
 __declspec(property(get=__get__floatValues, put=__set__floatValues)) ::ArrayW<float_t,::Array<float_t>*>  _floatValues;

/// @brief Field _stringValues offset 0x58
 __declspec(property(get=__get__stringValues, put=__set__stringValues)) ::ArrayW<::StringW,::Array<::StringW>*>  _stringValues;

/// @brief Field _attributeState offset 0x60
 __declspec(property(get=__get__attributeState, put=__set__attributeState)) ::HoudiniEngineUnity::__HEU_AttributeData__AttributeState  _attributeState;

/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AttributeData*>"
constexpr operator  ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AttributeData*>*() noexcept;

constexpr void __set__attributeInfo(::HoudiniEngineUnity::HAPI_AttributeInfo  value) ;

constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& __get__attributeInfo() ;

constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& __get__attributeInfo() const;

constexpr void __set__name(::StringW  value) ;

constexpr ::StringW& __get__name() ;

constexpr ::StringW const& __get__name() const;

constexpr void __set__attributeType(::HoudiniEngineUnity::__HEU_AttributeData__AttributeType  value) ;

constexpr ::HoudiniEngineUnity::__HEU_AttributeData__AttributeType& __get__attributeType() ;

constexpr ::HoudiniEngineUnity::__HEU_AttributeData__AttributeType const& __get__attributeType() const;

constexpr void __set__intValues(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__intValues() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__intValues() const;

constexpr void __set__floatValues(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get__floatValues() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get__floatValues() const;

constexpr void __set__stringValues(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get__stringValues() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get__stringValues() const;

constexpr void __set__attributeState(::HoudiniEngineUnity::__HEU_AttributeData__AttributeState  value) ;

constexpr ::HoudiniEngineUnity::__HEU_AttributeData__AttributeState& __get__attributeState() ;

constexpr ::HoudiniEngineUnity::__HEU_AttributeData__AttributeState const& __get__attributeState() const;

/// @brief Method IsColorAttribute addr 0x217f7c4 size 0x70 virtual false final false
inline bool IsColorAttribute() ;

/// @brief Method CopyValuesTo addr 0x217f834 size 0x124 virtual false final false
inline void CopyValuesTo(::HoudiniEngineUnity::HEU_AttributeData*  destAttrData) ;

/// @brief Method IsEquivalentTo addr 0x217f958 size 0x328 virtual true final true
inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_AttributeData*  other) ;

static inline ::HoudiniEngineUnity::HEU_AttributeData* New_ctor() ;

/// @brief Method .ctor addr 0x217fc80 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_AttributeData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_AttributeData(HEU_AttributeData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_AttributeData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_AttributeData(HEU_AttributeData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_AttributeData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_AttributeData, 0x68>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_AttributeData__AttributeState, "HoudiniEngineUnity", "HEU_AttributeData/AttributeState");
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_AttributeData__AttributeType, "HoudiniEngineUnity", "HEU_AttributeData/AttributeType");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AttributeData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AttributeData*, "HoudiniEngineUnity", "HEU_AttributeData");
