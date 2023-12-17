#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BindingCondition)
namespace Zenject {
class InjectContext;
}
namespace System {
class Object;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace Zenject {
class BindingCondition;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::BindingCondition);
// Type: Zenject::BindingCondition
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11159))
// CS Name: ::Zenject::BindingCondition*
class CORDL_TYPE BindingCondition : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::Zenject::BindingCondition* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x2ef6528 size 0x12c virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x2ef6654 size 0x14 virtual true final false
inline bool Invoke(::Zenject::InjectContext*  c) ;

/// @brief Method BeginInvoke addr 0x2ef6668 size 0x20 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::Zenject::InjectContext*  c, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x2ef6688 size 0x28 virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "BindingCondition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BindingCondition(BindingCondition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BindingCondition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BindingCondition(BindingCondition const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BindingCondition()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::BindingCondition, 0x80>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::BindingCondition);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::BindingCondition*, "Zenject", "BindingCondition");
