#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/zzzz__PermissionSet_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NamedPermissionSet)
namespace System::Security {
class SecurityElement;
}
namespace System::Security::Permissions {
struct PermissionState;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security {
class NamedPermissionSet;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::NamedPermissionSet);
// Type: System.Security::NamedPermissionSet
namespace System::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2884))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2883))
// CS Name: ::System.Security::NamedPermissionSet*
class CORDL_TYPE NamedPermissionSet : public ::System::Security::PermissionSet {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Security::PermissionSet)]{};

/// @brief Field name offset 0x30
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

/// @brief Field description offset 0x38
 __declspec(property(get=__get_description, put=__set_description)) ::StringW  description;

 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

constexpr void __set_description(::StringW  value) ;

constexpr ::StringW& __get_description() ;

constexpr ::StringW const& __get_description() const;

static inline ::System::Security::NamedPermissionSet* New_ctor() ;

/// @brief Method .ctor addr 0x2451638 size 0x54 virtual false final false
inline void _ctor() ;

static inline ::System::Security::NamedPermissionSet* New_ctor(::StringW  name, ::System::Security::Permissions::PermissionState  state) ;

/// @brief Method .ctor addr 0x24516f8 size 0x80 virtual false final false
inline void _ctor(::StringW  name, ::System::Security::Permissions::PermissionState  state) ;

static inline ::System::Security::NamedPermissionSet* New_ctor(::StringW  name) ;

/// @brief Method .ctor addr 0x2451868 size 0x8 virtual false final false
inline void _ctor(::StringW  name) ;

/// @brief Method get_Name addr 0x2451870 size 0x8 virtual false final false
inline ::StringW get_Name() ;

/// @brief Method set_Name addr 0x24517a8 size 0xc0 virtual false final false
inline void set_Name(::StringW  value) ;

/// @brief Method ToXml addr 0x2451878 size 0x98 virtual true final false
inline ::System::Security::SecurityElement* ToXml() ;

/// @brief Method Equals addr 0x2451d6c size 0x90 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2451f98 size 0x38 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "", ty: "NamedPermissionSet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NamedPermissionSet(NamedPermissionSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NamedPermissionSet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NamedPermissionSet(NamedPermissionSet const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NamedPermissionSet()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::NamedPermissionSet, 0x40>, "Size mismatch!");

} // namespace end def System::Security
NEED_NO_BOX(::System::Security::NamedPermissionSet);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::NamedPermissionSet*, "System.Security", "NamedPermissionSet");
