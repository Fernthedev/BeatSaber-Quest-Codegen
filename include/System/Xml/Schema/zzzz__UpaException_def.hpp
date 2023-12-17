#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
CORDL_MODULE_EXPORT(UpaException)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class UpaException;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::UpaException);
// Type: System.Xml.Schema::UpaException
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2561))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11595))
// CS Name: ::System.Xml.Schema::UpaException*
class CORDL_TYPE UpaException : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::System::Exception)]{};

/// @brief Field particle1 offset 0x90
 __declspec(property(get=__get_particle1, put=__set_particle1)) ::System::Object*  particle1;

/// @brief Field particle2 offset 0x98
 __declspec(property(get=__get_particle2, put=__set_particle2)) ::System::Object*  particle2;

constexpr void __set_particle1(::System::Object*  value) ;

constexpr ::System::Object* __get_particle1() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_particle1() const;

constexpr void __set_particle2(::System::Object*  value) ;

constexpr ::System::Object* __get_particle2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_particle2() const;

static inline ::System::Xml::Schema::UpaException* New_ctor(::System::Object*  particle1, ::System::Object*  particle2) ;

/// @brief Method .ctor addr 0x28acab0 size 0x70 virtual false final false
inline void _ctor(::System::Object*  particle1, ::System::Object*  particle2) ;

// Ctor Parameters [CppParam { name: "", ty: "UpaException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UpaException(UpaException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpaException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpaException(UpaException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UpaException()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::UpaException, 0xa0>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::UpaException);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::UpaException*, "System.Xml.Schema", "UpaException");
