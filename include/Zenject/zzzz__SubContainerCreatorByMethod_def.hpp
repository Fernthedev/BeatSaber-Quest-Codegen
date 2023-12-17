#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__SubContainerCreatorByMethodBase_def.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorByMethod)
namespace Zenject {
class DiContainer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class SubContainerCreatorBindInfo;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
class InjectContext;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorByMethod;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerCreatorByMethod);
// Type: Zenject::SubContainerCreatorByMethod
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11246))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11247))
// CS Name: ::Zenject::SubContainerCreatorByMethod*
class CORDL_TYPE SubContainerCreatorByMethod : public ::Zenject::SubContainerCreatorByMethodBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::SubContainerCreatorByMethodBase)]{};

/// @brief Field _installMethod offset 0x20
 __declspec(property(get=__get__installMethod, put=__set__installMethod)) ::System::Action_1<::Zenject::DiContainer*>*  _installMethod;

constexpr void __set__installMethod(::System::Action_1<::Zenject::DiContainer*>*  value) ;

constexpr ::System::Action_1<::Zenject::DiContainer*>* __get__installMethod() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> __get__installMethod() const;

static inline ::Zenject::SubContainerCreatorByMethod* New_ctor(::Zenject::DiContainer*  container, ::Zenject::SubContainerCreatorBindInfo*  containerBindInfo, ::System::Action_1<::Zenject::DiContainer*>*  installMethod) ;

/// @brief Method .ctor addr 0x2f0b7cc size 0x3c virtual false final false
inline void _ctor(::Zenject::DiContainer*  container, ::Zenject::SubContainerCreatorBindInfo*  containerBindInfo, ::System::Action_1<::Zenject::DiContainer*>*  installMethod) ;

/// @brief Method CreateSubContainer addr 0x2f0b808 size 0x98 virtual true final false
inline ::Zenject::DiContainer* CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ::Zenject::InjectContext*  context) ;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SubContainerCreatorByMethod(SubContainerCreatorByMethod && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethod", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubContainerCreatorByMethod(SubContainerCreatorByMethod const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SubContainerCreatorByMethod()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerCreatorByMethod, 0x28>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::SubContainerCreatorByMethod);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorByMethod*, "Zenject", "SubContainerCreatorByMethod");
