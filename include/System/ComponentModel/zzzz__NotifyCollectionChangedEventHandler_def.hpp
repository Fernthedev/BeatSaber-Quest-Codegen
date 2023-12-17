#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NotifyCollectionChangedEventHandler)
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace System::ComponentModel {
class NotifyCollectionChangedEventArgs;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace System::ComponentModel {
class NotifyCollectionChangedEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::NotifyCollectionChangedEventHandler);
// Type: System.ComponentModel::NotifyCollectionChangedEventHandler
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11791))
// CS Name: ::System.ComponentModel::NotifyCollectionChangedEventHandler*
class CORDL_TYPE NotifyCollectionChangedEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::ComponentModel::NotifyCollectionChangedEventHandler* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x263e03c size 0x130 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x263e16c size 0x14 virtual true final false
inline void Invoke(::System::Object*  sender, ::System::ComponentModel::NotifyCollectionChangedEventArgs*  e) ;

/// @brief Method BeginInvoke addr 0x263e180 size 0x28 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::System::Object*  sender, ::System::ComponentModel::NotifyCollectionChangedEventArgs*  e, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x263e1a8 size 0xc virtual true final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "NotifyCollectionChangedEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NotifyCollectionChangedEventHandler(NotifyCollectionChangedEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NotifyCollectionChangedEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NotifyCollectionChangedEventHandler(NotifyCollectionChangedEventHandler const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NotifyCollectionChangedEventHandler()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::NotifyCollectionChangedEventHandler, 0x80>, "Size mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::NotifyCollectionChangedEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::NotifyCollectionChangedEventHandler*, "System.ComponentModel", "NotifyCollectionChangedEventHandler");
