#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystem)
namespace UnityEngine {
struct __ParticleSystem__EmissionModule;
}
namespace UnityEngine {
struct ParticleSystemStopBehavior;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct __ParticleSystem__SubEmittersModule;
}
namespace UnityEngine {
struct __ParticleSystem__MainModule;
}
namespace UnityEngine {
struct __ParticleSystem__MinMaxCurve;
}
namespace UnityEngine {
struct __ParticleSystem__MinMaxGradient;
}
namespace UnityEngine {
struct __ParticleSystem__Particle;
}
namespace UnityEngine {
struct __ParticleSystem__ShapeModule;
}
namespace UnityEngine {
struct __ParticleSystem__EmitParams;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct ParticleSystemCurveMode;
}
namespace UnityEngine {
struct ParticleSystemGradientMode;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct __ParticleSystem__EmissionModule;
}
namespace UnityEngine {
struct __ParticleSystem__EmitParams;
}
namespace UnityEngine {
struct __ParticleSystem__MainModule;
}
namespace UnityEngine {
struct __ParticleSystem__MinMaxCurve;
}
namespace UnityEngine {
struct __ParticleSystem__MinMaxGradient;
}
namespace UnityEngine {
struct __ParticleSystem__Particle;
}
namespace UnityEngine {
struct __ParticleSystem__ShapeModule;
}
namespace UnityEngine {
struct __ParticleSystem__SubEmittersModule;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ParticleSystem);
MARK_VAL_T(::UnityEngine::__ParticleSystem__EmissionModule);
MARK_VAL_T(::UnityEngine::__ParticleSystem__EmitParams);
MARK_VAL_T(::UnityEngine::__ParticleSystem__MainModule);
MARK_VAL_T(::UnityEngine::__ParticleSystem__MinMaxCurve);
MARK_VAL_T(::UnityEngine::__ParticleSystem__MinMaxGradient);
MARK_VAL_T(::UnityEngine::__ParticleSystem__Particle);
MARK_VAL_T(::UnityEngine::__ParticleSystem__ShapeModule);
MARK_VAL_T(::UnityEngine::__ParticleSystem__SubEmittersModule);
// Type: ::MainModule
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15882))
// CS Name: ::ParticleSystem::MainModule
struct CORDL_TYPE __ParticleSystem__MainModule : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ParticleSystem offset 0x0
 __declspec(property(get=__get_m_ParticleSystem, put=__set_m_ParticleSystem)) ::UnityEngine::ParticleSystem*  m_ParticleSystem;

 __declspec(property(get=get_duration)) float_t  duration;

 __declspec(property(get=get_loop)) bool  loop;

 __declspec(property(put=set_startLifetime)) ::UnityEngine::__ParticleSystem__MinMaxCurve  startLifetime;

 __declspec(property(put=set_startSpeed)) ::UnityEngine::__ParticleSystem__MinMaxCurve  startSpeed;

 __declspec(property(get=get_startSpeedMultiplier, put=set_startSpeedMultiplier)) float_t  startSpeedMultiplier;

 __declspec(property(get=get_startColor, put=set_startColor)) ::UnityEngine::__ParticleSystem__MinMaxGradient  startColor;

 __declspec(property(put=set_simulationSpeed)) float_t  simulationSpeed;

 __declspec(property(get=get_maxParticles, put=set_maxParticles)) int32_t  maxParticles;

constexpr void __set_m_ParticleSystem(::UnityEngine::ParticleSystem*  value) ;

constexpr ::UnityEngine::ParticleSystem* __get_m_ParticleSystem() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> __get_m_ParticleSystem() const;

/// @brief Method .ctor addr 0x2d10d9c size 0x8 virtual false final false
inline void _ctor(::UnityEngine::ParticleSystem*  particleSystem) ;

/// @brief Method get_duration addr 0x2d10fb4 size 0x3c virtual false final false
inline float_t get_duration() ;

/// @brief Method get_loop addr 0x2d1102c size 0x3c virtual false final false
inline bool get_loop() ;

/// @brief Method set_startLifetime addr 0x2d110a4 size 0x44 virtual false final false
inline void set_startLifetime(::UnityEngine::__ParticleSystem__MinMaxCurve  value) ;

/// @brief Method set_startSpeed addr 0x2d1112c size 0x44 virtual false final false
inline void set_startSpeed(::UnityEngine::__ParticleSystem__MinMaxCurve  value) ;

/// @brief Method get_startSpeedMultiplier addr 0x2d111b4 size 0x3c virtual false final false
inline float_t get_startSpeedMultiplier() ;

/// @brief Method set_startSpeedMultiplier addr 0x2d1122c size 0x4c virtual false final false
inline void set_startSpeedMultiplier(float_t  value) ;

/// @brief Method get_startColor addr 0x2d112c4 size 0x78 virtual false final false
inline ::UnityEngine::__ParticleSystem__MinMaxGradient get_startColor() ;

/// @brief Method set_startColor addr 0x2d11380 size 0x44 virtual false final false
inline void set_startColor(::UnityEngine::__ParticleSystem__MinMaxGradient  value) ;

/// @brief Method set_simulationSpeed addr 0x2d11408 size 0x4c virtual false final false
inline void set_simulationSpeed(float_t  value) ;

/// @brief Method get_maxParticles addr 0x2d114a0 size 0x3c virtual false final false
inline int32_t get_maxParticles() ;

/// @brief Method set_maxParticles addr 0x2d11518 size 0x44 virtual false final false
inline void set_maxParticles(int32_t  value) ;

/// @brief Method get_duration_Injected addr 0x2d10ff0 size 0x3c virtual false final false
static inline float_t get_duration_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule>  _unity_self) ;

/// @brief Method get_loop_Injected addr 0x2d11068 size 0x3c virtual false final false
static inline bool get_loop_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule>  _unity_self) ;

/// @brief Method set_startLifetime_Injected addr 0x2d110e8 size 0x44 virtual false final false
static inline void set_startLifetime_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule>  _unity_self, ByRef<::UnityEngine::__ParticleSystem__MinMaxCurve>  value) ;

