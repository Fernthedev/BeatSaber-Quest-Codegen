#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(EarlyUpdate)
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__ClearLines;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__ProcessMouseInWindow;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__UpdateCanvasRectTransform;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__UpdateKinect;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__PerformanceAnalyticsUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__GpuTimestamp;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__DeliverIosPlatformEvents;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__UpdateStreamingManager;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__PlayerCleanupCachedData;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__UpdateInputManager;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__ScriptRunDelayedStartupFrame;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__PollHtcsPlayerConnection;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__PresentBeforeUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__ProcessRemoteInput;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__ResetFrameStatsAfterPresent;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__PollPlayerConnection;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__UpdateAsyncReadbackManager;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__RendererNotifyInvisible;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__UpdateMainGameViewRect;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__ClearIntermediateRenderers;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__UnityWebRequestUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__ExecuteMainThreadJobs;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__ARCoreUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__SpriteAtlasManagerUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__XRUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__PhysicsResetInterpolatedTransformPosition;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__TangoUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__AnalyticsCoreStatsUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__DispatchEventQueueEvents;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__UpdateTextureStreamingManager;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__UpdatePreloading;
}
// Forward declare root types
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__ARCoreUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__AnalyticsCoreStatsUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__ClearIntermediateRenderers;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__ClearLines;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__DeliverIosPlatformEvents;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__DispatchEventQueueEvents;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__ExecuteMainThreadJobs;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__GpuTimestamp;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__PerformanceAnalyticsUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__PhysicsResetInterpolatedTransformPosition;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__PlayerCleanupCachedData;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__PollHtcsPlayerConnection;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__PollPlayerConnection;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__PresentBeforeUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__ProcessMouseInWindow;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__ProcessRemoteInput;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__RendererNotifyInvisible;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__ResetFrameStatsAfterPresent;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__ScriptRunDelayedStartupFrame;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__SpriteAtlasManagerUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__TangoUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__UnityWebRequestUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__UpdateAsyncReadbackManager;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__UpdateCanvasRectTransform;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__UpdateInputManager;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__UpdateKinect;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__UpdateMainGameViewRect;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__UpdatePreloading;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__UpdateStreamingManager;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__UpdateTextureStreamingManager;
}
namespace UnityEngine::PlayerLoop {
struct __EarlyUpdate__XRUpdate;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__EarlyUpdate__ARCoreUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__EarlyUpdate__AnalyticsCoreStatsUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__EarlyUpdate__ClearIntermediateRenderers);
MARK_VAL_T(::UnityEngine::PlayerLoop::__EarlyUpdate__ClearLines);
MARK_VAL_T(::UnityEngine::PlayerLoop::__EarlyUpdate__DeliverIosPlatformEvents);
MARK_VAL_T(::UnityEngine::PlayerLoop::__EarlyUpdate__DispatchEventQueueEvents);
MARK_VAL_T(::UnityEngine::PlayerLoop::__EarlyUpdate__ExecuteMainThreadJobs);
MARK_VAL_T(::UnityEngine::PlayerLoop::__EarlyUpdate__GpuTimestamp);
MARK_VAL_T(::UnityEngine::PlayerLoop::__EarlyUpdate__PerformanceAnalyticsUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__EarlyUpdate__PhysicsResetInterpolatedTransformPosition);
MARK_VAL_T(::UnityEngine::PlayerLoop::__EarlyUpdate__PlayerCleanupCachedData);
MARK_VAL_T(::UnityEngine::PlayerLoop::__EarlyUpdate__PollHtcsPlayerConnection);
MARK_VAL_T(::UnityEngine::PlayerLoop::__EarlyUpdate__PollPlayerConnection);
MARK_VAL_T(::UnityEngine::PlayerLoop::__EarlyUpdate__PresentBeforeUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__EarlyUpdate__ProcessMouseInWindow);
MARK_VAL_T(::UnityEngine::PlayerLoop::__EarlyUpdate__ProcessRemoteInput);
MARK_VAL_T(::UnityEngine::PlayerLoop::__EarlyUpdate__RendererNotifyInvisible);
MARK_VAL_T(::UnityEngine::PlayerLoop::__EarlyUpdate__ResetFrameStatsAfterPresent);
MARK_VAL_T(::UnityEngine::PlayerLoop::__EarlyUpdate__ScriptRunDelayedStartupFrame);
MARK_VAL_T(::UnityEngine::PlayerLoop::__EarlyUpdate__SpriteAtlasManagerUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__EarlyUpdate__TangoUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__EarlyUpdate__UnityWebRequestUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__EarlyUpdate__UpdateAsyncReadbackManager);
MARK_VAL_T(::UnityEngine::PlayerLoop::__EarlyUpdate__UpdateCanvasRectTransform);
MARK_VAL_T(::UnityEngine::PlayerLoop::__EarlyUpdate__UpdateInputManager);
MARK_VAL_T(::UnityEngine::PlayerLoop::__EarlyUpdate__UpdateKinect);
MARK_VAL_T(::UnityEngine::PlayerLoop::__EarlyUpdate__UpdateMainGameViewRect);
MARK_VAL_T(::UnityEngine::PlayerLoop::__EarlyUpdate__UpdatePreloading);
MARK_VAL_T(::UnityEngine::PlayerLoop::__EarlyUpdate__UpdateStreamingManager);
MARK_VAL_T(::UnityEngine::PlayerLoop::__EarlyUpdate__UpdateTextureStreamingManager);
MARK_VAL_T(::UnityEngine::PlayerLoop::__EarlyUpdate__XRUpdate);
// Type: ::PollPlayerConnection
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10485))
// CS Name: ::EarlyUpdate::PollPlayerConnection
struct CORDL_TYPE __EarlyUpdate__PollPlayerConnection : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EarlyUpdate__PollPlayerConnection(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EarlyUpdate__PollPlayerConnection()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__EarlyUpdate__PollPlayerConnection, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::PollHtcsPlayerConnection
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10486))
// CS Name: ::EarlyUpdate::PollHtcsPlayerConnection
struct CORDL_TYPE __EarlyUpdate__PollHtcsPlayerConnection : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EarlyUpdate__PollHtcsPlayerConnection(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EarlyUpdate__PollHtcsPlayerConnection()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__EarlyUpdate__PollHtcsPlayerConnection, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::GpuTimestamp
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10487))
// CS Name: ::EarlyUpdate::GpuTimestamp
struct CORDL_TYPE __EarlyUpdate__GpuTimestamp : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EarlyUpdate__GpuTimestamp(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EarlyUpdate__GpuTimestamp()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__EarlyUpdate__GpuTimestamp, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::AnalyticsCoreStatsUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10488))
// CS Name: ::EarlyUpdate::AnalyticsCoreStatsUpdate
struct CORDL_TYPE __EarlyUpdate__AnalyticsCoreStatsUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EarlyUpdate__AnalyticsCoreStatsUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EarlyUpdate__AnalyticsCoreStatsUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__EarlyUpdate__AnalyticsCoreStatsUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::UnityWebRequestUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10489))
// CS Name: ::EarlyUpdate::UnityWebRequestUpdate
struct CORDL_TYPE __EarlyUpdate__UnityWebRequestUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EarlyUpdate__UnityWebRequestUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EarlyUpdate__UnityWebRequestUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__EarlyUpdate__UnityWebRequestUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::UpdateStreamingManager
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10490))
// CS Name: ::EarlyUpdate::UpdateStreamingManager
struct CORDL_TYPE __EarlyUpdate__UpdateStreamingManager : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EarlyUpdate__UpdateStreamingManager(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EarlyUpdate__UpdateStreamingManager()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__EarlyUpdate__UpdateStreamingManager, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::ExecuteMainThreadJobs
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10491))
// CS Name: ::EarlyUpdate::ExecuteMainThreadJobs
struct CORDL_TYPE __EarlyUpdate__ExecuteMainThreadJobs : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EarlyUpdate__ExecuteMainThreadJobs(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EarlyUpdate__ExecuteMainThreadJobs()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__EarlyUpdate__ExecuteMainThreadJobs, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::ProcessMouseInWindow
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10492))
// CS Name: ::EarlyUpdate::ProcessMouseInWindow
struct CORDL_TYPE __EarlyUpdate__ProcessMouseInWindow : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EarlyUpdate__ProcessMouseInWindow(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EarlyUpdate__ProcessMouseInWindow()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__EarlyUpdate__ProcessMouseInWindow, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::ClearIntermediateRenderers
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10493))
// CS Name: ::EarlyUpdate::ClearIntermediateRenderers
struct CORDL_TYPE __EarlyUpdate__ClearIntermediateRenderers : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EarlyUpdate__ClearIntermediateRenderers(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EarlyUpdate__ClearIntermediateRenderers()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__EarlyUpdate__ClearIntermediateRenderers, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::ClearLines
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10494))
// CS Name: ::EarlyUpdate::ClearLines
struct CORDL_TYPE __EarlyUpdate__ClearLines : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EarlyUpdate__ClearLines(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EarlyUpdate__ClearLines()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__EarlyUpdate__ClearLines, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::PresentBeforeUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10495))
// CS Name: ::EarlyUpdate::PresentBeforeUpdate
struct CORDL_TYPE __EarlyUpdate__PresentBeforeUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EarlyUpdate__PresentBeforeUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EarlyUpdate__PresentBeforeUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__EarlyUpdate__PresentBeforeUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::ResetFrameStatsAfterPresent
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10496))
// CS Name: ::EarlyUpdate::ResetFrameStatsAfterPresent
struct CORDL_TYPE __EarlyUpdate__ResetFrameStatsAfterPresent : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EarlyUpdate__ResetFrameStatsAfterPresent(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EarlyUpdate__ResetFrameStatsAfterPresent()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__EarlyUpdate__ResetFrameStatsAfterPresent, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::UpdateAsyncReadbackManager
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10497))
// CS Name: ::EarlyUpdate::UpdateAsyncReadbackManager
struct CORDL_TYPE __EarlyUpdate__UpdateAsyncReadbackManager : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EarlyUpdate__UpdateAsyncReadbackManager(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EarlyUpdate__UpdateAsyncReadbackManager()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__EarlyUpdate__UpdateAsyncReadbackManager, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::UpdateTextureStreamingManager
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10498))
// CS Name: ::EarlyUpdate::UpdateTextureStreamingManager
struct CORDL_TYPE __EarlyUpdate__UpdateTextureStreamingManager : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EarlyUpdate__UpdateTextureStreamingManager(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EarlyUpdate__UpdateTextureStreamingManager()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__EarlyUpdate__UpdateTextureStreamingManager, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::UpdatePreloading
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10499))
// CS Name: ::EarlyUpdate::UpdatePreloading
struct CORDL_TYPE __EarlyUpdate__UpdatePreloading : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EarlyUpdate__UpdatePreloading(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EarlyUpdate__UpdatePreloading()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__EarlyUpdate__UpdatePreloading, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::RendererNotifyInvisible
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10500))
// CS Name: ::EarlyUpdate::RendererNotifyInvisible
struct CORDL_TYPE __EarlyUpdate__RendererNotifyInvisible : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EarlyUpdate__RendererNotifyInvisible(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EarlyUpdate__RendererNotifyInvisible()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__EarlyUpdate__RendererNotifyInvisible, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::PlayerCleanupCachedData
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10501))
// CS Name: ::EarlyUpdate::PlayerCleanupCachedData
struct CORDL_TYPE __EarlyUpdate__PlayerCleanupCachedData : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EarlyUpdate__PlayerCleanupCachedData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EarlyUpdate__PlayerCleanupCachedData()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__EarlyUpdate__PlayerCleanupCachedData, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::UpdateMainGameViewRect
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10502))
// CS Name: ::EarlyUpdate::UpdateMainGameViewRect
struct CORDL_TYPE __EarlyUpdate__UpdateMainGameViewRect : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EarlyUpdate__UpdateMainGameViewRect(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EarlyUpdate__UpdateMainGameViewRect()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__EarlyUpdate__UpdateMainGameViewRect, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::UpdateCanvasRectTransform
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10503))
// CS Name: ::EarlyUpdate::UpdateCanvasRectTransform
struct CORDL_TYPE __EarlyUpdate__UpdateCanvasRectTransform : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EarlyUpdate__UpdateCanvasRectTransform(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EarlyUpdate__UpdateCanvasRectTransform()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__EarlyUpdate__UpdateCanvasRectTransform, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::UpdateInputManager
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10504))
// CS Name: ::EarlyUpdate::UpdateInputManager
struct CORDL_TYPE __EarlyUpdate__UpdateInputManager : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EarlyUpdate__UpdateInputManager(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EarlyUpdate__UpdateInputManager()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__EarlyUpdate__UpdateInputManager, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::ProcessRemoteInput
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10505))
// CS Name: ::EarlyUpdate::ProcessRemoteInput
struct CORDL_TYPE __EarlyUpdate__ProcessRemoteInput : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EarlyUpdate__ProcessRemoteInput(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EarlyUpdate__ProcessRemoteInput()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__EarlyUpdate__ProcessRemoteInput, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::XRUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10506))
// CS Name: ::EarlyUpdate::XRUpdate
struct CORDL_TYPE __EarlyUpdate__XRUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EarlyUpdate__XRUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EarlyUpdate__XRUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__EarlyUpdate__XRUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::ScriptRunDelayedStartupFrame
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10507))
// CS Name: ::EarlyUpdate::ScriptRunDelayedStartupFrame
struct CORDL_TYPE __EarlyUpdate__ScriptRunDelayedStartupFrame : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EarlyUpdate__ScriptRunDelayedStartupFrame(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EarlyUpdate__ScriptRunDelayedStartupFrame()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__EarlyUpdate__ScriptRunDelayedStartupFrame, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::UpdateKinect
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10508))
// CS Name: ::EarlyUpdate::UpdateKinect
struct CORDL_TYPE __EarlyUpdate__UpdateKinect : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EarlyUpdate__UpdateKinect(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EarlyUpdate__UpdateKinect()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__EarlyUpdate__UpdateKinect, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::DeliverIosPlatformEvents
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10509))
// CS Name: ::EarlyUpdate::DeliverIosPlatformEvents
struct CORDL_TYPE __EarlyUpdate__DeliverIosPlatformEvents : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EarlyUpdate__DeliverIosPlatformEvents(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EarlyUpdate__DeliverIosPlatformEvents()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__EarlyUpdate__DeliverIosPlatformEvents, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::DispatchEventQueueEvents
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10510))
// CS Name: ::EarlyUpdate::DispatchEventQueueEvents
struct CORDL_TYPE __EarlyUpdate__DispatchEventQueueEvents : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EarlyUpdate__DispatchEventQueueEvents(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EarlyUpdate__DispatchEventQueueEvents()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__EarlyUpdate__DispatchEventQueueEvents, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::PhysicsResetInterpolatedTransformPosition
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10511))
// CS Name: ::EarlyUpdate::PhysicsResetInterpolatedTransformPosition
struct CORDL_TYPE __EarlyUpdate__PhysicsResetInterpolatedTransformPosition : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EarlyUpdate__PhysicsResetInterpolatedTransformPosition(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EarlyUpdate__PhysicsResetInterpolatedTransformPosition()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__EarlyUpdate__PhysicsResetInterpolatedTransformPosition, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::SpriteAtlasManagerUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10512))
// CS Name: ::EarlyUpdate::SpriteAtlasManagerUpdate
struct CORDL_TYPE __EarlyUpdate__SpriteAtlasManagerUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EarlyUpdate__SpriteAtlasManagerUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EarlyUpdate__SpriteAtlasManagerUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__EarlyUpdate__SpriteAtlasManagerUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::TangoUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10513))
// CS Name: ::EarlyUpdate::TangoUpdate
struct CORDL_TYPE __EarlyUpdate__TangoUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EarlyUpdate__TangoUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EarlyUpdate__TangoUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__EarlyUpdate__TangoUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::ARCoreUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10514))
// CS Name: ::EarlyUpdate::ARCoreUpdate
struct CORDL_TYPE __EarlyUpdate__ARCoreUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EarlyUpdate__ARCoreUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EarlyUpdate__ARCoreUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__EarlyUpdate__ARCoreUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: ::PerformanceAnalyticsUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10515))
// CS Name: ::EarlyUpdate::PerformanceAnalyticsUpdate
struct CORDL_TYPE __EarlyUpdate__PerformanceAnalyticsUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __EarlyUpdate__PerformanceAnalyticsUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __EarlyUpdate__PerformanceAnalyticsUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__EarlyUpdate__PerformanceAnalyticsUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
// Type: UnityEngine.PlayerLoop::EarlyUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10516))
// CS Name: ::UnityEngine.PlayerLoop::EarlyUpdate
struct CORDL_TYPE EarlyUpdate : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
using PerformanceAnalyticsUpdate = ::UnityEngine::PlayerLoop::__EarlyUpdate__PerformanceAnalyticsUpdate;

