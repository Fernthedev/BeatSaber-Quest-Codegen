#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__SubContainerCreatorByMethodBase_def.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorByMethod_5)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class InjectContext;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
class Action_6;
}
namespace Zenject {
class SubContainerCreatorBindInfo;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5>
class SubContainerCreatorByMethod_5;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5>
class SubContainerCreatorByMethod_5<TParam1,TParam2,TParam3,TParam4,TParam5>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::SubContainerCreatorByMethod_5);
// Type: Zenject::SubContainerCreatorByMethod`5
// Type: Zenject::SubContainerCreatorByMethod`5
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11252)), TypeDefinitionIndex(TypeDefinitionIndex(11246))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11252), inst: 6125 })
// CS Name: ::Zenject::SubContainerCreatorByMethod`5<TParam1,TParam2,TParam3,TParam4,TParam5>*
class CORDL_TYPE SubContainerCreatorByMethod_5<TParam1,TParam2,TParam3,TParam4,TParam5> : public ::Zenject::SubContainerCreatorByMethodBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::SubContainerCreatorByMethodBase)]{};

/// @brief Field _installMethod offset 0x20
 __declspec(property(get=__get__installMethod, put=__set__installMethod)) ::System::Action_6<::Zenject::DiContainer*,TParam1,TParam2,TParam3,TParam4,TParam5>*  _installMethod;

constexpr void __set__installMethod(::System::Action_6<::Zenject::DiContainer*,TParam1,TParam2,TParam3,TParam4,TParam5>*  value) ;

constexpr ::System::Action_6<::Zenject::DiContainer*,TParam1,TParam2,TParam3,TParam4,TParam5>* __get__installMethod() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_6<::Zenject::DiContainer*,TParam1,TParam2,TParam3,TParam4,TParam5>*> __get__installMethod() const;

static inline ::Zenject::SubContainerCreatorByMethod_5<TParam1,TParam2,TParam3,TParam4,TParam5>* New_ctor(::Zenject::DiContainer*  container, ::Zenject::SubContainerCreatorBindInfo*  containerBindInfo, ::System::Action_6<::Zenject::DiContainer*,TParam1,TParam2,TParam3,TParam4,TParam5>*  installMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  container, ::Zenject::SubContainerCreatorBindInfo*  containerBindInfo, ::System::Action_6<::Zenject::DiContainer*,TParam1,TParam2,TParam3,TParam4,TParam5>*  installMethod) ;

/// @brief Method CreateSubContainer addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::Zenject::DiContainer* CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ::Zenject::InjectContext*  context) ;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_5", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SubContainerCreatorByMethod_5(SubContainerCreatorByMethod_5 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_5", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubContainerCreatorByMethod_5(SubContainerCreatorByMethod_5 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SubContainerCreatorByMethod_5()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::SubContainerCreatorByMethod_5, "Zenject", "SubContainerCreatorByMethod`5");
