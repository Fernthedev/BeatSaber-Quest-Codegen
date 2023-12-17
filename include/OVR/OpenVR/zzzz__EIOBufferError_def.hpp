#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EIOBufferError)
// Forward declare root types
namespace OVR::OpenVR {
struct EIOBufferError;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EIOBufferError);
// Type: OVR.OpenVR::EIOBufferError
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8640))
// CS Name: ::OVR.OpenVR::EIOBufferError
struct CORDL_TYPE EIOBufferError : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EIOBufferError_Unwrapped
enum struct __EIOBufferError_Unwrapped : int32_t {
__E_IOBuffer_Success = static_cast<int32_t>(0x0),
__E_IOBuffer_OperationFailed = static_cast<int32_t>(0x64),
__E_IOBuffer_InvalidHandle = static_cast<int32_t>(0x65),
__E_IOBuffer_InvalidArgument = static_cast<int32_t>(0x66),
__E_IOBuffer_PathExists = static_cast<int32_t>(0x67),
__E_IOBuffer_PathDoesNotExist = static_cast<int32_t>(0x68),
__E_IOBuffer_Permission = static_cast<int32_t>(0x69),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field IOBuffer_Success value: static_cast<int32_t>(0x0)
static ::OVR::OpenVR::EIOBufferError const IOBuffer_Success;

/// @brief Field IOBuffer_OperationFailed value: static_cast<int32_t>(0x64)
static ::OVR::OpenVR::EIOBufferError const IOBuffer_OperationFailed;

/// @brief Field IOBuffer_InvalidHandle value: static_cast<int32_t>(0x65)
static ::OVR::OpenVR::EIOBufferError const IOBuffer_InvalidHandle;

/// @brief Field IOBuffer_InvalidArgument value: static_cast<int32_t>(0x66)
static ::OVR::OpenVR::EIOBufferError const IOBuffer_InvalidArgument;

/// @brief Field IOBuffer_PathExists value: static_cast<int32_t>(0x67)
static ::OVR::OpenVR::EIOBufferError const IOBuffer_PathExists;

/// @brief Field IOBuffer_PathDoesNotExist value: static_cast<int32_t>(0x68)
static ::OVR::OpenVR::EIOBufferError const IOBuffer_PathDoesNotExist;

/// @brief Field IOBuffer_Permission value: static_cast<int32_t>(0x69)
static ::OVR::OpenVR::EIOBufferError const IOBuffer_Permission;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __EIOBufferError_Unwrapped () const noexcept {
return std::bit_cast<__EIOBufferError_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EIOBufferError(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit EIOBufferError(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 EIOBufferError()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EIOBufferError, 0x4>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EIOBufferError, "OVR.OpenVR", "EIOBufferError");
