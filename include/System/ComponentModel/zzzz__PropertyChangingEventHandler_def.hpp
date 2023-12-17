#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyChangingEventHandler)
namespace System::ComponentModel {
class PropertyChangingEventArgs;
}
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
namespace System::ComponentModel {
class PropertyChangingEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::PropertyChangingEventHandler);
// Type: System.ComponentModel::PropertyChangingEventHandler
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11793))
// CS Name: ::System.ComponentModel::PropertyChangingEventHandler*
class CORDL_TYPE PropertyChangingEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::ComponentModel::PropertyChangingEventHandler* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x263e23c size 0x130 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x263e36c size 0x14 virtual true final false
inline void Invoke(::System::Object*  sender, ::System::ComponentModel::PropertyChangingEventArgs*  e) ;

/// @brief Method BeginInvoke addr 0x263e380 size 0x28 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::System::Object*  sender, ::System::ComponentModel::PropertyChangingEventArgs*  e, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x263e3a8 size 0xc virtual true final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "PropertyChangingEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PropertyChangingEventHandler(PropertyChangingEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropertyChangingEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropertyChangingEventHandler(PropertyChangingEventHandler const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PropertyChangingEventHandler()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::PropertyChangingEventHandler, 0x80>, "Size mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::PropertyChangingEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::PropertyChangingEventHandler*, "System.ComponentModel", "PropertyChangingEventHandler");
