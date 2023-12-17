#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorByInstanceGetter)
namespace Zenject {
class InjectContext;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class ISubContainerCreator;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorByInstanceGetter;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerCreatorByInstanceGetter);
// Type: Zenject::SubContainerCreatorByInstanceGetter
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11245))
// CS Name: ::Zenject::SubContainerCreatorByInstanceGetter*
class CORDL_TYPE SubContainerCreatorByInstanceGetter : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _subcontainerGetter offset 0x10
 __declspec(property(get=__get__subcontainerGetter, put=__set__subcontainerGetter)) ::System::Func_2<::Zenject::InjectContext*,::Zenject::DiContainer*>*  _subcontainerGetter;

/// @brief Convert operator to "::Zenject::ISubContainerCreator"
constexpr operator  ::Zenject::ISubContainerCreator*() noexcept;

constexpr void __set__subcontainerGetter(::System::Func_2<::Zenject::InjectContext*,::Zenject::DiContainer*>*  value) ;

constexpr ::System::Func_2<::Zenject::InjectContext*,::Zenject::DiContainer*>* __get__subcontainerGetter() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::InjectContext*,::Zenject::DiContainer*>*> __get__subcontainerGetter() const;

static inline ::Zenject::SubContainerCreatorByInstanceGetter* New_ctor(::System::Func_2<::Zenject::InjectContext*,::Zenject::DiContainer*>*  subcontainerGetter) ;

/// @brief Method .ctor addr 0x2f0b6b8 size 0x28 virtual false final false
inline void _ctor(::System::Func_2<::Zenject::InjectContext*,::Zenject::DiContainer*>*  subcontainerGetter) ;

/// @brief Method CreateSubContainer addr 0x2f0b6e0 size 0x84 virtual true final true
inline ::Zenject::DiContainer* CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ::Zenject::InjectContext*  context) ;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByInstanceGetter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SubContainerCreatorByInstanceGetter(SubContainerCreatorByInstanceGetter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByInstanceGetter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubContainerCreatorByInstanceGetter(SubContainerCreatorByInstanceGetter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SubContainerCreatorByInstanceGetter()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerCreatorByInstanceGetter, 0x18>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::SubContainerCreatorByInstanceGetter);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorByInstanceGetter*, "Zenject", "SubContainerCreatorByInstanceGetter");
