#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputDeviceCommand)
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand);
// Type: UnityEngine.InputSystem.LowLevel::InputDeviceCommand
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6471))
// CS Name: ::UnityEngine.InputSystem.LowLevel::InputDeviceCommand
struct CORDL_TYPE InputDeviceCommand : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field kBaseCommandSize offset 0x0
static constexpr int32_t  kBaseCommandSize{static_cast<int32_t>(0x8)};

/// @brief Field BaseCommandSize offset 0x0
static constexpr int32_t  BaseCommandSize{static_cast<int32_t>(0x8)};

/// @brief Field GenericFailure offset 0x0
static constexpr int64_t  GenericFailure{static_cast<int64_t>(0xffffffffffffffff)};

/// @brief Field GenericSuccess offset 0x0
static constexpr int64_t  GenericSuccess{static_cast<int64_t>(0x1)};

/// @brief Field type offset 0x0
 __declspec(property(get=__get_type, put=__set_type)) ::UnityEngine::InputSystem::Utilities::FourCC  type;

/// @brief Field sizeInBytes offset 0x4
 __declspec(property(get=__get_sizeInBytes, put=__set_sizeInBytes)) int32_t  sizeInBytes;

 __declspec(property(get=get_payloadSizeInBytes)) int32_t  payloadSizeInBytes;

 __declspec(property(get=get_payloadPtr)) ::cordl_internals::Ptr<void>  payloadPtr;

 __declspec(property(get=get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC  typeStatic;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() ;

constexpr void __set_type(::UnityEngine::InputSystem::Utilities::FourCC  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::FourCC& __get_type() ;

constexpr ::UnityEngine::InputSystem::Utilities::FourCC const& __get_type() const;

constexpr void __set_sizeInBytes(int32_t  value) ;

constexpr int32_t& __get_sizeInBytes() ;

constexpr int32_t const& __get_sizeInBytes() const;

/// @brief Method get_payloadSizeInBytes addr 0x2ae79fc size 0xc virtual false final false
inline int32_t get_payloadSizeInBytes() ;

/// @brief Method get_payloadPtr addr 0x2ae7a08 size 0x8 virtual false final false
inline ::cordl_internals::Ptr<void> get_payloadPtr() ;

/// @brief Method .ctor addr 0x2ae74cc size 0x8 virtual false final false
inline void _ctor(::UnityEngine::InputSystem::Utilities::FourCC  type, int32_t  sizeInBytes) ;

/// @brief Method AllocateNative addr 0x2ae7a10 size 0xb0 virtual false final false
static inline ::Unity::Collections::NativeArray_1<uint8_t> AllocateNative(::UnityEngine::InputSystem::Utilities::FourCC  type, int32_t  payloadSize) ;

/// @brief Method get_typeStatic addr 0x2ae7ac0 size 0x8 virtual true final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

// Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::InputSystem::Utilities::FourCC", modifiers: "", def_value: None }, CppParam { name: "sizeInBytes", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InputDeviceCommand(::UnityEngine::InputSystem::Utilities::FourCC  type, int32_t  sizeInBytes) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InputDeviceCommand(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InputDeviceCommand()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand, "UnityEngine.InputSystem.LowLevel", "InputDeviceCommand");
