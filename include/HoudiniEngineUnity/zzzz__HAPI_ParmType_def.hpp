#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_ParmType)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_ParmType;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_ParmType);
// Type: HoudiniEngineUnity::HAPI_ParmType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9696))
// CS Name: ::HoudiniEngineUnity::HAPI_ParmType
struct CORDL_TYPE HAPI_ParmType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HAPI_ParmType_Unwrapped
enum struct __HAPI_ParmType_Unwrapped : int32_t {
__E_HAPI_PARMTYPE_INT = static_cast<int32_t>(0x0),
__E_HAPI_PARMTYPE_MULTIPARMLIST = static_cast<int32_t>(0x1),
__E_HAPI_PARMTYPE_TOGGLE = static_cast<int32_t>(0x2),
__E_HAPI_PARMTYPE_BUTTON = static_cast<int32_t>(0x3),
__E_HAPI_PARMTYPE_FLOAT = static_cast<int32_t>(0x4),
__E_HAPI_PARMTYPE_COLOR = static_cast<int32_t>(0x5),
__E_HAPI_PARMTYPE_STRING = static_cast<int32_t>(0x6),
__E_HAPI_PARMTYPE_PATH_FILE = static_cast<int32_t>(0x7),
__E_HAPI_PARMTYPE_PATH_FILE_GEO = static_cast<int32_t>(0x8),
__E_HAPI_PARMTYPE_PATH_FILE_IMAGE = static_cast<int32_t>(0x9),
__E_HAPI_PARMTYPE_NODE = static_cast<int32_t>(0xa),
__E_HAPI_PARMTYPE_FOLDERLIST = static_cast<int32_t>(0xb),
__E_HAPI_PARMTYPE_FOLDERLIST_RADIO = static_cast<int32_t>(0xc),
__E_HAPI_PARMTYPE_FOLDER = static_cast<int32_t>(0xd),
__E_HAPI_PARMTYPE_LABEL = static_cast<int32_t>(0xe),
__E_HAPI_PARMTYPE_SEPARATOR = static_cast<int32_t>(0xf),
__E_HAPI_PARMTYPE_PATH_FILE_DIR = static_cast<int32_t>(0x10),
__E_HAPI_PARMTYPE_MAX = static_cast<int32_t>(0x11),
__E_HAPI_PARMTYPE_INT_START = static_cast<int32_t>(0x0),
__E_HAPI_PARMTYPE_INT_END = static_cast<int32_t>(0x3),
__E_HAPI_PARMTYPE_FLOAT_START = static_cast<int32_t>(0x4),
__E_HAPI_PARMTYPE_FLOAT_END = static_cast<int32_t>(0x5),
__E_HAPI_PARMTYPE_STRING_START = static_cast<int32_t>(0x6),
__E_HAPI_PARMTYPE_STRING_END = static_cast<int32_t>(0xa),
__E_HAPI_PARMTYPE_PATH_START = static_cast<int32_t>(0x7),
__E_HAPI_PARMTYPE_PATH_END = static_cast<int32_t>(0x9),
__E_HAPI_PARMTYPE_NODE_START = static_cast<int32_t>(0xa),
__E_HAPI_PARMTYPE_NODE_END = static_cast<int32_t>(0xa),
__E_HAPI_PARMTYPE_CONTAINER_START = static_cast<int32_t>(0xb),
__E_HAPI_PARMTYPE_CONTAINER_END = static_cast<int32_t>(0xc),
__E_HAPI_PARMTYPE_NONVALUE_START = static_cast<int32_t>(0xd),
__E_HAPI_PARMTYPE_NONVALUE_END = static_cast<int32_t>(0xf),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field HAPI_PARMTYPE_INT value: static_cast<int32_t>(0x0)
static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_INT;

/// @brief Field HAPI_PARMTYPE_MULTIPARMLIST value: static_cast<int32_t>(0x1)
static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_MULTIPARMLIST;

/// @brief Field HAPI_PARMTYPE_TOGGLE value: static_cast<int32_t>(0x2)
static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_TOGGLE;

/// @brief Field HAPI_PARMTYPE_BUTTON value: static_cast<int32_t>(0x3)
static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_BUTTON;

/// @brief Field HAPI_PARMTYPE_FLOAT value: static_cast<int32_t>(0x4)
static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_FLOAT;

/// @brief Field HAPI_PARMTYPE_COLOR value: static_cast<int32_t>(0x5)
static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_COLOR;

/// @brief Field HAPI_PARMTYPE_STRING value: static_cast<int32_t>(0x6)
static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_STRING;

/// @brief Field HAPI_PARMTYPE_PATH_FILE value: static_cast<int32_t>(0x7)
static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_PATH_FILE;

/// @brief Field HAPI_PARMTYPE_PATH_FILE_GEO value: static_cast<int32_t>(0x8)
static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_PATH_FILE_GEO;

/// @brief Field HAPI_PARMTYPE_PATH_FILE_IMAGE value: static_cast<int32_t>(0x9)
static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_PATH_FILE_IMAGE;

/// @brief Field HAPI_PARMTYPE_NODE value: static_cast<int32_t>(0xa)
static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_NODE;

/// @brief Field HAPI_PARMTYPE_FOLDERLIST value: static_cast<int32_t>(0xb)
static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_FOLDERLIST;

/// @brief Field HAPI_PARMTYPE_FOLDERLIST_RADIO value: static_cast<int32_t>(0xc)
static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_FOLDERLIST_RADIO;

/// @brief Field HAPI_PARMTYPE_FOLDER value: static_cast<int32_t>(0xd)
static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_FOLDER;

/// @brief Field HAPI_PARMTYPE_LABEL value: static_cast<int32_t>(0xe)
static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_LABEL;

/// @brief Field HAPI_PARMTYPE_SEPARATOR value: static_cast<int32_t>(0xf)
static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_SEPARATOR;

/// @brief Field HAPI_PARMTYPE_PATH_FILE_DIR value: static_cast<int32_t>(0x10)
static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_PATH_FILE_DIR;

/// @brief Field HAPI_PARMTYPE_MAX value: static_cast<int32_t>(0x11)
static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_MAX;

/// @brief Field HAPI_PARMTYPE_INT_START value: static_cast<int32_t>(0x0)
static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_INT_START;

/// @brief Field HAPI_PARMTYPE_INT_END value: static_cast<int32_t>(0x3)
static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_INT_END;

/// @brief Field HAPI_PARMTYPE_FLOAT_START value: static_cast<int32_t>(0x4)
static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_FLOAT_START;

/// @brief Field HAPI_PARMTYPE_FLOAT_END value: static_cast<int32_t>(0x5)
static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_FLOAT_END;

/// @brief Field HAPI_PARMTYPE_STRING_START value: static_cast<int32_t>(0x6)
static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_STRING_START;

/// @brief Field HAPI_PARMTYPE_STRING_END value: static_cast<int32_t>(0xa)
static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_STRING_END;

/// @brief Field HAPI_PARMTYPE_PATH_START value: static_cast<int32_t>(0x7)
static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_PATH_START;

/// @brief Field HAPI_PARMTYPE_PATH_END value: static_cast<int32_t>(0x9)
static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_PATH_END;

/// @brief Field HAPI_PARMTYPE_NODE_START value: static_cast<int32_t>(0xa)
static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_NODE_START;

/// @brief Field HAPI_PARMTYPE_NODE_END value: static_cast<int32_t>(0xa)
static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_NODE_END;

/// @brief Field HAPI_PARMTYPE_CONTAINER_START value: static_cast<int32_t>(0xb)
static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_CONTAINER_START;

/// @brief Field HAPI_PARMTYPE_CONTAINER_END value: static_cast<int32_t>(0xc)
static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_CONTAINER_END;

/// @brief Field HAPI_PARMTYPE_NONVALUE_START value: static_cast<int32_t>(0xd)
static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_NONVALUE_START;

/// @brief Field HAPI_PARMTYPE_NONVALUE_END value: static_cast<int32_t>(0xf)
static ::HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_NONVALUE_END;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_ParmType_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_ParmType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_ParmType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_ParmType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_ParmType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_ParmType, 0x4>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_ParmType, "HoudiniEngineUnity", "HAPI_ParmType");