using ARCoreUpdate = ::UnityEngine::PlayerLoop::__EarlyUpdate__ARCoreUpdate;

using TangoUpdate = ::UnityEngine::PlayerLoop::__EarlyUpdate__TangoUpdate;

using SpriteAtlasManagerUpdate = ::UnityEngine::PlayerLoop::__EarlyUpdate__SpriteAtlasManagerUpdate;

using PhysicsResetInterpolatedTransformPosition = ::UnityEngine::PlayerLoop::__EarlyUpdate__PhysicsResetInterpolatedTransformPosition;

using DispatchEventQueueEvents = ::UnityEngine::PlayerLoop::__EarlyUpdate__DispatchEventQueueEvents;

using DeliverIosPlatformEvents = ::UnityEngine::PlayerLoop::__EarlyUpdate__DeliverIosPlatformEvents;

using UpdateKinect = ::UnityEngine::PlayerLoop::__EarlyUpdate__UpdateKinect;

using ScriptRunDelayedStartupFrame = ::UnityEngine::PlayerLoop::__EarlyUpdate__ScriptRunDelayedStartupFrame;

using XRUpdate = ::UnityEngine::PlayerLoop::__EarlyUpdate__XRUpdate;

using ProcessRemoteInput = ::UnityEngine::PlayerLoop::__EarlyUpdate__ProcessRemoteInput;

