#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Update)
namespace UnityEngine::PlayerLoop {
struct __Update__ScriptRunBehaviourUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __Update__ScriptRunDelayedDynamicFrameRate;
}
namespace UnityEngine::PlayerLoop {
struct __Update__DirectorUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __Update__ScriptRunDelayedTasks;
}
// Forward declare root types
namespace UnityEngine::PlayerLoop {
struct Update;
}
namespace UnityEngine::PlayerLoop {
struct __Update__DirectorUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __Update__ScriptRunBehaviourUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __Update__ScriptRunDelayedDynamicFrameRate;
}
namespace UnityEngine::PlayerLoop {
struct __Update__ScriptRunDelayedTasks;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PlayerLoop::Update);
MARK_VAL_T(::UnityEngine::PlayerLoop::__Update__DirectorUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__Update__ScriptRunBehaviourUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__Update__ScriptRunDelayedDynamicFrameRate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__Update__ScriptRunDelayedTasks);
// Type: ::ScriptRunBehaviourUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10541))
// CS Name: ::Update::ScriptRunBehaviourUpdate
struct CORDL_TYPE __Update__ScriptRunBehaviourUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Update__ScriptRunBehaviourUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Update__ScriptRunBehaviourUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__Update__ScriptRunBehaviourUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::DirectorUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10542))
// CS Name: ::Update::DirectorUpdate
struct CORDL_TYPE __Update__DirectorUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Update__DirectorUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Update__DirectorUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__Update__DirectorUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::ScriptRunDelayedDynamicFrameRate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10543))
// CS Name: ::Update::ScriptRunDelayedDynamicFrameRate
struct CORDL_TYPE __Update__ScriptRunDelayedDynamicFrameRate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Update__ScriptRunDelayedDynamicFrameRate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Update__ScriptRunDelayedDynamicFrameRate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__Update__ScriptRunDelayedDynamicFrameRate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::ScriptRunDelayedTasks
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10544))
// CS Name: ::Update::ScriptRunDelayedTasks
struct CORDL_TYPE __Update__ScriptRunDelayedTasks : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Update__ScriptRunDelayedTasks(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Update__ScriptRunDelayedTasks()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__Update__ScriptRunDelayedTasks, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: UnityEngine.PlayerLoop::Update
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10545))
// CS Name: ::UnityEngine.PlayerLoop::Update
struct CORDL_TYPE Update : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
using ScriptRunDelayedTasks = ::UnityEngine::PlayerLoop::__Update__ScriptRunDelayedTasks;

using ScriptRunDelayedDynamicFrameRate = ::UnityEngine::PlayerLoop::__Update__ScriptRunDelayedDynamicFrameRate;

using DirectorUpdate = ::UnityEngine::PlayerLoop::__Update__DirectorUpdate;

using ScriptRunBehaviourUpdate = ::UnityEngine::PlayerLoop::__Update__ScriptRunBehaviourUpdate;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Update(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Update()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::Update, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::Update, "UnityEngine.PlayerLoop", "Update");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__Update__DirectorUpdate, "UnityEngine.PlayerLoop", "Update/DirectorUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__Update__ScriptRunBehaviourUpdate, "UnityEngine.PlayerLoop", "Update/ScriptRunBehaviourUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__Update__ScriptRunDelayedDynamicFrameRate, "UnityEngine.PlayerLoop", "Update/ScriptRunDelayedDynamicFrameRate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__Update__ScriptRunDelayedTasks, "UnityEngine.PlayerLoop", "Update/ScriptRunDelayedTasks");
