#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__GenericAcl_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RawAcl)
namespace System::Security::AccessControl {
class GenericAce;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace System::Security::AccessControl {
class RawAcl;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::RawAcl);
// Type: System.Security.AccessControl::RawAcl
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3036))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3047))
// CS Name: ::System.Security.AccessControl::RawAcl*
class CORDL_TYPE RawAcl : public ::System::Security::AccessControl::GenericAcl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Security::AccessControl::GenericAcl)]{};

/// @brief Field revision offset 0x10
 __declspec(property(get=__get_revision, put=__set_revision)) uint8_t  revision;

/// @brief Field list offset 0x18
 __declspec(property(get=__get_list, put=__set_list)) ::System::Collections::Generic::List_1<::System::Security::AccessControl::GenericAce*>*  list;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item, put=set_Item)) ::System::Security::AccessControl::GenericAce*  Item[];

constexpr void __set_revision(uint8_t  value) ;

constexpr uint8_t& __get_revision() ;

constexpr uint8_t const& __get_revision() const;

constexpr void __set_list(::System::Collections::Generic::List_1<::System::Security::AccessControl::GenericAce*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::System::Security::AccessControl::GenericAce*>* __get_list() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Security::AccessControl::GenericAce*>*> __get_list() const;

static inline ::System::Security::AccessControl::RawAcl* New_ctor(uint8_t  revision, int32_t  capacity) ;

/// @brief Method .ctor addr 0x2481258 size 0xbc virtual false final false
inline void _ctor(uint8_t  revision, int32_t  capacity) ;

/// @brief Method get_Count addr 0x24849c4 size 0x48 virtual true final false
inline int32_t get_Count() ;

/// @brief Method get_Item addr 0x2484a0c size 0x58 virtual true final false
inline ::System::Security::AccessControl::GenericAce* get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x2484a64 size 0x68 virtual true final false
inline void set_Item(int32_t  index, ::System::Security::AccessControl::GenericAce*  value) ;

/// @brief Method InsertAce addr 0x2482934 size 0xd8 virtual false final false
inline void InsertAce(int32_t  index, ::System::Security::AccessControl::GenericAce*  ace) ;

/// @brief Method RemoveAce addr 0x2482380 size 0x58 virtual false final false
inline void RemoveAce(int32_t  index) ;

// Ctor Parameters [CppParam { name: "", ty: "RawAcl", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RawAcl(RawAcl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RawAcl", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RawAcl(RawAcl const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RawAcl()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::RawAcl, 0x20>, "Size mismatch!");

} // namespace end def System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::RawAcl);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::RawAcl*, "System.Security.AccessControl", "RawAcl");
