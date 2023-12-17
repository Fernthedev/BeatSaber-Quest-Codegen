#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Record)
// Forward declare root types
namespace Assets::OVR::Scripts {
class Record;
}
// Write type traits
MARK_REF_PTR_T(::Assets::OVR::Scripts::Record);
// Type: Assets.OVR.Scripts::Record
namespace Assets::OVR::Scripts {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8734))
// CS Name: ::Assets.OVR.Scripts::Record*
class CORDL_TYPE Record : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field sortOrder offset 0x10
 __declspec(property(get=__get_sortOrder, put=__set_sortOrder)) int32_t  sortOrder;

/// @brief Field category offset 0x18
 __declspec(property(get=__get_category, put=__set_category)) ::StringW  category;

/// @brief Field message offset 0x20
 __declspec(property(get=__get_message, put=__set_message)) ::StringW  message;

constexpr void __set_sortOrder(int32_t  value) ;

constexpr int32_t& __get_sortOrder() ;

constexpr int32_t const& __get_sortOrder() const;

constexpr void __set_category(::StringW  value) ;

constexpr ::StringW& __get_category() ;

constexpr ::StringW const& __get_category() const;

constexpr void __set_message(::StringW  value) ;

constexpr ::StringW& __get_message() ;

constexpr ::StringW const& __get_message() const;

static inline ::Assets::OVR::Scripts::Record* New_ctor(int32_t  order, ::StringW  cat, ::StringW  msg) ;

/// @brief Method .ctor addr 0x27f8498 size 0x3c virtual false final false
inline void _ctor(int32_t  order, ::StringW  cat, ::StringW  msg) ;

// Ctor Parameters [CppParam { name: "", ty: "Record", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Record(Record && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Record", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Record(Record const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Record()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Assets::OVR::Scripts::Record, 0x28>, "Size mismatch!");

} // namespace end def Assets::OVR::Scripts
NEED_NO_BOX(::Assets::OVR::Scripts::Record);
DEFINE_IL2CPP_ARG_TYPE(::Assets::OVR::Scripts::Record*, "Assets.OVR.Scripts", "Record");
