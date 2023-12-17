#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FileBrowserItem)
// Forward declare root types
namespace GlobalNamespace {
class FileBrowserItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FileBrowserItem);
// Type: ::FileBrowserItem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4191))
// CS Name: ::FileBrowserItem*
class CORDL_TYPE FileBrowserItem : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field <displayName>k__BackingField offset 0x10
 __declspec(property(get=__get__displayName_k__BackingField, put=__set__displayName_k__BackingField)) ::StringW  _displayName_k__BackingField;

/// @brief Field <fullPath>k__BackingField offset 0x18
 __declspec(property(get=__get__fullPath_k__BackingField, put=__set__fullPath_k__BackingField)) ::StringW  _fullPath_k__BackingField;

/// @brief Field <isDirectory>k__BackingField offset 0x20
 __declspec(property(get=__get__isDirectory_k__BackingField, put=__set__isDirectory_k__BackingField)) bool  _isDirectory_k__BackingField;

 __declspec(property(get=get_displayName, put=set_displayName)) ::StringW  displayName;

 __declspec(property(get=get_fullPath, put=set_fullPath)) ::StringW  fullPath;

 __declspec(property(get=get_isDirectory, put=set_isDirectory)) bool  isDirectory;

constexpr void __set__displayName_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__displayName_k__BackingField() ;

constexpr ::StringW const& __get__displayName_k__BackingField() const;

constexpr void __set__fullPath_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__fullPath_k__BackingField() ;

constexpr ::StringW const& __get__fullPath_k__BackingField() const;

constexpr void __set__isDirectory_k__BackingField(bool  value) ;

constexpr bool& __get__isDirectory_k__BackingField() ;

constexpr bool const& __get__isDirectory_k__BackingField() const;

/// @brief Method get_displayName addr 0x2323750 size 0x8 virtual false final false
inline ::StringW get_displayName() ;

/// @brief Method set_displayName addr 0x2323758 size 0x8 virtual false final false
inline void set_displayName(::StringW  value) ;

/// @brief Method get_fullPath addr 0x2323760 size 0x8 virtual false final false
inline ::StringW get_fullPath() ;

/// @brief Method set_fullPath addr 0x2323768 size 0x8 virtual false final false
inline void set_fullPath(::StringW  value) ;

/// @brief Method get_isDirectory addr 0x2323770 size 0x8 virtual false final false
inline bool get_isDirectory() ;

/// @brief Method set_isDirectory addr 0x2323778 size 0xc virtual false final false
inline void set_isDirectory(bool  value) ;

static inline ::GlobalNamespace::FileBrowserItem* New_ctor(::StringW  displayName, ::StringW  fullPath, bool  isDirectory) ;

/// @brief Method .ctor addr 0x2323784 size 0x40 virtual false final false
inline void _ctor(::StringW  displayName, ::StringW  fullPath, bool  isDirectory) ;

// Ctor Parameters [CppParam { name: "", ty: "FileBrowserItem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FileBrowserItem(FileBrowserItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileBrowserItem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileBrowserItem(FileBrowserItem const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FileBrowserItem()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FileBrowserItem, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FileBrowserItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FileBrowserItem*, "", "FileBrowserItem");
