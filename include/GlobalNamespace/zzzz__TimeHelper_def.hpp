#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TimeHelper)
// Forward declare root types
namespace GlobalNamespace {
class TimeHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TimeHelper);
// Type: ::TimeHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14348))
// CS Name: ::TimeHelper*
class CORDL_TYPE TimeHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _accumulator offset 0x18
 __declspec(property(get=__get__accumulator, put=__set__accumulator)) float_t  _accumulator;

static inline void setStaticF__time_k__BackingField(float_t  value) ;

static inline float_t getStaticF__time_k__BackingField() ;

static inline void setStaticF__deltaTime_k__BackingField(float_t  value) ;

static inline float_t getStaticF__deltaTime_k__BackingField() ;

static inline void setStaticF__fixedDeltaTime_k__BackingField(float_t  value) ;

static inline float_t getStaticF__fixedDeltaTime_k__BackingField() ;

static inline void setStaticF__interpolationFactor_k__BackingField(float_t  value) ;

static inline float_t getStaticF__interpolationFactor_k__BackingField() ;

constexpr void __set__accumulator(float_t  value) ;

constexpr float_t& __get__accumulator() ;

constexpr float_t const& __get__accumulator() const;

/// @brief Method get_time addr 0x20f0890 size 0x48 virtual false final false
static inline float_t get_time() ;

/// @brief Method set_time addr 0x20f08d8 size 0x54 virtual false final false
static inline void set_time(float_t  value) ;

/// @brief Method get_deltaTime addr 0x20f092c size 0x48 virtual false final false
static inline float_t get_deltaTime() ;

/// @brief Method set_deltaTime addr 0x20f0974 size 0x54 virtual false final false
static inline void set_deltaTime(float_t  value) ;

/// @brief Method get_fixedDeltaTime addr 0x20f09c8 size 0x48 virtual false final false
static inline float_t get_fixedDeltaTime() ;

/// @brief Method set_fixedDeltaTime addr 0x20f0a10 size 0x54 virtual false final false
static inline void set_fixedDeltaTime(float_t  value) ;

/// @brief Method get_interpolationFactor addr 0x20f0a64 size 0x48 virtual false final false
static inline float_t get_interpolationFactor() ;

/// @brief Method set_interpolationFactor addr 0x20f0aac size 0x54 virtual false final false
static inline void set_interpolationFactor(float_t  value) ;

/// @brief Method Awake addr 0x20f0b00 size 0x94 virtual false final false
inline void Awake() ;

/// @brief Method FixedUpdate addr 0x20f0b94 size 0x94 virtual false final false
inline void FixedUpdate() ;

/// @brief Method Update addr 0x20f0c28 size 0x174 virtual false final false
inline void Update() ;

/// @brief Method __SetTime addr 0x20f0d9c size 0x4c virtual false final false
static inline void __SetTime(float_t  time) ;

static inline ::GlobalNamespace::TimeHelper* New_ctor() ;

/// @brief Method .ctor addr 0x20f0de8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TimeHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeHelper(TimeHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeHelper(TimeHelper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TimeHelper()  = default;
public:


// Fields

// Static field <time>k__BackingField

// Static field <deltaTime>k__BackingField

// Static field <fixedDeltaTime>k__BackingField

// Static field <interpolationFactor>k__BackingField


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TimeHelper, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TimeHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TimeHelper*, "", "TimeHelper");
