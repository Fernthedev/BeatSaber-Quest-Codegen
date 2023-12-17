#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlNodeChangedEventHandler)
namespace System {
class Object;
}
namespace System::Xml {
class XmlNodeChangedEventArgs;
}
// Forward declare root types
namespace System::Xml {
class XmlNodeChangedEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlNodeChangedEventHandler);
// Type: System.Xml::XmlNodeChangedEventHandler
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11522))
// CS Name: ::System.Xml::XmlNodeChangedEventHandler*
class CORDL_TYPE XmlNodeChangedEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Xml::XmlNodeChangedEventHandler* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x2891824 size 0x130 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x2891954 size 0x14 virtual true final false
inline void Invoke(::System::Object*  sender, ::System::Xml::XmlNodeChangedEventArgs*  e) ;

// Ctor Parameters [CppParam { name: "", ty: "XmlNodeChangedEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlNodeChangedEventHandler(XmlNodeChangedEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlNodeChangedEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlNodeChangedEventHandler(XmlNodeChangedEventHandler const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XmlNodeChangedEventHandler()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlNodeChangedEventHandler, 0x80>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::XmlNodeChangedEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlNodeChangedEventHandler*, "System.Xml", "XmlNodeChangedEventHandler");
