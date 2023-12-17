#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(IActivationFactory)
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class IActivationFactory;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IActivationFactory);
// Type: ::IActivationFactory
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16286))
// CS Name: ::IActivationFactory*
class CORDL_TYPE IActivationFactory : public ::System::Object {
public:
// Declarations
/// @brief Method ActivateInstance addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ActivateInstance() ;

// Ctor Parameters [CppParam { name: "", ty: "IActivationFactory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IActivationFactory(IActivationFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IActivationFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IActivationFactory(IActivationFactory const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IActivationFactory);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IActivationFactory*, "", "IActivationFactory");
