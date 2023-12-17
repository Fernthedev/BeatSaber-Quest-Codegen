#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SpanAction_2)
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5>
struct ValueTuple_5;
}
namespace System {
template<typename T1>
struct ValueTuple_1;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename TRest>
struct ValueTuple_8;
}
// Forward declare root types
namespace System::Buffers {
template<typename T,typename TArg>
class SpanAction_2;
}
namespace System::Buffers {
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TArg>
class SpanAction_2<T,TArg>;
}
namespace System::Buffers {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
class SpanAction_2<char16_t,::System::ValueTuple_3<T1_cordlgen_0,int32_t,int32_t>>;
}
namespace System::Buffers {
template<>
class SpanAction_2<char16_t,::System::ValueTuple_5<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool>>;
}
namespace System::Buffers {
template<>
class SpanAction_2<char16_t,::System::ValueTuple_8<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool,::System::ValueTuple_1<bool>>>;
}
namespace System::Buffers {
template<::il2cpp_utils::il2cpp_reference_type TArg>
class SpanAction_2<char16_t,TArg>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Buffers::SpanAction_2);
// Type: System.Buffers::SpanAction`2
// Type: System.Buffers::SpanAction`2
namespace System::Buffers {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3879)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3879), inst: 7792 })
// CS Name: ::System.Buffers::SpanAction`2<T,TArg>*
class CORDL_TYPE SpanAction_2<char16_t,::System::ValueTuple_3<T1_cordlgen_0,int32_t,int32_t>> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_3<T1_cordlgen_0,int32_t,int32_t>>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::System::Span_1<char16_t>  span, ::System::ValueTuple_3<T1_cordlgen_0,int32_t,int32_t>  arg) ;

// Ctor Parameters [CppParam { name: "", ty: "SpanAction_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpanAction_2(SpanAction_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpanAction_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpanAction_2(SpanAction_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SpanAction_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: System.Buffers::SpanAction`2
namespace System::Buffers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3879)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3879), inst: 4989 })
// CS Name: ::System.Buffers::SpanAction`2<T,TArg>*
class CORDL_TYPE SpanAction_2<char16_t,::System::ValueTuple_8<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool,::System::ValueTuple_1<bool>>> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_8<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool,::System::ValueTuple_1<bool>>>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::System::Span_1<char16_t>  span, ::System::ValueTuple_8<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool,::System::ValueTuple_1<bool>>  arg) ;

// Ctor Parameters [CppParam { name: "", ty: "SpanAction_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpanAction_2(SpanAction_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpanAction_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpanAction_2(SpanAction_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SpanAction_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: System.Buffers::SpanAction`2
namespace System::Buffers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(3879))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3879), inst: 4988 })
// CS Name: ::System.Buffers::SpanAction`2<T,TArg>*
class CORDL_TYPE SpanAction_2<char16_t,::System::ValueTuple_5<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool>> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_5<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool>>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::System::Span_1<char16_t>  span, ::System::ValueTuple_5<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool>  arg) ;

// Ctor Parameters [CppParam { name: "", ty: "SpanAction_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpanAction_2(SpanAction_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpanAction_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpanAction_2(SpanAction_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SpanAction_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: System.Buffers::SpanAction`2
namespace System::Buffers {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TArg>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3879)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3879), inst: 1592 })
// CS Name: ::System.Buffers::SpanAction`2<T,TArg>*
class CORDL_TYPE SpanAction_2<char16_t,TArg> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Buffers::SpanAction_2<char16_t,TArg>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::System::Span_1<char16_t>  span, TArg  arg) ;

// Ctor Parameters [CppParam { name: "", ty: "SpanAction_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpanAction_2(SpanAction_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpanAction_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpanAction_2(SpanAction_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SpanAction_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: System.Buffers::SpanAction`2
namespace System::Buffers {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TArg>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3879)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3879), inst: 81 })
// CS Name: ::System.Buffers::SpanAction`2<T,TArg>*
class CORDL_TYPE SpanAction_2<T,TArg> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Buffers::SpanAction_2<T,TArg>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::System::Span_1<T>  span, TArg  arg) ;

// Ctor Parameters [CppParam { name: "", ty: "SpanAction_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpanAction_2(SpanAction_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpanAction_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpanAction_2(SpanAction_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SpanAction_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Buffers::SpanAction_2, "System.Buffers", "SpanAction`2");
