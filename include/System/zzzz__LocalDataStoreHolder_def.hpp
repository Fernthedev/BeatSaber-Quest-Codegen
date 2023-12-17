#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LocalDataStoreHolder)
namespace System {
class LocalDataStore;
}
// Forward declare root types
namespace System {
class LocalDataStoreHolder;
}
// Write type traits
MARK_REF_PTR_T(::System::LocalDataStoreHolder);
// Type: System::LocalDataStoreHolder
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2541))
// CS Name: ::System::LocalDataStoreHolder*
class CORDL_TYPE LocalDataStoreHolder : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field m_Store offset 0x10
 __declspec(property(get=__get_m_Store, put=__set_m_Store)) ::System::LocalDataStore*  m_Store;

 __declspec(property(get=get_Store)) ::System::LocalDataStore*  Store;

constexpr void __set_m_Store(::System::LocalDataStore*  value) ;

constexpr ::System::LocalDataStore* __get_m_Store() ;

constexpr ::cordl_internals::to_const_pointer<::System::LocalDataStore*> __get_m_Store() const;

static inline ::System::LocalDataStoreHolder* New_ctor(::System::LocalDataStore*  store) ;

/// @brief Method .ctor addr 0x25d7b1c size 0x28 virtual false final false
inline void _ctor(::System::LocalDataStore*  store) ;

/// @brief Method Finalize addr 0x25d7b44 size 0x9c virtual true final false
inline void Finalize() ;

/// @brief Method get_Store addr 0x25d7bfc size 0x8 virtual false final false
inline ::System::LocalDataStore* get_Store() ;

// Ctor Parameters [CppParam { name: "", ty: "LocalDataStoreHolder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalDataStoreHolder(LocalDataStoreHolder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalDataStoreHolder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalDataStoreHolder(LocalDataStoreHolder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LocalDataStoreHolder()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::LocalDataStoreHolder, 0x18>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::LocalDataStoreHolder);
DEFINE_IL2CPP_ARG_TYPE(::System::LocalDataStoreHolder*, "System", "LocalDataStoreHolder");
