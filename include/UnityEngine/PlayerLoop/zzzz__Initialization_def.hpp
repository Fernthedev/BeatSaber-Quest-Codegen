#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Initialization)
namespace UnityEngine::PlayerLoop {
struct __Initialization__DirectorSampleTime;
}
namespace UnityEngine::PlayerLoop {
struct __Initialization__ProfilerStartFrame;
}
namespace UnityEngine::PlayerLoop {
struct __Initialization__SynchronizeInputs;
}
namespace UnityEngine::PlayerLoop {
struct __Initialization__XREarlyUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __Initialization__AsyncUploadTimeSlicedUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __Initialization__SynchronizeState;
}
namespace UnityEngine::PlayerLoop {
struct __Initialization__UpdateCameraMotionVectors;
}
// Forward declare root types
namespace UnityEngine::PlayerLoop {
struct Initialization;
}
namespace UnityEngine::PlayerLoop {
struct __Initialization__AsyncUploadTimeSlicedUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __Initialization__DirectorSampleTime;
}
namespace UnityEngine::PlayerLoop {
struct __Initialization__ProfilerStartFrame;
}
namespace UnityEngine::PlayerLoop {
struct __Initialization__SynchronizeInputs;
}
namespace UnityEngine::PlayerLoop {
struct __Initialization__SynchronizeState;
}
namespace UnityEngine::PlayerLoop {
struct __Initialization__UpdateCameraMotionVectors;
}
namespace UnityEngine::PlayerLoop {
struct __Initialization__XREarlyUpdate;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PlayerLoop::Initialization);
MARK_VAL_T(::UnityEngine::PlayerLoop::__Initialization__AsyncUploadTimeSlicedUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__Initialization__DirectorSampleTime);
MARK_VAL_T(::UnityEngine::PlayerLoop::__Initialization__ProfilerStartFrame);
MARK_VAL_T(::UnityEngine::PlayerLoop::__Initialization__SynchronizeInputs);
MARK_VAL_T(::UnityEngine::PlayerLoop::__Initialization__SynchronizeState);
MARK_VAL_T(::UnityEngine::PlayerLoop::__Initialization__UpdateCameraMotionVectors);
MARK_VAL_T(::UnityEngine::PlayerLoop::__Initialization__XREarlyUpdate);
// Type: ::ProfilerStartFrame
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10477))
// CS Name: ::Initialization::ProfilerStartFrame
struct CORDL_TYPE __Initialization__ProfilerStartFrame : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Initialization__ProfilerStartFrame(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Initialization__ProfilerStartFrame()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__Initialization__ProfilerStartFrame, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::UpdateCameraMotionVectors
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10478))
// CS Name: ::Initialization::UpdateCameraMotionVectors
struct CORDL_TYPE __Initialization__UpdateCameraMotionVectors : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Initialization__UpdateCameraMotionVectors(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Initialization__UpdateCameraMotionVectors()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__Initialization__UpdateCameraMotionVectors, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::DirectorSampleTime
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10479))
// CS Name: ::Initialization::DirectorSampleTime
struct CORDL_TYPE __Initialization__DirectorSampleTime : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Initialization__DirectorSampleTime(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Initialization__DirectorSampleTime()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__Initialization__DirectorSampleTime, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::AsyncUploadTimeSlicedUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10480))
// CS Name: ::Initialization::AsyncUploadTimeSlicedUpdate
struct CORDL_TYPE __Initialization__AsyncUploadTimeSlicedUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Initialization__AsyncUploadTimeSlicedUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Initialization__AsyncUploadTimeSlicedUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__Initialization__AsyncUploadTimeSlicedUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::SynchronizeState
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10481))
// CS Name: ::Initialization::SynchronizeState
struct CORDL_TYPE __Initialization__SynchronizeState : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Initialization__SynchronizeState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Initialization__SynchronizeState()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__Initialization__SynchronizeState, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::SynchronizeInputs
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10482))
// CS Name: ::Initialization::SynchronizeInputs
struct CORDL_TYPE __Initialization__SynchronizeInputs : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Initialization__SynchronizeInputs(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Initialization__SynchronizeInputs()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__Initialization__SynchronizeInputs, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::XREarlyUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10483))
// CS Name: ::Initialization::XREarlyUpdate
struct CORDL_TYPE __Initialization__XREarlyUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Initialization__XREarlyUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Initialization__XREarlyUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__Initialization__XREarlyUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: UnityEngine.PlayerLoop::Initialization
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10484))
// CS Name: ::UnityEngine.PlayerLoop::Initialization
struct CORDL_TYPE Initialization : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
using XREarlyUpdate = ::UnityEngine::PlayerLoop::__Initialization__XREarlyUpdate;

using SynchronizeInputs = ::UnityEngine::PlayerLoop::__Initialization__SynchronizeInputs;

using SynchronizeState = ::UnityEngine::PlayerLoop::__Initialization__SynchronizeState;

using AsyncUploadTimeSlicedUpdate = ::UnityEngine::PlayerLoop::__Initialization__AsyncUploadTimeSlicedUpdate;

using DirectorSampleTime = ::UnityEngine::PlayerLoop::__Initialization__DirectorSampleTime;

using UpdateCameraMotionVectors = ::UnityEngine::PlayerLoop::__Initialization__UpdateCameraMotionVectors;

using ProfilerStartFrame = ::UnityEngine::PlayerLoop::__Initialization__ProfilerStartFrame;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Initialization(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Initialization()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::Initialization, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::Initialization, "UnityEngine.PlayerLoop", "Initialization");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__Initialization__AsyncUploadTimeSlicedUpdate, "UnityEngine.PlayerLoop", "Initialization/AsyncUploadTimeSlicedUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__Initialization__DirectorSampleTime, "UnityEngine.PlayerLoop", "Initialization/DirectorSampleTime");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__Initialization__ProfilerStartFrame, "UnityEngine.PlayerLoop", "Initialization/ProfilerStartFrame");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__Initialization__SynchronizeInputs, "UnityEngine.PlayerLoop", "Initialization/SynchronizeInputs");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__Initialization__SynchronizeState, "UnityEngine.PlayerLoop", "Initialization/SynchronizeState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__Initialization__UpdateCameraMotionVectors, "UnityEngine.PlayerLoop", "Initialization/UpdateCameraMotionVectors");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__Initialization__XREarlyUpdate, "UnityEngine.PlayerLoop", "Initialization/XREarlyUpdate");
