#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OnRemoveWriter)
namespace System {
class Object;
}
namespace System::Xml {
class XmlRawWriter;
}
// Forward declare root types
namespace System::Xml {
class OnRemoveWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::OnRemoveWriter);
// Type: System.Xml::OnRemoveWriter
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11430))
// CS Name: ::System.Xml::OnRemoveWriter*
class CORDL_TYPE OnRemoveWriter : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Xml::OnRemoveWriter* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x2853974 size 0x12c virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x2853aa0 size 0x14 virtual true final false
inline void Invoke(::System::Xml::XmlRawWriter*  writer) ;

// Ctor Parameters [CppParam { name: "", ty: "OnRemoveWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnRemoveWriter(OnRemoveWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnRemoveWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnRemoveWriter(OnRemoveWriter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OnRemoveWriter()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::OnRemoveWriter, 0x80>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::OnRemoveWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::OnRemoveWriter*, "System.Xml", "OnRemoveWriter");
