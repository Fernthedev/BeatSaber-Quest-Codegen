#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorByInstance)
namespace Zenject {
class ISubContainerCreator;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class InjectContext;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorByInstance;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerCreatorByInstance);
// Type: Zenject::SubContainerCreatorByInstance
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11244))
// CS Name: ::Zenject::SubContainerCreatorByInstance*
class CORDL_TYPE SubContainerCreatorByInstance : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _subcontainer offset 0x10
 __declspec(property(get=__get__subcontainer, put=__set__subcontainer)) ::Zenject::DiContainer*  _subcontainer;

/// @brief Convert operator to "::Zenject::ISubContainerCreator"
constexpr operator  ::Zenject::ISubContainerCreator*() noexcept;

constexpr void __set__subcontainer(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get__subcontainer() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get__subcontainer() const;

static inline ::Zenject::SubContainerCreatorByInstance* New_ctor(::Zenject::DiContainer*  subcontainer) ;

/// @brief Method .ctor addr 0x2f0b628 size 0x28 virtual false final false
inline void _ctor(::Zenject::DiContainer*  subcontainer) ;

/// @brief Method CreateSubContainer addr 0x2f0b650 size 0x68 virtual true final true
inline ::Zenject::DiContainer* CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ::Zenject::InjectContext*  context) ;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByInstance", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SubContainerCreatorByInstance(SubContainerCreatorByInstance && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByInstance", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubContainerCreatorByInstance(SubContainerCreatorByInstance const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SubContainerCreatorByInstance()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerCreatorByInstance, 0x18>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::SubContainerCreatorByInstance);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorByInstance*, "Zenject", "SubContainerCreatorByInstance");
