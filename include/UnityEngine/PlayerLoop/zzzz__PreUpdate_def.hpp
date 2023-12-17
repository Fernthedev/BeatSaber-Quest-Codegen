#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PreUpdate)
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__AIUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__SendMouseEvents;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__PhysicsUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__IMGUISendQueuedEvents;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__UpdateVideo;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__NewInputUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__WindUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__Physics2DUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__CheckTexFieldInput;
}
// Forward declare root types
namespace UnityEngine::PlayerLoop {
struct PreUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__AIUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__CheckTexFieldInput;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__IMGUISendQueuedEvents;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__NewInputUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__Physics2DUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__PhysicsUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__SendMouseEvents;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__UpdateVideo;
}
namespace UnityEngine::PlayerLoop {
struct __PreUpdate__WindUpdate;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PlayerLoop::PreUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreUpdate__AIUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreUpdate__CheckTexFieldInput);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreUpdate__IMGUISendQueuedEvents);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreUpdate__NewInputUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreUpdate__Physics2DUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreUpdate__PhysicsUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreUpdate__SendMouseEvents);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreUpdate__UpdateVideo);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PreUpdate__WindUpdate);
// Type: ::PhysicsUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10531))
// CS Name: ::PreUpdate::PhysicsUpdate
struct CORDL_TYPE __PreUpdate__PhysicsUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PreUpdate__PhysicsUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PreUpdate__PhysicsUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreUpdate__PhysicsUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::Physics2DUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10532))
// CS Name: ::PreUpdate::Physics2DUpdate
struct CORDL_TYPE __PreUpdate__Physics2DUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PreUpdate__Physics2DUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PreUpdate__Physics2DUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreUpdate__Physics2DUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::CheckTexFieldInput
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10533))
// CS Name: ::PreUpdate::CheckTexFieldInput
struct CORDL_TYPE __PreUpdate__CheckTexFieldInput : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PreUpdate__CheckTexFieldInput(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PreUpdate__CheckTexFieldInput()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreUpdate__CheckTexFieldInput, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::IMGUISendQueuedEvents
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10534))
// CS Name: ::PreUpdate::IMGUISendQueuedEvents
struct CORDL_TYPE __PreUpdate__IMGUISendQueuedEvents : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PreUpdate__IMGUISendQueuedEvents(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PreUpdate__IMGUISendQueuedEvents()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreUpdate__IMGUISendQueuedEvents, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::SendMouseEvents
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10535))
// CS Name: ::PreUpdate::SendMouseEvents
struct CORDL_TYPE __PreUpdate__SendMouseEvents : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PreUpdate__SendMouseEvents(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PreUpdate__SendMouseEvents()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreUpdate__SendMouseEvents, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::AIUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10536))
// CS Name: ::PreUpdate::AIUpdate
struct CORDL_TYPE __PreUpdate__AIUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PreUpdate__AIUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PreUpdate__AIUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreUpdate__AIUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::WindUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10537))
// CS Name: ::PreUpdate::WindUpdate
struct CORDL_TYPE __PreUpdate__WindUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PreUpdate__WindUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PreUpdate__WindUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreUpdate__WindUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::UpdateVideo
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10538))
// CS Name: ::PreUpdate::UpdateVideo
struct CORDL_TYPE __PreUpdate__UpdateVideo : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PreUpdate__UpdateVideo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PreUpdate__UpdateVideo()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreUpdate__UpdateVideo, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::NewInputUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10539))
// CS Name: ::PreUpdate::NewInputUpdate
struct CORDL_TYPE __PreUpdate__NewInputUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PreUpdate__NewInputUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PreUpdate__NewInputUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PreUpdate__NewInputUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: UnityEngine.PlayerLoop::PreUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10540))
// CS Name: ::UnityEngine.PlayerLoop::PreUpdate
struct CORDL_TYPE PreUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
using NewInputUpdate = ::UnityEngine::PlayerLoop::__PreUpdate__NewInputUpdate;

using UpdateVideo = ::UnityEngine::PlayerLoop::__PreUpdate__UpdateVideo;

using WindUpdate = ::UnityEngine::PlayerLoop::__PreUpdate__WindUpdate;

using AIUpdate = ::UnityEngine::PlayerLoop::__PreUpdate__AIUpdate;

using SendMouseEvents = ::UnityEngine::PlayerLoop::__PreUpdate__SendMouseEvents;

using IMGUISendQueuedEvents = ::UnityEngine::PlayerLoop::__PreUpdate__IMGUISendQueuedEvents;

using CheckTexFieldInput = ::UnityEngine::PlayerLoop::__PreUpdate__CheckTexFieldInput;

using Physics2DUpdate = ::UnityEngine::PlayerLoop::__PreUpdate__Physics2DUpdate;

using PhysicsUpdate = ::UnityEngine::PlayerLoop::__PreUpdate__PhysicsUpdate;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PreUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PreUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PreUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PreUpdate, "UnityEngine.PlayerLoop", "PreUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreUpdate__AIUpdate, "UnityEngine.PlayerLoop", "PreUpdate/AIUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreUpdate__CheckTexFieldInput, "UnityEngine.PlayerLoop", "PreUpdate/CheckTexFieldInput");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreUpdate__IMGUISendQueuedEvents, "UnityEngine.PlayerLoop", "PreUpdate/IMGUISendQueuedEvents");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreUpdate__NewInputUpdate, "UnityEngine.PlayerLoop", "PreUpdate/NewInputUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreUpdate__Physics2DUpdate, "UnityEngine.PlayerLoop", "PreUpdate/Physics2DUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreUpdate__PhysicsUpdate, "UnityEngine.PlayerLoop", "PreUpdate/PhysicsUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreUpdate__SendMouseEvents, "UnityEngine.PlayerLoop", "PreUpdate/SendMouseEvents");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreUpdate__UpdateVideo, "UnityEngine.PlayerLoop", "PreUpdate/UpdateVideo");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PreUpdate__WindUpdate, "UnityEngine.PlayerLoop", "PreUpdate/WindUpdate");
