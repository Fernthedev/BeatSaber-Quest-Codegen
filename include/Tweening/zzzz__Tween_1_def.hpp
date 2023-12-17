#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Tweening/zzzz__Tween_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Tween_1)
namespace GlobalNamespace {
struct EaseType;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Tweening {
template<typename T>
class Tween_1;
}
namespace Tweening {
template<>
class Tween_1<::UnityEngine::Color>;
}
namespace Tweening {
template<>
class Tween_1<::UnityEngine::Vector2>;
}
namespace Tweening {
template<>
class Tween_1<::UnityEngine::Vector3>;
}
namespace Tweening {
template<::il2cpp_utils::il2cpp_reference_type T>
class Tween_1<T>;
}
namespace Tweening {
template<>
class Tween_1<float_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Tweening::Tween_1);
// Type: Tweening::Tween`1
// Type: Tweening::Tween`1
namespace Tweening {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16099)), TypeDefinitionIndex(TypeDefinitionIndex(16098))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(16099), inst: 412 })
// CS Name: ::Tweening::Tween`1<T>*
class CORDL_TYPE Tween_1<::UnityEngine::Vector3> : public ::Tweening::Tween {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::Tweening::Tween)]{};

/// @brief Field fromValue offset 0x44
 __declspec(property(get=__get_fromValue, put=__set_fromValue)) ::UnityEngine::Vector3  fromValue;

/// @brief Field toValue offset 0x50
 __declspec(property(get=__get_toValue, put=__set_toValue)) ::UnityEngine::Vector3  toValue;

/// @brief Field onUpdate offset 0x60
 __declspec(property(get=__get_onUpdate, put=__set_onUpdate)) ::System::Action_1<::UnityEngine::Vector3>*  onUpdate;

constexpr void __set_fromValue(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_fromValue() ;

constexpr ::UnityEngine::Vector3 const& __get_fromValue() const;

constexpr void __set_toValue(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_toValue() ;

constexpr ::UnityEngine::Vector3 const& __get_toValue() const;

constexpr void __set_onUpdate(::System::Action_1<::UnityEngine::Vector3>*  value) ;

constexpr ::System::Action_1<::UnityEngine::Vector3>* __get_onUpdate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Vector3>*> __get_onUpdate() const;

/// @brief Method OnSpawned addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void OnSpawned(::UnityEngine::Vector3  fromValue, ::UnityEngine::Vector3  toValue, ::System::Action_1<::UnityEngine::Vector3>*  onUpdate, float_t  duration, ::GlobalNamespace::EaseType  easeType, float_t  delay, ::Tweening::Tween_1<::UnityEngine::Vector3>*  t) ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void OnDespawned(::Tweening::Tween_1<::UnityEngine::Vector3>*  t) ;

static inline ::Tweening::Tween_1<::UnityEngine::Vector3>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::Tweening::Tween_1<::UnityEngine::Vector3>* New_ctor(::UnityEngine::Vector3  fromValue, ::UnityEngine::Vector3  toValue, ::System::Action_1<::UnityEngine::Vector3>*  onUpdate, float_t  duration, ::GlobalNamespace::EaseType  easeType, float_t  delay) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::Vector3  fromValue, ::UnityEngine::Vector3  toValue, ::System::Action_1<::UnityEngine::Vector3>*  onUpdate, float_t  duration, ::GlobalNamespace::EaseType  easeType, float_t  delay) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Init(::UnityEngine::Vector3  fromValue, ::UnityEngine::Vector3  toValue, ::System::Action_1<::UnityEngine::Vector3>*  onUpdate, float_t  duration, ::GlobalNamespace::EaseType  easeType, float_t  delay) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Update(float_t  currentTime) ;

/// @brief Method Sample addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Sample(float_t  t) ;

/// @brief Method ForceOnUpdate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ForceOnUpdate() ;

/// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Vector3 GetValue(float_t  t) ;

// Ctor Parameters [CppParam { name: "", ty: "Tween_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Tween_1(Tween_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Tween_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Tween_1(Tween_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Tween_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tweening
// Type: Tweening::Tween`1
namespace Tweening {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16099)), TypeDefinitionIndex(TypeDefinitionIndex(16098))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(16099), inst: 411 })
// CS Name: ::Tweening::Tween`1<T>*
class CORDL_TYPE Tween_1<::UnityEngine::Vector2> : public ::Tweening::Tween {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::Tweening::Tween)]{};

