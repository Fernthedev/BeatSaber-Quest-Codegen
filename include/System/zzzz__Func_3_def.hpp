#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Func_3)
namespace System {
class Object;
}
namespace GlobalNamespace {
struct BitMask128;
}
namespace GlobalNamespace {
struct BitMask256;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::UIElements {
struct Background;
}
namespace UnityEngine::UIElements {
struct FontDefinition;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
struct Rotate;
}
namespace UnityEngine::UIElements {
struct Scale;
}
namespace UnityEngine::UIElements {
struct TextShadow;
}
namespace UnityEngine::UIElements {
struct TransformOrigin;
}
namespace UnityEngine::UIElements {
struct Translate;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Threading::Tasks {
struct VoidTaskResult;
}
// Forward declare root types
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T2>
class Func_3<::GlobalNamespace::BitMask128,T2,::GlobalNamespace::BitMask128>;
}
namespace System {
template<>
class Func_3<::GlobalNamespace::BitMask128,uint32_t,::GlobalNamespace::BitMask128>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T2>
class Func_3<::GlobalNamespace::BitMask256,T2,::GlobalNamespace::BitMask256>;
}
namespace System {
template<>
class Func_3<::UnityEngine::Color,::UnityEngine::Color,bool>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T2>
class Func_3<::UnityEngine::InputSystem::LowLevel::InputEventPtr,T2,bool>;
}
namespace System {
template<>
class Func_3<::UnityEngine::UIElements::Background,::UnityEngine::UIElements::Background,bool>;
}
namespace System {
template<>
class Func_3<::UnityEngine::UIElements::FontDefinition,::UnityEngine::UIElements::FontDefinition,bool>;
}
namespace System {
template<>
class Func_3<::UnityEngine::UIElements::Length,::UnityEngine::UIElements::Length,bool>;
}
namespace System {
template<>
class Func_3<::UnityEngine::UIElements::Rotate,::UnityEngine::UIElements::Rotate,bool>;
}
namespace System {
template<>
class Func_3<::UnityEngine::UIElements::Scale,::UnityEngine::UIElements::Scale,bool>;
}
namespace System {
template<>
class Func_3<::UnityEngine::UIElements::TextShadow,::UnityEngine::UIElements::TextShadow,bool>;
}
namespace System {
template<>
class Func_3<::UnityEngine::UIElements::TransformOrigin,::UnityEngine::UIElements::TransformOrigin,bool>;
}
namespace System {
template<>
class Func_3<::UnityEngine::UIElements::Translate,::UnityEngine::UIElements::Translate,bool>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type TResult>
class Func_3<T1,::System::Threading::CancellationToken,TResult>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Func_3<T1,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Func_3<T1,::UnityEngine::InputSystem::LowLevel::InputEventPtr,float_t>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
class Func_3<T1,T2,::System::Nullable_1<int32_t>>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
class Func_3<T1,T2,::System::Threading::Tasks::VoidTaskResult>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<int32_t> T2,::cordl_internals::is_or_is_backed_by<int32_t> TResult>
class Func_3<T1,T2,TResult>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type TResult>
class Func_3<T1,T2,TResult>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<int32_t> T2,::il2cpp_utils::il2cpp_reference_type TResult>
class Func_3<T1,T2,TResult>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
class Func_3<T1,T2,bool>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
class Func_3<T1,T2,int32_t>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Func_3<T1,bool,bool>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Func_3<T1,float_t,float_t>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Func_3<T1,int32_t,int32_t>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1>
class Func_3<T1,int64_t,int64_t>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type TResult>
class Func_3<T1,uint32_t,TResult>;
}
namespace System {
template<>
class Func_3<float_t,float_t,bool>;
}
namespace System {
template<>
class Func_3<int32_t,::cordl_internals::intptr_t,bool>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type TResult>
class Func_3<int32_t,T2,TResult>;
}
namespace System {
template<>
class Func_3<int32_t,int32_t,bool>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Func_3);
// Type: System::Func`3
// Type: System::Func`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2333))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 7725 })
// CS Name: ::System::Func`3<T1,T2,TResult>*
class CORDL_TYPE Func_3<T1,uint32_t,TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_3<T1,uint32_t,TResult>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline TResult Invoke(T1  arg1, uint32_t  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_3(Func_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_3(Func_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2333))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 7724 })
// CS Name: ::System::Func`3<T1,T2,TResult>*
class CORDL_TYPE Func_3<T1,float_t,float_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_3<T1,float_t,float_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t Invoke(T1  arg1, float_t  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_3(Func_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_3(Func_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2333))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 7723 })
// CS Name: ::System::Func`3<T1,T2,TResult>*
class CORDL_TYPE Func_3<T1,T2,::System::Threading::Tasks::VoidTaskResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_3<T1,T2,::System::Threading::Tasks::VoidTaskResult>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Threading::Tasks::VoidTaskResult Invoke(T1  arg1, T2  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_3(Func_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_3(Func_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 7722 })
// CS Name: ::System::Func`3<T1,T2,TResult>*
class CORDL_TYPE Func_3<T1,int64_t,int64_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_3<T1,int64_t,int64_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline int64_t Invoke(T1  arg1, int64_t  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_3(Func_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_3(Func_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<int32_t> T2,::cordl_internals::is_or_is_backed_by<int32_t> TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 7721 })
// CS Name: ::System::Func`3<T1,T2,TResult>*
class CORDL_TYPE Func_3<T1,T2,TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_3<T1,T2,TResult>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline TResult Invoke(T1  arg1, T2  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_3(Func_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_3(Func_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 7720 })
// CS Name: ::System::Func`3<T1,T2,TResult>*
class CORDL_TYPE Func_3<T1,::UnityEngine::InputSystem::LowLevel::InputEventPtr,float_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_3<T1,::UnityEngine::InputSystem::LowLevel::InputEventPtr,float_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t Invoke(T1  arg1, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_3(Func_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_3(Func_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 7719 })
// CS Name: ::System::Func`3<T1,T2,TResult>*
class CORDL_TYPE Func_3<T1,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_3<T1,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(T1  arg1, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_3(Func_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_3(Func_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2333))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 7718 })
// CS Name: ::System::Func`3<T1,T2,TResult>*
class CORDL_TYPE Func_3<T1,::System::Threading::CancellationToken,TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_3<T1,::System::Threading::CancellationToken,TResult>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline TResult Invoke(T1  arg1, ::System::Threading::CancellationToken  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_3(Func_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_3(Func_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 7717 })
// CS Name: ::System::Func`3<T1,T2,TResult>*
class CORDL_TYPE Func_3<T1,bool,bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_3<T1,bool,bool>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(T1  arg1, bool  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_3(Func_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_3(Func_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 7716 })
// CS Name: ::System::Func`3<T1,T2,TResult>*
class CORDL_TYPE Func_3<::UnityEngine::InputSystem::LowLevel::InputEventPtr,T2,bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_3<::UnityEngine::InputSystem::LowLevel::InputEventPtr,T2,bool>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(::UnityEngine::InputSystem::LowLevel::InputEventPtr  arg1, T2  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_3(Func_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_3(Func_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2333))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 7715 })
// CS Name: ::System::Func`3<T1,T2,TResult>*
class CORDL_TYPE Func_3<::UnityEngine::UIElements::FontDefinition,::UnityEngine::UIElements::FontDefinition,bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_3<::UnityEngine::UIElements::FontDefinition,::UnityEngine::UIElements::FontDefinition,bool>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(::UnityEngine::UIElements::FontDefinition  arg1, ::UnityEngine::UIElements::FontDefinition  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_3(Func_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_3(Func_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 7714 })
// CS Name: ::System::Func`3<T1,T2,TResult>*
class CORDL_TYPE Func_3<::GlobalNamespace::BitMask256,T2,::GlobalNamespace::BitMask256> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_3<::GlobalNamespace::BitMask256,T2,::GlobalNamespace::BitMask256>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::BitMask256 Invoke(::GlobalNamespace::BitMask256  arg1, T2  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_3(Func_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_3(Func_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 7713 })
// CS Name: ::System::Func`3<T1,T2,TResult>*
class CORDL_TYPE Func_3<::GlobalNamespace::BitMask128,uint32_t,::GlobalNamespace::BitMask128> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_3<::GlobalNamespace::BitMask128,uint32_t,::GlobalNamespace::BitMask128>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::BitMask128 Invoke(::GlobalNamespace::BitMask128  arg1, uint32_t  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_3(Func_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_3(Func_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 7712 })
// CS Name: ::System::Func`3<T1,T2,TResult>*
class CORDL_TYPE Func_3<::GlobalNamespace::BitMask128,T2,::GlobalNamespace::BitMask128> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_3<::GlobalNamespace::BitMask128,T2,::GlobalNamespace::BitMask128>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::BitMask128 Invoke(::GlobalNamespace::BitMask128  arg1, T2  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_3(Func_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_3(Func_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2333))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 7711 })
// CS Name: ::System::Func`3<T1,T2,TResult>*
class CORDL_TYPE Func_3<::UnityEngine::UIElements::Background,::UnityEngine::UIElements::Background,bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_3<::UnityEngine::UIElements::Background,::UnityEngine::UIElements::Background,bool>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(::UnityEngine::UIElements::Background  arg1, ::UnityEngine::UIElements::Background  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_3(Func_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_3(Func_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2333))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 6465 })
// CS Name: ::System::Func`3<T1,T2,TResult>*
class CORDL_TYPE Func_3<T1,T2,bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_3<T1,T2,bool>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(T1  arg1, T2  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_3(Func_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_3(Func_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 6287 })
// CS Name: ::System::Func`3<T1,T2,TResult>*
class CORDL_TYPE Func_3<T1,T2,::System::Nullable_1<int32_t>> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_3<T1,T2,::System::Nullable_1<int32_t>>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Nullable_1<int32_t> Invoke(T1  arg1, T2  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_3(Func_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_3(Func_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2333))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 6234 })
// CS Name: ::System::Func`3<T1,T2,TResult>*
class CORDL_TYPE Func_3<int32_t,T2,TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_3<int32_t,T2,TResult>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline TResult Invoke(int32_t  arg1, T2  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_3(Func_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_3(Func_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<int32_t> T2,::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 6142 })
// CS Name: ::System::Func`3<T1,T2,TResult>*
class CORDL_TYPE Func_3<T1,T2,TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_3<T1,T2,TResult>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline TResult Invoke(T1  arg1, T2  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_3(Func_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_3(Func_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 5330 })
// CS Name: ::System::Func`3<T1,T2,TResult>*
class CORDL_TYPE Func_3<T1,T2,TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_3<T1,T2,TResult>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline TResult Invoke(T1  arg1, T2  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_3(Func_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_3(Func_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 5329 })
// CS Name: ::System::Func`3<T1,T2,TResult>*
class CORDL_TYPE Func_3<T1,T2,int32_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_3<T1,T2,int32_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Invoke(T1  arg1, T2  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_3(Func_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_3(Func_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 5328 })
// CS Name: ::System::Func`3<T1,T2,TResult>*
class CORDL_TYPE Func_3<T1,int32_t,int32_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_3<T1,int32_t,int32_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Invoke(T1  arg1, int32_t  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_3(Func_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_3(Func_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2333))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 2510 })
// CS Name: ::System::Func`3<T1,T2,TResult>*
class CORDL_TYPE Func_3<::UnityEngine::UIElements::Translate,::UnityEngine::UIElements::Translate,bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_3<::UnityEngine::UIElements::Translate,::UnityEngine::UIElements::Translate,bool>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(::UnityEngine::UIElements::Translate  arg1, ::UnityEngine::UIElements::Translate  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_3(Func_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_3(Func_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2333))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 2509 })
// CS Name: ::System::Func`3<T1,T2,TResult>*
class CORDL_TYPE Func_3<::UnityEngine::UIElements::TransformOrigin,::UnityEngine::UIElements::TransformOrigin,bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_3<::UnityEngine::UIElements::TransformOrigin,::UnityEngine::UIElements::TransformOrigin,bool>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(::UnityEngine::UIElements::TransformOrigin  arg1, ::UnityEngine::UIElements::TransformOrigin  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_3(Func_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_3(Func_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 2508 })
// CS Name: ::System::Func`3<T1,T2,TResult>*
class CORDL_TYPE Func_3<::UnityEngine::UIElements::TextShadow,::UnityEngine::UIElements::TextShadow,bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_3<::UnityEngine::UIElements::TextShadow,::UnityEngine::UIElements::TextShadow,bool>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(::UnityEngine::UIElements::TextShadow  arg1, ::UnityEngine::UIElements::TextShadow  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_3(Func_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_3(Func_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 2496 })
// CS Name: ::System::Func`3<T1,T2,TResult>*
class CORDL_TYPE Func_3<float_t,float_t,bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_3<float_t,float_t,bool>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(float_t  arg1, float_t  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_3(Func_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_3(Func_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2333))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 2495 })
// CS Name: ::System::Func`3<T1,T2,TResult>*
class CORDL_TYPE Func_3<::UnityEngine::UIElements::Scale,::UnityEngine::UIElements::Scale,bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_3<::UnityEngine::UIElements::Scale,::UnityEngine::UIElements::Scale,bool>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(::UnityEngine::UIElements::Scale  arg1, ::UnityEngine::UIElements::Scale  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_3(Func_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_3(Func_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 2494 })
// CS Name: ::System::Func`3<T1,T2,TResult>*
class CORDL_TYPE Func_3<::UnityEngine::UIElements::Rotate,::UnityEngine::UIElements::Rotate,bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_3<::UnityEngine::UIElements::Rotate,::UnityEngine::UIElements::Rotate,bool>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(::UnityEngine::UIElements::Rotate  arg1, ::UnityEngine::UIElements::Rotate  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_3(Func_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_3(Func_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2333))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 2493 })
// CS Name: ::System::Func`3<T1,T2,TResult>*
class CORDL_TYPE Func_3<::UnityEngine::UIElements::Length,::UnityEngine::UIElements::Length,bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_3<::UnityEngine::UIElements::Length,::UnityEngine::UIElements::Length,bool>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(::UnityEngine::UIElements::Length  arg1, ::UnityEngine::UIElements::Length  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_3(Func_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_3(Func_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2333))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 2490 })
// CS Name: ::System::Func`3<T1,T2,TResult>*
class CORDL_TYPE Func_3<int32_t,::cordl_internals::intptr_t,bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_3<int32_t,::cordl_internals::intptr_t,bool>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  arg1, ::cordl_internals::intptr_t  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_3(Func_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_3(Func_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 2489 })
// CS Name: ::System::Func`3<T1,T2,TResult>*
class CORDL_TYPE Func_3<int32_t,int32_t,bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_3<int32_t,int32_t,bool>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(int32_t  arg1, int32_t  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_3(Func_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_3(Func_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 2481 })
// CS Name: ::System::Func`3<T1,T2,TResult>*
class CORDL_TYPE Func_3<::UnityEngine::Color,::UnityEngine::Color,bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Func_3<::UnityEngine::Color,::UnityEngine::Color,bool>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(::UnityEngine::Color  arg1, ::UnityEngine::Color  arg2) ;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Func_3(Func_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Func_3(Func_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Func_3()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Func_3, "System", "Func`3");
