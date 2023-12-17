#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Func_4)
namespace UnityEngine::UIElements::Experimental {
struct StyleValues;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Touch;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
// Forward declare root types
namespace System {
template<typename T1,typename T2,typename T3,typename TResult>
class Func_4;
}
namespace System {
template<>
class Func_4<::UnityEngine::UIElements::Experimental::StyleValues,::UnityEngine::UIElements::Experimental::StyleValues,float_t,::UnityEngine::UIElements::Experimental::StyleValues>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type TResult>
class Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::Touch,TResult>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T3,::il2cpp_utils::il2cpp_reference_type TResult>
class Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,T3,TResult>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3,::il2cpp_utils::il2cpp_reference_type TResult>
class Func_4<T1,T2,T3,TResult>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::cordl_internals::is_or_is_backed_by<int32_t> T3,::il2cpp_utils::il2cpp_reference_type TResult>
class Func_4<T1,T2,T3,TResult>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type TResult>
class Func_4<T1,T2,bool,TResult>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type TResult>
class Func_4<T1,T2,float_t,TResult>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Func_4<T1,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T3,::il2cpp_utils::il2cpp_reference_type TResult>
class Func_4<T1,int32_t,T3,TResult>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Func_4);
// Type: System::Func`4
// Type: System::Func`4
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2334))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2334), inst: 7732 })
// CS Name: ::System::Func`4<T1,T2,T3,TResult>*
class CORDL_TYPE Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::Touch,TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::Touch,TResult>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline TResult Invoke(::UnityEngine::Vector3  arg1, ::UnityEngine::Vector3  arg2, ::UnityEngine::Touch  arg3) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_4(Func_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_4(Func_4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_4()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`4
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T3,::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2334)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2334), inst: 7731 })
// CS Name: ::System::Func`4<T1,T2,T3,TResult>*
class CORDL_TYPE Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,T3,TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,T3,TResult>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline TResult Invoke(::UnityEngine::Vector3  arg1, ::UnityEngine::Vector3  arg2, T3  arg3) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_4(Func_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_4(Func_4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_4()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`4
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2334))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2334), inst: 7730 })
// CS Name: ::System::Func`4<T1,T2,T3,TResult>*
class CORDL_TYPE Func_4<T1,T2,float_t,TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_4<T1,T2,float_t,TResult>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline TResult Invoke(T1  arg1, T2  arg2, float_t  arg3) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_4(Func_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_4(Func_4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_4()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`4
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::cordl_internals::is_or_is_backed_by<int32_t> T3,::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2334)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2334), inst: 7729 })
// CS Name: ::System::Func`4<T1,T2,T3,TResult>*
class CORDL_TYPE Func_4<T1,T2,T3,TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_4<T1,T2,T3,TResult>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline TResult Invoke(T1  arg1, T2  arg2, T3  arg3) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_4(Func_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_4(Func_4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_4()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`4
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2334))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2334), inst: 7728 })
// CS Name: ::System::Func`4<T1,T2,T3,TResult>*
class CORDL_TYPE Func_4<T1,T2,bool,TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_4<T1,T2,bool,TResult>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline TResult Invoke(T1  arg1, T2  arg2, bool  arg3) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_4(Func_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_4(Func_4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_4()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`4
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T3,::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2334))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2334), inst: 7727 })
// CS Name: ::System::Func`4<T1,T2,T3,TResult>*
class CORDL_TYPE Func_4<T1,int32_t,T3,TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_4<T1,int32_t,T3,TResult>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline TResult Invoke(T1  arg1, int32_t  arg2, T3  arg3) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_4(Func_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_4(Func_4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_4()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`4
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2334))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2334), inst: 7726 })
// CS Name: ::System::Func`4<T1,T2,T3,TResult>*
class CORDL_TYPE Func_4<T1,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_4<T1,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(T1  arg1, double_t  arg2, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  arg3) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_4(Func_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_4(Func_4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_4()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`4
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3,::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2334))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2334), inst: 6124 })
// CS Name: ::System::Func`4<T1,T2,T3,TResult>*
class CORDL_TYPE Func_4<T1,T2,T3,TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_4<T1,T2,T3,TResult>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline TResult Invoke(T1  arg1, T2  arg2, T3  arg3) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_4(Func_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_4(Func_4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_4()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`4
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2334)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2334), inst: 5891 })
// CS Name: ::System::Func`4<T1,T2,T3,TResult>*
class CORDL_TYPE Func_4<::UnityEngine::UIElements::Experimental::StyleValues,::UnityEngine::UIElements::Experimental::StyleValues,float_t,::UnityEngine::UIElements::Experimental::StyleValues> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_4<::UnityEngine::UIElements::Experimental::StyleValues,::UnityEngine::UIElements::Experimental::StyleValues,float_t,::UnityEngine::UIElements::Experimental::StyleValues>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::UIElements::Experimental::StyleValues Invoke(::UnityEngine::UIElements::Experimental::StyleValues  arg1, ::UnityEngine::UIElements::Experimental::StyleValues  arg2, float_t  arg3) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_4(Func_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_4(Func_4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_4()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Func_4, "System", "Func`4");
