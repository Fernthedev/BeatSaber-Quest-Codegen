#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryPairedUserAccountCommand)
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __QueryPairedUserAccountCommand__Result;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct __QueryPairedUserAccountCommand__Result;
}
namespace UnityEngine::InputSystem::LowLevel {
struct QueryPairedUserAccountCommand;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__QueryPairedUserAccountCommand__Result);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer);
// Type: ::Result
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6479))
// CS Name: ::QueryPairedUserAccountCommand::Result
struct CORDL_TYPE __QueryPairedUserAccountCommand__Result : public ::bs_hook::EnumTypeWrapper<0x8> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int64_t;

/// @brief Nested struct ____QueryPairedUserAccountCommand__Result_Unwrapped
enum struct ____QueryPairedUserAccountCommand__Result_Unwrapped : int64_t {
__E_DevicePairedToUserAccount = static_cast<int64_t>(0x2),
__E_UserAccountSelectionInProgress = static_cast<int64_t>(0x4),
__E_UserAccountSelectionComplete = static_cast<int64_t>(0x8),
__E_UserAccountSelectionCanceled = static_cast<int64_t>(0x10),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field DevicePairedToUserAccount value: static_cast<int64_t>(0x2)
static ::UnityEngine::InputSystem::LowLevel::__QueryPairedUserAccountCommand__Result const DevicePairedToUserAccount;

/// @brief Field UserAccountSelectionInProgress value: static_cast<int64_t>(0x4)
static ::UnityEngine::InputSystem::LowLevel::__QueryPairedUserAccountCommand__Result const UserAccountSelectionInProgress;

/// @brief Field UserAccountSelectionComplete value: static_cast<int64_t>(0x8)
static ::UnityEngine::InputSystem::LowLevel::__QueryPairedUserAccountCommand__Result const UserAccountSelectionComplete;

/// @brief Field UserAccountSelectionCanceled value: static_cast<int64_t>(0x10)
static ::UnityEngine::InputSystem::LowLevel::__QueryPairedUserAccountCommand__Result const UserAccountSelectionCanceled;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int64_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____QueryPairedUserAccountCommand__Result_Unwrapped () const noexcept {
return std::bit_cast<____QueryPairedUserAccountCommand__Result_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x8>::instance);
}

constexpr void __set_value__(int64_t  value) ;

constexpr int64_t& __get_value__() ;

constexpr int64_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: None }]
constexpr __QueryPairedUserAccountCommand__Result(int64_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __QueryPairedUserAccountCommand__Result(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __QueryPairedUserAccountCommand__Result()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__QueryPairedUserAccountCommand__Result, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: ::<nameBuffer>e__FixedBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6480))
// CS Name: ::QueryPairedUserAccountCommand::<nameBuffer>e__FixedBuffer
struct CORDL_TYPE __QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper<0x200> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x200};

/// @brief Field FixedElementField offset 0x0
 __declspec(property(get=__get_FixedElementField, put=__set_FixedElementField)) uint8_t  FixedElementField;

constexpr void __set_FixedElementField(uint8_t  value) ;

constexpr uint8_t& __get_FixedElementField() ;

constexpr uint8_t const& __get_FixedElementField() const;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr __QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer(uint8_t  FixedElementField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x200>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer, 0x200>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: ::<idBuffer>e__FixedBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6481))
// CS Name: ::QueryPairedUserAccountCommand::<idBuffer>e__FixedBuffer
struct CORDL_TYPE __QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper<0x200> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x200};

/// @brief Field FixedElementField offset 0x0
 __declspec(property(get=__get_FixedElementField, put=__set_FixedElementField)) uint8_t  FixedElementField;

constexpr void __set_FixedElementField(uint8_t  value) ;

constexpr uint8_t& __get_FixedElementField() ;

