#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__SubContainerCreatorByMethodBase_def.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorByMethod_10)
namespace Zenject {
class InjectContext;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class SubContainerCreatorBindInfo;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
class Action_11;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TParam7,typename TParam8,typename TParam9,typename TParam10>
class SubContainerCreatorByMethod_10;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TParam7,::il2cpp_utils::il2cpp_reference_type TParam8,::il2cpp_utils::il2cpp_reference_type TParam9,::il2cpp_utils::il2cpp_reference_type TParam10>
class SubContainerCreatorByMethod_10<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::SubContainerCreatorByMethod_10);
// Type: Zenject::SubContainerCreatorByMethod`10
// Type: Zenject::SubContainerCreatorByMethod`10
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TParam7,::il2cpp_utils::il2cpp_reference_type TParam8,::il2cpp_utils::il2cpp_reference_type TParam9,::il2cpp_utils::il2cpp_reference_type TParam10>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11246)), TypeDefinitionIndex(TypeDefinitionIndex(11254))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11254), inst: 6144 })
// CS Name: ::Zenject::SubContainerCreatorByMethod`10<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10>*
class CORDL_TYPE SubContainerCreatorByMethod_10<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10> : public ::Zenject::SubContainerCreatorByMethodBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::SubContainerCreatorByMethodBase)]{};

/// @brief Field _installMethod offset 0x20
 __declspec(property(get=__get__installMethod, put=__set__installMethod)) ::System::Action_11<::Zenject::DiContainer*,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10>*  _installMethod;

constexpr void __set__installMethod(::System::Action_11<::Zenject::DiContainer*,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10>*  value) ;

constexpr ::System::Action_11<::Zenject::DiContainer*,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10>* __get__installMethod() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_11<::Zenject::DiContainer*,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10>*> __get__installMethod() const;

static inline ::Zenject::SubContainerCreatorByMethod_10<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10>* New_ctor(::Zenject::DiContainer*  container, ::Zenject::SubContainerCreatorBindInfo*  containerBindInfo, ::System::Action_11<::Zenject::DiContainer*,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10>*  installMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  container, ::Zenject::SubContainerCreatorBindInfo*  containerBindInfo, ::System::Action_11<::Zenject::DiContainer*,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10>*  installMethod) ;

/// @brief Method CreateSubContainer addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::Zenject::DiContainer* CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ::Zenject::InjectContext*  context) ;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_10", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SubContainerCreatorByMethod_10(SubContainerCreatorByMethod_10 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_10", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubContainerCreatorByMethod_10(SubContainerCreatorByMethod_10 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SubContainerCreatorByMethod_10()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::SubContainerCreatorByMethod_10, "Zenject", "SubContainerCreatorByMethod`10");