using UpdateInputManager = ::UnityEngine::PlayerLoop::__EarlyUpdate__UpdateInputManager;

using UpdateCanvasRectTransform = ::UnityEngine::PlayerLoop::__EarlyUpdate__UpdateCanvasRectTransform;

using UpdateMainGameViewRect = ::UnityEngine::PlayerLoop::__EarlyUpdate__UpdateMainGameViewRect;

using PlayerCleanupCachedData = ::UnityEngine::PlayerLoop::__EarlyUpdate__PlayerCleanupCachedData;

using RendererNotifyInvisible = ::UnityEngine::PlayerLoop::__EarlyUpdate__RendererNotifyInvisible;

using UpdatePreloading = ::UnityEngine::PlayerLoop::__EarlyUpdate__UpdatePreloading;

using UpdateTextureStreamingManager = ::UnityEngine::PlayerLoop::__EarlyUpdate__UpdateTextureStreamingManager;

using UpdateAsyncReadbackManager = ::UnityEngine::PlayerLoop::__EarlyUpdate__UpdateAsyncReadbackManager;

using ResetFrameStatsAfterPresent = ::UnityEngine::PlayerLoop::__EarlyUpdate__ResetFrameStatsAfterPresent;

using PresentBeforeUpdate = ::UnityEngine::PlayerLoop::__EarlyUpdate__PresentBeforeUpdate;

