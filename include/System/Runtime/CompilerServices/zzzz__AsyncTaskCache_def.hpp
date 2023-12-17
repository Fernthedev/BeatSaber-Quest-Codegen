#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncTaskCache)
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class AsyncTaskCache;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::AsyncTaskCache);
// Type: System.Runtime.CompilerServices::AsyncTaskCache
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3403))
// CS Name: ::System.Runtime.CompilerServices::AsyncTaskCache*
class CORDL_TYPE AsyncTaskCache : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_TrueTask(::System::Threading::Tasks::Task_1<bool>*  value) ;

static inline ::System::Threading::Tasks::Task_1<bool>* getStaticF_TrueTask() ;

static inline void setStaticF_FalseTask(::System::Threading::Tasks::Task_1<bool>*  value) ;

static inline ::System::Threading::Tasks::Task_1<bool>* getStaticF_FalseTask() ;

static inline void setStaticF_Int32Tasks(::ArrayW<::System::Threading::Tasks::Task_1<int32_t>*,::Array<::System::Threading::Tasks::Task_1<int32_t>*>*>  value) ;

static inline ::ArrayW<::System::Threading::Tasks::Task_1<int32_t>*,::Array<::System::Threading::Tasks::Task_1<int32_t>*>*> getStaticF_Int32Tasks() ;

/// @brief Method CreateInt32Tasks addr 0x24dcac0 size 0x108 virtual false final false
static inline ::ArrayW<::System::Threading::Tasks::Task_1<int32_t>*,::Array<::System::Threading::Tasks::Task_1<int32_t>*>*> CreateInt32Tasks() ;

/// @brief Method CreateCacheableTask addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TResult>
static inline ::System::Threading::Tasks::Task_1<TResult>* CreateCacheableTask(TResult  result) ;

// Ctor Parameters [CppParam { name: "", ty: "AsyncTaskCache", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncTaskCache(AsyncTaskCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncTaskCache", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncTaskCache(AsyncTaskCache const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AsyncTaskCache()  = default;
public:


// Fields

// Static field TrueTask

// Static field FalseTask

// Static field Int32Tasks


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::AsyncTaskCache, 0x10>, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::AsyncTaskCache);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::AsyncTaskCache*, "System.Runtime.CompilerServices", "AsyncTaskCache");
