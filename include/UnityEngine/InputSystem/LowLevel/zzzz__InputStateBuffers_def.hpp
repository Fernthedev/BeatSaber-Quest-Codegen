#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputStateBuffers)
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __InputStateBuffers__DoubleBuffers;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct InputStateBuffers;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __InputStateBuffers__DoubleBuffers;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InputStateBuffers);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers);
// Type: ::DoubleBuffers
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6567))
// CS Name: ::InputStateBuffers::DoubleBuffers
struct CORDL_TYPE __InputStateBuffers__DoubleBuffers : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field deviceToBufferMapping offset 0x0
 __declspec(property(get=__get_deviceToBufferMapping, put=__set_deviceToBufferMapping)) ::cordl_internals::Ptr<::cordl_internals::Ptr<void>>  deviceToBufferMapping;

 __declspec(property(get=get_valid)) bool  valid;

constexpr void __set_deviceToBufferMapping(::cordl_internals::Ptr<::cordl_internals::Ptr<void>>  value) ;

constexpr ::cordl_internals::Ptr<::cordl_internals::Ptr<void>>& __get_deviceToBufferMapping() ;

constexpr ::cordl_internals::Ptr<::cordl_internals::Ptr<void>> const& __get_deviceToBufferMapping() const;

/// @brief Method get_valid addr 0x2af6504 size 0x10 virtual false final false
inline bool get_valid() ;

/// @brief Method SetFrontBuffer addr 0x2af6090 size 0x10 virtual false final false
inline void SetFrontBuffer(int32_t  deviceIndex, ::cordl_internals::Ptr<void>  ptr) ;

/// @brief Method SetBackBuffer addr 0x2af60a0 size 0x14 virtual false final false
inline void SetBackBuffer(int32_t  deviceIndex, ::cordl_internals::Ptr<void>  ptr) ;

/// @brief Method GetFrontBuffer addr 0x2af5e30 size 0x10 virtual false final false
inline ::cordl_internals::Ptr<void> GetFrontBuffer(int32_t  deviceIndex) ;

/// @brief Method GetBackBuffer addr 0x2af5e98 size 0x14 virtual false final false
inline ::cordl_internals::Ptr<void> GetBackBuffer(int32_t  deviceIndex) ;

/// @brief Method SwapBuffers addr 0x2af6514 size 0x28 virtual false final false
inline void SwapBuffers(int32_t  deviceIndex) ;

// Ctor Parameters [CppParam { name: "deviceToBufferMapping", ty: "::cordl_internals::Ptr<::cordl_internals::Ptr<void>>", modifiers: "", def_value: None }]
constexpr __InputStateBuffers__DoubleBuffers(::cordl_internals::Ptr<::cordl_internals::Ptr<void>>  deviceToBufferMapping) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputStateBuffers__DoubleBuffers(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputStateBuffers__DoubleBuffers()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::InputStateBuffers
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6568))
// CS Name: ::UnityEngine.InputSystem.LowLevel::InputStateBuffers
struct CORDL_TYPE InputStateBuffers : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
using DoubleBuffers = ::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field sizePerBuffer offset 0x0
 __declspec(property(get=__get_sizePerBuffer, put=__set_sizePerBuffer)) uint32_t  sizePerBuffer;

/// @brief Field totalSize offset 0x4
 __declspec(property(get=__get_totalSize, put=__set_totalSize)) uint32_t  totalSize;

/// @brief Field defaultStateBuffer offset 0x8
 __declspec(property(get=__get_defaultStateBuffer, put=__set_defaultStateBuffer)) ::cordl_internals::Ptr<void>  defaultStateBuffer;

/// @brief Field noiseMaskBuffer offset 0x10
 __declspec(property(get=__get_noiseMaskBuffer, put=__set_noiseMaskBuffer)) ::cordl_internals::Ptr<void>  noiseMaskBuffer;

/// @brief Field resetMaskBuffer offset 0x18
 __declspec(property(get=__get_resetMaskBuffer, put=__set_resetMaskBuffer)) ::cordl_internals::Ptr<void>  resetMaskBuffer;

/// @brief Field m_AllBuffers offset 0x20
 __declspec(property(get=__get_m_AllBuffers, put=__set_m_AllBuffers)) ::cordl_internals::Ptr<void>  m_AllBuffers;

/// @brief Field m_PlayerStateBuffers offset 0x28
 __declspec(property(get=__get_m_PlayerStateBuffers, put=__set_m_PlayerStateBuffers)) ::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers  m_PlayerStateBuffers;

constexpr void __set_sizePerBuffer(uint32_t  value) ;

constexpr uint32_t& __get_sizePerBuffer() ;

constexpr uint32_t const& __get_sizePerBuffer() const;

constexpr void __set_totalSize(uint32_t  value) ;

constexpr uint32_t& __get_totalSize() ;

constexpr uint32_t const& __get_totalSize() const;

constexpr void __set_defaultStateBuffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_defaultStateBuffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_defaultStateBuffer() const;

constexpr void __set_noiseMaskBuffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_noiseMaskBuffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_noiseMaskBuffer() const;