/// @brief Method set_startSpeed_Injected addr 0x2d11170 size 0x44 virtual false final false
static inline void set_startSpeed_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule>  _unity_self, ByRef<::UnityEngine::__ParticleSystem__MinMaxCurve>  value) ;

/// @brief Method get_startSpeedMultiplier_Injected addr 0x2d111f0 size 0x3c virtual false final false
static inline float_t get_startSpeedMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule>  _unity_self) ;

/// @brief Method set_startSpeedMultiplier_Injected addr 0x2d11278 size 0x4c virtual false final false
static inline void set_startSpeedMultiplier_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule>  _unity_self, float_t  value) ;

/// @brief Method get_startColor_Injected addr 0x2d1133c size 0x44 virtual false final false
static inline void get_startColor_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule>  _unity_self, ByRef<::UnityEngine::__ParticleSystem__MinMaxGradient>  ret) ;

/// @brief Method set_startColor_Injected addr 0x2d113c4 size 0x44 virtual false final false
static inline void set_startColor_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule>  _unity_self, ByRef<::UnityEngine::__ParticleSystem__MinMaxGradient>  value) ;

/// @brief Method set_simulationSpeed_Injected addr 0x2d11454 size 0x4c virtual false final false
static inline void set_simulationSpeed_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule>  _unity_self, float_t  value) ;

/// @brief Method get_maxParticles_Injected addr 0x2d114dc size 0x3c virtual false final false
static inline int32_t get_maxParticles_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule>  _unity_self) ;

/// @brief Method set_maxParticles_Injected addr 0x2d1155c size 0x44 virtual false final false
static inline void set_maxParticles_Injected(ByRef<::UnityEngine::__ParticleSystem__MainModule>  _unity_self, int32_t  value) ;

// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityEngine::ParticleSystem*", modifiers: "", def_value: None }]
constexpr __ParticleSystem__MainModule(::UnityEngine::ParticleSystem*  m_ParticleSystem) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ParticleSystem__MainModule(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ParticleSystem__MainModule()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__MainModule, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine
// Type: ::EmissionModule
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15883))
// CS Name: ::ParticleSystem::EmissionModule
struct CORDL_TYPE __ParticleSystem__EmissionModule : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ParticleSystem offset 0x0
 __declspec(property(get=__get_m_ParticleSystem, put=__set_m_ParticleSystem)) ::UnityEngine::ParticleSystem*  m_ParticleSystem;

 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

constexpr void __set_m_ParticleSystem(::UnityEngine::ParticleSystem*  value) ;

constexpr ::UnityEngine::ParticleSystem* __get_m_ParticleSystem() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> __get_m_ParticleSystem() const;

/// @brief Method .ctor addr 0x2d10da8 size 0x8 virtual false final false
inline void _ctor(::UnityEngine::ParticleSystem*  particleSystem) ;

/// @brief Method get_enabled addr 0x2d115a0 size 0x3c virtual false final false
inline bool get_enabled() ;

/// @brief Method set_enabled addr 0x2d11618 size 0x44 virtual false final false
inline void set_enabled(bool  value) ;

/// @brief Method get_enabled_Injected addr 0x2d115dc size 0x3c virtual false final false
static inline bool get_enabled_Injected(ByRef<::UnityEngine::__ParticleSystem__EmissionModule>  _unity_self) ;

/// @brief Method set_enabled_Injected addr 0x2d1165c size 0x44 virtual false final false
static inline void set_enabled_Injected(ByRef<::UnityEngine::__ParticleSystem__EmissionModule>  _unity_self, bool  value) ;

// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityEngine::ParticleSystem*", modifiers: "", def_value: None }]
constexpr __ParticleSystem__EmissionModule(::UnityEngine::ParticleSystem*  m_ParticleSystem) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ParticleSystem__EmissionModule(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ParticleSystem__EmissionModule()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__EmissionModule, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine
// Type: ::ShapeModule
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15884))
// CS Name: ::ParticleSystem::ShapeModule
struct CORDL_TYPE __ParticleSystem__ShapeModule : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ParticleSystem offset 0x0
 __declspec(property(get=__get_m_ParticleSystem, put=__set_m_ParticleSystem)) ::UnityEngine::ParticleSystem*  m_ParticleSystem;

 __declspec(property(get=get_meshRenderer, put=set_meshRenderer)) ::UnityEngine::MeshRenderer*  meshRenderer;

 __declspec(property(put=set_rotation)) ::UnityEngine::Vector3  rotation;

constexpr void __set_m_ParticleSystem(::UnityEngine::ParticleSystem*  value) ;

constexpr ::UnityEngine::ParticleSystem* __get_m_ParticleSystem() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> __get_m_ParticleSystem() const;

/// @brief Method .ctor addr 0x2d10db4 size 0x8 virtual false final false
inline void _ctor(::UnityEngine::ParticleSystem*  particleSystem) ;

/// @brief Method get_meshRenderer addr 0x2d116a0 size 0x3c virtual false final false
inline ::UnityEngine::MeshRenderer* get_meshRenderer() ;

/// @brief Method set_meshRenderer addr 0x2d11718 size 0x44 virtual false final false
inline void set_meshRenderer(::UnityEngine::MeshRenderer*  value) ;

/// @brief Method set_rotation addr 0x2d117a0 size 0x54 virtual false final false
inline void set_rotation(::UnityEngine::Vector3  value) ;

/// @brief Method get_meshRenderer_Injected addr 0x2d116dc size 0x3c virtual false final false
static inline ::UnityEngine::MeshRenderer* get_meshRenderer_Injected(ByRef<::UnityEngine::__ParticleSystem__ShapeModule>  _unity_self) ;

/// @brief Method set_meshRenderer_Injected addr 0x2d1175c size 0x44 virtual false final false
static inline void set_meshRenderer_Injected(ByRef<::UnityEngine::__ParticleSystem__ShapeModule>  _unity_self, ::UnityEngine::MeshRenderer*  value) ;

