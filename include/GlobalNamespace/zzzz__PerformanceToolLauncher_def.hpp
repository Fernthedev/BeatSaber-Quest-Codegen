#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PerformanceToolLauncher)
namespace GlobalNamespace {
class MainCamera;
}
namespace GlobalNamespace {
class IGamePause;
}
namespace GlobalNamespace {
struct __PerformanceToolLauncher__OverrideConfig;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
struct __PerformanceToolLauncher__Config;
}
namespace GlobalNamespace {
struct __PerformanceToolLauncher__Assets;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace GlobalNamespace {
class PerformanceRecorder;
}
namespace GlobalNamespace {
class PerformanceVisualizer;
}
namespace GlobalNamespace {
class BoolSO;
}
// Forward declare root types
namespace GlobalNamespace {
class PerformanceToolLauncher;
}
namespace GlobalNamespace {
struct __PerformanceToolLauncher__Assets;
}
namespace GlobalNamespace {
struct __PerformanceToolLauncher__Config;
}
namespace GlobalNamespace {
struct __PerformanceToolLauncher__OverrideConfig;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PerformanceToolLauncher);
MARK_VAL_T(::GlobalNamespace::__PerformanceToolLauncher__Assets);
MARK_VAL_T(::GlobalNamespace::__PerformanceToolLauncher__Config);
MARK_VAL_T(::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig);
// Type: ::Assets
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5948))
// CS Name: ::PerformanceToolLauncher::Assets
struct CORDL_TYPE __PerformanceToolLauncher__Assets : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field visualizer offset 0x0
 __declspec(property(get=__get_visualizer, put=__set_visualizer)) ::GlobalNamespace::PerformanceVisualizer*  visualizer;

/// @brief Field recorder offset 0x8
 __declspec(property(get=__get_recorder, put=__set_recorder)) ::GlobalNamespace::PerformanceRecorder*  recorder;

constexpr void __set_visualizer(::GlobalNamespace::PerformanceVisualizer*  value) ;

constexpr ::GlobalNamespace::PerformanceVisualizer* __get_visualizer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PerformanceVisualizer*> __get_visualizer() const;

constexpr void __set_recorder(::GlobalNamespace::PerformanceRecorder*  value) ;

constexpr ::GlobalNamespace::PerformanceRecorder* __get_recorder() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PerformanceRecorder*> __get_recorder() const;

// Ctor Parameters [CppParam { name: "visualizer", ty: "::GlobalNamespace::PerformanceVisualizer*", modifiers: "", def_value: None }, CppParam { name: "recorder", ty: "::GlobalNamespace::PerformanceRecorder*", modifiers: "", def_value: None }]
constexpr __PerformanceToolLauncher__Assets(::GlobalNamespace::PerformanceVisualizer*  visualizer, ::GlobalNamespace::PerformanceRecorder*  recorder) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PerformanceToolLauncher__Assets(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PerformanceToolLauncher__Assets()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PerformanceToolLauncher__Assets, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::Config
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5949))
// CS Name: ::PerformanceToolLauncher::Config
struct CORDL_TYPE __PerformanceToolLauncher__Config : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field enableRecording offset 0x0
 __declspec(property(get=__get_enableRecording, put=__set_enableRecording)) ::GlobalNamespace::BoolSO*  enableRecording;

/// @brief Field enableFpsVisualization offset 0x8
 __declspec(property(get=__get_enableFpsVisualization, put=__set_enableFpsVisualization)) ::GlobalNamespace::BoolSO*  enableFpsVisualization;

/// @brief Field enableMemoryVisualization offset 0x10
 __declspec(property(get=__get_enableMemoryVisualization, put=__set_enableMemoryVisualization)) ::GlobalNamespace::BoolSO*  enableMemoryVisualization;

constexpr void __set_enableRecording(::GlobalNamespace::BoolSO*  value) ;

constexpr ::GlobalNamespace::BoolSO* __get_enableRecording() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> __get_enableRecording() const;

constexpr void __set_enableFpsVisualization(::GlobalNamespace::BoolSO*  value) ;

constexpr ::GlobalNamespace::BoolSO* __get_enableFpsVisualization() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> __get_enableFpsVisualization() const;

constexpr void __set_enableMemoryVisualization(::GlobalNamespace::BoolSO*  value) ;

constexpr ::GlobalNamespace::BoolSO* __get_enableMemoryVisualization() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> __get_enableMemoryVisualization() const;