constexpr void __set_resetMaskBuffer(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_resetMaskBuffer() ;

constexpr ::cordl_internals::Ptr<void> const& __get_resetMaskBuffer() const;

constexpr void __set_m_AllBuffers(::cordl_internals::Ptr<void>  value) ;

constexpr ::cordl_internals::Ptr<void>& __get_m_AllBuffers() ;

constexpr ::cordl_internals::Ptr<void> const& __get_m_AllBuffers() const;

constexpr void __set_m_PlayerStateBuffers(::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers& __get_m_PlayerStateBuffers() ;

constexpr ::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers const& __get_m_PlayerStateBuffers() const;

static inline void setStaticF_s_DefaultStateBuffer(::cordl_internals::Ptr<void>  value) ;

static inline ::cordl_internals::Ptr<void> getStaticF_s_DefaultStateBuffer() ;

static inline void setStaticF_s_NoiseMaskBuffer(::cordl_internals::Ptr<void>  value) ;

static inline ::cordl_internals::Ptr<void> getStaticF_s_NoiseMaskBuffer() ;

static inline void setStaticF_s_ResetMaskBuffer(::cordl_internals::Ptr<void>  value) ;

static inline ::cordl_internals::Ptr<void> getStaticF_s_ResetMaskBuffer() ;

static inline void setStaticF_s_CurrentBuffers(::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers  value) ;

static inline ::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers getStaticF_s_CurrentBuffers() ;

/// @brief Method GetDoubleBuffersFor addr 0x2af5d04 size 0xd8 virtual false final false
inline ::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers GetDoubleBuffersFor(::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateType) ;

/// @brief Method GetFrontBufferForDevice addr 0x2af5ddc size 0x54 virtual false final false
static inline ::cordl_internals::Ptr<void> GetFrontBufferForDevice(int32_t  deviceIndex) ;

/// @brief Method GetBackBufferForDevice addr 0x2af5e40 size 0x58 virtual false final false
static inline ::cordl_internals::Ptr<void> GetBackBufferForDevice(int32_t  deviceIndex) ;

/// @brief Method SwitchTo addr 0x2af5eac size 0x64 virtual false final false
static inline void SwitchTo(::UnityEngine::InputSystem::LowLevel::InputStateBuffers  buffers, ::UnityEngine::InputSystem::LowLevel::InputUpdateType  update) ;

/// @brief Method AllocateAll addr 0x2af5f10 size 0xbc virtual false final false
inline void AllocateAll(::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>  devices, int32_t  deviceCount) ;

/// @brief Method SetUpDeviceToBufferMappings addr 0x2af6038 size 0x58 virtual false final false
static inline ::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers SetUpDeviceToBufferMappings(int32_t  deviceCount, ByRef<::cordl_internals::Ptr<uint8_t>>  bufferPtr, uint32_t  sizePerBuffer, uint32_t  mappingTableSizePerBuffer) ;

/// @brief Method FreeAll addr 0x2af60b4 size 0xc0 virtual false final false
inline void FreeAll() ;

/// @brief Method MigrateAll addr 0x2af6174 size 0x108 virtual false final false
inline void MigrateAll(::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>  devices, int32_t  deviceCount, ::UnityEngine::InputSystem::LowLevel::InputStateBuffers  oldBuffers) ;

/// @brief Method MigrateDoubleBuffer addr 0x2af627c size 0x118 virtual false final false
static inline void MigrateDoubleBuffer(::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers  newBuffer, ::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>  devices, int32_t  deviceCount, ::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers  oldBuffer) ;

/// @brief Method MigrateSingleBuffer addr 0x2af6394 size 0xb8 virtual false final false
static inline void MigrateSingleBuffer(::cordl_internals::Ptr<void>  newBuffer, ::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>  devices, int32_t  deviceCount, ::cordl_internals::Ptr<void>  oldBuffer) ;

/// @brief Method ComputeSizeOfSingleStateBuffer addr 0x2af5fcc size 0x6c virtual false final false
static inline uint32_t ComputeSizeOfSingleStateBuffer(::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>  devices, int32_t  deviceCount) ;

/// @brief Method NextDeviceOffset addr 0x2af644c size 0xb8 virtual false final false
static inline uint32_t NextDeviceOffset(uint32_t  currentOffset, ::UnityEngine::InputSystem::InputDevice*  device) ;

// Ctor Parameters [CppParam { name: "sizePerBuffer", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "totalSize", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "defaultStateBuffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "noiseMaskBuffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "resetMaskBuffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_AllBuffers", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "m_PlayerStateBuffers", ty: "::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers", modifiers: "", def_value: None }]
constexpr InputStateBuffers(uint32_t  sizePerBuffer, uint32_t  totalSize, ::cordl_internals::Ptr<void>  defaultStateBuffer, ::cordl_internals::Ptr<void>  noiseMaskBuffer, ::cordl_internals::Ptr<void>  resetMaskBuffer, ::cordl_internals::Ptr<void>  m_AllBuffers, ::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers  m_PlayerStateBuffers) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InputStateBuffers(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InputStateBuffers()  = default;


// Fields

// Static field s_DefaultStateBuffer

// Static field s_NoiseMaskBuffer

// Static field s_ResetMaskBuffer

// Static field s_CurrentBuffers


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputStateBuffers, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputStateBuffers, "UnityEngine.InputSystem.LowLevel", "InputStateBuffers");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__InputStateBuffers__DoubleBuffers, "UnityEngine.InputSystem.LowLevel", "InputStateBuffers/DoubleBuffers");
