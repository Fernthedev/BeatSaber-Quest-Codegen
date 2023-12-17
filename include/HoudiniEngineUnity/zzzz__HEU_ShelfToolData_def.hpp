#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_ShelfToolData)
namespace HoudiniEngineUnity {
struct __HEU_ShelfToolData__ToolType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct __HEU_ShelfToolData__ToolType;
}
namespace HoudiniEngineUnity {
class HEU_ShelfToolData;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_ShelfToolData);
// Type: ::ToolType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9856))
// CS Name: ::HEU_ShelfToolData::ToolType
struct CORDL_TYPE __HEU_ShelfToolData__ToolType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____HEU_ShelfToolData__ToolType_Unwrapped
enum struct ____HEU_ShelfToolData__ToolType_Unwrapped : int32_t {
__E_GENERATOR = static_cast<int32_t>(0x0),
__E_OPERATOR_SINGLE = static_cast<int32_t>(0x1),
__E_OPERATOR_MULTI = static_cast<int32_t>(0x2),
__E_BATCH = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field GENERATOR value: static_cast<int32_t>(0x0)
static ::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType const GENERATOR;

/// @brief Field OPERATOR_SINGLE value: static_cast<int32_t>(0x1)
static ::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType const OPERATOR_SINGLE;

/// @brief Field OPERATOR_MULTI value: static_cast<int32_t>(0x2)
static ::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType const OPERATOR_MULTI;

/// @brief Field BATCH value: static_cast<int32_t>(0x3)
static ::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType const BATCH;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____HEU_ShelfToolData__ToolType_Unwrapped () const noexcept {
return std::bit_cast<____HEU_ShelfToolData__ToolType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __HEU_ShelfToolData__ToolType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __HEU_ShelfToolData__ToolType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __HEU_ShelfToolData__ToolType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType, 0x4>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_ShelfToolData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9857))
// CS Name: ::HoudiniEngineUnity::HEU_ShelfToolData*
class CORDL_TYPE HEU_ShelfToolData : public ::System::Object {
public:
// Declarations
using ToolType = ::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Object)]{};

/// @brief Field _name offset 0x10
 __declspec(property(get=__get__name, put=__set__name)) ::StringW  _name;

/// @brief Field _toolType offset 0x18
 __declspec(property(get=__get__toolType, put=__set__toolType)) ::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType  _toolType;

/// @brief Field _toolTip offset 0x20
 __declspec(property(get=__get__toolTip, put=__set__toolTip)) ::StringW  _toolTip;

/// @brief Field _iconPath offset 0x28
 __declspec(property(get=__get__iconPath, put=__set__iconPath)) ::StringW  _iconPath;

/// @brief Field _assetPath offset 0x30
 __declspec(property(get=__get__assetPath, put=__set__assetPath)) ::StringW  _assetPath;

/// @brief Field _helpURL offset 0x38
 __declspec(property(get=__get__helpURL, put=__set__helpURL)) ::StringW  _helpURL;

/// @brief Field _targets offset 0x40
 __declspec(property(get=__get__targets, put=__set__targets)) ::ArrayW<::StringW,::Array<::StringW>*>  _targets;

/// @brief Field _jsonPath offset 0x48
 __declspec(property(get=__get__jsonPath, put=__set__jsonPath)) ::StringW  _jsonPath;

constexpr void __set__name(::StringW  value) ;

constexpr ::StringW& __get__name() ;

constexpr ::StringW const& __get__name() const;

constexpr void __set__toolType(::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType  value) ;

constexpr ::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType& __get__toolType() ;

constexpr ::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType const& __get__toolType() const;

constexpr void __set__toolTip(::StringW  value) ;

constexpr ::StringW& __get__toolTip() ;

constexpr ::StringW const& __get__toolTip() const;

constexpr void __set__iconPath(::StringW  value) ;

constexpr ::StringW& __get__iconPath() ;

constexpr ::StringW const& __get__iconPath() const;

constexpr void __set__assetPath(::StringW  value) ;

constexpr ::StringW& __get__assetPath() ;

constexpr ::StringW const& __get__assetPath() const;

constexpr void __set__helpURL(::StringW  value) ;

constexpr ::StringW& __get__helpURL() ;

constexpr ::StringW const& __get__helpURL() const;

constexpr void __set__targets(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get__targets() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get__targets() const;

constexpr void __set__jsonPath(::StringW  value) ;

constexpr ::StringW& __get__jsonPath() ;

constexpr ::StringW const& __get__jsonPath() const;

static inline ::HoudiniEngineUnity::HEU_ShelfToolData* New_ctor() ;

/// @brief Method .ctor addr 0x21d069c size 0x5c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ShelfToolData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_ShelfToolData(HEU_ShelfToolData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ShelfToolData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_ShelfToolData(HEU_ShelfToolData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_ShelfToolData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_ShelfToolData, 0x50>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_ShelfToolData__ToolType, "HoudiniEngineUnity", "HEU_ShelfToolData/ToolType");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_ShelfToolData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ShelfToolData*, "HoudiniEngineUnity", "HEU_ShelfToolData");