using ClearLines = ::UnityEngine::PlayerLoop::__EarlyUpdate__ClearLines;

using ClearIntermediateRenderers = ::UnityEngine::PlayerLoop::__EarlyUpdate__ClearIntermediateRenderers;

using ProcessMouseInWindow = ::UnityEngine::PlayerLoop::__EarlyUpdate__ProcessMouseInWindow;

using ExecuteMainThreadJobs = ::UnityEngine::PlayerLoop::__EarlyUpdate__ExecuteMainThreadJobs;

using UpdateStreamingManager = ::UnityEngine::PlayerLoop::__EarlyUpdate__UpdateStreamingManager;

using UnityWebRequestUpdate = ::UnityEngine::PlayerLoop::__EarlyUpdate__UnityWebRequestUpdate;

using AnalyticsCoreStatsUpdate = ::UnityEngine::PlayerLoop::__EarlyUpdate__AnalyticsCoreStatsUpdate;

using GpuTimestamp = ::UnityEngine::PlayerLoop::__EarlyUpdate__GpuTimestamp;

using PollHtcsPlayerConnection = ::UnityEngine::PlayerLoop::__EarlyUpdate__PollHtcsPlayerConnection;

using PollPlayerConnection = ::UnityEngine::PlayerLoop::__EarlyUpdate__PollPlayerConnection;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit EarlyUpdate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 EarlyUpdate()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate, "UnityEngine.PlayerLoop", "EarlyUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__EarlyUpdate__ARCoreUpdate, "UnityEngine.PlayerLoop", "EarlyUpdate/ARCoreUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__EarlyUpdate__AnalyticsCoreStatsUpdate, "UnityEngine.PlayerLoop", "EarlyUpdate/AnalyticsCoreStatsUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__EarlyUpdate__ClearIntermediateRenderers, "UnityEngine.PlayerLoop", "EarlyUpdate/ClearIntermediateRenderers");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__EarlyUpdate__ClearLines, "UnityEngine.PlayerLoop", "EarlyUpdate/ClearLines");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__EarlyUpdate__DeliverIosPlatformEvents, "UnityEngine.PlayerLoop", "EarlyUpdate/DeliverIosPlatformEvents");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__EarlyUpdate__DispatchEventQueueEvents, "UnityEngine.PlayerLoop", "EarlyUpdate/DispatchEventQueueEvents");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__EarlyUpdate__ExecuteMainThreadJobs, "UnityEngine.PlayerLoop", "EarlyUpdate/ExecuteMainThreadJobs");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__EarlyUpdate__GpuTimestamp, "UnityEngine.PlayerLoop", "EarlyUpdate/GpuTimestamp");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__EarlyUpdate__PerformanceAnalyticsUpdate, "UnityEngine.PlayerLoop", "EarlyUpdate/PerformanceAnalyticsUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__EarlyUpdate__PhysicsResetInterpolatedTransformPosition, "UnityEngine.PlayerLoop", "EarlyUpdate/PhysicsResetInterpolatedTransformPosition");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__EarlyUpdate__PlayerCleanupCachedData, "UnityEngine.PlayerLoop", "EarlyUpdate/PlayerCleanupCachedData");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__EarlyUpdate__PollHtcsPlayerConnection, "UnityEngine.PlayerLoop", "EarlyUpdate/PollHtcsPlayerConnection");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__EarlyUpdate__PollPlayerConnection, "UnityEngine.PlayerLoop", "EarlyUpdate/PollPlayerConnection");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__EarlyUpdate__PresentBeforeUpdate, "UnityEngine.PlayerLoop", "EarlyUpdate/PresentBeforeUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__EarlyUpdate__ProcessMouseInWindow, "UnityEngine.PlayerLoop", "EarlyUpdate/ProcessMouseInWindow");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__EarlyUpdate__ProcessRemoteInput, "UnityEngine.PlayerLoop", "EarlyUpdate/ProcessRemoteInput");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__EarlyUpdate__RendererNotifyInvisible, "UnityEngine.PlayerLoop", "EarlyUpdate/RendererNotifyInvisible");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__EarlyUpdate__ResetFrameStatsAfterPresent, "UnityEngine.PlayerLoop", "EarlyUpdate/ResetFrameStatsAfterPresent");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__EarlyUpdate__ScriptRunDelayedStartupFrame, "UnityEngine.PlayerLoop", "EarlyUpdate/ScriptRunDelayedStartupFrame");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__EarlyUpdate__SpriteAtlasManagerUpdate, "UnityEngine.PlayerLoop", "EarlyUpdate/SpriteAtlasManagerUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__EarlyUpdate__TangoUpdate, "UnityEngine.PlayerLoop", "EarlyUpdate/TangoUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__EarlyUpdate__UnityWebRequestUpdate, "UnityEngine.PlayerLoop", "EarlyUpdate/UnityWebRequestUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__EarlyUpdate__UpdateAsyncReadbackManager, "UnityEngine.PlayerLoop", "EarlyUpdate/UpdateAsyncReadbackManager");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__EarlyUpdate__UpdateCanvasRectTransform, "UnityEngine.PlayerLoop", "EarlyUpdate/UpdateCanvasRectTransform");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__EarlyUpdate__UpdateInputManager, "UnityEngine.PlayerLoop", "EarlyUpdate/UpdateInputManager");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__EarlyUpdate__UpdateKinect, "UnityEngine.PlayerLoop", "EarlyUpdate/UpdateKinect");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__EarlyUpdate__UpdateMainGameViewRect, "UnityEngine.PlayerLoop", "EarlyUpdate/UpdateMainGameViewRect");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__EarlyUpdate__UpdatePreloading, "UnityEngine.PlayerLoop", "EarlyUpdate/UpdatePreloading");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__EarlyUpdate__UpdateStreamingManager, "UnityEngine.PlayerLoop", "EarlyUpdate/UpdateStreamingManager");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__EarlyUpdate__UpdateTextureStreamingManager, "UnityEngine.PlayerLoop", "EarlyUpdate/UpdateTextureStreamingManager");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__EarlyUpdate__XRUpdate, "UnityEngine.PlayerLoop", "EarlyUpdate/XRUpdate");
