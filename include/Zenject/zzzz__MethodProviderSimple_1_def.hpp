#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(MethodProviderSimple_1)
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class Object;
}
namespace System {
class Action;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Zenject {
template<typename TReturn>
class MethodProviderSimple_1;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TReturn>
class MethodProviderSimple_1<TReturn>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::MethodProviderSimple_1);
// Type: Zenject::MethodProviderSimple`1
// Type: Zenject::MethodProviderSimple`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TReturn>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11209)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11209), inst: 2 })
// CS Name: ::Zenject::MethodProviderSimple`1<TReturn>*
class CORDL_TYPE MethodProviderSimple_1<TReturn> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _method offset 0x10
 __declspec(property(get=__get__method, put=__set__method)) ::System::Func_1<TReturn>*  _method;

 __declspec(property(get=get_IsCached)) bool  IsCached;

 __declspec(property(get=get_TypeVariesBasedOnMemberType)) bool  TypeVariesBasedOnMemberType;

/// @brief Convert operator to "::Zenject::IProvider"
constexpr operator  ::Zenject::IProvider*() noexcept;

constexpr void __set__method(::System::Func_1<TReturn>*  value) ;

constexpr ::System::Func_1<TReturn>* __get__method() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_1<TReturn>*> __get__method() const;

static inline ::Zenject::MethodProviderSimple_1<TReturn>* New_ctor(::System::Func_1<TReturn>*  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_1<TReturn>*  method) ;

/// @brief Method get_IsCached addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Type* GetInstanceType(::Zenject::InjectContext*  context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final true
inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ByRef<::System::Action*>  injectAction, ::System::Collections::Generic::List_1<::System::Object*>*  buffer) ;

// Ctor Parameters [CppParam { name: "", ty: "MethodProviderSimple_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MethodProviderSimple_1(MethodProviderSimple_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MethodProviderSimple_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MethodProviderSimple_1(MethodProviderSimple_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MethodProviderSimple_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MethodProviderSimple_1, "Zenject", "MethodProviderSimple`1");
