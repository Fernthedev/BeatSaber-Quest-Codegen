#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(MethodProviderWithContainer_5)
namespace System {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class IProvider;
}
namespace System {
class Action;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System {
class Type;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename TResult>
class Func_6;
}
namespace Zenject {
class InjectContext;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TValue>
class MethodProviderWithContainer_5;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TValue>
class MethodProviderWithContainer_5<TParam1,TParam2,TParam3,TParam4,TValue>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::MethodProviderWithContainer_5);
// Type: Zenject::MethodProviderWithContainer`5
// Type: Zenject::MethodProviderWithContainer`5
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(11215))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11215), inst: 6125 })
// CS Name: ::Zenject::MethodProviderWithContainer`5<TParam1,TParam2,TParam3,TParam4,TValue>*
class CORDL_TYPE MethodProviderWithContainer_5<TParam1,TParam2,TParam3,TParam4,TValue> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _method offset 0x10
 __declspec(property(get=__get__method, put=__set__method)) ::System::Func_6<::Zenject::DiContainer*,TParam1,TParam2,TParam3,TParam4,TValue>*  _method;

 __declspec(property(get=get_IsCached)) bool  IsCached;

 __declspec(property(get=get_TypeVariesBasedOnMemberType)) bool  TypeVariesBasedOnMemberType;

/// @brief Convert operator to "::Zenject::IProvider"
constexpr operator  ::Zenject::IProvider*() noexcept;

constexpr void __set__method(::System::Func_6<::Zenject::DiContainer*,TParam1,TParam2,TParam3,TParam4,TValue>*  value) ;

constexpr ::System::Func_6<::Zenject::DiContainer*,TParam1,TParam2,TParam3,TParam4,TValue>* __get__method() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_6<::Zenject::DiContainer*,TParam1,TParam2,TParam3,TParam4,TValue>*> __get__method() const;

static inline ::Zenject::MethodProviderWithContainer_5<TParam1,TParam2,TParam3,TParam4,TValue>* New_ctor(::System::Func_6<::Zenject::DiContainer*,TParam1,TParam2,TParam3,TParam4,TValue>*  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Func_6<::Zenject::DiContainer*,TParam1,TParam2,TParam3,TParam4,TValue>*  method) ;

/// @brief Method get_IsCached addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Type* GetInstanceType(::Zenject::InjectContext*  context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final true
inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ByRef<::System::Action*>  injectAction, ::System::Collections::Generic::List_1<::System::Object*>*  buffer) ;

// Ctor Parameters [CppParam { name: "", ty: "MethodProviderWithContainer_5", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MethodProviderWithContainer_5(MethodProviderWithContainer_5 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MethodProviderWithContainer_5", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MethodProviderWithContainer_5(MethodProviderWithContainer_5 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MethodProviderWithContainer_5()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MethodProviderWithContainer_5, "Zenject", "MethodProviderWithContainer`5");
