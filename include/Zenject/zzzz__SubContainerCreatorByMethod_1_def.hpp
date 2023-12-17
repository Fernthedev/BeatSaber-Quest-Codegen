#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__SubContainerCreatorByMethodBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SubContainerCreatorByMethod_1)
namespace Zenject {
class SubContainerCreatorBindInfo;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace Zenject {
class InjectContext;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1>
class SubContainerCreatorByMethod_1;
}
namespace Zenject {
template<::cordl_internals::is_or_is_backed_by<int32_t> TParam1>
class SubContainerCreatorByMethod_1<TParam1>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1>
class SubContainerCreatorByMethod_1<TParam1>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::SubContainerCreatorByMethod_1);
// Type: Zenject::SubContainerCreatorByMethod`1
// Type: Zenject::SubContainerCreatorByMethod`1
namespace Zenject {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TParam1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11246)), TypeDefinitionIndex(TypeDefinitionIndex(11248))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11248), inst: 974 })
// CS Name: ::Zenject::SubContainerCreatorByMethod`1<TParam1>*
class CORDL_TYPE SubContainerCreatorByMethod_1<TParam1> : public ::Zenject::SubContainerCreatorByMethodBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::SubContainerCreatorByMethodBase)]{};

/// @brief Field _installMethod offset 0x20
 __declspec(property(get=__get__installMethod, put=__set__installMethod)) ::System::Action_2<::Zenject::DiContainer*,TParam1>*  _installMethod;

constexpr void __set__installMethod(::System::Action_2<::Zenject::DiContainer*,TParam1>*  value) ;

constexpr ::System::Action_2<::Zenject::DiContainer*,TParam1>* __get__installMethod() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::Zenject::DiContainer*,TParam1>*> __get__installMethod() const;

static inline ::Zenject::SubContainerCreatorByMethod_1<TParam1>* New_ctor(::Zenject::DiContainer*  container, ::Zenject::SubContainerCreatorBindInfo*  containerBindInfo, ::System::Action_2<::Zenject::DiContainer*,TParam1>*  installMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  container, ::Zenject::SubContainerCreatorBindInfo*  containerBindInfo, ::System::Action_2<::Zenject::DiContainer*,TParam1>*  installMethod) ;

/// @brief Method CreateSubContainer addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::Zenject::DiContainer* CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ::Zenject::InjectContext*  context) ;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SubContainerCreatorByMethod_1(SubContainerCreatorByMethod_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubContainerCreatorByMethod_1(SubContainerCreatorByMethod_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SubContainerCreatorByMethod_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::SubContainerCreatorByMethod`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11248)), TypeDefinitionIndex(TypeDefinitionIndex(11246))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11248), inst: 2 })
// CS Name: ::Zenject::SubContainerCreatorByMethod`1<TParam1>*
class CORDL_TYPE SubContainerCreatorByMethod_1<TParam1> : public ::Zenject::SubContainerCreatorByMethodBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::SubContainerCreatorByMethodBase)]{};

/// @brief Field _installMethod offset 0x20
 __declspec(property(get=__get__installMethod, put=__set__installMethod)) ::System::Action_2<::Zenject::DiContainer*,TParam1>*  _installMethod;

constexpr void __set__installMethod(::System::Action_2<::Zenject::DiContainer*,TParam1>*  value) ;

constexpr ::System::Action_2<::Zenject::DiContainer*,TParam1>* __get__installMethod() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::Zenject::DiContainer*,TParam1>*> __get__installMethod() const;

static inline ::Zenject::SubContainerCreatorByMethod_1<TParam1>* New_ctor(::Zenject::DiContainer*  container, ::Zenject::SubContainerCreatorBindInfo*  containerBindInfo, ::System::Action_2<::Zenject::DiContainer*,TParam1>*  installMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  container, ::Zenject::SubContainerCreatorBindInfo*  containerBindInfo, ::System::Action_2<::Zenject::DiContainer*,TParam1>*  installMethod) ;

/// @brief Method CreateSubContainer addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::Zenject::DiContainer* CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ::Zenject::InjectContext*  context) ;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SubContainerCreatorByMethod_1(SubContainerCreatorByMethod_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubContainerCreatorByMethod_1(SubContainerCreatorByMethod_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SubContainerCreatorByMethod_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::SubContainerCreatorByMethod_1, "Zenject", "SubContainerCreatorByMethod`1");