/// @brief Method set_rotation_Injected addr 0x2d117f4 size 0x44 virtual false final false
static inline void set_rotation_Injected(ByRef<::UnityEngine::__ParticleSystem__ShapeModule>  _unity_self, ByRef<::UnityEngine::Vector3>  value) ;

// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityEngine::ParticleSystem*", modifiers: "", def_value: None }]
constexpr __ParticleSystem__ShapeModule(::UnityEngine::ParticleSystem*  m_ParticleSystem) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ParticleSystem__ShapeModule(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ParticleSystem__ShapeModule()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__ShapeModule, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine
// Type: ::SubEmittersModule
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15885))
// CS Name: ::ParticleSystem::SubEmittersModule
struct CORDL_TYPE __ParticleSystem__SubEmittersModule : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ParticleSystem offset 0x0
 __declspec(property(get=__get_m_ParticleSystem, put=__set_m_ParticleSystem)) ::UnityEngine::ParticleSystem*  m_ParticleSystem;

 __declspec(property(get=get_subEmittersCount)) int32_t  subEmittersCount;

constexpr void __set_m_ParticleSystem(::UnityEngine::ParticleSystem*  value) ;

constexpr ::UnityEngine::ParticleSystem* __get_m_ParticleSystem() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> __get_m_ParticleSystem() const;

/// @brief Method .ctor addr 0x2d10dc0 size 0x8 virtual false final false
inline void _ctor(::UnityEngine::ParticleSystem*  particleSystem) ;

/// @brief Method get_subEmittersCount addr 0x2d11838 size 0x3c virtual false final false
inline int32_t get_subEmittersCount() ;

/// @brief Method GetSubEmitterSystem addr 0x2d118b0 size 0x44 virtual false final false
inline ::UnityEngine::ParticleSystem* GetSubEmitterSystem(int32_t  index) ;

/// @brief Method get_subEmittersCount_Injected addr 0x2d11874 size 0x3c virtual false final false
static inline int32_t get_subEmittersCount_Injected(ByRef<::UnityEngine::__ParticleSystem__SubEmittersModule>  _unity_self) ;

/// @brief Method GetSubEmitterSystem_Injected addr 0x2d118f4 size 0x44 virtual false final false
static inline ::UnityEngine::ParticleSystem* GetSubEmitterSystem_Injected(ByRef<::UnityEngine::__ParticleSystem__SubEmittersModule>  _unity_self, int32_t  index) ;

// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityEngine::ParticleSystem*", modifiers: "", def_value: None }]
constexpr __ParticleSystem__SubEmittersModule(::UnityEngine::ParticleSystem*  m_ParticleSystem) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ParticleSystem__SubEmittersModule(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ParticleSystem__SubEmittersModule()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__SubEmittersModule, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine
// Type: ::MinMaxCurve
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15886))
// CS Name: ::ParticleSystem::MinMaxCurve
struct CORDL_TYPE __ParticleSystem__MinMaxCurve : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_Mode offset 0x0
 __declspec(property(get=__get_m_Mode, put=__set_m_Mode)) ::UnityEngine::ParticleSystemCurveMode  m_Mode;

/// @brief Field m_CurveMultiplier offset 0x4
 __declspec(property(get=__get_m_CurveMultiplier, put=__set_m_CurveMultiplier)) float_t  m_CurveMultiplier;

/// @brief Field m_CurveMin offset 0x8
 __declspec(property(get=__get_m_CurveMin, put=__set_m_CurveMin)) ::UnityEngine::AnimationCurve*  m_CurveMin;

/// @brief Field m_CurveMax offset 0x10
 __declspec(property(get=__get_m_CurveMax, put=__set_m_CurveMax)) ::UnityEngine::AnimationCurve*  m_CurveMax;

/// @brief Field m_ConstantMin offset 0x18
 __declspec(property(get=__get_m_ConstantMin, put=__set_m_ConstantMin)) float_t  m_ConstantMin;

/// @brief Field m_ConstantMax offset 0x1c
 __declspec(property(get=__get_m_ConstantMax, put=__set_m_ConstantMax)) float_t  m_ConstantMax;

 __declspec(property(put=set_constantMax)) float_t  constantMax;

 __declspec(property(put=set_constantMin)) float_t  constantMin;

constexpr void __set_m_Mode(::UnityEngine::ParticleSystemCurveMode  value) ;

constexpr ::UnityEngine::ParticleSystemCurveMode& __get_m_Mode() ;

constexpr ::UnityEngine::ParticleSystemCurveMode const& __get_m_Mode() const;

constexpr void __set_m_CurveMultiplier(float_t  value) ;

constexpr float_t& __get_m_CurveMultiplier() ;

constexpr float_t const& __get_m_CurveMultiplier() const;

