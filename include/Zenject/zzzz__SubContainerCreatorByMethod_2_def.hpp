#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__SubContainerCreatorByMethodBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SubContainerCreatorByMethod_2)
namespace Zenject {
class SubContainerCreatorBindInfo;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class DiContainer;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2>
class SubContainerCreatorByMethod_2;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::cordl_internals::is_or_is_backed_by<int32_t> TParam2>
class SubContainerCreatorByMethod_2<TParam1,TParam2>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2>
class SubContainerCreatorByMethod_2<TParam1,TParam2>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::SubContainerCreatorByMethod_2);
// Type: Zenject::SubContainerCreatorByMethod`2
// Type: Zenject::SubContainerCreatorByMethod`2
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::cordl_internals::is_or_is_backed_by<int32_t> TParam2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11246)), TypeDefinitionIndex(TypeDefinitionIndex(11249))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11249), inst: 1630 })
// CS Name: ::Zenject::SubContainerCreatorByMethod`2<TParam1,TParam2>*
class CORDL_TYPE SubContainerCreatorByMethod_2<TParam1,TParam2> : public ::Zenject::SubContainerCreatorByMethodBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::SubContainerCreatorByMethodBase)]{};

/// @brief Field _installMethod offset 0x20
 __declspec(property(get=__get__installMethod, put=__set__installMethod)) ::System::Action_3<::Zenject::DiContainer*,TParam1,TParam2>*  _installMethod;

constexpr void __set__installMethod(::System::Action_3<::Zenject::DiContainer*,TParam1,TParam2>*  value) ;

constexpr ::System::Action_3<::Zenject::DiContainer*,TParam1,TParam2>* __get__installMethod() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::Zenject::DiContainer*,TParam1,TParam2>*> __get__installMethod() const;

static inline ::Zenject::SubContainerCreatorByMethod_2<TParam1,TParam2>* New_ctor(::Zenject::DiContainer*  container, ::Zenject::SubContainerCreatorBindInfo*  containerBindInfo, ::System::Action_3<::Zenject::DiContainer*,TParam1,TParam2>*  installMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  container, ::Zenject::SubContainerCreatorBindInfo*  containerBindInfo, ::System::Action_3<::Zenject::DiContainer*,TParam1,TParam2>*  installMethod) ;

/// @brief Method CreateSubContainer addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::Zenject::DiContainer* CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ::Zenject::InjectContext*  context) ;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SubContainerCreatorByMethod_2(SubContainerCreatorByMethod_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubContainerCreatorByMethod_2(SubContainerCreatorByMethod_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SubContainerCreatorByMethod_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::SubContainerCreatorByMethod`2
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11246)), TypeDefinitionIndex(TypeDefinitionIndex(11249))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11249), inst: 81 })
// CS Name: ::Zenject::SubContainerCreatorByMethod`2<TParam1,TParam2>*
class CORDL_TYPE SubContainerCreatorByMethod_2<TParam1,TParam2> : public ::Zenject::SubContainerCreatorByMethodBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::SubContainerCreatorByMethodBase)]{};

/// @brief Field _installMethod offset 0x20
 __declspec(property(get=__get__installMethod, put=__set__installMethod)) ::System::Action_3<::Zenject::DiContainer*,TParam1,TParam2>*  _installMethod;

constexpr void __set__installMethod(::System::Action_3<::Zenject::DiContainer*,TParam1,TParam2>*  value) ;

constexpr ::System::Action_3<::Zenject::DiContainer*,TParam1,TParam2>* __get__installMethod() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::Zenject::DiContainer*,TParam1,TParam2>*> __get__installMethod() const;

static inline ::Zenject::SubContainerCreatorByMethod_2<TParam1,TParam2>* New_ctor(::Zenject::DiContainer*  container, ::Zenject::SubContainerCreatorBindInfo*  containerBindInfo, ::System::Action_3<::Zenject::DiContainer*,TParam1,TParam2>*  installMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  container, ::Zenject::SubContainerCreatorBindInfo*  containerBindInfo, ::System::Action_3<::Zenject::DiContainer*,TParam1,TParam2>*  installMethod) ;

/// @brief Method CreateSubContainer addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::Zenject::DiContainer* CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ::Zenject::InjectContext*  context) ;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SubContainerCreatorByMethod_2(SubContainerCreatorByMethod_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubContainerCreatorByMethod_2(SubContainerCreatorByMethod_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SubContainerCreatorByMethod_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::SubContainerCreatorByMethod_2, "Zenject", "SubContainerCreatorByMethod`2");