/// @brief Field fromValue offset 0x44
 __declspec(property(get=__get_fromValue, put=__set_fromValue)) ::UnityEngine::Vector2  fromValue;

/// @brief Field toValue offset 0x4c
 __declspec(property(get=__get_toValue, put=__set_toValue)) ::UnityEngine::Vector2  toValue;

/// @brief Field onUpdate offset 0x58
 __declspec(property(get=__get_onUpdate, put=__set_onUpdate)) ::System::Action_1<::UnityEngine::Vector2>*  onUpdate;

constexpr void __set_fromValue(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_fromValue() ;

constexpr ::UnityEngine::Vector2 const& __get_fromValue() const;

constexpr void __set_toValue(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_toValue() ;

constexpr ::UnityEngine::Vector2 const& __get_toValue() const;

constexpr void __set_onUpdate(::System::Action_1<::UnityEngine::Vector2>*  value) ;

constexpr ::System::Action_1<::UnityEngine::Vector2>* __get_onUpdate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Vector2>*> __get_onUpdate() const;

/// @brief Method OnSpawned addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void OnSpawned(::UnityEngine::Vector2  fromValue, ::UnityEngine::Vector2  toValue, ::System::Action_1<::UnityEngine::Vector2>*  onUpdate, float_t  duration, ::GlobalNamespace::EaseType  easeType, float_t  delay, ::Tweening::Tween_1<::UnityEngine::Vector2>*  t) ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void OnDespawned(::Tweening::Tween_1<::UnityEngine::Vector2>*  t) ;

static inline ::Tweening::Tween_1<::UnityEngine::Vector2>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::Tweening::Tween_1<::UnityEngine::Vector2>* New_ctor(::UnityEngine::Vector2  fromValue, ::UnityEngine::Vector2  toValue, ::System::Action_1<::UnityEngine::Vector2>*  onUpdate, float_t  duration, ::GlobalNamespace::EaseType  easeType, float_t  delay) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::Vector2  fromValue, ::UnityEngine::Vector2  toValue, ::System::Action_1<::UnityEngine::Vector2>*  onUpdate, float_t  duration, ::GlobalNamespace::EaseType  easeType, float_t  delay) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Init(::UnityEngine::Vector2  fromValue, ::UnityEngine::Vector2  toValue, ::System::Action_1<::UnityEngine::Vector2>*  onUpdate, float_t  duration, ::GlobalNamespace::EaseType  easeType, float_t  delay) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Update(float_t  currentTime) ;

/// @brief Method Sample addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Sample(float_t  t) ;

/// @brief Method ForceOnUpdate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ForceOnUpdate() ;

/// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Vector2 GetValue(float_t  t) ;

// Ctor Parameters [CppParam { name: "", ty: "Tween_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Tween_1(Tween_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Tween_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Tween_1(Tween_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Tween_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tweening
// Type: Tweening::Tween`1
namespace Tweening {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16099)), TypeDefinitionIndex(TypeDefinitionIndex(16098))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(16099), inst: 391 })
// CS Name: ::Tweening::Tween`1<T>*
class CORDL_TYPE Tween_1<float_t> : public ::Tweening::Tween {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::Tweening::Tween)]{};

/// @brief Field fromValue offset 0x44
 __declspec(property(get=__get_fromValue, put=__set_fromValue)) float_t  fromValue;

/// @brief Field toValue offset 0x48
 __declspec(property(get=__get_toValue, put=__set_toValue)) float_t  toValue;