constexpr void __set_m_CurveMin(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get_m_CurveMin() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get_m_CurveMin() const;

constexpr void __set_m_CurveMax(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get_m_CurveMax() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get_m_CurveMax() const;

constexpr void __set_m_ConstantMin(float_t  value) ;

constexpr float_t& __get_m_ConstantMin() ;

constexpr float_t const& __get_m_ConstantMin() const;

constexpr void __set_m_ConstantMax(float_t  value) ;

constexpr float_t& __get_m_ConstantMax() ;

constexpr float_t const& __get_m_ConstantMax() const;

/// @brief Method .ctor addr 0x2d11938 size 0x14 virtual false final false
inline void _ctor(float_t  constant) ;

/// @brief Method .ctor addr 0x2d1194c size 0x1c virtual false final false
inline void _ctor(float_t  min, float_t  max) ;

/// @brief Method set_constantMax addr 0x2d11968 size 0x8 virtual false final false
inline void set_constantMax(float_t  value) ;

/// @brief Method set_constantMin addr 0x2d11970 size 0x8 virtual false final false
inline void set_constantMin(float_t  value) ;

/// @brief Method op_Implicit addr 0x2d11978 size 0x14 virtual false final false
static inline ::UnityEngine::__ParticleSystem__MinMaxCurve op_Implicit___UnityEngine____ParticleSystem__MinMaxCurve(float_t  constant) ;

// Ctor Parameters [CppParam { name: "m_Mode", ty: "::UnityEngine::ParticleSystemCurveMode", modifiers: "", def_value: None }, CppParam { name: "m_CurveMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_CurveMin", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: None }, CppParam { name: "m_CurveMax", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: None }, CppParam { name: "m_ConstantMin", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_ConstantMax", ty: "float_t", modifiers: "", def_value: None }]
constexpr __ParticleSystem__MinMaxCurve(::UnityEngine::ParticleSystemCurveMode  m_Mode, float_t  m_CurveMultiplier, ::UnityEngine::AnimationCurve*  m_CurveMin, ::UnityEngine::AnimationCurve*  m_CurveMax, float_t  m_ConstantMin, float_t  m_ConstantMax) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ParticleSystem__MinMaxCurve(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ParticleSystem__MinMaxCurve()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__MinMaxCurve, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine
// Type: ::MinMaxGradient
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15887))
// CS Name: ::ParticleSystem::MinMaxGradient
struct CORDL_TYPE __ParticleSystem__MinMaxGradient : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field m_Mode offset 0x0
 __declspec(property(get=__get_m_Mode, put=__set_m_Mode)) ::UnityEngine::ParticleSystemGradientMode  m_Mode;

/// @brief Field m_GradientMin offset 0x8
 __declspec(property(get=__get_m_GradientMin, put=__set_m_GradientMin)) ::UnityEngine::Gradient*  m_GradientMin;

/// @brief Field m_GradientMax offset 0x10
 __declspec(property(get=__get_m_GradientMax, put=__set_m_GradientMax)) ::UnityEngine::Gradient*  m_GradientMax;

/// @brief Field m_ColorMin offset 0x18
 __declspec(property(get=__get_m_ColorMin, put=__set_m_ColorMin)) ::UnityEngine::Color  m_ColorMin;

/// @brief Field m_ColorMax offset 0x28
 __declspec(property(get=__get_m_ColorMax, put=__set_m_ColorMax)) ::UnityEngine::Color  m_ColorMax;

 __declspec(property(get=get_color)) ::UnityEngine::Color  color;

constexpr void __set_m_Mode(::UnityEngine::ParticleSystemGradientMode  value) ;

constexpr ::UnityEngine::ParticleSystemGradientMode& __get_m_Mode() ;

constexpr ::UnityEngine::ParticleSystemGradientMode const& __get_m_Mode() const;

constexpr void __set_m_GradientMin(::UnityEngine::Gradient*  value) ;

constexpr ::UnityEngine::Gradient* __get_m_GradientMin() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Gradient*> __get_m_GradientMin() const;

constexpr void __set_m_GradientMax(::UnityEngine::Gradient*  value) ;

constexpr ::UnityEngine::Gradient* __get_m_GradientMax() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Gradient*> __get_m_GradientMax() const;

constexpr void __set_m_ColorMin(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_m_ColorMin() ;

constexpr ::UnityEngine::Color const& __get_m_ColorMin() const;

constexpr void __set_m_ColorMax(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_m_ColorMax() ;

constexpr ::UnityEngine::Color const& __get_m_ColorMax() const;

/// @brief Method .ctor addr 0x2d1198c size 0x1c virtual false final false
inline void _ctor(::UnityEngine::Color  color) ;

/// @brief Method get_color addr 0x2d119a8 size 0xc virtual false final false
inline ::UnityEngine::Color get_color() ;

/// @brief Method op_Implicit addr 0x2d119b4 size 0x1c virtual false final false
static inline ::UnityEngine::__ParticleSystem__MinMaxGradient op_Implicit___UnityEngine____ParticleSystem__MinMaxGradient(::UnityEngine::Color  color) ;

// Ctor Parameters [CppParam { name: "m_Mode", ty: "::UnityEngine::ParticleSystemGradientMode", modifiers: "", def_value: None }, CppParam { name: "m_GradientMin", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None }, CppParam { name: "m_GradientMax", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None }, CppParam { name: "m_ColorMin", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "m_ColorMax", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
constexpr __ParticleSystem__MinMaxGradient(::UnityEngine::ParticleSystemGradientMode  m_Mode, ::UnityEngine::Gradient*  m_GradientMin, ::UnityEngine::Gradient*  m_GradientMax, ::UnityEngine::Color  m_ColorMin, ::UnityEngine::Color  m_ColorMax) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ParticleSystem__MinMaxGradient(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ParticleSystem__MinMaxGradient()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__MinMaxGradient, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine
// Type: ::Particle
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15888))
// CS Name: ::ParticleSystem::Particle
struct CORDL_TYPE __ParticleSystem__Particle : public ::bs_hook::ValueTypeWrapper<0x84> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x84};

/// @brief Field m_Position offset 0x0
 __declspec(property(get=__get_m_Position, put=__set_m_Position)) ::UnityEngine::Vector3  m_Position;

/// @brief Field m_Velocity offset 0xc
 __declspec(property(get=__get_m_Velocity, put=__set_m_Velocity)) ::UnityEngine::Vector3  m_Velocity;

/// @brief Field m_AnimatedVelocity offset 0x18
 __declspec(property(get=__get_m_AnimatedVelocity, put=__set_m_AnimatedVelocity)) ::UnityEngine::Vector3  m_AnimatedVelocity;

/// @brief Field m_InitialVelocity offset 0x24
 __declspec(property(get=__get_m_InitialVelocity, put=__set_m_InitialVelocity)) ::UnityEngine::Vector3  m_InitialVelocity;

/// @brief Field m_AxisOfRotation offset 0x30
 __declspec(property(get=__get_m_AxisOfRotation, put=__set_m_AxisOfRotation)) ::UnityEngine::Vector3  m_AxisOfRotation;

/// @brief Field m_Rotation offset 0x3c
 __declspec(property(get=__get_m_Rotation, put=__set_m_Rotation)) ::UnityEngine::Vector3  m_Rotation;

/// @brief Field m_AngularVelocity offset 0x48
 __declspec(property(get=__get_m_AngularVelocity, put=__set_m_AngularVelocity)) ::UnityEngine::Vector3  m_AngularVelocity;

/// @brief Field m_StartSize offset 0x54
 __declspec(property(get=__get_m_StartSize, put=__set_m_StartSize)) ::UnityEngine::Vector3  m_StartSize;

/// @brief Field m_StartColor offset 0x60
 __declspec(property(get=__get_m_StartColor, put=__set_m_StartColor)) ::UnityEngine::Color32  m_StartColor;

/// @brief Field m_RandomSeed offset 0x64
 __declspec(property(get=__get_m_RandomSeed, put=__set_m_RandomSeed)) uint32_t  m_RandomSeed;

/// @brief Field m_ParentRandomSeed offset 0x68
 __declspec(property(get=__get_m_ParentRandomSeed, put=__set_m_ParentRandomSeed)) uint32_t  m_ParentRandomSeed;

/// @brief Field m_Lifetime offset 0x6c
 __declspec(property(get=__get_m_Lifetime, put=__set_m_Lifetime)) float_t  m_Lifetime;

/// @brief Field m_StartLifetime offset 0x70
 __declspec(property(get=__get_m_StartLifetime, put=__set_m_StartLifetime)) float_t  m_StartLifetime;

/// @brief Field m_MeshIndex offset 0x74
 __declspec(property(get=__get_m_MeshIndex, put=__set_m_MeshIndex)) int32_t  m_MeshIndex;

/// @brief Field m_EmitAccumulator0 offset 0x78
 __declspec(property(get=__get_m_EmitAccumulator0, put=__set_m_EmitAccumulator0)) float_t  m_EmitAccumulator0;

/// @brief Field m_EmitAccumulator1 offset 0x7c
 __declspec(property(get=__get_m_EmitAccumulator1, put=__set_m_EmitAccumulator1)) float_t  m_EmitAccumulator1;

/// @brief Field m_Flags offset 0x80
 __declspec(property(get=__get_m_Flags, put=__set_m_Flags)) uint32_t  m_Flags;

 __declspec(property(put=set_position)) ::UnityEngine::Vector3  position;

 __declspec(property(put=set_velocity)) ::UnityEngine::Vector3  velocity;

 __declspec(property(put=set_remainingLifetime)) float_t  remainingLifetime;

 __declspec(property(put=set_startLifetime)) float_t  startLifetime;

 __declspec(property(put=set_startColor)) ::UnityEngine::Color32  startColor;

 __declspec(property(put=set_randomSeed)) uint32_t  randomSeed;

 __declspec(property(put=set_startSize)) float_t  startSize;

 __declspec(property(put=set_rotation3D)) ::UnityEngine::Vector3  rotation3D;

 __declspec(property(put=set_angularVelocity3D)) ::UnityEngine::Vector3  angularVelocity3D;

 __declspec(property(put=set_lifetime)) float_t  lifetime;

constexpr void __set_m_Position(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_Position() ;

constexpr ::UnityEngine::Vector3 const& __get_m_Position() const;

constexpr void __set_m_Velocity(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_Velocity() ;

constexpr ::UnityEngine::Vector3 const& __get_m_Velocity() const;

constexpr void __set_m_AnimatedVelocity(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_AnimatedVelocity() ;

constexpr ::UnityEngine::Vector3 const& __get_m_AnimatedVelocity() const;

constexpr void __set_m_InitialVelocity(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_InitialVelocity() ;

constexpr ::UnityEngine::Vector3 const& __get_m_InitialVelocity() const;

constexpr void __set_m_AxisOfRotation(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_AxisOfRotation() ;

constexpr ::UnityEngine::Vector3 const& __get_m_AxisOfRotation() const;

constexpr void __set_m_Rotation(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_Rotation() ;

constexpr ::UnityEngine::Vector3 const& __get_m_Rotation() const;

constexpr void __set_m_AngularVelocity(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_AngularVelocity() ;

constexpr ::UnityEngine::Vector3 const& __get_m_AngularVelocity() const;

constexpr void __set_m_StartSize(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_StartSize() ;

constexpr ::UnityEngine::Vector3 const& __get_m_StartSize() const;

constexpr void __set_m_StartColor(::UnityEngine::Color32  value) ;

constexpr ::UnityEngine::Color32& __get_m_StartColor() ;

constexpr ::UnityEngine::Color32 const& __get_m_StartColor() const;

constexpr void __set_m_RandomSeed(uint32_t  value) ;

constexpr uint32_t& __get_m_RandomSeed() ;

constexpr uint32_t const& __get_m_RandomSeed() const;

constexpr void __set_m_ParentRandomSeed(uint32_t  value) ;

constexpr uint32_t& __get_m_ParentRandomSeed() ;

constexpr uint32_t const& __get_m_ParentRandomSeed() const;

constexpr void __set_m_Lifetime(float_t  value) ;

constexpr float_t& __get_m_Lifetime() ;

constexpr float_t const& __get_m_Lifetime() const;

constexpr void __set_m_StartLifetime(float_t  value) ;

constexpr float_t& __get_m_StartLifetime() ;

constexpr float_t const& __get_m_StartLifetime() const;

constexpr void __set_m_MeshIndex(int32_t  value) ;

constexpr int32_t& __get_m_MeshIndex() ;

constexpr int32_t const& __get_m_MeshIndex() const;

constexpr void __set_m_EmitAccumulator0(float_t  value) ;

constexpr float_t& __get_m_EmitAccumulator0() ;

constexpr float_t const& __get_m_EmitAccumulator0() const;

constexpr void __set_m_EmitAccumulator1(float_t  value) ;

constexpr float_t& __get_m_EmitAccumulator1() ;

constexpr float_t const& __get_m_EmitAccumulator1() const;

constexpr void __set_m_Flags(uint32_t  value) ;

constexpr uint32_t& __get_m_Flags() ;

constexpr uint32_t const& __get_m_Flags() const;

/// @brief Method set_position addr 0x2d10ecc size 0xc virtual false final false
inline void set_position(::UnityEngine::Vector3  value) ;

/// @brief Method set_velocity addr 0x2d10ed8 size 0xc virtual false final false
inline void set_velocity(::UnityEngine::Vector3  value) ;

/// @brief Method set_remainingLifetime addr 0x2d119d0 size 0x8 virtual false final false
inline void set_remainingLifetime(float_t  value) ;

/// @brief Method set_startLifetime addr 0x2d10eec size 0x8 virtual false final false
inline void set_startLifetime(float_t  value) ;

/// @brief Method set_startColor addr 0x2d10f58 size 0x8 virtual false final false
inline void set_startColor(::UnityEngine::Color32  value) ;

/// @brief Method set_randomSeed addr 0x2d10f60 size 0x8 virtual false final false
inline void set_randomSeed(uint32_t  value) ;

/// @brief Method set_startSize addr 0x2d10ef4 size 0xc virtual false final false
inline void set_startSize(float_t  value) ;

/// @brief Method set_rotation3D addr 0x2d10f00 size 0x2c virtual false final false
inline void set_rotation3D(::UnityEngine::Vector3  value) ;

/// @brief Method set_angularVelocity3D addr 0x2d10f2c size 0x2c virtual false final false
inline void set_angularVelocity3D(::UnityEngine::Vector3  value) ;

/// @brief Method set_lifetime addr 0x2d10ee4 size 0x8 virtual false final false
inline void set_lifetime(float_t  value) ;

// Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_AnimatedVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_InitialVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_AxisOfRotation", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Rotation", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_AngularVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_StartSize", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_StartColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "m_RandomSeed", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_ParentRandomSeed", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Lifetime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_StartLifetime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_MeshIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_EmitAccumulator0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_EmitAccumulator1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr __ParticleSystem__Particle(::UnityEngine::Vector3  m_Position, ::UnityEngine::Vector3  m_Velocity, ::UnityEngine::Vector3  m_AnimatedVelocity, ::UnityEngine::Vector3  m_InitialVelocity, ::UnityEngine::Vector3  m_AxisOfRotation, ::UnityEngine::Vector3  m_Rotation, ::UnityEngine::Vector3  m_AngularVelocity, ::UnityEngine::Vector3  m_StartSize, ::UnityEngine::Color32  m_StartColor, uint32_t  m_RandomSeed, uint32_t  m_ParentRandomSeed, float_t  m_Lifetime, float_t  m_StartLifetime, int32_t  m_MeshIndex, float_t  m_EmitAccumulator0, float_t  m_EmitAccumulator1, uint32_t  m_Flags) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ParticleSystem__Particle(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x84>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ParticleSystem__Particle()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__Particle, 0x84>, "Size mismatch!");

} // namespace end def UnityEngine
// Type: ::EmitParams
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15889))
// CS Name: ::ParticleSystem::EmitParams
struct CORDL_TYPE __ParticleSystem__EmitParams : public ::bs_hook::ValueTypeWrapper<0x90> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field m_Particle offset 0x0
 __declspec(property(get=__get_m_Particle, put=__set_m_Particle)) ::UnityEngine::__ParticleSystem__Particle  m_Particle;

/// @brief Field m_PositionSet offset 0x84
 __declspec(property(get=__get_m_PositionSet, put=__set_m_PositionSet)) bool  m_PositionSet;

/// @brief Field m_VelocitySet offset 0x85
 __declspec(property(get=__get_m_VelocitySet, put=__set_m_VelocitySet)) bool  m_VelocitySet;

/// @brief Field m_AxisOfRotationSet offset 0x86
 __declspec(property(get=__get_m_AxisOfRotationSet, put=__set_m_AxisOfRotationSet)) bool  m_AxisOfRotationSet;

/// @brief Field m_RotationSet offset 0x87
 __declspec(property(get=__get_m_RotationSet, put=__set_m_RotationSet)) bool  m_RotationSet;

/// @brief Field m_AngularVelocitySet offset 0x88
 __declspec(property(get=__get_m_AngularVelocitySet, put=__set_m_AngularVelocitySet)) bool  m_AngularVelocitySet;

/// @brief Field m_StartSizeSet offset 0x89
 __declspec(property(get=__get_m_StartSizeSet, put=__set_m_StartSizeSet)) bool  m_StartSizeSet;

/// @brief Field m_StartColorSet offset 0x8a
 __declspec(property(get=__get_m_StartColorSet, put=__set_m_StartColorSet)) bool  m_StartColorSet;

/// @brief Field m_RandomSeedSet offset 0x8b
 __declspec(property(get=__get_m_RandomSeedSet, put=__set_m_RandomSeedSet)) bool  m_RandomSeedSet;

/// @brief Field m_StartLifetimeSet offset 0x8c
 __declspec(property(get=__get_m_StartLifetimeSet, put=__set_m_StartLifetimeSet)) bool  m_StartLifetimeSet;

/// @brief Field m_MeshIndexSet offset 0x8d
 __declspec(property(get=__get_m_MeshIndexSet, put=__set_m_MeshIndexSet)) bool  m_MeshIndexSet;

/// @brief Field m_ApplyShapeToPosition offset 0x8e
 __declspec(property(get=__get_m_ApplyShapeToPosition, put=__set_m_ApplyShapeToPosition)) bool  m_ApplyShapeToPosition;

 __declspec(property(put=set_position)) ::UnityEngine::Vector3  position;

 __declspec(property(put=set_applyShapeToPosition)) bool  applyShapeToPosition;

 __declspec(property(put=set_rotation3D)) ::UnityEngine::Vector3  rotation3D;

 __declspec(property(put=set_startColor)) ::UnityEngine::Color32  startColor;

constexpr void __set_m_Particle(::UnityEngine::__ParticleSystem__Particle  value) ;

constexpr ::UnityEngine::__ParticleSystem__Particle& __get_m_Particle() ;

constexpr ::UnityEngine::__ParticleSystem__Particle const& __get_m_Particle() const;

constexpr void __set_m_PositionSet(bool  value) ;

constexpr bool& __get_m_PositionSet() ;

constexpr bool const& __get_m_PositionSet() const;

constexpr void __set_m_VelocitySet(bool  value) ;

constexpr bool& __get_m_VelocitySet() ;

constexpr bool const& __get_m_VelocitySet() const;

constexpr void __set_m_AxisOfRotationSet(bool  value) ;

constexpr bool& __get_m_AxisOfRotationSet() ;

constexpr bool const& __get_m_AxisOfRotationSet() const;

constexpr void __set_m_RotationSet(bool  value) ;

constexpr bool& __get_m_RotationSet() ;

constexpr bool const& __get_m_RotationSet() const;

constexpr void __set_m_AngularVelocitySet(bool  value) ;

constexpr bool& __get_m_AngularVelocitySet() ;

constexpr bool const& __get_m_AngularVelocitySet() const;

constexpr void __set_m_StartSizeSet(bool  value) ;

constexpr bool& __get_m_StartSizeSet() ;

constexpr bool const& __get_m_StartSizeSet() const;

constexpr void __set_m_StartColorSet(bool  value) ;

constexpr bool& __get_m_StartColorSet() ;

constexpr bool const& __get_m_StartColorSet() const;

constexpr void __set_m_RandomSeedSet(bool  value) ;

constexpr bool& __get_m_RandomSeedSet() ;

constexpr bool const& __get_m_RandomSeedSet() const;

constexpr void __set_m_StartLifetimeSet(bool  value) ;

constexpr bool& __get_m_StartLifetimeSet() ;

constexpr bool const& __get_m_StartLifetimeSet() const;

constexpr void __set_m_MeshIndexSet(bool  value) ;

constexpr bool& __get_m_MeshIndexSet() ;

constexpr bool const& __get_m_MeshIndexSet() const;

constexpr void __set_m_ApplyShapeToPosition(bool  value) ;

constexpr bool& __get_m_ApplyShapeToPosition() ;

constexpr bool const& __get_m_ApplyShapeToPosition() const;

/// @brief Method set_position addr 0x2d119d8 size 0x14 virtual false final false
inline void set_position(::UnityEngine::Vector3  value) ;

/// @brief Method set_applyShapeToPosition addr 0x2d119ec size 0xc virtual false final false
inline void set_applyShapeToPosition(bool  value) ;

/// @brief Method set_rotation3D addr 0x2d119f8 size 0x34 virtual false final false
inline void set_rotation3D(::UnityEngine::Vector3  value) ;

/// @brief Method set_startColor addr 0x2d11a2c size 0x10 virtual false final false
inline void set_startColor(::UnityEngine::Color32  value) ;

// Ctor Parameters [CppParam { name: "m_Particle", ty: "::UnityEngine::__ParticleSystem__Particle", modifiers: "", def_value: None }, CppParam { name: "m_PositionSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_VelocitySet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_AxisOfRotationSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_RotationSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_AngularVelocitySet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_StartSizeSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_StartColorSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_RandomSeedSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_StartLifetimeSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_MeshIndexSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_ApplyShapeToPosition", ty: "bool", modifiers: "", def_value: None }]
constexpr __ParticleSystem__EmitParams(::UnityEngine::__ParticleSystem__Particle  m_Particle, bool  m_PositionSet, bool  m_VelocitySet, bool  m_AxisOfRotationSet, bool  m_RotationSet, bool  m_AngularVelocitySet, bool  m_StartSizeSet, bool  m_StartColorSet, bool  m_RandomSeedSet, bool  m_StartLifetimeSet, bool  m_MeshIndexSet, bool  m_ApplyShapeToPosition) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ParticleSystem__EmitParams(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x90>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ParticleSystem__EmitParams()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ParticleSystem__EmitParams, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine
// Type: UnityEngine::ParticleSystem
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10238))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15890))
// CS Name: ::UnityEngine::ParticleSystem*
class CORDL_TYPE ParticleSystem : public ::UnityEngine::Component {
public:
// Declarations
using EmitParams = ::UnityEngine::__ParticleSystem__EmitParams;

using Particle = ::UnityEngine::__ParticleSystem__Particle;

using MinMaxGradient = ::UnityEngine::__ParticleSystem__MinMaxGradient;

using MinMaxCurve = ::UnityEngine::__ParticleSystem__MinMaxCurve;

using SubEmittersModule = ::UnityEngine::__ParticleSystem__SubEmittersModule;

using ShapeModule = ::UnityEngine::__ParticleSystem__ShapeModule;

using EmissionModule = ::UnityEngine::__ParticleSystem__EmissionModule;

using MainModule = ::UnityEngine::__ParticleSystem__MainModule;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::Component)]{};

 __declspec(property(get=get_particleCount)) int32_t  particleCount;

 __declspec(property(get=get_time)) float_t  time;

 __declspec(property(put=set_randomSeed)) uint32_t  randomSeed;

 __declspec(property(get=get_useAutoRandomSeed, put=set_useAutoRandomSeed)) bool  useAutoRandomSeed;

 __declspec(property(get=get_main)) ::UnityEngine::__ParticleSystem__MainModule  main;

 __declspec(property(get=get_emission)) ::UnityEngine::__ParticleSystem__EmissionModule  emission;

 __declspec(property(get=get_shape)) ::UnityEngine::__ParticleSystem__ShapeModule  shape;

 __declspec(property(get=get_subEmitters)) ::UnityEngine::__ParticleSystem__SubEmittersModule  subEmitters;

/// @brief Method get_particleCount addr 0x2d10640 size 0x3c virtual false final false
inline int32_t get_particleCount() ;

/// @brief Method get_time addr 0x2d1067c size 0x3c virtual false final false
inline float_t get_time() ;

/// @brief Method set_randomSeed addr 0x2d106b8 size 0x44 virtual false final false
inline void set_randomSeed(uint32_t  value) ;

/// @brief Method get_useAutoRandomSeed addr 0x2d106fc size 0x3c virtual false final false
inline bool get_useAutoRandomSeed() ;

/// @brief Method set_useAutoRandomSeed addr 0x2d10738 size 0x44 virtual false final false
inline void set_useAutoRandomSeed(bool  value) ;

/// @brief Method SetParticles addr 0x2d1077c size 0x5c virtual false final false
inline void SetParticles(ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle,::Array<::UnityEngine::__ParticleSystem__Particle>*>>  particles, int32_t  size, int32_t  offset) ;

/// @brief Method SetParticles addr 0x2d107d8 size 0x58 virtual false final false
inline void SetParticles(ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle,::Array<::UnityEngine::__ParticleSystem__Particle>*>>  particles, int32_t  size) ;

/// @brief Method GetParticles addr 0x2d10830 size 0x5c virtual false final false
inline int32_t GetParticles(ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle,::Array<::UnityEngine::__ParticleSystem__Particle>*>>  particles, int32_t  size, int32_t  offset) ;

/// @brief Method GetParticles addr 0x2d1088c size 0x58 virtual false final false
inline int32_t GetParticles(ByRef<::ArrayW<::UnityEngine::__ParticleSystem__Particle,::Array<::UnityEngine::__ParticleSystem__Particle>*>>  particles, int32_t  size) ;

/// @brief Method Simulate addr 0x2d108e4 size 0x6c virtual false final false
inline void Simulate(float_t  t, bool  withChildren, bool  restart, bool  fixedTimeStep) ;

/// @brief Method Simulate addr 0x2d10950 size 0x68 virtual false final false
inline void Simulate(float_t  t, bool  withChildren, bool  restart) ;

/// @brief Method Play addr 0x2d109b8 size 0x44 virtual false final false
inline void Play(bool  withChildren) ;

/// @brief Method Play addr 0x2d109fc size 0x40 virtual false final false
inline void Play() ;

/// @brief Method Pause addr 0x2d10a3c size 0x44 virtual false final false
inline void Pause(bool  withChildren) ;

/// @brief Method Pause addr 0x2d10a80 size 0x40 virtual false final false
inline void Pause() ;

/// @brief Method Stop addr 0x2d10ac0 size 0x54 virtual false final false
inline void Stop(bool  withChildren, ::UnityEngine::ParticleSystemStopBehavior  stopBehavior) ;

/// @brief Method Stop addr 0x2d10b14 size 0x48 virtual false final false
inline void Stop(bool  withChildren) ;

/// @brief Method Stop addr 0x2d10b5c size 0x44 virtual false final false
inline void Stop() ;

/// @brief Method Clear addr 0x2d10ba0 size 0x44 virtual false final false
inline void Clear(bool  withChildren) ;

/// @brief Method Clear addr 0x2d10be4 size 0x40 virtual false final false
inline void Clear() ;

/// @brief Method Emit addr 0x2d10c24 size 0x44 virtual false final false
inline void Emit(int32_t  count) ;

/// @brief Method Emit_Internal addr 0x2d10c68 size 0x44 virtual false final false
inline void Emit_Internal(int32_t  count) ;

/// @brief Method Emit addr 0x2d10cac size 0x54 virtual false final false
inline void Emit(::UnityEngine::__ParticleSystem__EmitParams  emitParams, int32_t  count) ;

/// @brief Method EmitOld_Internal addr 0x2d10d54 size 0x44 virtual false final false
inline void EmitOld_Internal(ByRef<::UnityEngine::__ParticleSystem__Particle>  particle) ;

/// @brief Method get_main addr 0x2d10d98 size 0x4 virtual false final false
inline ::UnityEngine::__ParticleSystem__MainModule get_main() ;

/// @brief Method get_emission addr 0x2d10da4 size 0x4 virtual false final false
inline ::UnityEngine::__ParticleSystem__EmissionModule get_emission() ;

/// @brief Method get_shape addr 0x2d10db0 size 0x4 virtual false final false
inline ::UnityEngine::__ParticleSystem__ShapeModule get_shape() ;

/// @brief Method get_subEmitters addr 0x2d10dbc size 0x4 virtual false final false
inline ::UnityEngine::__ParticleSystem__SubEmittersModule get_subEmitters() ;

/// @brief Method Emit addr 0x2d10dc8 size 0x104 virtual false final false
inline void Emit(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  velocity, float_t  size, float_t  lifetime, ::UnityEngine::Color32  color) ;

/// @brief Method Emit addr 0x2d10f68 size 0x44 virtual false final false
inline void Emit(::UnityEngine::__ParticleSystem__Particle  particle) ;

static inline ::UnityEngine::ParticleSystem* New_ctor() ;

/// @brief Method .ctor addr 0x2d10fac size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method Emit_Injected addr 0x2d10d00 size 0x54 virtual false final false
inline void Emit_Injected(ByRef<::UnityEngine::__ParticleSystem__EmitParams>  emitParams, int32_t  count) ;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ParticleSystem(ParticleSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParticleSystem(ParticleSystem const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ParticleSystem()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystem, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::ParticleSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem*, "UnityEngine", "ParticleSystem");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__EmissionModule, "UnityEngine", "ParticleSystem/EmissionModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__EmitParams, "UnityEngine", "ParticleSystem/EmitParams");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__MainModule, "UnityEngine", "ParticleSystem/MainModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__MinMaxCurve, "UnityEngine", "ParticleSystem/MinMaxCurve");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__MinMaxGradient, "UnityEngine", "ParticleSystem/MinMaxGradient");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__Particle, "UnityEngine", "ParticleSystem/Particle");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__ShapeModule, "UnityEngine", "ParticleSystem/ShapeModule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ParticleSystem__SubEmittersModule, "UnityEngine", "ParticleSystem/SubEmittersModule");
