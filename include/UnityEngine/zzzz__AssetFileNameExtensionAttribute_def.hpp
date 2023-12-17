#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssetFileNameExtensionAttribute)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace UnityEngine {
class AssetFileNameExtensionAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AssetFileNameExtensionAttribute);
// Type: UnityEngine::AssetFileNameExtensionAttribute
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16004))
// CS Name: ::UnityEngine::AssetFileNameExtensionAttribute*
class CORDL_TYPE AssetFileNameExtensionAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Attribute)]{};

/// @brief Field <preferredExtension>k__BackingField offset 0x10
 __declspec(property(get=__get__preferredExtension_k__BackingField, put=__set__preferredExtension_k__BackingField)) ::StringW  _preferredExtension_k__BackingField;

/// @brief Field <otherExtensions>k__BackingField offset 0x18
 __declspec(property(get=__get__otherExtensions_k__BackingField, put=__set__otherExtensions_k__BackingField)) ::System::Collections::Generic::IEnumerable_1<::StringW>*  _otherExtensions_k__BackingField;

constexpr void __set__preferredExtension_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__preferredExtension_k__BackingField() ;

constexpr ::StringW const& __get__preferredExtension_k__BackingField() const;

constexpr void __set__otherExtensions_k__BackingField(::System::Collections::Generic::IEnumerable_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* __get__otherExtensions_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::StringW>*> __get__otherExtensions_k__BackingField() const;

static inline ::UnityEngine::AssetFileNameExtensionAttribute* New_ctor(::StringW  preferredExtension, ::ArrayW<::StringW,::Array<::StringW>*>  otherExtensions) ;

/// @brief Method .ctor addr 0x2d1801c size 0x2c virtual false final false
inline void _ctor(::StringW  preferredExtension, ::ArrayW<::StringW,::Array<::StringW>*>  otherExtensions) ;

// Ctor Parameters [CppParam { name: "", ty: "AssetFileNameExtensionAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetFileNameExtensionAttribute(AssetFileNameExtensionAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetFileNameExtensionAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetFileNameExtensionAttribute(AssetFileNameExtensionAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AssetFileNameExtensionAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AssetFileNameExtensionAttribute, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::AssetFileNameExtensionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AssetFileNameExtensionAttribute*, "UnityEngine", "AssetFileNameExtensionAttribute");