/// @brief Field onUpdate offset 0x50
 __declspec(property(get=__get_onUpdate, put=__set_onUpdate)) ::System::Action_1<float_t>*  onUpdate;

constexpr void __set_fromValue(float_t  value) ;

constexpr float_t& __get_fromValue() ;

constexpr float_t const& __get_fromValue() const;

constexpr void __set_toValue(float_t  value) ;

constexpr float_t& __get_toValue() ;

constexpr float_t const& __get_toValue() const;

constexpr void __set_onUpdate(::System::Action_1<float_t>*  value) ;

constexpr ::System::Action_1<float_t>* __get_onUpdate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> __get_onUpdate() const;

/// @brief Method OnSpawned addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void OnSpawned(float_t  fromValue, float_t  toValue, ::System::Action_1<float_t>*  onUpdate, float_t  duration, ::GlobalNamespace::EaseType  easeType, float_t  delay, ::Tweening::Tween_1<float_t>*  t) ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void OnDespawned(::Tweening::Tween_1<float_t>*  t) ;

static inline ::Tweening::Tween_1<float_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::Tweening::Tween_1<float_t>* New_ctor(float_t  fromValue, float_t  toValue, ::System::Action_1<float_t>*  onUpdate, float_t  duration, ::GlobalNamespace::EaseType  easeType, float_t  delay) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(float_t  fromValue, float_t  toValue, ::System::Action_1<float_t>*  onUpdate, float_t  duration, ::GlobalNamespace::EaseType  easeType, float_t  delay) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Init(float_t  fromValue, float_t  toValue, ::System::Action_1<float_t>*  onUpdate, float_t  duration, ::GlobalNamespace::EaseType  easeType, float_t  delay) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Update(float_t  currentTime) ;

/// @brief Method Sample addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Sample(float_t  t) ;

/// @brief Method ForceOnUpdate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ForceOnUpdate() ;

/// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t GetValue(float_t  t) ;

// Ctor Parameters [CppParam { name: "", ty: "Tween_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Tween_1(Tween_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Tween_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Tween_1(Tween_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Tween_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tweening
// Type: Tweening::Tween`1
namespace Tweening {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16099)), TypeDefinitionIndex(TypeDefinitionIndex(16098))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(16099), inst: 293 })
// CS Name: ::Tweening::Tween`1<T>*
class CORDL_TYPE Tween_1<::UnityEngine::Color> : public ::Tweening::Tween {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::Tweening::Tween)]{};

/// @brief Field fromValue offset 0x44
 __declspec(property(get=__get_fromValue, put=__set_fromValue)) ::UnityEngine::Color  fromValue;

/// @brief Field toValue offset 0x54
 __declspec(property(get=__get_toValue, put=__set_toValue)) ::UnityEngine::Color  toValue;

/// @brief Field onUpdate offset 0x68
 __declspec(property(get=__get_onUpdate, put=__set_onUpdate)) ::System::Action_1<::UnityEngine::Color>*  onUpdate;

