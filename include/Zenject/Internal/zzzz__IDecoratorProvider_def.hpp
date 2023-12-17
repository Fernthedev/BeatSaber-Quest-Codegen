#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDecoratorProvider)
namespace Zenject {
class IProvider;
}
namespace Zenject {
class InjectContext;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Zenject::Internal {
class IDecoratorProvider;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::Internal::IDecoratorProvider);
// Type: Zenject.Internal::IDecoratorProvider
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11369))
// CS Name: ::Zenject.Internal::IDecoratorProvider*
class CORDL_TYPE IDecoratorProvider {
public:
// Declarations
/// @brief Method GetAllInstances addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetAllInstances(::Zenject::IProvider*  provider, ::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::System::Object*>*  buffer) ;

// Ctor Parameters [CppParam { name: "", ty: "IDecoratorProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IDecoratorProvider(IDecoratorProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IDecoratorProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDecoratorProvider(IDecoratorProvider const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject::Internal
NEED_NO_BOX(::Zenject::Internal::IDecoratorProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::IDecoratorProvider*, "Zenject.Internal", "IDecoratorProvider");
