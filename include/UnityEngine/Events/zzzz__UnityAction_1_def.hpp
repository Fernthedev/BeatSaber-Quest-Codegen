#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityAction_1)
namespace UnityEngine {
struct Color;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem {
struct __InputAction__CallbackContext;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace UnityEngine::Events {
template<>
class UnityAction_1<::UnityEngine::Color>;
}
namespace UnityEngine::Events {
template<>
class UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>;
}
namespace UnityEngine::Events {
template<>
class UnityAction_1<::UnityEngine::SceneManagement::Scene>;
}
namespace UnityEngine::Events {
template<>
class UnityAction_1<::UnityEngine::Vector2>;
}
namespace UnityEngine::Events {
template<::cordl_internals::is_or_is_backed_by<int32_t> T0>
class UnityAction_1<T0>;
}
namespace UnityEngine::Events {
template<::il2cpp_utils::il2cpp_reference_type T0>
class UnityAction_1<T0>;
}
namespace UnityEngine::Events {
template<>
class UnityAction_1<bool>;
}
namespace UnityEngine::Events {
template<>
class UnityAction_1<float_t>;
}
namespace UnityEngine::Events {
template<>
class UnityAction_1<int32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Events::UnityAction_1);
// Type: UnityEngine.Events::UnityAction`1
// Type: UnityEngine.Events::UnityAction`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10464)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10464), inst: 3121 })
// CS Name: ::UnityEngine.Events::UnityAction`1<T0>*
class CORDL_TYPE UnityAction_1<::UnityEngine::SceneManagement::Scene> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::UnityEngine::Events::UnityAction_1<::UnityEngine::SceneManagement::Scene>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::UnityEngine::SceneManagement::Scene  arg0) ;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAction_1(UnityAction_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAction_1(UnityAction_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityAction_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityAction`1
namespace UnityEngine::Events {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10464)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10464), inst: 974 })
// CS Name: ::UnityEngine.Events::UnityAction`1<T0>*
class CORDL_TYPE UnityAction_1<T0> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::UnityEngine::Events::UnityAction_1<T0>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T0  arg0) ;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAction_1(UnityAction_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAction_1(UnityAction_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityAction_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityAction`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(10464))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10464), inst: 424 })
// CS Name: ::UnityEngine.Events::UnityAction`1<T0>*
class CORDL_TYPE UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::UnityEngine::InputSystem::__InputAction__CallbackContext  arg0) ;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAction_1(UnityAction_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAction_1(UnityAction_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityAction_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityAction`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(10464))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10464), inst: 411 })
// CS Name: ::UnityEngine.Events::UnityAction`1<T0>*
class CORDL_TYPE UnityAction_1<::UnityEngine::Vector2> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::UnityEngine::Vector2  arg0) ;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAction_1(UnityAction_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAction_1(UnityAction_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityAction_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityAction`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(10464))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10464), inst: 391 })
// CS Name: ::UnityEngine.Events::UnityAction`1<T0>*
class CORDL_TYPE UnityAction_1<float_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::UnityEngine::Events::UnityAction_1<float_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(float_t  arg0) ;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAction_1(UnityAction_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAction_1(UnityAction_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityAction_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityAction`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10464)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10464), inst: 293 })
// CS Name: ::UnityEngine.Events::UnityAction`1<T0>*
class CORDL_TYPE UnityAction_1<::UnityEngine::Color> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::UnityEngine::Color  arg0) ;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAction_1(UnityAction_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAction_1(UnityAction_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityAction_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityAction`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(10464))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10464), inst: 105 })
// CS Name: ::UnityEngine.Events::UnityAction`1<T0>*
class CORDL_TYPE UnityAction_1<bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::UnityEngine::Events::UnityAction_1<bool>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(bool  arg0) ;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAction_1(UnityAction_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAction_1(UnityAction_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityAction_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityAction`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(10464))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10464), inst: 98 })
// CS Name: ::UnityEngine.Events::UnityAction`1<T0>*
class CORDL_TYPE UnityAction_1<int32_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::UnityEngine::Events::UnityAction_1<int32_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(int32_t  arg0) ;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAction_1(UnityAction_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAction_1(UnityAction_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityAction_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityAction`1
namespace UnityEngine::Events {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(10464))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10464), inst: 2 })
// CS Name: ::UnityEngine.Events::UnityAction`1<T0>*
class CORDL_TYPE UnityAction_1<T0> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::UnityEngine::Events::UnityAction_1<T0>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T0  arg0) ;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAction_1(UnityAction_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAction_1(UnityAction_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityAction_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Events::UnityAction_1, "UnityEngine.Events", "UnityAction`1");