// Ctor Parameters [CppParam { name: "enableRecording", ty: "::GlobalNamespace::BoolSO*", modifiers: "", def_value: None }, CppParam { name: "enableFpsVisualization", ty: "::GlobalNamespace::BoolSO*", modifiers: "", def_value: None }, CppParam { name: "enableMemoryVisualization", ty: "::GlobalNamespace::BoolSO*", modifiers: "", def_value: None }]
constexpr __PerformanceToolLauncher__Config(::GlobalNamespace::BoolSO*  enableRecording, ::GlobalNamespace::BoolSO*  enableFpsVisualization, ::GlobalNamespace::BoolSO*  enableMemoryVisualization) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PerformanceToolLauncher__Config(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PerformanceToolLauncher__Config()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PerformanceToolLauncher__Config, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OverrideConfig
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5950))
// CS Name: ::PerformanceToolLauncher::OverrideConfig
struct CORDL_TYPE __PerformanceToolLauncher__OverrideConfig : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field enableRecording offset 0x0
 __declspec(property(get=__get_enableRecording, put=__set_enableRecording)) bool  enableRecording;

/// @brief Field minFpsWindow offset 0x4
 __declspec(property(get=__get_minFpsWindow, put=__set_minFpsWindow)) float_t  minFpsWindow;

static inline void setStaticF_kDefault(::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig  value) ;

static inline ::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig getStaticF_kDefault() ;

constexpr void __set_enableRecording(bool  value) ;

constexpr bool& __get_enableRecording() ;

constexpr bool const& __get_enableRecording() const;

constexpr void __set_minFpsWindow(float_t  value) ;

constexpr float_t& __get_minFpsWindow() ;

constexpr float_t const& __get_minFpsWindow() const;

// Ctor Parameters [CppParam { name: "enableRecording", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "minFpsWindow", ty: "float_t", modifiers: "", def_value: None }]
constexpr __PerformanceToolLauncher__OverrideConfig(bool  enableRecording, float_t  minFpsWindow) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PerformanceToolLauncher__OverrideConfig(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PerformanceToolLauncher__OverrideConfig()  = default;


// Fields

// Static field kDefault


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig, 0x8>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::PerformanceToolLauncher
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5951))
// CS Name: ::PerformanceToolLauncher*
class CORDL_TYPE PerformanceToolLauncher : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using OverrideConfig = ::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig;

using Config = ::GlobalNamespace::__PerformanceToolLauncher__Config;

using Assets = ::GlobalNamespace::__PerformanceToolLauncher__Assets;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _assets offset 0x18
 __declspec(property(get=__get__assets, put=__set__assets)) ::GlobalNamespace::__PerformanceToolLauncher__Assets  _assets;

/// @brief Field _config offset 0x28
 __declspec(property(get=__get__config, put=__set__config)) ::GlobalNamespace::__PerformanceToolLauncher__Config  _config;

constexpr void __set__assets(::GlobalNamespace::__PerformanceToolLauncher__Assets  value) ;

constexpr ::GlobalNamespace::__PerformanceToolLauncher__Assets& __get__assets() ;

constexpr ::GlobalNamespace::__PerformanceToolLauncher__Assets const& __get__assets() const;

constexpr void __set__config(::GlobalNamespace::__PerformanceToolLauncher__Config  value) ;

constexpr ::GlobalNamespace::__PerformanceToolLauncher__Config& __get__config() ;

constexpr ::GlobalNamespace::__PerformanceToolLauncher__Config const& __get__config() const;

/// @brief Method Initialize addr 0x2304c94 size 0x27c virtual false final false
inline void Initialize(::GlobalNamespace::MainCamera*  mainCamera, ::GlobalNamespace::IGamePause*  gamePause, ::GlobalNamespace::GameplayCoreSceneSetupData*  sceneSetupData, ::System::Nullable_1<::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig>  overrideConfig) ;

static inline ::GlobalNamespace::PerformanceToolLauncher* New_ctor() ;

/// @brief Method .ctor addr 0x2304f10 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PerformanceToolLauncher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PerformanceToolLauncher(PerformanceToolLauncher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PerformanceToolLauncher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PerformanceToolLauncher(PerformanceToolLauncher const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PerformanceToolLauncher()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerformanceToolLauncher, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PerformanceToolLauncher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerformanceToolLauncher*, "", "PerformanceToolLauncher");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PerformanceToolLauncher__Assets, "", "PerformanceToolLauncher/Assets");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PerformanceToolLauncher__Config, "", "PerformanceToolLauncher/Config");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PerformanceToolLauncher__OverrideConfig, "", "PerformanceToolLauncher/OverrideConfig");
