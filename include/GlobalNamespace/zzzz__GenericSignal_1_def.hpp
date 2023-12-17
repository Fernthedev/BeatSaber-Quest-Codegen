#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Signal_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GenericSignal_1)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class GenericSignal_1;
}
namespace GlobalNamespace {
template<>
class GenericSignal_1<::UnityEngine::Color>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class GenericSignal_1<T>;
}
namespace GlobalNamespace {
template<>
class GenericSignal_1<bool>;
}
namespace GlobalNamespace {
template<>
class GenericSignal_1<float_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::GenericSignal_1);
// Type: ::GenericSignal`1
// Type: ::GenericSignal`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14395)), TypeDefinitionIndex(TypeDefinitionIndex(14394))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14394), inst: 391 })
// CS Name: ::GenericSignal`1<T>*
class CORDL_TYPE GenericSignal_1<float_t> : public ::GlobalNamespace::Signal {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::Signal)]{};

/// @brief Field _floatEvent offset 0x20
 __declspec(property(get=__get__floatEvent, put=__set__floatEvent)) ::System::Action_1<float_t>*  _floatEvent;

constexpr void __set__floatEvent(::System::Action_1<float_t>*  value) ;

constexpr ::System::Action_1<float_t>* __get__floatEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> __get__floatEvent() const;

/// @brief Method Raise addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Raise() ;

/// @brief Method Raise addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Raise(float_t  f) ;

/// @brief Method Subscribe addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Subscribe(::System::Action_1<float_t>*  foo) ;

/// @brief Method Unsubscribe addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Unsubscribe(::System::Action_1<float_t>*  foo) ;

static inline ::GlobalNamespace::GenericSignal_1<float_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericSignal_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericSignal_1(GenericSignal_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericSignal_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericSignal_1(GenericSignal_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericSignal_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GenericSignal`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14394)), TypeDefinitionIndex(TypeDefinitionIndex(14395))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14394), inst: 293 })
// CS Name: ::GenericSignal`1<T>*
class CORDL_TYPE GenericSignal_1<::UnityEngine::Color> : public ::GlobalNamespace::Signal {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::Signal)]{};

/// @brief Field _floatEvent offset 0x20
 __declspec(property(get=__get__floatEvent, put=__set__floatEvent)) ::System::Action_1<::UnityEngine::Color>*  _floatEvent;

constexpr void __set__floatEvent(::System::Action_1<::UnityEngine::Color>*  value) ;

constexpr ::System::Action_1<::UnityEngine::Color>* __get__floatEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Color>*> __get__floatEvent() const;

/// @brief Method Raise addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Raise() ;

/// @brief Method Raise addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Raise(::UnityEngine::Color  f) ;

/// @brief Method Subscribe addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Subscribe(::System::Action_1<::UnityEngine::Color>*  foo) ;

/// @brief Method Unsubscribe addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Unsubscribe(::System::Action_1<::UnityEngine::Color>*  foo) ;

static inline ::GlobalNamespace::GenericSignal_1<::UnityEngine::Color>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericSignal_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericSignal_1(GenericSignal_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericSignal_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericSignal_1(GenericSignal_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericSignal_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GenericSignal`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14394)), TypeDefinitionIndex(TypeDefinitionIndex(14395))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14394), inst: 105 })
// CS Name: ::GenericSignal`1<T>*
class CORDL_TYPE GenericSignal_1<bool> : public ::GlobalNamespace::Signal {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::Signal)]{};

/// @brief Field _floatEvent offset 0x20
 __declspec(property(get=__get__floatEvent, put=__set__floatEvent)) ::System::Action_1<bool>*  _floatEvent;

constexpr void __set__floatEvent(::System::Action_1<bool>*  value) ;

constexpr ::System::Action_1<bool>* __get__floatEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<bool>*> __get__floatEvent() const;

/// @brief Method Raise addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Raise() ;

/// @brief Method Raise addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Raise(bool  f) ;

/// @brief Method Subscribe addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Subscribe(::System::Action_1<bool>*  foo) ;

/// @brief Method Unsubscribe addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Unsubscribe(::System::Action_1<bool>*  foo) ;

static inline ::GlobalNamespace::GenericSignal_1<bool>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericSignal_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericSignal_1(GenericSignal_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericSignal_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericSignal_1(GenericSignal_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericSignal_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GenericSignal`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14394)), TypeDefinitionIndex(TypeDefinitionIndex(14395))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14394), inst: 2 })
// CS Name: ::GenericSignal`1<T>*
class CORDL_TYPE GenericSignal_1<T> : public ::GlobalNamespace::Signal {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::Signal)]{};

/// @brief Field _floatEvent offset 0x20
 __declspec(property(get=__get__floatEvent, put=__set__floatEvent)) ::System::Action_1<T>*  _floatEvent;

constexpr void __set__floatEvent(::System::Action_1<T>*  value) ;

constexpr ::System::Action_1<T>* __get__floatEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> __get__floatEvent() const;

/// @brief Method Raise addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Raise() ;

/// @brief Method Raise addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Raise(T  f) ;

/// @brief Method Subscribe addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Subscribe(::System::Action_1<T>*  foo) ;

/// @brief Method Unsubscribe addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Unsubscribe(::System::Action_1<T>*  foo) ;

static inline ::GlobalNamespace::GenericSignal_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GenericSignal_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericSignal_1(GenericSignal_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericSignal_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericSignal_1(GenericSignal_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GenericSignal_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::GenericSignal_1, "", "GenericSignal`1");