constexpr void __set_fromValue(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_fromValue() ;

constexpr ::UnityEngine::Color const& __get_fromValue() const;

constexpr void __set_toValue(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_toValue() ;

constexpr ::UnityEngine::Color const& __get_toValue() const;

constexpr void __set_onUpdate(::System::Action_1<::UnityEngine::Color>*  value) ;

constexpr ::System::Action_1<::UnityEngine::Color>* __get_onUpdate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Color>*> __get_onUpdate() const;

/// @brief Method OnSpawned addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void OnSpawned(::UnityEngine::Color  fromValue, ::UnityEngine::Color  toValue, ::System::Action_1<::UnityEngine::Color>*  onUpdate, float_t  duration, ::GlobalNamespace::EaseType  easeType, float_t  delay, ::Tweening::Tween_1<::UnityEngine::Color>*  t) ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void OnDespawned(::Tweening::Tween_1<::UnityEngine::Color>*  t) ;

static inline ::Tweening::Tween_1<::UnityEngine::Color>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::Tweening::Tween_1<::UnityEngine::Color>* New_ctor(::UnityEngine::Color  fromValue, ::UnityEngine::Color  toValue, ::System::Action_1<::UnityEngine::Color>*  onUpdate, float_t  duration, ::GlobalNamespace::EaseType  easeType, float_t  delay) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::Color  fromValue, ::UnityEngine::Color  toValue, ::System::Action_1<::UnityEngine::Color>*  onUpdate, float_t  duration, ::GlobalNamespace::EaseType  easeType, float_t  delay) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Init(::UnityEngine::Color  fromValue, ::UnityEngine::Color  toValue, ::System::Action_1<::UnityEngine::Color>*  onUpdate, float_t  duration, ::GlobalNamespace::EaseType  easeType, float_t  delay) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Update(float_t  currentTime) ;

/// @brief Method Sample addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Sample(float_t  t) ;

/// @brief Method ForceOnUpdate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ForceOnUpdate() ;

/// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Color GetValue(float_t  t) ;

// Ctor Parameters [CppParam { name: "", ty: "Tween_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Tween_1(Tween_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Tween_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Tween_1(Tween_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Tween_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tweening
// Type: Tweening::Tween`1
namespace Tweening {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16099)), TypeDefinitionIndex(TypeDefinitionIndex(16098))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(16099), inst: 2 })
// CS Name: ::Tweening::Tween`1<T>*
class CORDL_TYPE Tween_1<T> : public ::Tweening::Tween {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::Tweening::Tween)]{};

/// @brief Field fromValue offset 0x48
 __declspec(property(get=__get_fromValue, put=__set_fromValue)) T  fromValue;

/// @brief Field toValue offset 0x50
 __declspec(property(get=__get_toValue, put=__set_toValue)) T  toValue;

/// @brief Field onUpdate offset 0x58
 __declspec(property(get=__get_onUpdate, put=__set_onUpdate)) ::System::Action_1<T>*  onUpdate;

constexpr void __set_fromValue(T  value) ;

constexpr T& __get_fromValue() ;

constexpr T const& __get_fromValue() const;

constexpr void __set_toValue(T  value) ;

constexpr T& __get_toValue() ;

constexpr T const& __get_toValue() const;

constexpr void __set_onUpdate(::System::Action_1<T>*  value) ;

constexpr ::System::Action_1<T>* __get_onUpdate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> __get_onUpdate() const;

/// @brief Method OnSpawned addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void OnSpawned(T  fromValue, T  toValue, ::System::Action_1<T>*  onUpdate, float_t  duration, ::GlobalNamespace::EaseType  easeType, float_t  delay, ::Tweening::Tween_1<T>*  t) ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void OnDespawned(::Tweening::Tween_1<T>*  t) ;

static inline ::Tweening::Tween_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::Tweening::Tween_1<T>* New_ctor(T  fromValue, T  toValue, ::System::Action_1<T>*  onUpdate, float_t  duration, ::GlobalNamespace::EaseType  easeType, float_t  delay) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T  fromValue, T  toValue, ::System::Action_1<T>*  onUpdate, float_t  duration, ::GlobalNamespace::EaseType  easeType, float_t  delay) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Init(T  fromValue, T  toValue, ::System::Action_1<T>*  onUpdate, float_t  duration, ::GlobalNamespace::EaseType  easeType, float_t  delay) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Update(float_t  currentTime) ;

/// @brief Method Sample addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Sample(float_t  t) ;

/// @brief Method ForceOnUpdate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ForceOnUpdate() ;

/// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline T GetValue(float_t  t) ;

// Ctor Parameters [CppParam { name: "", ty: "Tween_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Tween_1(Tween_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Tween_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Tween_1(Tween_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Tween_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tweening
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Tweening::Tween_1, "Tweening", "Tween`1");
