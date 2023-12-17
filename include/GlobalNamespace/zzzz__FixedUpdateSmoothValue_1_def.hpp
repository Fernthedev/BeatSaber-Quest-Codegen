#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FixedUpdateSmoothValue_1)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class FixedUpdateSmoothValue_1;
}
namespace GlobalNamespace {
template<>
class FixedUpdateSmoothValue_1<::UnityEngine::Vector3>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class FixedUpdateSmoothValue_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::FixedUpdateSmoothValue_1);
// Type: ::FixedUpdateSmoothValue`1
// Type: ::FixedUpdateSmoothValue`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14333)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14333), inst: 412 })
// CS Name: ::FixedUpdateSmoothValue`1<T>*
class CORDL_TYPE FixedUpdateSmoothValue_1<::UnityEngine::Vector3> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _currentSmoothedValue offset 0x10
 __declspec(property(get=__get__currentSmoothedValue, put=__set__currentSmoothedValue)) ::UnityEngine::Vector3  _currentSmoothedValue;

/// @brief Field _prevSmoothedValue offset 0x1c
 __declspec(property(get=__get__prevSmoothedValue, put=__set__prevSmoothedValue)) ::UnityEngine::Vector3  _prevSmoothedValue;

/// @brief Field _smooth offset 0x28
 __declspec(property(get=__get__smooth, put=__set__smooth)) float_t  _smooth;

constexpr void __set__currentSmoothedValue(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__currentSmoothedValue() ;

constexpr ::UnityEngine::Vector3 const& __get__currentSmoothedValue() const;

constexpr void __set__prevSmoothedValue(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__prevSmoothedValue() ;

constexpr ::UnityEngine::Vector3 const& __get__prevSmoothedValue() const;

constexpr void __set__smooth(float_t  value) ;

constexpr float_t& __get__smooth() ;

constexpr float_t const& __get__smooth() const;

static inline ::GlobalNamespace::FixedUpdateSmoothValue_1<::UnityEngine::Vector3>* New_ctor(float_t  smooth) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(float_t  smooth) ;

/// @brief Method SetStartValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetStartValue(::UnityEngine::Vector3  value) ;

/// @brief Method FixedUpdate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void FixedUpdate(::UnityEngine::Vector3  value) ;

/// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector3 GetValue(float_t  interpolationFactor) ;

/// @brief Method Interpolate addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Vector3 Interpolate(::UnityEngine::Vector3  value0, ::UnityEngine::Vector3  value1, float_t  t) ;

// Ctor Parameters [CppParam { name: "", ty: "FixedUpdateSmoothValue_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FixedUpdateSmoothValue_1(FixedUpdateSmoothValue_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FixedUpdateSmoothValue_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FixedUpdateSmoothValue_1(FixedUpdateSmoothValue_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FixedUpdateSmoothValue_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::FixedUpdateSmoothValue`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14333))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14333), inst: 2 })
// CS Name: ::FixedUpdateSmoothValue`1<T>*
class CORDL_TYPE FixedUpdateSmoothValue_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _currentSmoothedValue offset 0x10
 __declspec(property(get=__get__currentSmoothedValue, put=__set__currentSmoothedValue)) T  _currentSmoothedValue;

/// @brief Field _prevSmoothedValue offset 0x18
 __declspec(property(get=__get__prevSmoothedValue, put=__set__prevSmoothedValue)) T  _prevSmoothedValue;

/// @brief Field _smooth offset 0x20
 __declspec(property(get=__get__smooth, put=__set__smooth)) float_t  _smooth;

constexpr void __set__currentSmoothedValue(T  value) ;

constexpr T& __get__currentSmoothedValue() ;

constexpr T const& __get__currentSmoothedValue() const;

constexpr void __set__prevSmoothedValue(T  value) ;

constexpr T& __get__prevSmoothedValue() ;

constexpr T const& __get__prevSmoothedValue() const;

constexpr void __set__smooth(float_t  value) ;

constexpr float_t& __get__smooth() ;

constexpr float_t const& __get__smooth() const;

static inline ::GlobalNamespace::FixedUpdateSmoothValue_1<T>* New_ctor(float_t  smooth) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(float_t  smooth) ;

/// @brief Method SetStartValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetStartValue(T  value) ;

/// @brief Method FixedUpdate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void FixedUpdate(T  value) ;

/// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline T GetValue(float_t  interpolationFactor) ;

/// @brief Method Interpolate addr 0x0 size 0xffffffffffffffff virtual true final false
inline T Interpolate(T  value0, T  value1, float_t  t) ;

// Ctor Parameters [CppParam { name: "", ty: "FixedUpdateSmoothValue_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FixedUpdateSmoothValue_1(FixedUpdateSmoothValue_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FixedUpdateSmoothValue_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FixedUpdateSmoothValue_1(FixedUpdateSmoothValue_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FixedUpdateSmoothValue_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::FixedUpdateSmoothValue_1, "", "FixedUpdateSmoothValue`1");
