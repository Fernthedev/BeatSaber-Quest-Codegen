#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputUpdate)
namespace UnityEngine::InputSystem::LowLevel {
struct __InputUpdate__SerializedState;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __InputUpdate__UpdateStepCount;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class InputUpdate;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __InputUpdate__SerializedState;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __InputUpdate__UpdateStepCount;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::InputUpdate);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__InputUpdate__SerializedState);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount);
// Type: ::UpdateStepCount
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6554))
// CS Name: ::InputUpdate::UpdateStepCount
struct CORDL_TYPE __InputUpdate__UpdateStepCount : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_WasUpdated offset 0x0
 __declspec(property(get=__get_m_WasUpdated, put=__set_m_WasUpdated)) bool  m_WasUpdated;

/// @brief Field <value>k__BackingField offset 0x4
 __declspec(property(get=__get__value_k__BackingField, put=__set__value_k__BackingField)) uint32_t  _value_k__BackingField;

 __declspec(property(get=get_value, put=set_value)) uint32_t  value;

constexpr void __set_m_WasUpdated(bool  value) ;

constexpr bool& __get_m_WasUpdated() ;

constexpr bool const& __get_m_WasUpdated() const;

constexpr void __set__value_k__BackingField(uint32_t  value) ;

constexpr uint32_t& __get__value_k__BackingField() ;

constexpr uint32_t const& __get__value_k__BackingField() const;

/// @brief Method get_value addr 0x2af0f24 size 0x8 virtual false final false
inline uint32_t get_value() ;

/// @brief Method set_value addr 0x2af0f2c size 0x8 virtual false final false
inline void set_value(uint32_t  value) ;

/// @brief Method OnBeforeUpdate addr 0x2af0d44 size 0x18 virtual false final false
inline void OnBeforeUpdate() ;

/// @brief Method OnUpdate addr 0x2af0de4 size 0x1c virtual false final false
inline void OnUpdate() ;

// Ctor Parameters [CppParam { name: "m_WasUpdated", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_value_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr __InputUpdate__UpdateStepCount(bool  m_WasUpdated, uint32_t  _value_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputUpdate__UpdateStepCount(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputUpdate__UpdateStepCount()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: ::SerializedState
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6555))
// CS Name: ::InputUpdate::SerializedState
struct CORDL_TYPE __InputUpdate__SerializedState : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field lastUpdateType offset 0x0
 __declspec(property(get=__get_lastUpdateType, put=__set_lastUpdateType)) ::UnityEngine::InputSystem::LowLevel::InputUpdateType  lastUpdateType;

/// @brief Field playerUpdateStepCount offset 0x4
 __declspec(property(get=__get_playerUpdateStepCount, put=__set_playerUpdateStepCount)) ::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount  playerUpdateStepCount;

constexpr void __set_lastUpdateType(::UnityEngine::InputSystem::LowLevel::InputUpdateType  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType& __get_lastUpdateType() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType const& __get_lastUpdateType() const;

constexpr void __set_playerUpdateStepCount(::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount& __get_playerUpdateStepCount() ;

constexpr ::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount const& __get_playerUpdateStepCount() const;

// Ctor Parameters [CppParam { name: "lastUpdateType", ty: "::UnityEngine::InputSystem::LowLevel::InputUpdateType", modifiers: "", def_value: None }, CppParam { name: "playerUpdateStepCount", ty: "::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount", modifiers: "", def_value: None }]
constexpr __InputUpdate__SerializedState(::UnityEngine::InputSystem::LowLevel::InputUpdateType  lastUpdateType, ::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount  playerUpdateStepCount) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputUpdate__SerializedState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputUpdate__SerializedState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__InputUpdate__SerializedState, 0xc>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::InputUpdate
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6556))
// CS Name: ::UnityEngine.InputSystem.LowLevel::InputUpdate*
class CORDL_TYPE InputUpdate : public ::System::Object {
public:
// Declarations
using SerializedState = ::UnityEngine::InputSystem::LowLevel::__InputUpdate__SerializedState;

using UpdateStepCount = ::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_UpdateStepCount(uint32_t  value) ;

static inline uint32_t getStaticF_s_UpdateStepCount() ;

static inline void setStaticF_s_LatestUpdateType(::UnityEngine::InputSystem::LowLevel::InputUpdateType  value) ;

static inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType getStaticF_s_LatestUpdateType() ;

static inline void setStaticF_s_PlayerUpdateStepCount(::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount  value) ;

static inline ::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount getStaticF_s_PlayerUpdateStepCount() ;

/// @brief Method OnBeforeUpdate addr 0x2af0cc4 size 0x80 virtual false final false
static inline void OnBeforeUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType  type) ;

/// @brief Method OnUpdate addr 0x2af0d5c size 0x88 virtual false final false
static inline void OnUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType  type) ;

/// @brief Method Save addr 0x2af0e00 size 0x64 virtual false final false
static inline ::UnityEngine::InputSystem::LowLevel::__InputUpdate__SerializedState Save() ;

/// @brief Method Restore addr 0x2af0e64 size 0x94 virtual false final false
static inline void Restore(::UnityEngine::InputSystem::LowLevel::__InputUpdate__SerializedState  state) ;

/// @brief Method GetUpdateTypeForPlayer addr 0x2af0ef8 size 0x20 virtual false final false
static inline ::UnityEngine::InputSystem::LowLevel::InputUpdateType GetUpdateTypeForPlayer(::UnityEngine::InputSystem::LowLevel::InputUpdateType  mask) ;

/// @brief Method IsPlayerUpdate addr 0x2af0f18 size 0xc virtual false final false
static inline bool IsPlayerUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateType) ;

// Ctor Parameters [CppParam { name: "", ty: "InputUpdate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputUpdate(InputUpdate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputUpdate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputUpdate(InputUpdate const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputUpdate()  = default;
public:


// Fields

// Static field s_UpdateStepCount

// Static field s_LatestUpdateType

// Static field s_PlayerUpdateStepCount


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputUpdate, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::InputUpdate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputUpdate*, "UnityEngine.InputSystem.LowLevel", "InputUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__InputUpdate__SerializedState, "UnityEngine.InputSystem.LowLevel", "InputUpdate/SerializedState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__InputUpdate__UpdateStepCount, "UnityEngine.InputSystem.LowLevel", "InputUpdate/UpdateStepCount");
