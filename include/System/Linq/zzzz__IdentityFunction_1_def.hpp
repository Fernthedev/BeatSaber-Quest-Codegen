#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(IdentityFunction_1)
namespace System::Linq {
template<typename TElement>
class __IdentityFunction_1____c;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace System::Linq {
template<typename TElement>
class IdentityFunction_1;
}
namespace System::Linq {
template<typename TElement>
class __IdentityFunction_1____c;
}
namespace System::Linq {
template<::il2cpp_utils::il2cpp_reference_type TElement>
class IdentityFunction_1<TElement>;
}
namespace System::Linq {
template<::il2cpp_utils::il2cpp_reference_type TElement>
class __IdentityFunction_1____c<TElement>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Linq::IdentityFunction_1);
MARK_GEN_REF_PTR_T(::System::Linq::__IdentityFunction_1____c);
// Type: ::<>c
// Type: System.Linq::IdentityFunction`1
// Type: ::<>c
namespace System::Linq {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14279)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14279), inst: 2 })
// CS Name: ::IdentityFunction`1::<>c<TElement>*
class CORDL_TYPE __IdentityFunction_1____c<TElement> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::System::Linq::__IdentityFunction_1____c<TElement>*  value) ;

static inline ::System::Linq::__IdentityFunction_1____c<TElement>* getStaticF___9() ;

static inline void setStaticF___9__1_0(::System::Func_2<TElement,TElement>*  value) ;

static inline ::System::Func_2<TElement,TElement>* getStaticF___9__1_0() ;

static inline ::System::Linq::__IdentityFunction_1____c<TElement>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <get_Instance>b__1_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline TElement _get_Instance_b__1_0(TElement  x) ;

// Ctor Parameters [CppParam { name: "", ty: "__IdentityFunction_1____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IdentityFunction_1____c(__IdentityFunction_1____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IdentityFunction_1____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IdentityFunction_1____c(__IdentityFunction_1____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IdentityFunction_1____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__1_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::IdentityFunction`1
namespace System::Linq {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14280)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14280), inst: 2 })
// CS Name: ::System.Linq::IdentityFunction`1<TElement>*
class CORDL_TYPE IdentityFunction_1<TElement> : public ::System::Object {
public:
// Declarations
using __c = ::System::Linq::__IdentityFunction_1____c<TElement>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method get_Instance addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Func_2<TElement,TElement>* get_Instance() ;

// Ctor Parameters [CppParam { name: "", ty: "IdentityFunction_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IdentityFunction_1(IdentityFunction_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IdentityFunction_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IdentityFunction_1(IdentityFunction_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IdentityFunction_1()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::IdentityFunction_1, "System.Linq", "IdentityFunction`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::__IdentityFunction_1____c, "System.Linq", "IdentityFunction`1/<>c");
