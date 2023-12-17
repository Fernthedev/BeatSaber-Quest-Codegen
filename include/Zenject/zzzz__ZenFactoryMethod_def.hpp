#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZenFactoryMethod)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
class ZenFactoryMethod;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ZenFactoryMethod);
// Type: Zenject::ZenFactoryMethod
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15714))
// CS Name: ::Zenject::ZenFactoryMethod*
class CORDL_TYPE ZenFactoryMethod : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::Zenject::ZenFactoryMethod* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x2eb99ac size 0x12c virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x2eb9ad8 size 0x14 virtual true final false
inline ::System::Object* Invoke(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method BeginInvoke addr 0x2eb9aec size 0x20 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x2eb9b0c size 0xc virtual true final false
inline ::System::Object* EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "ZenFactoryMethod", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ZenFactoryMethod(ZenFactoryMethod && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZenFactoryMethod", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZenFactoryMethod(ZenFactoryMethod const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ZenFactoryMethod()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ZenFactoryMethod, 0x80>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::ZenFactoryMethod);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenFactoryMethod*, "Zenject", "ZenFactoryMethod");
