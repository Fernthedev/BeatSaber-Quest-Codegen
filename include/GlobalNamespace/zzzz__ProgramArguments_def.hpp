#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProgramArguments)
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ProgramArguments;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ProgramArguments);
// Type: ::ProgramArguments
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5955))
// CS Name: ::ProgramArguments*
class CORDL_TYPE ProgramArguments : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _arguments offset 0x10
 __declspec(property(get=__get__arguments, put=__set__arguments)) ::System::Collections::Generic::IReadOnlyList_1<::StringW>*  _arguments;

 __declspec(property(get=get_arguments)) ::System::Collections::Generic::IReadOnlyList_1<::StringW>*  arguments;

constexpr void __set__arguments(::System::Collections::Generic::IReadOnlyList_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::StringW>* __get__arguments() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::StringW>*> __get__arguments() const;

/// @brief Method get_arguments addr 0x230516c size 0x8 virtual false final false
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* get_arguments() ;

static inline ::GlobalNamespace::ProgramArguments* New_ctor(::System::Collections::Generic::IReadOnlyList_1<::StringW>*  arguments) ;

/// @brief Method .ctor addr 0x2305174 size 0x28 virtual false final false
inline void _ctor(::System::Collections::Generic::IReadOnlyList_1<::StringW>*  arguments) ;

/// @brief Method Empty addr 0x230519c size 0xb4 virtual false final false
static inline ::GlobalNamespace::ProgramArguments* Empty() ;

// Ctor Parameters [CppParam { name: "", ty: "ProgramArguments", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgramArguments(ProgramArguments && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgramArguments", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgramArguments(ProgramArguments const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ProgramArguments()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ProgramArguments, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ProgramArguments);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ProgramArguments*, "", "ProgramArguments");