constexpr uint8_t const& __get_FixedElementField() const;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr __QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer(uint8_t  FixedElementField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x200>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer, 0x200>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::QueryPairedUserAccountCommand
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6482))
// CS Name: ::UnityEngine.InputSystem.LowLevel::QueryPairedUserAccountCommand
struct CORDL_TYPE QueryPairedUserAccountCommand : public ::bs_hook::ValueTypeWrapper<0x410> {
public:
// Declarations
using _idBuffer_e__FixedBuffer = ::UnityEngine::InputSystem::LowLevel::__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer;

using _nameBuffer_e__FixedBuffer = ::UnityEngine::InputSystem::LowLevel::__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer;

using Result = ::UnityEngine::InputSystem::LowLevel::__QueryPairedUserAccountCommand__Result;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x410};

/// @brief Field kMaxNameLength offset 0x0
static constexpr int32_t  kMaxNameLength{static_cast<int32_t>(0x100)};

/// @brief Field kMaxIdLength offset 0x0
static constexpr int32_t  kMaxIdLength{static_cast<int32_t>(0x100)};

/// @brief Field kSize offset 0x0
static constexpr int32_t  kSize{static_cast<int32_t>(0x410)};

/// @brief Field baseCommand offset 0x0
 __declspec(property(get=__get_baseCommand, put=__set_baseCommand)) ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  baseCommand;

/// @brief Field handle offset 0x8
 __declspec(property(get=__get_handle, put=__set_handle)) uint64_t  handle;

/// @brief Field nameBuffer offset 0x10
 __declspec(property(get=__get_nameBuffer, put=__set_nameBuffer)) ::UnityEngine::InputSystem::LowLevel::__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer  nameBuffer;

/// @brief Field idBuffer offset 0x210
 __declspec(property(get=__get_idBuffer, put=__set_idBuffer)) ::UnityEngine::InputSystem::LowLevel::__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer  idBuffer;

 __declspec(property(get=get_id, put=set_id)) ::StringW  id;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

 __declspec(property(get=get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC  typeStatic;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*() ;

constexpr void __set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& __get_baseCommand() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& __get_baseCommand() const;

constexpr void __set_handle(uint64_t  value) ;

constexpr uint64_t& __get_handle() ;

constexpr uint64_t const& __get_handle() const;

constexpr void __set_nameBuffer(::UnityEngine::InputSystem::LowLevel::__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer& __get_nameBuffer() ;

constexpr ::UnityEngine::InputSystem::LowLevel::__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer const& __get_nameBuffer() const;

constexpr void __set_idBuffer(::UnityEngine::InputSystem::LowLevel::__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer& __get_idBuffer() ;

constexpr ::UnityEngine::InputSystem::LowLevel::__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer const& __get_idBuffer() const;

/// @brief Method get_Type addr 0x2ae7e54 size 0x30 virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type() ;

/// @brief Method get_id addr 0x2ae7e84 size 0x10 virtual false final false
inline ::StringW get_id() ;

/// @brief Method set_id addr 0x2ae7e94 size 0x114 virtual false final false
inline void set_id(::StringW  value) ;

/// @brief Method get_name addr 0x2ae7fa8 size 0x10 virtual false final false
inline ::StringW get_name() ;

/// @brief Method set_name addr 0x2ae7fb8 size 0x114 virtual false final false
inline void set_name(::StringW  value) ;

/// @brief Method get_typeStatic addr 0x2ae80cc size 0x30 virtual true final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method Create addr 0x2ae80fc size 0x58 virtual false final false
static inline ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand Create() ;

// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "nameBuffer", ty: "::UnityEngine::InputSystem::LowLevel::__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "idBuffer", ty: "::UnityEngine::InputSystem::LowLevel::__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr QueryPairedUserAccountCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand  baseCommand, uint64_t  handle, ::UnityEngine::InputSystem::LowLevel::__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer  nameBuffer, ::UnityEngine::InputSystem::LowLevel::__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer  idBuffer) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit QueryPairedUserAccountCommand(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x410>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 QueryPairedUserAccountCommand()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand, 0x410>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__QueryPairedUserAccountCommand__Result, "UnityEngine.InputSystem.LowLevel", "QueryPairedUserAccountCommand/Result");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand, "UnityEngine.InputSystem.LowLevel", "QueryPairedUserAccountCommand");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "QueryPairedUserAccountCommand/<idBuffer>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "QueryPairedUserAccountCommand/<nameBuffer>e__FixedBuffer");
